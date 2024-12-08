long long uu_ptx::get_reference::ha0cdd691a8ea01d3(unsigned long long a0[3], char a1, char a2, struct_0 *a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0xa0], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x98]
    unsigned long long v2;  // [sp-0x90], Other Possible Types: unsigned long
    unsigned long v3;  // [sp-0x88], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x80]
    unsigned long v5;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x60]
    unsigned long long v8;  // [sp-0x58]
    unsigned long long v9;  // [sp-0x50]
    void* v10;  // [sp-0x48]
    int v11;  // [sp-0x40]
    char v12;  // [sp-0x30]
    unsigned long long v13;  // [bp+0x8]
    char v14;  // [bp+0x10]
    unsigned long long v15;  // rax
    unsigned long long v16;  // r15
    unsigned long long v17;  // r15
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx

    if (a1)
    {
        v10 = 0;
        *((uint128_t *)&v11) = a3->field_20;
        v12 = 0;
        v5 = a3->field_38 + 1;
        v6 = &v10;
        v7 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v8 = &v5;
        v9 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v0 = &g_6ee6b0;
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 2;
        v15 = ::0x5b3b90::core::option::Option$LT$T$GT$::map_or_else::h2b6b835b61421c58(a0, &v0);
        return v15;
    }
    else if (a2)
    {
        regex::regex::string::Regex::find_at::h97a6ac34dba92c9c(&v0, v13, *((long long *)&v14), a4, a5);
        v16 = v0;
        if (v16)
        {
            v17 = v2;
            v16 = v3;
        }
        v18 = ::0x5b3250::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v17, v16, a4, a5);
        if (v18)
        {
            ::0x5b3f20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd078b50c69433b57(&v0, v18, v19);
            v15 = v2;
            a0[2] = v15;
            *((int128_t *)&a0[0]) = *((int128_t *)&v0);
            return v15;
        }
        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
    }
    else
    {
        a0[0] = 0;
        a0[1] = 1;
        a0[2] = 0;
        return v15;
    }
}
