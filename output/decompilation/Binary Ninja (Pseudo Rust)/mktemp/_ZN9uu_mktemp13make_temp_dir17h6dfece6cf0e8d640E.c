
  fn uu_mktemp::make_temp_dir::h6dfece6cf0e8d640(arg1: *mut i64, arg2: i64, arg3: u64, arg4: i64, arg5: i64, arg6: u64, arg7: i64, arg8: i64) -> u64

{
    let mut var_118: i64 = arg4;
    let var_110: i64 = arg5;
    let mut var_108: i64 = arg7;
    let var_100: i64 = arg8;
    let var_80: i16 = 0;
    let var_a8: i64 = arg4;
    let var_a0: i64 = arg5;
    let var_88: u64 = arg6;
    let var_98: i64 = arg7;
    let var_90: i64 = arg8;
    let mut var_b0: i64 = 0x1c000000001;
    let mut var_130: i128;
    tempfile::Builder::tempdir_in::hfc85b0e03fc17ef4(&var_130, &var_b0, arg2);
    let var_120: i8;
    let mut result: u64;
    
    if var_120 != 2
    {
        let var_68_1: i64 = var_120;
        let mut var_78: i128 = var_130;
        let mut var_60: i128;
        tempfile::dir::TempDir::keep::hd8ce1fb884c31a5c(&var_60, &var_78);
        let result_1: u64;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_60;
    }
    else
    {
        let rbx_1: i64 = var_130;
        
        if std::io::error::Error::kind::h135fe00c4e7365f3(rbx_1) == 0
        {
            let mut var_168: i128;
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h972a0325fa79cda6(&var_168, arg6);
            let mut var_188: i128 = var_168;
            var_168 = &var_118;
            *var_168[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6e4bdad1b13e5d00;
            let var_158_1: *mut i128 = &var_188;
            let mut var_150_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_148_1: *mut i64 = &var_108;
            let var_140_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6e4bdad1b13e5d00;
            let mut var_f8: *mut c_void = &data_41b658;
            let var_f0_1: i64 = 3;
            let var_d8_1: i64 = 0;
            let var_e8_1: *mut i128 = &var_168;
            let var_e0_1: i64 = 3;
            let mut var_48: ();
            core::option::Option$LT$T$GT$::map_or_else::h00d6975f0c0267a7(&var_48, &var_f8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(&var_188);
            let mut var_c8: ();
            std::path::Path::join::h71cca2405c68dc0d(&var_c8, arg2, arg3, &var_48);
            let var_c0: i128;
            var_168 = var_c0;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hbac688a0c4ef4a45(
                &var_188, &var_168);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3c498dae33407f89(&var_f8, "directorydry-runquietsuffixtmpdi…", 9);
            let var_158_2: *mut i128 = var_e8_1;
            var_168 = var_f8;
            var_150_1 = var_188;
            let var_158: i64;
            let var_140_2: i64 = var_158;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h066bf77b12338303(&var_168);
            arg1[2] = &data_4f9098;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4af838b51e1cae1b(&var_c8);
            return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h107f4e23998bf9d2(rbx_1);
        }
        
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        arg1[1] = result;
        arg1[2] = &data_4f9e90;
        *arg1 = -0x8000000000000000;
    }
    
    result
}
