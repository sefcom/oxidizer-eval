
  uint64_t uu_mktemp::make_temp_dir::h6dfece6cf0e8d640(int64_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4, int64_t arg5, uint64_t arg6, int64_t arg7, int64_t arg8)

{
    int64_t var_118 = arg4;
    int64_t var_110 = arg5;
    int64_t var_108 = arg7;
    int64_t var_100 = arg8;
    int16_t var_80 = 0;
    int64_t var_a8 = arg4;
    int64_t var_a0 = arg5;
    uint64_t var_88 = arg6;
    int64_t var_98 = arg7;
    int64_t var_90 = arg8;
    int64_t var_b0 = 0x1c000000001;
    int128_t var_130;
    tempfile::Builder::tempdir_in::hfc85b0e03fc17ef4(&var_130, &var_b0, arg2);
    char var_120;
    uint64_t result;
    
    if (var_120 != 2)
    {
        int64_t var_68_1 = var_120;
        int128_t var_78 = var_130;
        int128_t var_60;
        tempfile::dir::TempDir::keep::hd8ce1fb884c31a5c(&var_60, &var_78);
        uint64_t result_1;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_60;
    }
    else
    {
        int64_t rbx_1 = var_130;
        
        if (!std::io::error::Error::kind::h135fe00c4e7365f3(rbx_1))
        {
            int128_t var_168;
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h972a0325fa79cda6(&var_168, arg6);
            int128_t var_188 = var_168;
            var_168 = &var_118;
            *var_168[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6e4bdad1b13e5d00;
            int128_t* var_158_1 = &var_188;
            int64_t (* var_150_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            int64_t* var_148_1 = &var_108;
            int64_t (* var_140_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6e4bdad1b13e5d00;
            void* const var_f8 = &data_41b658;
            int64_t var_f0_1 = 3;
            int64_t var_d8_1 = 0;
            int128_t* var_e8_1 = &var_168;
            int64_t var_e0_1 = 3;
            void var_48;
            core::option::Option$LT$T$GT$::map_or_else::h00d6975f0c0267a7(&var_48, &var_f8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(&var_188);
            void var_c8;
            std::path::Path::join::h71cca2405c68dc0d(&var_c8, arg2, arg3, &var_48);
            int128_t var_c0;
            var_168 = var_c0;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hbac688a0c4ef4a45(
                &var_188, &var_168);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3c498dae33407f89(&var_f8, "directorydry-runquietsuffixtmpdi…", 9);
            int128_t* var_158_2 = var_e8_1;
            var_168 = var_f8;
            var_150_1 = var_188;
            int64_t var_158;
            int64_t var_140_2 = var_158;
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
    
    return result;
}
