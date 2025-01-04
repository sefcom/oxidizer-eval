long long uu_pwd::logical_path::looks_reasonable::h198aec699ed31598(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x2e0], Other Possible Types: char
    unsigned long long v1;  // [sp-0x2d8]
    char v2;  // [bp-0x2d0]
    char v3;  // [bp-0x2c0]
    char v4;  // [bp-0x2b8]
    unsigned short v5;  // [sp-0x2a8]
    char v6;  // [bp-0x2a6]
    char v7;  // [bp-0x230]
    char v8;  // [bp-0x210]
    char v9;  // [bp-0x208]
    char v10;  // [bp-0x180]
    char v11;  // [bp-0x178]
    char v12;  // [bp-0x170]
    char v13;  // [bp-0xd0]
    unsigned long long v16;  // rsi
    unsigned long long v17;  // rdx
    unsigned int v19;  // ebx

    std::path::Path::components::h4f3217acf0fc8653(&v0, a0, a1);
    if (!(v6 || v2 - 5 >= 2))
        return 0;
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v10, a0, a1);
    _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h5315a6138ce3f3a6(&v2, *((long long *)&v11), v1);
    v0 = 0;
    v1 = *((long long *)&v12);
    v5 = 1;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h85c5af602e16d02e(&v10);
    if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h70e2399de7263019((unsigned int)core::iter::traits::iterator::Iterator::try_fold::h97fbd32b5f6f333f(&v0, v16, v17)))
    {
        std::fs::metadata::ha33fb8332834a0bc(&v13, a0, a1);
        std::fs::metadata::he569619eb99e21fb(&v10, ".", 1);
        memcpy(&v0, &v13, 176);
        memcpy(&v7, &v10, 176);
        v19 = 0;
        if ((int)v0 != 2 && *((long long *)&v7) != 2)
            v19 = -0x100 | (!(*((long long *)&v4) ^ *((long long *)&v9)) && !(*((long long *)&v3) ^ *((long long *)&v8)));
        core::ptr::drop_in_place$LT$$LP$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$C$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$RP$$GT$::h6986155f6bfd8c39(&v0);
        return v19;
    }
}
