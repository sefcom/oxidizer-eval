long long fish::parser::Parser::expand_argument_list(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, void* a4)
{
    void* v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xe0]
    void* v2;  // [bp-0xd8]
    void* v3;  // [bp-0xd0]
    int v4;  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xb8]
    int v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0x98]
    char v8;  // [bp-0x90]
    unsigned long long v9;  // [bp-0x48]
    unsigned long v10;  // [bp-0x40]
    char v11;  // [bp-0x38]
    void* v13;  // rbx
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rax
    unsigned long v16;  // rdx
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rsi

    v13 = a0;
    fish::ast::parse_argument_list(&v8, a1, a2, 0, 0);
    if (v11)
    {
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 8;
        *((unsigned long long *)&a0[16]) = 0;
    }
    else
    {
        v3 = a0;
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v14 = v10 * 12;
        while (v14)
        {
            v15 = v9.try_source(a1, a2);
            if (!v15)
            {
                v18 = 4;
                v17 = v16;
                if (v15)
                    goto LABEL_13ead84;
                goto LABEL_13ead83;
            }
            else
            {
                v18 = v15;
                v17 = v16;
                if (!v15)
                {
LABEL_13ead83:
                    goto LABEL_13ead86;
                }
                else
                {
LABEL_13ead84:
                    v15 = v17;
LABEL_13ead86:
                    v6.to_vec(v18, v15);
                    v5 = v7;
                    v4 = v6;
                    fish::expand::expand_string(&v4, &v0, a3, a4, 0);
                    v9 += 12;
                    v14 -= 12;
                    if ((char)v16 <= 1)
                        break;
                }
            }
        }
        v13 = v3;
        *((unsigned long long *)&v3[16]) = 0;
        *((int128_t *)v3) = *((int128_t *)&v0);
    }
    core::ptr::drop_in_place<fish::ast::Ast<fish::ast::FreestandingArgumentList>>(&v8);
    return v13;
}
