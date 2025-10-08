
  fn alacritty::display::Display::draw_line_indicator::h462b756ef8d8474d(arg1: *mut c_void, arg2: *mut c_void, arg3: i64, arg4: i8, arg5: i64, arg6: i64) -> i64

{
    let mut var_c0: i64 = arg6;
    let r15: i64 = *arg1.byte_offset(0x7a0);
    let mut var_b8: u64 = arg3 - 1;
    let mut var_80: *mut i64 = &var_c0;
    let var_78: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    let var_70: *mut i64 = &var_b8;
    let var_68: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    let mut var_60: *mut *mut c_void = &data_c827e8;
    let var_58: i64 = 3;
    let var_40: i64 = 0;
    let var_50: *mut *mut i64 = &var_80;
    let var_48: i64 = 2;
    let mut var_b0: ();
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_b0, 0, arg3 - 1, &var_60);
    let var_a0: i64;
    let mut r12_1: i64 = r15 - var_a0;
    
    if r15 < var_a0
    {
        r12_1 = 0;
    }
    
    let mut var_98: i64 = 0;
    let var_90: i64 = r12_1;
    let var_88: i64 = r15 - 1;
    alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(
        *arg1.byte_offset(0x20), *arg1.byte_offset(0x28), &var_98);
    alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(
        *arg1.byte_offset(0x58), *arg1.byte_offset(0x60), &var_98);
    
    if (arg4 & arg5 >= r12_1) == 0
    {
        let mut rdx_3: *mut i16 = arg2.byte_offset(0x1f5);
        
        if (*arg2.byte_offset(0x1f4) & 1) == 0
        {
            rdx_3 = arg2.byte_offset(0x270);
        }
        
        let mut rcx_3: *mut c_void = arg2.byte_offset(0x273);
        
        if (*arg2.byte_offset(0x1f0) & 1) != 0
        {
            rcx_3 = arg2.byte_offset(0x1f1);
        }
        
        let var_a8: i64;
        alacritty::renderer::Renderer::draw_string::he548dbda3300cc92(arg1.byte_offset(0xe0), 0, 
            r12_1, *rcx_3.byte_offset(2) << 0x10 | *rcx_3, rdx_3[1] << 0x10 | *rdx_3, var_a8, 
            var_a0 + var_a8, arg1.byte_offset(0x798), arg1.byte_offset(0x5f8));
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_b0)
}
