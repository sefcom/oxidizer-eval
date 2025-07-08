
  int128_t* uu_mktemp::make_temp_dir::h59267eff7d377883(int64_t* arg1, int64_t arg2, size_t arg3, int64_t arg4, int64_t arg5, uint64_t arg6, int64_t arg7, int64_t arg8)

{
    int64_t var_e8 = arg4;
    int64_t var_e0 = arg5;
    int64_t var_d8 = arg7;
    int64_t var_d0 = arg8;
    int16_t var_50 = 0;
    int32_t var_80 = 0;
    int64_t var_78 = arg4;
    int64_t var_70 = arg5;
    uint64_t var_58 = arg6;
    int64_t var_68 = arg7;
    int64_t var_60 = arg8;
    int64_t var_98;
    tempfile::Builder::tempdir_in::haca47c72416a75c9(&var_98, &var_80, arg2);
    char var_88;
    int128_t* result;
    int128_t var_148;
    
    if (var_88 != 2)
    {
        tempfile::dir::TempDir::into_path::h9cc8484f4c823eac(&var_148, &var_98);
        
        if (std::fs::set_permissions::h663416e852a125c9(&var_148, 0x1c0))
        {
            arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            arg1[2] = &data_5378c0;
            *arg1 = -0x8000000000000000;
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_148);
        }
        
        int128_t* result_1;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_148;
    }
    else
    {
        int64_t rbx_1 = var_98;
        
        if (!std::io::error::Error::kind::hb2ff5fa058639b3d(rbx_1))
        {
            int128_t var_100;
            alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_100, 
                "XPersistErrorMustEndInXPrefixCon…", 1, arg6);
            var_148 = &var_e8;
            *var_148[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
            int128_t* var_138 = &var_100;
            int64_t (* var_130_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            int64_t* var_128_1 = &var_d8;
            int64_t (* var_120_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
            void* const var_c8 = &data_41f4d8;
            int64_t var_c0_1 = 3;
            int64_t var_a8_1 = 0;
            int128_t* var_b8_1 = &var_148;
            int64_t var_b0_1 = 3;
            int128_t var_118;
            core::option::Option$LT$T$GT$::map_or_else::hcc2932731f604033(&var_118, &var_c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_100);
            int128_t var_48 = var_118;
            int64_t var_108;
            int64_t var_38_1 = var_108;
            std::path::Path::join::h5103fbfd94f4eefa(&var_118, arg2, arg3, &var_48);
            var_148 = var_118;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(&var_100, 
                &var_148);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf2364d4dece97e39(
                &var_c8, "directorydry-runquietsuffixtmpdi…", 9);
            int128_t* var_138_1 = var_b8_1;
            var_148 = var_c8;
            var_130_1 = var_100;
            int64_t var_f0;
            int64_t var_120_2 = var_f0;
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
    return result;
}
