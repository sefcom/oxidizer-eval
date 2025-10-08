
  uint64_t uu_mktemp::make_temp_file::hb72bef91cb9e45f4(int64_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4, int64_t arg5, uint64_t arg6, int64_t arg7, int64_t arg8)

{
    int64_t var_c0 = arg4;
    int64_t var_b8 = arg5;
    int64_t var_b0 = arg7;
    int64_t var_a8 = arg8;
    int16_t var_70 = 0;
    int32_t var_a0 = 0;
    int64_t var_98 = arg4;
    int64_t var_90 = arg5;
    uint64_t var_78 = arg6;
    int64_t var_88 = arg7;
    int64_t var_80 = arg8;
    int64_t var_68;
    tempfile::Builder::tempfile_in::he0411b7e1dc3d234(&var_68, &var_a0, arg2);
    int64_t* var_168;
    int128_t var_138;
    int32_t var_108;
    int32_t fd;
    int128_t var_f8;
    int128_t var_d8;
    char var_58;
    
    if (var_58 != 2)
    {
        tempfile::file::NamedTempFile$LT$F$GT$::keep::hc7ec6b05f101e459(&var_108, &var_68);
        
        if (var_108 != 1)
        {
            int64_t var_e8;
            arg1[2] = var_e8;
            *arg1 = var_f8;
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::hf84162f12f94393f(fd);
        }
        
        int64_t var_e0;
        int64_t var_118_1 = var_e0;
        var_138 = fd;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_d8, 
            *var_138[8], *var_f8[8]);
        int64_t var_c8;
        int64_t var_150_1 = var_c8;
        int128_t var_160_1 = var_d8;
        var_168 = -0x8000000000000000;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h066bf77b12338303(&var_168);
        arg1[2] = &data_4f9098;
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$tempfile..file..PersistError$GT$::h0aa05fd71ac9bb03(
            &var_138);
    }
    
    int64_t r14_1 = var_68;
    
    if (std::io::error::Error::kind::h135fe00c4e7365f3(r14_1))
    {
        uint64_t result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        arg1[1] = result;
        arg1[2] = &data_4f9e90;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h972a0325fa79cda6(&var_168, arg6);
    int128_t var_160;
    int64_t rax_6 = *var_160[8];
    var_138 = var_168;
    var_168 = &var_c0;
    var_160 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6e4bdad1b13e5d00;
    *var_160[8] = &var_138;
    int64_t (* var_150_2)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    int64_t* var_148_1 = &var_b0;
    int64_t (* var_140_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6e4bdad1b13e5d00;
    var_108 = &data_41b658;
    fd = 3;
    int64_t var_e8_1 = 0;
    var_f8 = &var_168;
    *var_f8[8] = 3;
    void var_48;
    core::option::Option$LT$T$GT$::map_or_else::h00d6975f0c0267a7(&var_48, &var_108);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(&var_138);
    std::path::Path::join::h71cca2405c68dc0d(&var_d8, arg2, arg3, &var_48);
    var_168 = var_d8;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hbac688a0c4ef4a45(&var_138, 
        &var_168);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3c498dae33407f89(&var_108, "filei128 as dyn ERANGEEDEADLKENA…", 4);
    *var_160[8] = var_f8;
    var_168 = var_108;
    var_150_2 = var_138;
    int64_t var_140_2 = rax_6;
    arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h066bf77b12338303(&var_168);
    arg1[2] = &data_4f9098;
    *arg1 = -0x8000000000000000;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4af838b51e1cae1b(&var_d8);
    return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h107f4e23998bf9d2(r14_1);
}
