long long uu_pwd::logical_path::looks_reasonable::h76d69bc7db349f79(unsigned long long a0, unsigned long long a1)
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
    _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h92138d21e2dd2a75(&v2, *((long long *)&v11), v1);
    v0 = 0;
    v1 = *((long long *)&v12);
    v5 = 1;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8ddb9e18fd44e3a8(&v10);
    if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd10a7e7648d69366((unsigned int)core::iter::traits::iterator::Iterator::try_fold::hac49038aac6d49be(&v0, v16, v17)))
    {
        std::fs::metadata::h4f0d7761c6e25561(&v13, a0, a1);
        std::fs::metadata::h49fd2807dc6a79dd(&v10, ".", 1);
        memcpy(&v0, &v13, 176);
        memcpy(&v7, &v10, 176);
        v19 = 0;
        if ((int)v0 != 2 && *((long long *)&v7) != 2)
            v19 = -0x100 | (!(*((long long *)&v4) ^ *((long long *)&v9)) && !(*((long long *)&v3) ^ *((long long *)&v8)));
        core::ptr::drop_in_place$LT$$LP$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$C$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$RP$$GT$::hcecdff1b00306a4e(&v0);
        return v19;
    }
}
