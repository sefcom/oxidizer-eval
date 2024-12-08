long long uu_fmt::parasplit::FileLines::compute_indent::h0928c05d517658c0(unsigned long long a0[3], struct_0 *a1, unsigned long long a2, unsigned long a3, unsigned long a4)
{
    unsigned long v0;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x40]
    void* v2;  // [sp-0x38]
    void* v4;  // rax
    unsigned int v5;  // edx
    void* v6;  // r12
    void* v7;  // rbx
    unsigned long v8;  // rbp
    struct_0 *v9;  // 4096
    struct_0 *v10;  // r15
    unsigned long long v11;  // cc_ndep
    unsigned long long v12;  // r12
    unsigned long long v14;  // rcx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned int v18;  // eax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rsi

    v0 = a2;
    v1 = a3 + a2;
    v2 = 0;
    v4 = ::0x4b98d0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0, a1, a2);
    if (v5 == 0x110000)
    {
        v6 = 0;
        v4 = 0;
        v7 = 0;
    }
    else
    {
        v8 = v5;
        v7 = 0;
        v6 = 0;
        do
        {
            v10 = v9;
            v7 = v12;
            if ((char)amd64g_calculate_condition(2, 8, v4, a4, v11))
            {
LABEL_4b9df5:
                if ((v4 = ::0x4b98d0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0, v20, v19), v8 = (unsigned long long)v5, v5 != 0x110000))
                    goto LABEL_4b9dd0;
                v14 = v10->field_40;
                if (!v14)
                    core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
                if ((v6 | v14) >> 32)
                {
                    v15 = v6;
                    v16 = (0 CONCAT v15) /m v14;
                    v17 = (0 CONCAT v15) /m v14 >> 64;
                }
                else
                {
                    v18 = (unsigned int)v6;
                    v17 = (0 CONCAT v18) /m (unsigned int)v14 >> 32 & 4294967295;
                    v16 = (0 CONCAT v18) /m (unsigned int)v14 & 4294967295 & 4294967295;
                }
                v11 = amd64g_calculate_rflags_c(19, 0, 0, v11);
                v6 = v14 * (v16 + 1);
            }
            else
            {
                if ((unsigned int)v8 == 32)
                    goto LABEL_4b9dd0;
                if ((unsigned int)(v8 - 9) < 5)
                    goto LABEL_4b9df5;
                if (!((unsigned int)v8 >= 128) || !((char)::0x4b95c0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v8 & 4294967295)))
                    goto LABEL_4b9e67;
LABEL_4b9dd0:
                v6 += uu_fmt::parasplit::char_width::h9a0ba42128866645(v8 & 4294967295);
            }
        } while ((v4 = ::0x4b98d0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0, v20, v19), v8 = (unsigned long long)v5, v5 != 0x110000));
        v4 = 0;
LABEL_4b9e67:
    }
    a0[0] = v4;
    a0[1] = v7;
    a0[2] = v6;
    return v4;
}
