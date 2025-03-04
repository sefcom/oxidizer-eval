long long uu_unexpand::next_char_info::hda448420cf4eb947(struct_0 *a0, unsigned int a1, char *a2, unsigned long long a3, char *a4)
{
    unsigned long long v0;  // [sp-0x40]
    unsigned long long v1;  // [sp-0x38]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    unsigned long v6;  // r14
    unsigned int v8;  // ecx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rcx
    unsigned int v11;  // edx
    unsigned long long v12;  // r14

    if (!a1)
    {
        if (a4 >= a3)
            core::panicking::panic_bounds_check::h25a5330941572dd1(a4, a3, &g_51d140); /* do not return */
        v9 = 1;
        switch (v8)
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
            core::panicking::panic_bounds_check::h25a5330941572dd1(a4, a3, &g_51d158); /* do not return */
        v6 = *((char *)(a2 + a4)) < 0;
        if (&a4[v6 + 1] > a3)
        {
            v9 = 1;
            goto LABEL_4b2aa1;
        }
        else
        {
            core::str::converts::from_utf8::ha1effb4cca6d9901(&v2, ::0x4afaa0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h794715884ecee730(a4, &a4[v6 + 1], a2, a3, &g_51d170), a2);
            if (*((long long *)&v2))
            {
                v9 = 1;
                v10 = 1;
            }
            else
            {
                v0 = *((long long *)&v3);
                v1 = *((long long *)&v4) + v0;
                v10 = 1;
                if (!(int)::0x4b0cf0::core::str::validations::next_code_point::h56f7f2fe969e6a13(&v0))
                {
                    v9 = 1;
                }
                else
                {
                    switch (v11)
                    {
                    case 8:
                        v9 = 0;
                        break;
                    case 9:
                        v9 = 0;
                        break;
                    case 32:
                        v9 = 0;
                        break;
                    default:
                        v12 = v6 + 1;
                        if (v11 < 127)
                        {
                            v9 = 32 <= v11;
                            v10 = v12;
                            break;
                        }
                        else if (v11 <= 159)
                        {
                            v9 = 0;
                            v10 = v12;
                            break;
                        }
                        else
                        {
                            v9 = ::0x4afd00::unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(v11);
                            v10 = v12;
                            break;
                        }
                    }
                }
            }
        }
    }
    a0->field_8 = 3;
    a0->field_0 = v9;
    a0->field_10 = v10;
    return v9;
}
