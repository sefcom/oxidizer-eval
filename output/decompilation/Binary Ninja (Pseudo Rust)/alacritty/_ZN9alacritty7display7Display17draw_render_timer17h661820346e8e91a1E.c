
  fn alacritty::display::Display::draw_render_timer::h661820346e8e91a1(arg1: *mut c_void, arg2: *mut c_void)

{
    if *arg2.byte_offset(0xa) == 1
    {
        let mut var_a8: i64 = *arg1.byte_offset(0x820);
        let mut var_70: *mut i64 = &var_a8;
        let var_68_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        let mut var_60: *mut c_void = &data_c827c8;
        let var_58_1: i64 = 2;
        let var_40_1: *mut c_void = &data_503210;
        let var_38_1: i64 = 1;
        let var_50_1: *mut *mut i64 = &var_70;
        let var_48_1: i64 = 1;
        let mut var_a0: ();
        let rdx: u64;
        core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_a0, 0, rdx, &var_60);
        let r14_1: i64 = *arg1.byte_offset(0x798);
        let mut r14_2: i64 = r14_1 - 2;
        
        if r14_1 < 2
        {
            r14_2 = 0;
        }
        
        let rax_1: u32 = *arg2.byte_offset(0x273);
        let rbp_1: u32 = *arg2.byte_offset(0x275);
        let r15_1: u32 = *arg2.byte_offset(0x23b);
        let r13_1: u32 = *arg2.byte_offset(0x23d);
        let mut var_88: i64 = r14_2;
        let var_80_1: i64 = 0;
        let var_90: i64;
        let var_78_1: i64 = var_90;
        alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(
            *arg1.byte_offset(0x20), *arg1.byte_offset(0x28), &var_88);
        alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(
            *arg1.byte_offset(0x58), *arg1.byte_offset(0x60), &var_88);
        let var_98: i64;
        alacritty::renderer::Renderer::draw_string::he548dbda3300cc92(arg1.byte_offset(0xe0), 
            r14_2, 0, rax_1 | rbp_1 << 0x10, r15_1 | r13_1 << 0x10, var_98, var_90 + var_98, 
            arg1.byte_offset(0x798), arg1.byte_offset(0x5f8));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_a0);
    }
}
