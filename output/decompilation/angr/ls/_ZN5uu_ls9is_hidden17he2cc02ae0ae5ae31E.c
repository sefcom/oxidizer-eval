long long uu_ls::is_hidden::he2cc02ae0ae5ae31(unsigned long long a0)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned int
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    char v5;  // [bp-0x18]
    unsigned int v7;  // ebx
    unsigned long long v10;  // rdx

    std::fs::DirEntry::file_name::habdd235db90dd152(&v3, a0);
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, *((long long *)&v4), *((long long *)&v5));
    if (*((long long *)&v0))
    {
        v7 = 0;
    }
    else
    {
        v0 = 0;
        v7 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h032fb0d9cebdd48e(*((long long *)&v1), *((long long *)&v2), ::0x51c230::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(46, &v0), v10);
    }
    ::0x51a7c0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6();
    return v7;
}
