long long uu_fmt::parasplit::FileLines::compute_indent::hf6cb82fa5c657dd2(unsigned long long a0[3], struct_0 *a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    unsigned long long v0[3];  // [sp-0x58]
    unsigned long v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x40]
    void* v3;  // [sp-0x38]
    unsigned long long v5[3];  // r15
    void* v6;  // rax
    unsigned int v7;  // edx
    void* v8;  // r12
    void* v9;  // rbx
    unsigned long long v10;  // rbp
    struct_0 *v11;  // r15
    unsigned long long v12;  // cc_ndep
    unsigned long long v13;  // rcx
    unsigned long long v14;  // r12

    v5 = a0;
    v1 = a2;
    v2 = a3 + a2;
    v3 = 0;
    v6 = ::0x4b93f0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v1);
    if (v7 == 0x110000)
    {
        v8 = 0;
        v6 = 0;
        v9 = 0;
    }
    else
    {
        v10 = v7;
        v0[0] = a0;
        v9 = 0;
        v8 = 0;
        v11 = a1;
        do
        {
            if (v6 == a4)
                v9 = v8;
            if ((char)amd64g_calculate_condition(2, 8, v6, a4, v12))
            {
LABEL_4b9915:
                if (!((unsigned int)v10 == 9))
                    goto LABEL_4b98f0;
                v13 = v11->field_40;
                if (!v13)
                    core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(&g_526638); /* do not return */
                v14 = (!(v8 | v13) >> 32 ? (unsigned long long)((0 CONCAT v8) % v13) CONCAT (unsigned long long)((0 CONCAT v8) / v13) : ((unsigned int)((0 CONCAT (unsigned int)v8) % (v13 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v8) / (v13 & 4294967295))) & 4294967295 & 4294967295);
                v12 = amd64g_calculate_rflags_c(19, 0, 0, v12);
                v8 = v13 * (v14 + 1);
            }
            else
            {
                if ((unsigned int)v10 == 32)
                    goto LABEL_4b98f0;
                if ((unsigned int)(v10 - 9) < 5)
                    goto LABEL_4b9915;
                if (!((unsigned int)v10 >= 128) || !((v11 = a1, (char)(int)::0x4b90e0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v10 & 4294967295))))
                    goto LABEL_4b9987;
LABEL_4b98f0:
                v8 += uu_fmt::parasplit::char_width::h6ecf292e25e6b16b(v10 & 4294967295);
            }
        } while ((v6 = ::0x4b93f0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v1), v10 = (unsigned long long)v7, v7 != 0x110000));
        v6 = 0;
LABEL_4b9987:
        v5 = v0;
    }
    v5[0] = v6;
    v5[1] = v9;
    v5[2] = v8;
    return v6;
}
