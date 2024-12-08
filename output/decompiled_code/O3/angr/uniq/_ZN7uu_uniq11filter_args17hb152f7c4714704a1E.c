long long uu_uniq::filter_args::hb152f7c4714704a1(struct_0 *a0, unsigned long long a1[3], unsigned long long *a2, unsigned long long *a3, char *a4, char *a5)
{
    unsigned long long v0;  // [sp-0x88]
    char v1;  // [bp-0x80]
    char v2;  // [bp-0x78]
    char v3;  // [bp-0x70]
    int v4;  // [sp-0x68]
    unsigned long long v5;  // [sp-0x58]
    unsigned long long v7;  // rbp
    unsigned int v8;  // r12d
    unsigned int v9;  // r15d

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v1, a1[1], a1[2]);
    if (*((long long *)&v1))
    {
        a0->field_10 = a1[2];
        a0->field_0 = *((int128_t *)&a1[0]);
        return a0;
    }
    v7 = *((long long *)&v3);
    v8 = *(a4);
    v9 = *(a5);
    v0 = *((long long *)&v2);
    if ((char)uu_uniq::should_extract_obs_skip_fields::hd4f1e36c6eecc0b3(*((long long *)&v2), v7, v8, v9))
    {
        uu_uniq::handle_extract_obs_skip_fields::h9122fa276bf53480(&v1, v0, v7, a2);
        goto LABEL_4bd449;
    }
    else if (!(char)uu_uniq::should_extract_obs_skip_chars::hbb1a9847c94b4df4(v0, v7, v8, v9))
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v1, v0, v7);
        v5 = *((long long *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hb372adb45d08adee(v0, v7, "-f", 2))
        {
            ::0x4bbb90::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hb6a7a163fc99e7b1(a2);
            *(a2) = 0x8000000000000000;
        }
        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hb372adb45d08adee(v0, v7, "-s", 2))
        {
            ::0x4bbb90::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hb6a7a163fc99e7b1(a3);
            *(a3) = 0x8000000000000000;
        }
    }
    else
    {
        uu_uniq::handle_extract_obs_skip_chars::hda1029d5b95c7425(&v1, v0, v7, a3);
LABEL_4bd449:
        v5 = *((long long *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
    }
    uu_uniq::handle_preceding_options::hb59e39cbb2699d9a(v0, v7, a4, a5);
    a0->field_10 = v5;
    *((void*)&a0->field_0) = v4;
    ::0x4bb460::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h481603fe818513be(a1);
    return a0;
}
