
  fn alacritty_terminal::term::Term$LT$T$GT$::set_options::h35d1164ca74ce318(arg1: *mut i32, arg2: *mut i128) -> i64

{
    let rax: i40 = *arg1.byte_offset(0x238);
    let var_28: i128 = *arg1.byte_offset(0x228);
    let mut var_38: i128 = *arg1.byte_offset(0x218);
    let zmm1: i128 = arg2[1];
    *arg1.byte_offset(0x218) = *arg2;
    *arg1.byte_offset(0x228) = zmm1;
    *arg1.byte_offset(0x238) = arg2[2];
    let mut var_78: i128;
    let mut var_58: i128;
    let mut var_48: i64;
    let mut r14: i64;
    
    if !(0 + -(*arg1.byte_offset(0x240)))
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_78, &arg1[0x90]);
        let var_68: i64;
        var_48 = var_68;
        var_58 = var_78;
        r14 = -0x7fffffffffffffff;
    }
    else
    {
        r14 = -0x7ffffffffffffffe;
    }
    
    var_78 = r14;
    var_78 = var_58;
    let var_60: i64 = var_48;
    _$LT$alacritty..event..EventProxy$u20$as$u20$alacritty_terminal..event..EventListener$GT$::send_event::hcb980e74e667f924(arg1, &var_78);
    let mut rdi_2: *mut c_void = &arg1[0x36];
    
    if (arg1[0x1b7] & 0x1000) == 0
    {
        rdi_2 = &arg1[0xa];
    }
    
    alacritty_terminal::grid::Grid$LT$T$GT$::update_history::hf3d18eb057d90925(rdi_2, 
        *arg1.byte_offset(0x230));
    
    if arg1[0x8f] != *rax[4]
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bool$GT$$GT$::h853d54bae12860f6(
            *arg1.byte_offset(0x1b8), *arg1.byte_offset(0x1c0));
        *arg1.byte_offset(0x1b8) = 0;
        *arg1.byte_offset(0x1c0) = 1;
        *arg1.byte_offset(0x1c8) = 0;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bool$GT$$GT$::h853d54bae12860f6(
            *arg1.byte_offset(0x1d0), *arg1.byte_offset(0x1d8));
        *arg1.byte_offset(0x1d0) = 0;
        *arg1.byte_offset(0x1d8) = 1;
        *arg1.byte_offset(0x1e0) = 0;
        *arg1.byte_offset(0x6de) &= 0x83;
    }
    
    arg1[0x84] = 1;
    core::ptr::drop_in_place$LT$alacritty_terminal..term..Config$GT$::h06543dc3aca77dce(&var_38)
}
