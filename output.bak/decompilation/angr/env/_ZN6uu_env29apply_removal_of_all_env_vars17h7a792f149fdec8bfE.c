long long uu_env::apply_removal_of_all_env_vars::h7a792f149fdec8bf(struct_0 *a0)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x50]
    unsigned long long v3;  // rax

    if (!a0->field_98)
        return v3;
    std::env::vars_os::h5a40cbb6c0e7369c();
    while (true)
    {
        _$LT$std..env..VarsOs$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9e7e14bfb37fce37(&v1, &v0);
        if (*((long long *)&v1) == 0x8000000000000000)
            break;
        std::env::remove_var::h8bf786824f32bc6e(&v1);
        core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$std..ffi..os_str..OsString$C$std..ffi..os_str..OsString$RP$$GT$$GT$::h51bca49ba82cc3a5(&v1);
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$std..ffi..os_str..OsString$C$std..ffi..os_str..OsString$RP$$GT$$GT$::h51bca49ba82cc3a5(&v1);
    v3 = core::ptr::drop_in_place$LT$std..env..VarsOs$GT$::h6ba13bc04ee97109();
    return v3;
}
