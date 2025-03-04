long long uu_split::filter_args::hc9c131d0e8e2f9ae(struct_0 *a0, unsigned long long a1[3], unsigned long long a2, char *a3, char *a4)
{
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    int v3;  // [sp-0x48]
    unsigned long long v4;  // [sp-0x38]
    unsigned long long v6;  // r13
    unsigned long long v7;  // rbp

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a1[1], a1[2]);
    if (*((long long *)&v0))
    {
        a0->field_10 = a1[2];
        a0->field_0 = *((int128_t *)&a1[0]);
        return a0;
    }
    v6 = *((long long *)&v1);
    v7 = *((long long *)&v2);
    if (!(char)uu_split::should_extract_obs_lines::h45a9ca9df26354c5(v6, v7, *(a3), *(a4)))
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, v6, v7);
    else
        uu_split::handle_extract_obs_lines::hd759134314187d0a(&v0, v6, v7, a2);
    v4 = *((long long *)&v2);
    *((int128_t *)&v3) = *((int128_t *)&v0);
    uu_split::handle_preceding_options::ha9316461586fd0f7(v6, v7, a3, a4);
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v3;
    ::0x4c88c0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h0758cff7b902e55a(a1);
    return a0;
}
