
  int128_t* uu_mkdir::create_dir::ha7ee258293152955(char* arg1, uint64_t arg2, char arg3, char arg4, char arg5, int32_t arg6)

{
    void* const var_e0;
    std::fs::metadata::hde9f2ae1e0e2ce8d(&var_e0, arg1);
    void* const r13 = var_e0;
    int128_t* r13_1;
    char** var_160;
    char* var_140;
    int64_t var_120;
    int64_t var_d8;
    
    if (r13 != 2)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hda5a6707fa3c012c(r13, var_d8);
        
        if (arg3)
            goto label_4b2ec9;
        
        var_140 = arg1;
        uint64_t var_138_1 = arg2;
        var_160 = &var_140;
        int64_t (* var_158_1)(int64_t* arg1, void* arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        var_e0 = &data_5205e8;
        int64_t var_d8_1 = 2;
        int64_t var_c0_1 = 0;
        char*** var_d0_1 = &var_160;
        int64_t var_c8_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h6db0321d2b87c404(&var_120, &var_e0);
        int32_t var_108_1 = 1;
        r13_1 = alloc::boxed::Box$LT$T$GT$::new::h121d1d0fd1fc2533(&var_120);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hda5a6707fa3c012c(2, var_d8);
        label_4b2ec9:
        int32_t var_150_1 = r13;
        std::path::Path::components::h4f3217acf0fc8653(&var_120, arg1, arg2);
        r13_1 = nullptr;
        std::path::Path::components::h4f3217acf0fc8653(&var_e0, 1, 0);
        
        if (!_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(
            &var_120, &var_e0))
        {
            if (arg3)
            {
                char* rax_1;
                int64_t rdx_2;
                rax_1 = std::path::Path::parent::h65c9a340a6266f2d(arg1, arg2);
                
                if (!rax_1)
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha4208e868ecb88cc(
                        &var_e0, "failed to create whole tree: cre…", 0x1b);
                    int64_t var_c8;
                    var_c8 = 1;
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h71810d9408842807(alloc::boxed::Box$LT$T$GT$::new::h121d1d0fd1fc2533(&var_e0), &data_520578);
                }
                else
                {
                    int128_t* rax_2 =
                        uu_mkdir::create_dir::ha7ee258293152955(rax_1, rdx_2, 1, arg4, 1, arg6);
                    
                    if (rax_2)
                        return rax_2;
                }
            }
            
            int64_t rax_5 = std::fs::create_dir::h301da8cdba059b54(arg1);
            
            if (rax_5)
            {
                if (!std::path::Path::is_dir::h9ac0db933706da51(arg1, arg2))
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3ed53d85887f0f2d(rax_5);
                return nullptr;
            }
            
            if (arg4)
            {
                char** rax_7;
                int64_t rdx_4;
                rax_7 = uucore::util_name::h60d842bf27b05e82();
                var_160 = rax_7;
                int64_t var_158_2 = rdx_4;
                var_120 = 1;
                char* var_118_1 = arg1;
                uint64_t var_110_1 = arg2;
                int32_t var_108;
                var_108 = 1;
                var_140 = &var_160;
                int64_t (* var_138_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6a55cddc5280de;
                int64_t* var_130_1 = &var_120;
                int64_t (* var_128_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_e0 = &data_520608;
                int64_t var_d8_2 = 3;
                int64_t var_c0_2 = 0;
                char** var_d0_2 = &var_140;
                int64_t var_c8_2 = 2;
                std::io::stdio::_print::he918bceb0c89db46(&var_e0);
            }
            
            int32_t r15_1 = arg6;
            
            if (var_150_1 == 2)
            {
                int32_t rax_8 =
                    uucore::features::fsxattr::get_acl_perm_bits_from_xattr::h877432bdc0435850(
                    arg1);
                
                if (arg5)
                    r15_1 =
                        (uucore::features::mode::get_umask::hd2aa58752ad993fa() & 0x13f) ^ 0x1ff;
                
                r15_1 |= rax_8;
            }
            
            return uu_mkdir::chmod::hedcae91ac0dc9632(arg1, arg2, r15_1);
        }
    }
    return r13_1;
}
