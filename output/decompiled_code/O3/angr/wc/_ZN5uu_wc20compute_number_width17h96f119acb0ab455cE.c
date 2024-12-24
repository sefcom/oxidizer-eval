long long uu_wc::compute_number_width::h96f119acb0ab455c(unsigned long long a0[4], void* a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xe8]
    char v2;  // [bp-0xe0]
    char v3;  // [bp-0xd8]
    char v4;  // [bp-0xa8]
    char v5;  // [bp-0x90]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rdx
    unsigned long long *v10;  // rax
    void* v11;  // r15
    unsigned long long v12;  // rdx
    unsigned int v14;  // eax
    unsigned long long v15;  // rax

    v7 = a0[0];
    if (!v7)
    {
        v8 = ((int)uu_wc::Settings::number_enabled::hf98a96d16a31481a(a1, a1, a2) == 1 ? 1 : 7);
        return v8;
    }
    else if ((unsigned int)v7 != 1)
    {
        return 1;
    }
    else
    {
        v9 = a0[3];
        if ((int)uu_wc::Settings::number_enabled::hf98a96d16a31481a(a1, a1, a2) == 1 && v9 == 1)
            return 1;
        v0 = a0[2];
        v1 = v0 + v9 * 24;
        v10 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h007f849ddc866ba0(&v0);
        if (!v10)
            return 1;
        v8 = 1;
        v11 = 0;
        do
        {
            if (*(v10) == 9223372036854775809)
            {
                v8 = 7;
            }
            else
            {
                std::fs::metadata::h66f19a35a8e92cfe(&v2, v10, v12);
                if (*((long long *)&v2) != 2)
                {
                    v14 = *((int *)&v4) & 0xf000;
                    v15 = *((long long *)&v5);
                    if (v14 != 0x8000)
                        v15 = 0;
                    if (v14 != 0x8000)
                        v8 = 7;
                    v11 += v15;
                }
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1bc38cf7395292be(*((long long *)&v2), *((long long *)&v3));
            }
        } while ((v10 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h007f849ddc866ba0(&v0), v10));
        if (v11)
            return ::0x4b6640::core::cmp::max_by::h6ff5bbaf74f92c0c(core::num::int_log10::u64::hf5cf0ae12f20d199(v11) + 1 & 4294967295, v8);
        return v8;
    }
}
