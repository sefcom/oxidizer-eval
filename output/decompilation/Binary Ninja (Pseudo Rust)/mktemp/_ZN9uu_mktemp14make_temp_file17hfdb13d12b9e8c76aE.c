
  fn uu_mktemp::make_temp_file::hfdb13d12b9e8c76a(arg1: *mut i64, arg2: i64, arg3: size_t, arg4: i64, arg5: i64, arg6: u64, arg7: i64, arg8: i64) -> *mut i128

{
    let mut var_f0: i64 = arg4;
    let var_e8: i64 = arg5;
    let mut var_e0: i64 = arg7;
    let var_d8: i64 = arg8;
    let var_80: i16 = 0;
    let mut var_b0: i32 = 0;
    let var_a8: i64 = arg4;
    let var_a0: i64 = arg5;
    let var_88: u64 = arg6;
    let var_98: i64 = arg7;
    let var_90: i64 = arg8;
    let mut var_d0: i128;
    tempfile::Builder::tempfile_in::h727c1a87e0ab7b89(&var_d0, &var_b0, arg2);
    let mut var_190: i128;
    let var_180: i64;
    let mut var_178: i128;
    let mut var_148: *mut c_void;
    let mut fd: i32;
    let mut var_138: i128;
    let mut var_118: i128;
    let var_c0: i8;
    
    if var_c0 != 2
    {
        let var_48_1: i128 = var_c0;
        let mut var_58: i128 = var_d0;
        tempfile::file::NamedTempFile$LT$F$GT$::keep::hb038e82cc04b888a(&var_148, &var_58);
        
        if var_148 == 0
        {
            let var_128: i64;
            arg1[2] = var_128;
            *arg1 = var_138;
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h1cba195ba56b276e(fd);
        }
        
        let var_120: i64;
        let var_f8_1: i64 = var_120;
        var_118 = fd;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_190, 
            *var_118[8], *var_138[8]);
        let var_168_1: i64 = var_180;
        var_178 = var_190;
        let var_160_1: i64 = -0x8000000000000000;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hcdef1c0b923e2ad4(&var_178);
        arg1[2] = &data_536af0;
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$tempfile..file..PersistError$GT$::h5034deea9c047d89(
            &var_118);
    }
    
    let r14_1: i64 = var_d0;
    
    if std::io::error::Error::kind::hb2ff5fa058639b3d(r14_1) != 0
    {
        let result: *mut i128 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        arg1[1] = result;
        arg1[2] = &data_5378c0;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_118, 
        "XPersistErrorMustEndInXPrefixCon…", 1, arg6);
    var_178 = &var_f0;
    *var_178[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
    let var_168_2: *mut i128 = &var_118;
    let mut var_160_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    let var_158_1: *mut i64 = &var_e0;
    let var_150_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
    var_148 = &data_41f4d8;
    fd = 3;
    let var_128_1: i64 = 0;
    var_138 = &var_178;
    *var_138[8] = 3;
    core::option::Option$LT$T$GT$::map_or_else::hcc2932731f604033(&var_190, &var_148);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_118);
    let mut var_78: i128 = var_190;
    let var_68_1: i64 = var_180;
    std::path::Path::join::h5103fbfd94f4eefa(&var_190, arg2, arg3, &var_78);
    var_178 = var_190;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(&var_118, &var_178);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf2364d4dece97e39(&var_148, 
        "filei128 as dyn ERANGEEDEADLKENA…", 4);
    let var_168_3: i64 = var_138;
    var_178 = var_148;
    var_160_2 = var_118;
    let var_108: i64;
    let var_150_2: i64 = var_108;
    arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hcdef1c0b923e2ad4(&var_178);
    arg1[2] = &data_536af0;
    *arg1 = -0x8000000000000000;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_190);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h023254833d2f52f9(r14_1)
}
