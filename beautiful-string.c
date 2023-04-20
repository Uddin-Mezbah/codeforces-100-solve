#include <stdio.h>
#include <string.h>

#define MAX 100

void beutyfulString()
{
    char str[MAX];
    int f[26] = {0};

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        f[str[i] - 'a']++;
    }

    int ans = 0;
    while(ans< strlen(str))
    {
        int max_freq = 0;
        int max_char = 'a';
        for (int j = 0; j < 26; j++)
        {
            if (f[j] > max_freq || (f[j] == max_freq && j + 'a' < max_char))
            {
                max_freq = f[j];
                max_char = j + 'a';
            }
        }

        for (int j = 0; j < max_freq; j++)
        {
            str[ans++] = max_char;
        }

        f[max_char - 'a'] = 0;
    }


    printf("%s\n", str);

}

int main()
{
    //    freopen("input.txt","r",stdin);
   //    freopen("output.txt","w",stdout);
//    int n;
//    cin>>n;
    beutyfulString();
    return 0;
}
