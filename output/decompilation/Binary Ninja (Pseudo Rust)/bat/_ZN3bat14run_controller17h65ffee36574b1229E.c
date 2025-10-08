
  fn bat::run_controller::h65ffee36574b1229(arg1: *mut i128, arg2: *mut i64, arg3: *mut c_void, arg4: i64, arg5: u64) -> i64

{
    let mut var_138: i64;
    bat::assets::assets_from_cache_or_binary::h4bfa381507131f37(&var_138, *arg3.byte_offset(0x127), 
        arg4, arg5);
    let rax: i64 = var_138;
    let mut var_130: i128;
    let mut var_188: i128 = var_130;
    let var_120: i128;
    let var_110: i128;
    let var_100: i128;
    let var_f0: i128;
    
    if rax == -0x7fffffffffffffff
    {
        arg1[4] = var_f0;
        let zmm0: i128 = var_188;
        arg1[3] = var_100;
        arg1[2] = var_110;
        arg1[1] = var_120;
        *arg1 = zmm0;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bat..input..Input$GT$$GT$::ha5b8727e1c389dbc(arg2);
    }
    
    let var_b0: i64;
    let var_20: i64 = var_b0;
    let var_c0: i128;
    let var_30: i128 = var_c0;
    let var_d0: i128;
    let var_40: i128 = var_d0;
    let var_e0: i128;
    let var_50: i128 = var_e0;
    let var_a0: i128 = var_188;
    let var_90: i128 = var_120;
    let var_80: i128 = var_110;
    let var_70: i128 = var_100;
    let var_60: i128 = var_f0;
    let mut var_a8: i64 = rax;
    var_188 = arg3;
    *var_188[8] = &var_a8;
    
    if *arg3.byte_offset(0x12a) != 2 && *arg3.byte_offset(0x128) != 0
    {
        let mut r15: *mut c_void;
        r15 = 1;
        bat::get_new_terminal_title::h8b51db7900522cfa(&var_138, arg2[1], arg2[2]);
        bat::set_terminal_title_to::h432aeef32092f2a4(&var_138);
    }
    
    *var_130[8] = arg2[2];
    var_138 = *arg2;
    bat::controller::Controller::run::h2c1d1acaa272306e(arg1, &var_188, &var_138, 0);
    core::ptr::drop_in_place$LT$bat..assets..HighlightingAssets$GT$::h6be43cd2c3f1f295(&var_a8)
}
