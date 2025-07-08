
  fn uu_basenc::parse_cmd_args::haa59f9e932579024(arg1: *mut i64, arg2: i64) -> *mut i64

{
    let mut var_2e8: i128;
    uu_basenc::uu_app::hfbf1ac7160545103(&var_2e8);
    let mut var_370: *mut *mut c_void;
    uucore::Args::collect_lossy::h59613048ab61941c(&var_370, arg2);
    let mut var_320: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hd3fa77ff50e7945c(&var_320, 
        &var_2e8, &var_370);
    let rax: i64 = var_320;
    let var_318: i64;
    
    if rax == -0x8000000000000000
    {
        let result: *mut i64 = alloc::boxed::Box$LT$T$GT$::new::h52e31e1a4412d689(var_318);
        arg1[1] = result;
        arg1[2] = &data_54cd90;
        *arg1 = 2;
        return result;
    }
    
    let var_30c: i128;
    let var_344_1: i128 = var_30c;
    let var_2fc: i128;
    let var_334_1: i128 = var_2fc;
    let var_2ec: i32;
    let var_324_1: i32 = var_2ec;
    let mut var_358: i64 = rax;
    let var_350_1: i64 = var_318;
    let var_310: i32;
    let var_348_1: i32 = var_310;
    var_370 = &data_54cb70;
    let var_368_1: *mut *mut c_void = &data_54ccb0;
    let rax_1: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h0ca1d326b6d409fa(&var_370, &var_358);
    
    if rax_1 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::heaa6d59ecfaf3b76(&var_320);
        let var_2d8_1: i64 = var_310;
        var_2e8 = var_320;
        let var_2d0_1: i32 = 1;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h92a545b9430b9ec5(&var_2e8);
        arg1[2] = &data_54cce8;
        *arg1 = 2;
    }
    else
    {
        let rbp_1: i8 = rax_1[2];
        uu_base32::base_common::Config::from::h8f03cd9b16c9529c(&var_2e8, &var_358);
        let rdx_4: i64 = var_2e8;
        let rax_2: i64 = *var_2e8[8];
        let var_2d8: i64;
        
        if rdx_4 != 2
        {
            let var_2c0: i64;
            arg1[5] = var_2c0;
            let var_2d0: i32;
            *arg1.byte_offset(0x18) = var_2d0;
            *arg1 = rdx_4;
            arg1[1] = rax_2;
            arg1[2] = var_2d8;
            arg1[6] = rbp_1;
        }
        else
        {
            arg1[1] = rax_2;
            arg1[2] = var_2d8;
            *arg1 = 2;
        }
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h232bb017e5ec51f0(&var_358)
}
