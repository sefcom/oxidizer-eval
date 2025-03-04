long long uu_ls::should_display::h04a8ace30b4ea77e(unsigned long long a0, struct_0 *a1)
{
    unsigned short v0;  // [sp-0x83]
    char v1;  // [sp-0x81]
    char v2;  // [sp-0x80], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0x78]
    char v4;  // [bp-0x70]
    int v5;  // [sp-0x68]
    unsigned long long v6;  // [sp-0x58]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x40]
    char v9;  // [bp-0x38]
    char v10;  // [bp-0x30]
    char v11;  // [bp-0x28]
    char v12;  // [bp-0x20]
    unsigned int v14;  // ebx
    unsigned long long v15;  // r14
    unsigned long long v16;  // r15

    if (a1->field_f0 == 2 && (char)uu_ls::is_hidden::he2cc02ae0ae5ae31(a0))
        return 0;
    v0 = 1;
    v1 = 1;
    std::fs::DirEntry::file_name::habdd235db90dd152(&v10, a0);
    v15 = *((long long *)&v11);
    v16 = *((long long *)&v12);
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v2, v15, v16);
    if (!v2)
    {
        ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v2, v3, *((long long *)&v4));
        goto LABEL_527e14;
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v7, v15, v16);
        if (*((long long *)&v7) != 0x8000000000000000)
        {
            v6 = *((long long *)&v9);
        }
        else
        {
            ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v2, *((long long *)&v8), *((long long *)&v9));
LABEL_527e14:
            v6 = *((long long *)&v4);
        }
    }
    *((int128_t *)&v5) = *((int128_t *)&v7);
    v2 = a1->field_8;
    v3 = a1->field_10 * 56 + v2;
    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v5);
    v14 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::haa0a26cb84a32dff(&v2, &v5, &v0) & 0xffffffffffffff00 | _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::haa0a26cb84a32dff(&v2, &v5, &v0) ^ 1;
    ::0x51a7c0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&v10);
    return v14;
}
