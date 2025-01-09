long long uu_fmt::parasplit::FileLines::match_prefix_generic::h76346122f467dd36(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned long v0;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x40]
    void* v2;  // [sp-0x38]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned int v6;  // edx, Other Possible Types: unsigned long long
    unsigned int v7;  // ebp
    unsigned int v8;  // ebp
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax

    v4 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfb67edc00a317262(a2, a3, a0, a1);
    if ((char)v4)
    {
        return v4;
    }
    else if (a4)
    {
        return v4;
    }
    else
    {
        v0 = a2;
        v1 = a2 + a3;
        v2 = 0;
        v5 = ::0x4b93f0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0);
        if (v6 == 0x110000)
            return 0;
        do
        {
            v7 = v8;
            v9 = ::0x4b8e70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v5, a2, a3);
            if (!v9)
                core::str::slice_error_fail::h5dbb61534404fe7e(a2, a3, v5, a3, &g_526620); /* do not return */
            v10 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfb67edc00a317262(v9, v6, a0, a1);
            if ((char)v10)
            {
                v4 = v10 & 0xffffffffffffff00 | 1;
                return v4;
            }
            if (v7 - 9 >= 5 && v7 != 32 && (!(v7 >= 128) || !((char)::0x4b90e0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v7)) || !((v5 = ::0x4b93f0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0), v8 = (unsigned int)v6, (unsigned int)v6 != 0x110000))))
                break;
        } while ((v5 = ::0x4b93f0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0), v8 = (unsigned int)v6, (unsigned int)v6 != 0x110000));
    }
}
