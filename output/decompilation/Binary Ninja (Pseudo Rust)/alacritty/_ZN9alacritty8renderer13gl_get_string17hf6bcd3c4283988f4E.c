
  fn alacritty::renderer::gl_get_string::hf6bcd3c4283988f4(arg1: *mut i64, arg2: i32, arg3: i64) -> *mut i128

{
    let mut var_70: i64 = arg3;
    let rcx: i64;
    let var_68: i64 = rcx;
    let rax: *mut i8 = *alacritty::gl::storage::GetString::h69a233b31d134479.0(arg2);
    let mut rax_1: i32;
    let mut rdx: u64;
    rax_1 = *alacritty::gl::storage::GetError::h44a6fc6462751df8.0();
    
    if rax_1 == 0
    {
        if rax == 0
        {
            goto 'label_86c1fa;
        }
        
        let rax_3: *mut i128 = alloc::ffi::c_str::_$LT$impl$u20$core..ffi..c_str..CStr$GT$::to_string_lossy::h9afbfb8b28205f24(&arg1[1], rax, strlen(rax) + 1);
        *arg1 = 4;
        return rax_3;
    }
    
    let mut var_60: *mut *mut c_void;
    let mut var_30: *mut i64;
    
    if rax_1 != 0x500
    {
        'label_86c1fa:
        let mut var_74: i32 = rax_1;
        var_30 = &var_74;
        let var_28_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
        let var_20_1: *mut i64 = &var_70;
        let var_18_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
        var_60 = &data_c84028;
        let var_58_1: i64 = 2;
        let var_40_1: i64 = 0;
        let var_50_1: *mut *mut i64 = &var_30;
        let var_48_1: i64 = 2;
    }
    else
    {
        var_30 = &var_70;
        let var_28: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
        var_60 = &data_c84008;
        let var_58: i64 = 2;
        let var_40: i64 = 0;
        let var_50: *mut *mut i64 = &var_30;
        let var_48: i64 = 1;
    }
    let rax_4: i64 =
        core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&arg1[1], 0, rdx, &var_60);
    *arg1 = 3;
    rax_4
}
