
  fn uu_mktemp::make_temp_dir::h59267eff7d377883(arg1: *mut i64, arg2: i64, arg3: size_t, arg4: i64, arg5: i64, arg6: u64, arg7: i64, arg8: i64) -> *mut i128

{
    let mut var_e8: i64 = arg4;
    let var_e0: i64 = arg5;
    let mut var_d8: i64 = arg7;
    let var_d0: i64 = arg8;
    let var_50: i16 = 0;
    let mut var_80: i32 = 0;
    let var_78: i64 = arg4;
    let var_70: i64 = arg5;
    let var_58: u64 = arg6;
    let var_68: i64 = arg7;
    let var_60: i64 = arg8;
    let mut var_98: i64;
    tempfile::Builder::tempdir_in::haca47c72416a75c9(&var_98, &var_80, arg2);
    let var_88: i8;
    let mut result: *mut i128;
    let mut var_148: i128;
    
    if var_88 != 2
    {
        tempfile::dir::TempDir::into_path::h9cc8484f4c823eac(&var_148, &var_98);
        
        if std::fs::set_permissions::h663416e852a125c9(&var_148, 0x1c0) != 0
        {
            arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            arg1[2] = &data_5378c0;
            *arg1 = -0x8000000000000000;
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_148);
        }
        
        let result_1: *mut i128;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_148;
    }
    else
    {
        let rbx_1: i64 = var_98;
        
        if std::io::error::Error::kind::hb2ff5fa058639b3d(rbx_1) == 0
        {
            let mut var_100: i128;
            alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_100, 
                "XPersistErrorMustEndInXPrefixCon…", 1, arg6);
            var_148 = &var_e8;
            *var_148[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
            let var_138: *mut i128 = &var_100;
            let mut var_130_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            let var_128_1: *mut i64 = &var_d8;
            let var_120_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
            let mut var_c8: *mut c_void = &data_41f4d8;
            let var_c0_1: i64 = 3;
            let var_a8_1: i64 = 0;
            let var_b8_1: *mut i128 = &var_148;
            let var_b0_1: i64 = 3;
            let mut var_118: i128;
            core::option::Option$LT$T$GT$::map_or_else::hcc2932731f604033(&var_118, &var_c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_100);
            let mut var_48: i128 = var_118;
            let var_108: i64;
            let var_38_1: i64 = var_108;
            std::path::Path::join::h5103fbfd94f4eefa(&var_118, arg2, arg3, &var_48);
            var_148 = var_118;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(&var_100, 
                &var_148);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf2364d4dece97e39(
                &var_c8, "directorydry-runquietsuffixtmpdi…", 9);
            let var_138_1: *mut i128 = var_b8_1;
            var_148 = var_c8;
            var_130_1 = var_100;
            let var_f0: i64;
            let var_120_2: i64 = var_f0;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hcdef1c0b923e2ad4(&var_148);
            arg1[2] = &data_536af0;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_118);
            return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h023254833d2f52f9(rbx_1);
        }
        
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        arg1[1] = result;
        arg1[2] = &data_5378c0;
        *arg1 = -0x8000000000000000;
    }
    result
}
