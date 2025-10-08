long long fish::builtins::string::match::RegexMatcher::populate_captures_from_match(unsigned long long a0, char a1, unsigned int *a2)
{
    void* v0;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    char v7;  // [bp-0x88]
    void* v8;  // [bp-0x78], Other Possible Types: unsigned long long
    char v9;  // [bp-0x70]
    char v10;  // [bp-0x48]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rdx
    unsigned long long v14;  // r14
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // r14
    char *v18;  // rsi
    unsigned long long v19;  // rdx
    unsigned long long v21;  // rdx
    unsigned long long v22;  // r14
    unsigned long long v24;  // rdx

    v9.iter(a0);
    v12 = v9.next();
    if (!v12)
    {
        return v12;
    }
    else if (*(a2) == 2)
    {
        if ((a1 & 1))
        {
            do
            {
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v14.push(&v0, &g_14d34b8);
                v15 = v9.next();
                v14 = v13;
            } while (v15);
            return v15;
        }
        else
        {
            do
            {
                v16 = v9.next();
            } while (v16);
            return v16;
        }
    }
    else
    {
        if ((a1 & 1))
        {
            do
            {
                v17 = v14;
                fish::builtins::string::match::RegexMatcher::populate_captures_from_match::{{closure}}(&v3, v12, a2);
                if (!v3)
                {
                    v0 = 0;
                    v1 = 4;
                    v2 = 0;
                    v18 = &v0;
                    v19 = &g_14d34b8;
                }
                else
                {
                    v0.to_vec(v5.index(v6, v3, v4, &g_14d3488), a2);
                    memcpy(&v10, &v0, 16);
                    memcpy(&v7, &v0, 16);
                    v8 = v2;
                    v18 = &v7;
                    v19 = &g_14d34a0;
                }
                v17.push(v18, v19);
                v12 = v9.next();
                v14 = v21;
            } while (v12);
            return v12;
        }
        else
        {
            do
            {
                v22 = v14;
                fish::builtins::string::match::RegexMatcher::populate_captures_from_match::{{closure}}(&v3, v12, a2);
                if (v3)
                {
                    v0.to_vec(v5.index(v6, v3, v4, &g_14d3488), a2);
                    memcpy(&v10, &v0, 16);
                    memcpy(&v7, &v0, 16);
                    v8 = v2;
                    v22.push(&v7, &g_14d34a0);
                }
                v12 = v9.next();
                v14 = v24;
            } while (v12);
            return v12;
        }
    }
}
