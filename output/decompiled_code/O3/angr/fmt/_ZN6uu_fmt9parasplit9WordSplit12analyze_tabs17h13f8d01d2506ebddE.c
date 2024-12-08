long long uu_fmt::parasplit::WordSplit::analyze_tabs::h13f8d01d2506ebdd(unsigned long long a0[5], struct_0 *a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [sp-0x58]
    unsigned long v1;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x40]
    void* v3;  // [sp-0x38]
    unsigned long long v5;  // rbp
    void* v8;  // r12
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rcx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned int v16;  // eax

    v1 = a2;
    v2 = a3 + a2;
    v3 = 0;
    v5 = 0;
    while (true)
    {
        v8 = 0;
        while (true)
        {
            v10 = ::0x4b98d0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v1, a1, v9);
            if ((unsigned int)v11 == 32)
            {
LABEL_4bab45:
                v8 += 1;
            }
            else
            {
                if ((unsigned int)v11 == 0x110000)
                {
                    a0[0] = v5;
                    a0[1] = v0;
                    a0[2] = v8;
                    a0[3] = 0;
                    a0[4] = v10;
                    return v10;
                }
                if ((unsigned int)(v11 - 9) < 5)
                {
                    if (!((unsigned int)v11 == 9))
                        goto LABEL_4bab45;
                    if (v5)
                    {
                        v12 = a1->field_40;
                        if (!v12)
                            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
                        if (!(v8 | v12) >> 32)
                        {
                            v16 = (unsigned int)v8;
                            v15 = (0 CONCAT v16) /m (unsigned int)v12 >> 32 & 4294967295;
                            v14 = (0 CONCAT v16) /m (unsigned int)v12 & 4294967295 & 4294967295;
                        }
                        else
                        {
                            v13 = v8;
                            v14 = (0 CONCAT v13) /m v12;
                            v15 = (0 CONCAT v13) /m v12 >> 64;
                        }
                        v8 = v12 * (v14 + 1);
                        v5 = 1;
                    }
                    else
                    {
                        v5 = 1;
                        v0 = v8;
                        break;
                    }
                }
                else
                {
                    if (!((unsigned int)v11 >= 128) || !((char)::0x4b95c0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v11 & 4294967295)))
                    {
                        a0[0] = v5;
                        a0[1] = v0;
                        a0[2] = v8;
                        a0[3] = 1;
                        a0[4] = v10;
                        return v10;
                    }
                    goto LABEL_4bab45;
                }
            }
        }
    }
}
