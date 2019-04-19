//
//  main.cpp
//  1075
//
//  Created by 陆昱珉 on 2018/12/18.
//  Copyright © 2018 Lu. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(void)
{
    set<int> s;
    int n, t;
    scanf("%d", &n);
    for( int i = 0; i < n; i ++)
    {
        scanf("%d", &t);
        s.insert(t);
    }
    set<int> :: iterator it;
    printf("%lu\n", s.size());
    for(it = s.begin(); it != s.end(); it ++)
        printf("%d ", *it);
    return 0;
}
