
  int64_t alacritty::renderer::gl_debug_log::h0a1f427af07318e3(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, char* arg6)

{
    void var_58;
    alloc::ffi::c_str::_$LT$impl$u20$core..ffi..c_str..CStr$GT$::to_string_lossy::h9afbfb8b28205f24(
        &var_58, arg6, strlen(arg6) + 1);
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4)
    {
        void* var_90 = &var_58;
        int64_t (* var_88_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcfd5d0c223f1891d;
        char const (** const var_40)[0xeb] = &data_c84170;
        int64_t var_38_1 = 1;
        int64_t var_20_1 = 0;
        void** var_30_1 = &var_90;
        int64_t var_28_1 = 1;
        int64_t rax_2 = log::__private_api::loc::h250021ea1f26630a(&data_c84180);
        char const* const var_80 = "alacritty::renderer3.3GL_KHR_deb…";
        int64_t var_78_1 = 0x13;
        char const* const var_70_1 = "alacritty::renderer3.3GL_KHR_deb…";
        int64_t var_68_1 = 0x13;
        int64_t var_60_1 = rax_2;
        log::__private_api::log::h0b6680b994d742b1(&var_40, 4, &var_80);
    }
    
    return core::ptr::drop_in_place$LT$crossfont..Style$GT$::h2b47363f07595d0e(&var_58);
}
