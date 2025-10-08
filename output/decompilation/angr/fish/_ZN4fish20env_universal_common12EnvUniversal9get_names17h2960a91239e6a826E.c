long long fish::env_universal_common::EnvUniversal::get_names(struct_2 *a0, unsigned long a1, char a2, char a3)
{
    int v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    void* v4;  // [bp-0x78]
    int v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x60]
    char v7;  // [bp-0x58]
    unsigned long long v9[3];  // rax
    struct_1 *v10;  // rdx
    struct_0 *v11;  // rdx

    v2 = 0;
    v3 = 8;
    v4 = 0;
    v7.iter(a1 + 40);
    if (v7.next())
    {
        if (a2)
        {
            if (a3)
            {
                do
                {
                    fish::builtins::fish_indent::fish_indent::{{closure}}(&v5, v9[1], v9[2]);
                    v1 = v6;
                    v0 = v5;
                    v2.push(&v0, &g_14d72a8);
                    v9 = v7.next();
                } while (v9);
            }
            else
            {
                do
                {
                    if ((v10->field_10 & 1))
                    {
                        fish::builtins::fish_indent::fish_indent::{{closure}}(&v5, v9[1], v9[2]);
                        v1 = v6;
                        v0 = v5;
                        v2.push(&v0, &g_14d72a8);
                    }
                    v9 = v7.next();
                } while (v9);
            }
        }
        else
        {
            if (a3)
            {
                do
                {
                    if (!(v11->field_10 & 1))
                    {
                        fish::builtins::fish_indent::fish_indent::{{closure}}(&v5, v9[1], v9[2]);
                        v1 = v6;
                        v0 = v5;
                        v2.push(&v0, &g_14d72a8);
                    }
                    v9 = v7.next();
                } while (v9);
            }
            else
            {
                do
                { } while (v7.next());
            }
        }
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v2);
    return a0;
}
