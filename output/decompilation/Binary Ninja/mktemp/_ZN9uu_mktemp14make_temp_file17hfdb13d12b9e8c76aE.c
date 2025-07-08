
  int128_t* uu_mktemp::make_temp_file::hfdb13d12b9e8c76a(int64_t* arg1, int64_t arg2, size_t arg3, int64_t arg4, int64_t arg5, uint64_t arg6, int64_t arg7, int64_t arg8)

{
    int64_t var_f0 = arg4;
    int64_t var_e8 = arg5;
    int64_t var_e0 = arg7;
    int64_t var_d8 = arg8;
    int16_t var_80 = 0;
    int32_t var_b0 = 0;
    int64_t var_a8 = arg4;
    int64_t var_a0 = arg5;
    uint64_t var_88 = arg6;
    int64_t var_98 = arg7;
    int64_t var_90 = arg8;
    int128_t var_d0;
    tempfile::Builder::tempfile_in::h727c1a87e0ab7b89(&var_d0, &var_b0, arg2);
    int128_t var_190;
    int64_t var_180;
    int128_t var_178;
    void* const var_148;
    int32_t fd;
    int128_t var_138;
    int128_t var_118;
    char var_c0;
    
    if (var_c0 != 2)
    {
        int128_t var_48_1 = var_c0;
        int128_t var_58 = var_d0;
        tempfile::file::NamedTempFile$LT$F$GT$::keep::hb038e82cc04b888a(&var_148, &var_58);
        
        if (!var_148)
        {
            int64_t var_128;
            arg1[2] = var_128;
            *arg1 = var_138;
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h1cba195ba56b276e(fd);
        }
        
        int64_t var_120;
        int64_t var_f8_1 = var_120;
        var_118 = fd;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_190, 
            *var_118[8], *var_138[8]);
        int64_t var_168_1 = var_180;
        var_178 = var_190;
        int64_t var_160_1 = -0x8000000000000000;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hcdef1c0b923e2ad4(&var_178);
        arg1[2] = &data_536af0;
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$tempfile..file..PersistError$GT$::h5034deea9c047d89(
            &var_118);
    }
    
    int64_t r14_1 = var_d0;
    
    if (std::io::error::Error::kind::hb2ff5fa058639b3d(r14_1))
    {
        int128_t* result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        arg1[1] = result;
        arg1[2] = &data_5378c0;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_118, 
        "XPersistErrorMustEndInXPrefixCon…", 1, arg6);
    var_178 = &var_f0;
    *var_178[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
    int128_t* var_168_2 = &var_118;
    int64_t (* var_160_2)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    int64_t* var_158_1 = &var_e0;
    int64_t (* var_150_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
    var_148 = &data_41f4d8;
    fd = 3;
    int64_t var_128_1 = 0;
    var_138 = &var_178;
    *var_138[8] = 3;
    core::option::Option$LT$T$GT$::map_or_else::hcc2932731f604033(&var_190, &var_148);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_118);
    int128_t var_78 = var_190;
    int64_t var_68_1 = var_180;
    std::path::Path::join::h5103fbfd94f4eefa(&var_190, arg2, arg3, &var_78);
    var_178 = var_190;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(&var_118, &var_178);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf2364d4dece97e39(&var_148, 
        "filei128 as dyn ERANGEEDEADLKENA…", 4);
    int64_t var_168_3 = var_138;
    var_178 = var_148;
    var_160_2 = var_118;
    int64_t var_108;
    int64_t var_150_2 = var_108;
    arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hcdef1c0b923e2ad4(&var_178);
    arg1[2] = &data_536af0;
    *arg1 = -0x8000000000000000;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_190);
    return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h023254833d2f52f9(r14_1);
}
