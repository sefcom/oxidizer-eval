long long uu_unexpand::next_char_info::hda448420cf4eb947(struct_0 *a0, unsigned int a1, char *a2, unsigned long long a3, char *a4)
{
    unsigned long long v0;  // [sp-0x40]
    unsigned long long v1;  // [sp-0x38]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    unsigned long long v6;  // r14
    unsigned int v7;  // ecx
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rcx

    if (!a1)
    {
        if (a4 >= a3)
        {
LABEL_4b2b59:
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        }
        v8 = 1;
        switch (v7)
        {
        case 8:
            break;
        case 9:
            break;
        case 32:
            break;
        default:
            goto LABEL_4b2aa1;
        }
LABEL_4b2aa1:
        v10 = 1;
    }
    else
    {
        if (a4 >= a3)
            goto LABEL_4b2b59;
        v6 = -0x100 | *((char *)(a2 + a4)) < 0;
        if (&a4[v6 + 1] > a3)
        {
            v8 = 1;
            goto LABEL_4b2aa1;
        }
        else
        {
            core::str::converts::from_utf8::ha1effb4cca6d9901(&v2, ::0x4afaa0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h794715884ecee730(a4, &a4[v6 + 1], a2, a3, &g_51d170), v9);
            if (*((long long *)&v2))
            {
                v8 = 1;
                v10 = 1;
            }
            else
            {
                v0 = *((long long *)&v3);
                v1 = *((long long *)&v4) + v0;
                v10 = 1;
                if (!(int)::0x4b0cf0::core::str::validations::next_code_point::h56f7f2fe969e6a13(&v0))
                {
                    v8 = 1;
                }
                else
                {
                    switch ((unsigned int)v9)
                    {
                    case 8:
                        v8 = 0;
                        break;
                    case 9:
                        v8 = 0;
                        break;
                    case 32:
                        v8 = 0;
                        break;
                    default:
                        v10 = v6 + 1;
                        v8 = ((unsigned int)v9 < 127 ? -0x100 | 32 <= (unsigned int)v9 : ((unsigned int)v9 <= 159 ? 0 : ::0x4afd00::unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec((unsigned int)v9)));
                        break;
                    }
                }
            }
        }
    }
    a0->field_8 = 3;
    a0->field_0 = v8;
    a0->field_10 = v10;
    return v8;
}
