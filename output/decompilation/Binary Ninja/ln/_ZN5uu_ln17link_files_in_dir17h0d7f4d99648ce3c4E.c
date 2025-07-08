
  int128_t* uu_ln::link_files_in_dir::h0d7f4d99648ce3c4(int64_t arg1, int64_t arg2, char* arg3, uint64_t arg4, void* arg5)

{
    int128_t var_128;
    
    if (!std::path::Path::is_dir::h9ac0db933706da51(arg3, arg4))
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_128, arg3, 
            arg4);
        int64_t var_110_11 = -0x8000000000000000;
        return alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&var_128);
    }
    
    std::thread::local::LocalKey$LT$T$GT$::try_with::h0d9f788c4dae22c7(&var_128);
    int64_t rax_1;
    int64_t rdx;
    rax_1 = core::result::Result$LT$T$C$E$GT$::expect::h5a01a070efd742e5(&var_128);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h75cd1283ff7601d9(&var_128, 
        arg2, rax_1, rdx);
    int128_t var_108;
    int128_t var_48_1 = var_108;
    int128_t var_118;
    int128_t var_58_1 = var_118;
    int128_t var_68 = var_128;
    int64_t var_78 = arg1;
    int64_t var_70_1 = arg1 + arg2 * 0x18;
    void* i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca227a6f7df71fd4(&var_78);
    int128_t* result;
    
    if (!i_2)
        result = nullptr;
    else
    {
        void* i_1 = i_2;
        i_2 = *(arg5 + 0x34);
        void* rcx_1;
        rcx_1 = *(arg5 + 0x36) == 2;
        rcx_1 &= i_2;
        i_2 = 1;
        char var_cc_1 = i_2;
        void* i;
        
        do
        {
            char rax_4;
            
            if (rcx_1)
                rax_4 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg3, arg4);
            
            int128_t** var_f8;
            char var_e0;
            int128_t* var_c8;
            int128_t*** var_b8;
            void var_98;
            
            if (rcx_1 && rax_4)
            {
                if (std::path::Path::is_file::h82f08f46fb8d8099(arg3, arg4))
                {
                    int128_t* rax_6 = std::fs::remove_file::h49bdff741c081dc5(arg3);
                    
                    if (rax_6)
                    {
                        var_c8 = rax_6;
                        int128_t** rax_7;
                        int64_t rdx_2;
                        rax_7 = uucore::util_name::h60d842bf27b05e82();
                        var_f8 = rax_7;
                        int64_t var_f0_1 = rdx_2;
                        var_b8 = &var_f8;
                        int64_t (* var_b0_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                        var_128 = &data_52cf68;
                        *var_128[8] = 2;
                        var_108 = 0;
                        var_118 = &var_b8;
                        int64_t var_110_1 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                        var_f8 = 1;
                        char* var_f0_2 = arg3;
                        uint64_t var_e8_1 = arg4;
                        var_e0 = 1;
                        var_b8 = &var_f8;
                        int64_t (* var_b0_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        int128_t** var_a8_1 = &var_c8;
                        int64_t (* var_a0_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        var_128 = &data_52cf88;
                        *var_128[8] = 3;
                        var_108 = 0;
                        var_118 = &var_b8;
                        int64_t var_110_2 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h106838a02a13d9fd(
                            var_c8);
                    }
                }
                
                if (std::path::Path::is_dir::h9ac0db933706da51(arg3, arg4))
                {
                    int128_t* rax_9 = std::fs::remove_dir::h9bddb08efc8342d5(arg3);
                    
                    if (rax_9)
                    {
                        var_c8 = rax_9;
                        int128_t** rax_10;
                        int64_t rdx_3;
                        rax_10 = uucore::util_name::h60d842bf27b05e82();
                        var_f8 = rax_10;
                        int64_t var_f0_3 = rdx_3;
                        var_b8 = &var_f8;
                        int64_t (* var_b0_3)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                        var_128 = &data_52cf68;
                        *var_128[8] = 2;
                        var_108 = 0;
                        var_118 = &var_b8;
                        int64_t var_110_3 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                        var_f8 = 1;
                        char* var_f0_4 = arg3;
                        uint64_t var_e8_2 = arg4;
                        var_e0 = 1;
                        var_b8 = &var_f8;
                        int64_t (* var_b0_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        int128_t** var_a8_2 = &var_c8;
                        int64_t (* var_a0_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        var_128 = &data_52cf88;
                        *var_128[8] = 3;
                        var_108 = 0;
                        var_118 = &var_b8;
                        int64_t var_110_4 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h106838a02a13d9fd(
                            var_c8);
                    }
                }
                
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_98, 
                    arg3, arg4);
                goto label_4b9f80;
            }
            
            char* rbp_1 = *(i_1 + 8);
            int64_t r12_1 = *(i_1 + 0x10);
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_128, rbp_1, r12_1);
            
            if (!var_128)
            {
                int64_t r12_2 = *var_128[8];
                int64_t rax_12;
                int64_t rdx_7;
                rax_12 = std::path::Path::file_name::h79ecbb7850a9c7f3(r12_2, var_118);
                
                if (!rax_12)
                    std::path::Path::join::he50aec8d5a7ea1a7(&var_98, arg3, arg4, r12_2);
                else
                    std::path::Path::join::hbea12235afa21da2(&var_98, arg3, arg4, rax_12);
                
                label_4b9f80:
                char* var_90;
                
                if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h0bc31a4b071d28ea(
                    &var_68, &var_98))
                {
                    uint64_t var_88;
                    int128_t* rax_15;
                    int64_t* rdx_12;
                    rax_15 = uu_ln::link::h8c92ebae2dccde8f(*(i_1 + 8), *(i_1 + 0x10), var_90, 
                        var_88, arg5);
                    
                    if (rax_15)
                    {
                        var_c8 = rax_15;
                        int128_t** rax_16;
                        int64_t rdx_13;
                        rax_16 = uucore::util_name::h60d842bf27b05e82();
                        var_f8 = rax_16;
                        int64_t var_f0_9 = rdx_13;
                        var_b8 = &var_f8;
                        int64_t (* var_b0_8)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                        var_128 = &data_52cf68;
                        *var_128[8] = 2;
                        var_108 = 0;
                        var_118 = &var_b8;
                        int64_t var_110_9 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                        var_f8 = &var_c8;
                        int64_t (* var_f0_10)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h863403f9a165bd80;
                        var_128 = &data_52d008;
                        *var_128[8] = 2;
                        var_108 = 0;
                        var_118 = &var_f8;
                        int64_t var_110_10 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hae31b381e209e077(var_c8, rdx_12);
                        var_cc_1 = 0;
                    }
                }
                else
                {
                    int128_t** rax_14;
                    int64_t rdx_10;
                    rax_14 = uucore::util_name::h60d842bf27b05e82();
                    var_f8 = rax_14;
                    int64_t var_f0_7 = rdx_10;
                    var_b8 = &var_f8;
                    int64_t (* var_b0_7)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                    var_128 = &data_52cf68;
                    *var_128[8] = 2;
                    var_108 = 0;
                    var_118 = &var_b8;
                    int64_t var_110_7 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                    var_c8 = var_90;
                    var_b8 = *(i_1 + 8);
                    var_f8 = &var_c8;
                    int64_t (* var_f0_8)(int64_t* arg1, void* arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                    int128_t**** var_e8_4 = &var_b8;
                    var_e0 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                    var_128 = &data_52cfd8;
                    *var_128[8] = 3;
                    var_108 = 0;
                    var_118 = &var_f8;
                    int64_t var_110_8 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                    var_cc_1 = 0;
                }
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbf396db49ef6ba51(&var_128, &var_98);
                int64_t var_e8_5 = var_118;
                var_f8 = var_128;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hc95a599cc62b1fc4(&var_68, 
                    &var_f8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&var_98);
            }
            else
            {
                int128_t** rax_11;
                int64_t rdx_6;
                rax_11 = uucore::util_name::h60d842bf27b05e82();
                var_f8 = rax_11;
                int64_t var_f0_5 = rdx_6;
                var_b8 = &var_f8;
                int64_t (* var_b0_5)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                var_128 = &data_52cf68;
                *var_128[8] = 2;
                var_108 = 0;
                var_118 = &var_b8;
                int64_t var_110_5 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                var_f8 = 1;
                char* var_f0_6 = rbp_1;
                int64_t var_e8_3 = r12_1;
                var_e0 = 1;
                var_b8 = &var_f8;
                int64_t (* var_b0_6)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_128 = &data_52cfb8;
                *var_128[8] = 2;
                var_108 = 0;
                var_118 = &var_b8;
                int64_t var_110_6 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                var_cc_1 = 0;
            }
            
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca227a6f7df71fd4(&var_78);
            i_1 = i;
        } while (i);
        
        if (var_cc_1 & 1)
            result = nullptr;
        else
        {
            int64_t var_110_12 = -0x7fffffffffffffff;
            result = alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&var_128);
        }
    }
    
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h5977e179e61e5eb6(&var_68);
    return result;
}
