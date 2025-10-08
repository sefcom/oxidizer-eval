long long uu_unexpand::next_char_info(struct_0 *a0, unsigned int a1, char *a2, unsigned long long a3, char *a4)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    char v4;  // [bp-0x28]
    unsigned long v6;  // r15
    unsigned long long v7;  // r14
    char v8;  // bl
    unsigned long long v9;  // rax
    unsigned long long v10;  // rcx
    unsigned int v11;  // edx

    if (a1)
    {
        if (a4 >= a3)
            core::panicking::panic_bounds_check(a4, a3, &g_4e8328); /* do not return */
        v6 = *((char *)(a2 + a4)) < 0;
        v7 = 1;
        v8 = 3;
        if (&a4[v6 + 1] > a3)
            goto LABEL_45cdf1;
        v9 = core::str::converts::from_utf8(&v2, a4.index(&a4[v6 + 1], a2, a3, &g_4e8340), a2);
        if (*((int *)&v2) == 1)
        {
            v10 = 1;
        }
        else
        {
            v0 = v3;
            v1 = *((long long *)&v4) + v3;
            v9 = core::str::validations::next_code_point(&v0);
            v10 = 1;
            v8 = 3;
            if (((char)v9 & 1))
            {
                switch (v11)
                {
                case 8:
                    v7 = 0;
                    break;
                case 9:
                    v8 = 2;
                    v7 = 0;
                    break;
                case 32:
                    v8 = 1;
                    v7 = 0;
                    break;
                default:
                    v10 = v6 + 1;
                    if (v11 < 127)
                    {
                        v7 = 32 <= v11;
                        break;
                    }
                    else if (v11 > 159)
                    {
                        v9 = ::0x458170::unicode_width::tables::lookup_width(v11);
                        v7 = v9 & 4294967295;
                        break;
                    }
                    else
                    {
                        v7 = 0;
                        break;
                    }
                }
            }
            else
            {
                v7 = 1;
            }
        }
    }
    else
    {
        if (a4 >= a3)
            core::panicking::panic_bounds_check(a4, a3, &g_4e8310); /* do not return */
        v9 = *((char *)(a2 + a4));
        v7 = 1;
        if ((unsigned int)v9 != 8)
        {
            if ((unsigned int)v9 != 9)
            {
                v8 = 3;
                if ((unsigned int)v9 == 32)
                    v8 = 1;
            }
            else
            {
                v8 = 2;
            }
        }
LABEL_45cdf1:
        v10 = 1;
    }
    a0->field_8 = v8;
    a0->field_0 = v7;
    a0->field_10 = v10;
    return v9;
}
