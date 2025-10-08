void fish::highlight::highlight::autosuggest_parse_command(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x118]
    unsigned long long v1;  // [bp-0x110]
    void* v2;  // [bp-0x108]
    int v3;  // [bp-0xf8], Other Possible Types: char
    void* v4;  // [bp-0xe8], Other Possible Types: unsigned long long
    void* v5;  // [bp-0xe0]
    unsigned long long v6;  // [bp-0xd8]
    void* v7;  // [bp-0xd0]
    int v8;  // [bp-0xc0], Other Possible Types: char
    char v9;  // [bp-0xb0]
    char v10;  // [bp-0xa8]
    void* v11;  // [bp-0x98]
    char v12;  // [bp-0x88]
    struct_0 *v13;  // [bp-0x40]
    char v14;  // [bp-0x38]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rsi

    fish::ast::parse(&v12, a1, a2, 5, 0);
    if (*((long long *)&v14) && v13->field_30 <= 1)
    {
        fish::highlight::highlight::statement_get_expanded_command(&v8, a1, a2, &v13->field_30, a3);
        if ((char)(((0 ^ *((long long *)&v8)) & (0 ^ -(*((long long *)&v8)))) >> 63))
        {
            core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v8);
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v0 = 0;
            v1 = 4;
            v2 = 0;
            if (v13->field_58 && !v13->field_50->field_0)
            {
                v16 = v13->field_50.argument().try_source(a1, a2);
                if (v16)
                {
                    v17 = v16;
                    if (v16)
                        goto LABEL_13baaec;
LABEL_13baaeb:
                }
                else
                {
                    v17 = 4;
                    if (!v16)
                        goto LABEL_13baaeb;
LABEL_13baaec:
                }
                v3.to_vec(v17, v16);
                v11 = v4;
                memcpy(&v10, &v3, 16);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                v2 = v11;
                memcpy(&v0, &v10, 16);
            }
            v4 = *((long long *)&v9);
            v3 = v8;
            v7 = v2;
            v5 = v0;
            v6 = 4;
            *(a0) = v8;
            *((unsigned long long *)&a0[32]) = 4;
            *((void* *)&a0[40]) = v7;
            *((unsigned long long *)&a0[16]) = v4;
            *((void* *)&a0[24]) = v5;
        }
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<fish::ast::Ast>(&v12);
    return;
}
