
  int64_t uu_cut::cut_files::hab9ba34aeaa70600(int64_t* arg1, int32_t* arg2)

{
    int64_t* rbx = arg1;
    int64_t rax = arg1[2];
    int128_t var_d8;
    int128_t var_b0;
    
    if (!rax)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5054b97c46bbc40b(&var_b0, 
            "-: \n: Is a directory\ndelimiter…", 1);
        int64_t var_a0;
        int64_t var_c8_1 = var_a0;
        var_d8 = var_b0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::he294ab4259f19bac(rbx, &var_d8);
        rax = rbx[2];
    }
    
    int64_t rcx = rbx[1];
    int64_t var_48 = rcx;
    int64_t var_40 = rcx + rax * 0x18;
    void* i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c649708cac16010(&var_48);
    
    if (i_2)
    {
        void* i_1 = i_2;
        int64_t* rax_4 = arg2;
        int64_t rcx_1 = *rax_4;
        int64_t rcx_2 = rax_4[8];
        int64_t rcx_3 = rax_4[9];
        char var_b4_1 = 0;
        void* i;
        
        do
        {
            int128_t* var_e8;
            char var_c0;
            int128_t* var_80;
            uint64_t rbx_1;
            char* rbp_1;
            
            if (var_b4_1 & 1)
            {
                while (true)
                {
                    rbp_1 = *(i_1 + 8);
                    rbx_1 = *(i_1 + 0x10);
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9e95b78712a5b126(rbp_1, rbx_1, "-: \n: Is a directory\ndelimiter…", 1))
                    {
                        if (!std::path::Path::is_dir::h9ac0db933706da51(rbp_1, rbx_1))
                            break;
                        
                        int64_t rax_11;
                        int64_t rdx_2;
                        rax_11 = uucore::util_name::h60d842bf27b05e82();
                        var_d8 = rax_11;
                        *var_d8[8] = rdx_2;
                        var_e8 = &var_d8;
                        int64_t (* var_e0_3)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hafe5f0e7dc41fbf4;
                        var_b0 = &data_528e58;
                        *var_b0[8] = 2;
                        int64_t var_90_3 = 0;
                        int128_t** var_a0_3 = &var_e8;
                        int64_t var_98_3 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
                        var_d8 = 0;
                        *var_d8[8] = rbp_1;
                        uint64_t var_c8_3 = rbx_1;
                        var_c0 = 0;
                        var_e8 = &var_d8;
                        int64_t (* var_e0_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_b0 = &data_528e78;
                        *var_b0[8] = 2;
                        int64_t var_90_4 = 0;
                        int128_t** var_a0_4 = &var_e8;
                        int64_t var_98_4 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    }
                    
                    void* i_4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c649708cac16010(&var_48);
                    i_1 = i_4;
                    
                    if (!i_4)
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7a16c3da1cf76162(arg1);
                }
                
                label_4b70d9:
                std::fs::File::open::h862e55e715a37fbf(&var_b0, rbp_1);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd65893d8ae3f9995(&var_d8, &var_b0, i_1);
                int128_t* rax_12 = var_d8;
                void** const rcx_4;
                
                if (!rax_12)
                {
                    rax_12 = uu_cut::cut_files::_$u7b$$u7b$closure$u7d$$u7d$::h0eca3536022a71dc(
                        arg2, *var_d8[8]);
                    rcx_4 = &data_528da0;
                    
                    if (rax_12)
                        goto label_4b7155;
                }
                else
                {
                    rcx_4 = *var_d8[8];
                    label_4b7155:
                    var_80 = rax_12;
                    void** const var_78_1 = rcx_4;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(rcx_4[0xc](rax_12));
                    int128_t* rax_15;
                    int64_t rdx_6;
                    rax_15 = uucore::util_name::h60d842bf27b05e82();
                    var_e8 = rax_15;
                    int64_t var_e0_5 = rdx_6;
                    var_d8 = &var_e8;
                    *var_d8[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hafe5f0e7dc41fbf4;
                    int128_t** var_c8_4 = &var_80;
                    var_c0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5c8ad0c11d220d0d;
                    var_b0 = &data_528e28;
                    *var_b0[8] = 3;
                    int64_t var_90_5 = 0;
                    int128_t* var_a0_5 = &var_d8;
                    int64_t var_98_5 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hd9512be231cb7e3d(&var_80);
                }
            }
            else
            {
                while (true)
                {
                    rbp_1 = *(i_1 + 8);
                    rbx_1 = *(i_1 + 0x10);
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9e95b78712a5b126(rbp_1, rbx_1, "-: \n: Is a directory\ndelimiter…", 1))
                    {
                        int128_t* rax_13;
                        
                        if (rcx_1 >= 2)
                        {
                            std::io::stdio::stdin::h7215cc131abb55d8();
                            rax_13 = uu_cut::cut_fields::h5b603ad8eeef3f36(
                                &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5, rcx_2, rcx_3, 
                                &rax_4[1]);
                        }
                        else
                        {
                            std::io::stdio::stdin::h7215cc131abb55d8();
                            rax_13 = uu_cut::cut_bytes::h04bd5adc21115d76(
                                &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5, rcx_2, rcx_3, 
                                &rax_4[1]);
                        }
                        
                        var_b4_1 = 1;
                        
                        if (rax_13)
                        {
                            var_80 = rax_13;
                            void** const var_78_2 = &data_528da0;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_13));
                            int128_t* rax_17;
                            int64_t rdx_8;
                            rax_17 = uucore::util_name::h60d842bf27b05e82();
                            var_e8 = rax_17;
                            int64_t var_e0_6 = rdx_8;
                            var_d8 = &var_e8;
                            *var_d8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hafe5f0e7dc41fbf4;
                            int128_t** var_c8_5 = &var_80;
                            var_c0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5c8ad0c11d220d0d;
                            var_b0 = &data_528e28;
                            *var_b0[8] = 3;
                            int64_t var_90_6 = 0;
                            int128_t* var_a0_6 = &var_d8;
                            int64_t var_98_6 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hd9512be231cb7e3d(&var_80);
                        }
                        
                        break;
                    }
                    
                    if (!std::path::Path::is_dir::h9ac0db933706da51(rbp_1, rbx_1))
                        goto label_4b70d9;
                    
                    int64_t rax_8;
                    int64_t rdx_1;
                    rax_8 = uucore::util_name::h60d842bf27b05e82();
                    var_d8 = rax_8;
                    *var_d8[8] = rdx_1;
                    var_e8 = &var_d8;
                    int64_t (* var_e0_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hafe5f0e7dc41fbf4;
                    var_b0 = &data_528e58;
                    *var_b0[8] = 2;
                    int64_t var_90_1 = 0;
                    int128_t** var_a0_1 = &var_e8;
                    int64_t var_98_1 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
                    var_d8 = 0;
                    *var_d8[8] = rbp_1;
                    uint64_t var_c8_2 = rbx_1;
                    var_c0 = 0;
                    var_e8 = &var_d8;
                    int64_t (* var_e0_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_b0 = &data_528e78;
                    *var_b0[8] = 2;
                    int64_t var_90_2 = 0;
                    int128_t** var_a0_2 = &var_e8;
                    int64_t var_98_2 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    void* i_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c649708cac16010(&var_48);
                    i_1 = i_3;
                    
                    if (!i_3)
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7a16c3da1cf76162(arg1);
                }
            }
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c649708cac16010(&var_48);
            i_1 = i;
        } while (i);
    }
    
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7a16c3da1cf76162(arg1);
}
