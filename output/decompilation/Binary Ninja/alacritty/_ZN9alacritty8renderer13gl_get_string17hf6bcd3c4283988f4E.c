
  int128_t* alacritty::renderer::gl_get_string::hf6bcd3c4283988f4(int64_t* arg1, int32_t arg2, int64_t arg3)

{
    int64_t var_70 = arg3;
    int64_t rcx;
    int64_t var_68 = rcx;
    char* rax = *alacritty::gl::storage::GetString::h69a233b31d134479.0(arg2);
    int32_t rax_1;
    uint64_t rdx;
    rax_1 = *alacritty::gl::storage::GetError::h44a6fc6462751df8.0();
    
    if (!rax_1)
    {
        if (!rax)
            goto label_86c1fa;
        
        int128_t* rax_3 = alloc::ffi::c_str::_$LT$impl$u20$core..ffi..c_str..CStr$GT$::to_string_lossy::h9afbfb8b28205f24(&arg1[1], rax, strlen(rax) + 1);
        *arg1 = 4;
        return rax_3;
    }
    
    void** const var_60;
    int64_t* var_30;
    
    if (rax_1 != 0x500)
    {
        label_86c1fa:
        int32_t var_74 = rax_1;
        var_30 = &var_74;
        uint64_t (* var_28_1)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
        int64_t* var_20_1 = &var_70;
        int64_t (* var_18_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
        var_60 = &data_c84028;
        int64_t var_58_1 = 2;
        int64_t var_40_1 = 0;
        int64_t** var_50_1 = &var_30;
        int64_t var_48_1 = 2;
    }
    else
    {
        var_30 = &var_70;
        int64_t (* var_28)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
        var_60 = &data_c84008;
        int64_t var_58 = 2;
        int64_t var_40 = 0;
        int64_t** var_50 = &var_30;
        int64_t var_48 = 1;
    }
    int64_t rax_4 =
        core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&arg1[1], 0, rdx, &var_60);
    *arg1 = 3;
    return rax_4;
}
