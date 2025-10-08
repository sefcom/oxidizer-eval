
  fn alacritty::display::Display::draw_search::h54da426c82502e2d(arg1: *mut c_void, arg2: *mut c_void, arg3: u64) -> i64

{
    let mut var_48: u64 = arg3;
    let rcx: i64;
    let var_40: i64 = rcx;
    let rax: i64 = *arg1.byte_offset(0x7a0);
    let mut var_90: *mut i128;
    
    if rax > 0xffff
    {
        var_90 = &data_c827a0;
        let var_88_1: i64 = 1;
        let var_80_1: i64 = 8;
        let var_78_1: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_90);
        /* no return */
    }
    
    let mut var_38: *mut i64 = &var_48;
    let var_30: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
    let var_28: i64 = 0;
    let var_20: i16 = rax;
    var_90 = &data_4e8b60;
    let var_88: i64 = 1;
    let mut var_78: i128;
    *var_78[8] = &data_5031d8;
    let var_68: i64 = 1;
    let var_80: *mut *mut i64 = &var_38;
    var_78 = 2;
    let mut var_60: ();
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_60, 0, arg3, &var_90);
    let mut rcx_2: *mut i16 = arg2.byte_offset(0x1f9);
    
    if (*arg2.byte_offset(0x1f8) & 1) == 0
    {
        rcx_2 = arg2.byte_offset(0x273);
    }
    
    let mut rax_3: *mut c_void = arg2.byte_offset(0x270);
    
    if (*arg2.byte_offset(0x1fc) & 1) != 0
    {
        rax_3 = arg2.byte_offset(0x1fd);
    }
    
    let var_58: i64;
    let var_50: i64;
    alacritty::renderer::Renderer::draw_string::he548dbda3300cc92(arg1.byte_offset(0xe0), 
        *arg1.byte_offset(0x798), 0, rcx_2[1] << 0x10 | *rcx_2, 
        *rax_3.byte_offset(2) << 0x10 | *rax_3, var_58, var_50 + var_58, arg1.byte_offset(0x798), 
        arg1.byte_offset(0x5f8));
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_60)
}
