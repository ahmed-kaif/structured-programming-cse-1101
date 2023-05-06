#include<stdio.h>
char convertCase(char ch)
{
    if(ch >= 'a' && ch <= 'z'){
        ch -= 32;
    } else if(ch >= 'A' && ch <= 'Z'){
        ch += 32;
    }
    return ch;
}

int freq[26];

void countFreq(char ch)
{
    if(ch >= 'a' && ch <= 'z'){
        freq[ch - 'a']++;
    } else if(ch >= 'A' && ch <= 'Z'){
        freq[ch - 'A']++;
    }
}


int main()
{
    char c;
    FILE *fin, *fo;
    fin = fopen("Data.txt", "r"); // read from data.txt
    fo = fopen("out.txt", "w");
    while(fscanf(fin, "%c", &c) != EOF)
    {
        printf("%c", convertCase(c));
        countFreq(c);
    }
    printf("\n");
    for(int i = 0; i < 26; i++) {
        fprintf(fo, "%c: %d\n", ('a'+i), freq[i]);
    }
}
