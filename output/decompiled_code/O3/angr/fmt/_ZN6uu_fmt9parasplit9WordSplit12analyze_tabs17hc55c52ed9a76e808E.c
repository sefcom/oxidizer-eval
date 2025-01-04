long long uu_fmt::parasplit::WordSplit::analyze_tabs::hc55c52ed9a76e808(unsigned long long a0[5], struct_0 *a1, unsigned long a2, unsigned long a3)
{
    unsigned long long v0;  // [sp-0x58]
    unsigned long v1;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x40]
    void* v3;  // [sp-0x38]
    unsigned long long v5;  // rbp
    void* v9;  // r12
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long v12;  // rdx
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned int v17;  // eax

    v1 = a2;
    v2 = a3 + a2;
    v3 = 0;
    v5 = 0;
    while (true)
    {
        v9 = 0;
        while (true)
        {
            v11 = ::0x4b93f0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v1, a1, v10);
            if ((unsigned int)v12 == 32)
            {
LABEL_4ba665:
                v9 += 1;
            }
            else
            {
                if ((unsigned int)v12 == 0x110000)
                {
                    a0[0] = v5;
                    a0[1] = v0;
                    a0[2] = v9;
                    a0[3] = 0;
                    a0[4] = v11;
                    return v11;
                }
                if ((unsigned int)(v12 - 9) < 5)
                {
                    if (!((unsigned int)v12 == 9))
                        goto LABEL_4ba665;
                    if (v5)
                    {
                        v13 = a1->field_40;
                        if (!v13)
                            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
                        if ((v9 | v13) >> 32)
                        {
                            v14 = v9;
                            v15 = (unsigned long long)((0 CONCAT v14) % v13) CONCAT (unsigned long long)((0 CONCAT v14) / v13);
                            v16 = ((unsigned long long)((0 CONCAT v14) % v13) CONCAT (unsigned long long)((0 CONCAT v14) / v13)) >> 64;
                        }
                        else
                        {
                            v17 = (unsigned int)v9;
                            v16 = ((unsigned int)((0 CONCAT v17) % (v13 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v17) / (v13 & 4294967295))) >> 32 & 4294967295;
                            v15 = ((unsigned int)((0 CONCAT v17) % (v13 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v17) / (v13 & 4294967295))) & 4294967295 & 4294967295;
                        }
                        v9 = v13 * (v15 + 1);
                        v5 = 1;
                    }
                    else
                    {
                        v5 = 1;
                        v0 = v9;
                        break;
                    }
                }
                else
                {
                    if (!((unsigned int)v12 >= 128) || !((char)::0x4b90e0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v12 & 4294967295)))
                    {
                        a0[0] = v5;
                        a0[1] = v0;
                        a0[2] = v9;
                        a0[3] = 1;
                        a0[4] = v11;
                        return v11;
                    }
                    goto LABEL_4ba665;
                }
            }
        }
    }
}
