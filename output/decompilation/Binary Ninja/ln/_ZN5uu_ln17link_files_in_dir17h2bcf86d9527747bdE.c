
  uint64_t uu_ln::link_files_in_dir::h2bcf86d9527747bd(void* arg1, int64_t arg2, char* arg3, uint64_t arg4, void* arg5)

{
    void* r12 = arg1;
    void* const var_120;
    uint64_t var_118;
    
    if (!std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4))
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_118, arg3, 
            arg4);
        var_120 = nullptr;
        return alloc::boxed::Box$LT$T$GT$::new::h9832a2155b69f23f(&var_120);
    }
    
    int64_t rax_1;
    int64_t rdx;
    rax_1 = std::thread::local::LocalKey$LT$T$GT$::with::h0bfd1cb4445fe4b8();
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::he692588f474a850d(&var_120, 
        arg2, rax_1, rdx);
    int128_t var_100;
    int128_t var_48_1 = var_100;
    int128_t var_110;
    int128_t var_58_1 = var_110;
    int128_t var_68 = var_120;
    uint64_t result;
    
    if (!arg2)
        result = 0;
    else
    {
        void* var_70_1 = r12 + arg2 * 0x18;
        void* rax_3;
        rax_3 = *(arg5 + 0x36) == 2;
        rax_3 &= *(arg5 + 0x34);
        void* rax_4 = r12 + 0x18;
        uint64_t rbx;
        rbx = 1;
        
        while (true)
        {
            void* rbp_1 = rax_4;
            char rax_5;
            
            if (rax_3)
                rax_5 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg3, arg4);
            
            uint64_t* var_e8;
            char var_d0;
            uint64_t var_c8;
            uint64_t** var_b8;
            void var_90;
            
            if (rax_3 && rax_5)
            {
                uint64_t var_98;
                
                if (std::path::Path::is_file::h6e28d87ff76ffc41(arg3, arg4))
                {
                    uint64_t rax_7 = std::fs::remove_file::ha037a510dc62fc80(arg3);
                    var_98 = rax_7;
                    
                    if (!rax_7)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h34c9e922b39888ae(&var_98);
                    else
                    {
                        var_c8 = rax_7;
                        uint64_t* rax_8;
                        int64_t rdx_2;
                        rax_8 = uucore::util_name::h074417a1e6395129();
                        var_e8 = rax_8;
                        int64_t var_e0_1 = rdx_2;
                        var_b8 = &var_e8;
                        int64_t (* var_b0_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h45ff57c8145456ef;
                        var_120 = &data_4f6038;
                        var_118 = 2;
                        var_100 = 0;
                        var_110 = &var_b8;
                        *var_110[8] = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                        var_e8 = 1;
                        char* var_e0_2 = arg3;
                        uint64_t var_d8_1 = arg4;
                        var_d0 = 1;
                        var_b8 = &var_e8;
                        int64_t (* var_b0_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        uint64_t* var_a8_1 = &var_c8;
                        int64_t (* var_a0_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                        var_120 = &data_4f6058;
                        var_118 = 3;
                        var_100 = 0;
                        var_110 = &var_b8;
                        *var_110[8] = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0da376499adda0be(
                            &var_c8);
                    }
                }
                
                if (std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4))
                {
                    uint64_t rax_14 = std::fs::remove_dir::h43fe0fb1c7b95b6b(arg3);
                    var_98 = rax_14;
                    
                    if (!rax_14)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h34c9e922b39888ae(&var_98);
                    else
                    {
                        var_c8 = rax_14;
                        uint64_t* rax_15;
                        int64_t rdx_8;
                        rax_15 = uucore::util_name::h074417a1e6395129();
                        var_e8 = rax_15;
                        int64_t var_e0_5 = rdx_8;
                        var_b8 = &var_e8;
                        int64_t (* var_b0_5)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h45ff57c8145456ef;
                        var_120 = &data_4f6038;
                        var_118 = 2;
                        var_100 = 0;
                        var_110 = &var_b8;
                        *var_110[8] = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                        var_e8 = 1;
                        char* var_e0_6 = arg3;
                        uint64_t var_d8_3 = arg4;
                        var_d0 = 1;
                        var_b8 = &var_e8;
                        int64_t (* var_b0_6)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        uint64_t* var_a8_2 = &var_c8;
                        int64_t (* var_a0_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                        var_120 = &data_4f6058;
                        var_118 = 3;
                        var_100 = 0;
                        var_110 = &var_b8;
                        *var_110[8] = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0da376499adda0be(
                            &var_c8);
                    }
                }
                
                std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_90, 
                    arg3, arg4);
                goto label_465ae6;
            }
            
            char* r15_1 = *(r12 + 8);
            int64_t r13_1 = *(r12 + 0x10);
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_120, r15_1, r13_1);
            void* const rax_11;
            
            if (!(var_120 & 1))
            {
                uint64_t r15_2 = var_118;
                int64_t rax_12;
                int64_t rdx_5;
                rax_12 = std::path::Path::file_name::h6d40d88bf3fb287a(r15_2, var_110);
                
                if (!rax_12)
                    std::path::Path::join::h001e706606c28daa(&var_90, arg3, arg4, r15_2);
                else
                    std::path::Path::join::h001e706606c28daa(&var_90, arg3, arg4, rax_12);
                
                label_465ae6:
                char* var_88;
                uint64_t var_80;
                
                if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd366270c5ee0e306(
                    &var_68, &var_90))
                {
                    uint64_t rax_19;
                    int64_t* rdx_12;
                    rax_19 = uu_ln::link::hcb5f3490f1fb339b(*(r12 + 8), *(r12 + 0x10), var_88, 
                        var_80, arg5);
                    
                    if (!rax_19)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h10bf4845f61eafbd(0, rdx_12);
                    else
                    {
                        var_c8 = rax_19;
                        uint64_t* rax_20;
                        int64_t rdx_13;
                        rax_20 = uucore::util_name::h074417a1e6395129();
                        var_e8 = rax_20;
                        int64_t var_e0_9 = rdx_13;
                        var_b8 = &var_e8;
                        int64_t (* var_b0_8)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h45ff57c8145456ef;
                        var_120 = &data_4f6038;
                        var_118 = 2;
                        var_100 = 0;
                        var_110 = &var_b8;
                        *var_110[8] = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                        var_e8 = &var_c8;
                        int64_t (* var_e0_10)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hed818a206c69414d;
                        var_120 = &data_4f60d8;
                        var_118 = 2;
                        var_100 = 0;
                        var_110 = &var_e8;
                        *var_110[8] = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3739735bf7fffe55(var_c8, rdx_12);
                        rbx = 0;
                    }
                }
                else
                {
                    uint64_t* rax_18;
                    int64_t rdx_10;
                    rax_18 = uucore::util_name::h074417a1e6395129();
                    var_e8 = rax_18;
                    int64_t var_e0_7 = rdx_10;
                    var_b8 = &var_e8;
                    int64_t (* var_b0_7)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h45ff57c8145456ef;
                    var_120 = &data_4f6038;
                    var_118 = 2;
                    var_100 = 0;
                    var_110 = &var_b8;
                    *var_110[8] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                    var_c8 = var_88;
                    var_b8 = *(r12 + 8);
                    var_e8 = &var_c8;
                    uint64_t (* var_e0_8)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    uint64_t*** var_d8_4 = &var_b8;
                    var_d0 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    var_120 = &data_4f60a8;
                    var_118 = 3;
                    var_100 = 0;
                    var_110 = &var_e8;
                    *var_110[8] = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                    rbx = 0;
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3184c1608c40fe12(&var_120, var_88, var_80);
                int64_t var_d8_5 = var_110;
                var_e8 = var_120;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h05975b5bada9d9c2(&var_68, 
                    &var_e8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hba0bfa390dca4ccb(&var_90);
                rax_11 = 0x18;
                
                if (rbp_1 == var_70_1)
                    rax_11 = nullptr;
                
                if (rbp_1 == var_70_1)
                    break;
            }
            else
            {
                uint64_t* rax_10;
                int64_t rdx_4;
                rax_10 = uucore::util_name::h074417a1e6395129();
                var_e8 = rax_10;
                int64_t var_e0_3 = rdx_4;
                var_b8 = &var_e8;
                int64_t (* var_b0_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h45ff57c8145456ef;
                var_120 = &data_4f6038;
                var_118 = 2;
                var_100 = 0;
                var_110 = &var_b8;
                *var_110[8] = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                var_e8 = 1;
                char* var_e0_4 = r15_1;
                int64_t var_d8_2 = r13_1;
                var_d0 = 1;
                var_b8 = &var_e8;
                int64_t (* var_b0_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_120 = &data_4f6088;
                var_118 = 2;
                var_100 = 0;
                var_110 = &var_b8;
                *var_110[8] = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                rbx = 0;
                rax_11 = 0x18;
                
                if (rbp_1 == var_70_1)
                    rax_11 = nullptr;
                
                if (rbp_1 == var_70_1)
                    goto label_465d9e;
            }
            
            rax_4 = rax_11 + rbp_1;
            r12 = rbp_1;
        }
        
        if (!(rbx & 1))
        {
            label_465d9e:
            var_120 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h9832a2155b69f23f(&var_120);
        }
        else
            result = 0;
    }
    
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::hab08fbae43caaa47(&var_68);
    return result;
}
