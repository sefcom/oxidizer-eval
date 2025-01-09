long long uu_fmt::parasplit::WordSplit::analyze_tabs::hc55c52ed9a76e808(unsigned long long a0[5], struct_0 *a1, unsigned long a2, unsigned long a3)
{
    unsigned long long v0;  // [sp-0x58]
    unsigned long v1;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x40]
    void* v3;  // [sp-0x38]
    unsigned long long v5;  // rbp
    void* v7;  // r12
    unsigned long long v8;  // rax
    unsigned long v9;  // rdx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // r12

    v1 = a2;
    v2 = a3 + a2;
    v3 = 0;
    v5 = 0;
    while (true)
    {
        v7 = 0;
        while (true)
        {
            v8 = ::0x4b93f0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v1);
            if ((unsigned int)v9 == 32)
            {
LABEL_4ba665:
                v7 += 1;
            }
            else
            {
                if ((unsigned int)v9 == 0x110000)
                {
                    a0[0] = v5;
                    a0[1] = v0;
                    a0[2] = v7;
                    a0[3] = 0;
                    a0[4] = v8;
                    return v8;
                }
                if ((unsigned int)(v9 - 9) < 5)
                {
                    if (!((unsigned int)v9 == 9))
                        goto LABEL_4ba665;
                    if (v5)
                    {
                        v10 = a1->field_40;
                        if (!v10)
                            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(&g_526758); /* do not return */
                        v11 = (!(v7 | v10) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v7) % (v10 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v7) / (v10 & 4294967295))) & 4294967295 & 4294967295 : (unsigned long long)((0 CONCAT v7) % v10) CONCAT (unsigned long long)((0 CONCAT v7) / v10));
                        v7 = v10 * (v11 + 1);
                        v5 = 1;
                    }
                    else
                    {
                        v5 = 1;
                        v0 = v7;
                        break;
                    }
                }
                else
                {
                    if (!((unsigned int)v9 >= 128) || !((char)::0x4b90e0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v9 & 4294967295)))
                    {
                        a0[0] = v5;
                        a0[1] = v0;
                        a0[2] = v7;
                        a0[3] = 1;
                        a0[4] = v8;
                        return v8;
                    }
                    goto LABEL_4ba665;
                }
            }
        }
    }
}
