long long uu_ptx::get_reference::hde200eae24bcb508(unsigned long long a0[3], char a1, char a2, struct_1 *a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long v0;  // [bp-0xa0]
    unsigned long long v1;  // [sp-0x98]
    struct struct_0 **v2;  // [sp-0x90], Other Possible Types: unsigned long
    unsigned long v3;  // [sp-0x88], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x80]
    unsigned long v5;  // [sp-0x70]
    char *v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x60]
    char *v8;  // [sp-0x58]
    unsigned long long v9;  // [sp-0x50]
    void* v10;  // [sp-0x48]
    int v11;  // [sp-0x40]
    char v12;  // [sp-0x30]
    unsigned long long v13;  // rax
    unsigned long long v14;  // r15
    unsigned long long v15;  // r12
    unsigned long long v16;  // rax

    if (a1)
    {
        v10 = 0;
        *((uint128_t *)&v11) = a3->field_20;
        v12 = 0;
        v5 = a3->field_38 + 1;
        v6 = &v10;
        v7 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v8 = &v5;
        v9 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v0 = &g_6eddd0;
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 2;
        v13 = ::0x5b4110::core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(a0, &v0);
        return v13;
    }
    else if (a2)
    {
        regex::regex::string::Regex::find_at::hf05a7654ffba1dbb(&v0, a6, a7, a4, a5);
        v14 = v0;
        v15 = v14;
        if (v15)
        {
            v14 = v2;
            v15 = v3;
        }
        v16 = ::0x5b37d0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v14, v15, a4, a5);
        if (v16)
        {
            ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&v0, v16, a2);
            v13 = v2;
            a0[2] = v13;
            *((int128_t *)&a0[0]) = *((int128_t *)&v0);
            return v13;
        }
        core::str::slice_error_fail::h5dbb61534404fe7e(a4, a5, v14, v15, &g_6eddf0); /* do not return */
    }
    else
    {
        a0[0] = 0;
        a0[1] = 1;
        a0[2] = 0;
        return v13;
    }
}
