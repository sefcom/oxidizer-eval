
  fn uu_timeout::uumain::uumain::hc8d8470bc3c1b755(arg1: i64) -> u64

{
    let mut var_2e0: i64;
    uu_timeout::uu_app::hbfb08d0d02c89d09(&var_2e0);
    let mut var_360: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h41ad35f95685d978(&var_360, 
        &var_2e0, arg1);
    let rax: i64 = var_360;
    let var_358: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return alloc::boxed::Box$LT$T$GT$::new::h3562a38b82986fe7(var_358);
    }
    
    let var_34c: i128;
    let var_304_1: i128 = var_34c;
    let var_33c: i128;
    let var_2f4_1: i128 = var_33c;
    let var_32c: i32;
    let var_2e4_1: i32 = var_32c;
    let mut var_318: i64 = rax;
    let var_310_1: i64 = var_358;
    let mut var_350: i32;
    let var_308_1: i32 = var_350;
    uu_timeout::Config::from::hed1b4ca69d4616c5(&var_2e0, &var_318);
    let rcx_4: i64 = var_2e0;
    let mut rdi_4: *mut i64;
    let mut result: u64;
    let result_1: u64;
    
    if rcx_4 != -0x8000000000000000
    {
        var_360 = rcx_4;
        let result_3: u64 = result_1;
        let var_2d0: *mut *mut c_void;
        var_350 = var_2d0;
        let var_2c8: i128;
        let var_2b8: i128;
        let var_2a8: i88;
        let mut result_2: u64;
        let mut rdx_3: *mut *mut c_void;
        result_2 = uu_timeout::timeout::he6dc1fc585e5d981(result_1, var_2d0, *var_2c8[4], 
            *var_2c8[0xc], var_2a8, *var_2b8[4], *var_2b8[0xc], *var_2a8[8], *var_2a8[9], 
            *var_2a8[0xa]);
        result = result_2;
        core::ptr::drop_in_place$LT$uu_timeout..Config$GT$::h3c83412a368ec9e4(&var_360);
        rdi_4 = &var_318;
    }
    else
    {
        rdi_4 = &var_318;
        result = result_1;
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he092b279c01bbc7d(rdi_4);
    result
}
