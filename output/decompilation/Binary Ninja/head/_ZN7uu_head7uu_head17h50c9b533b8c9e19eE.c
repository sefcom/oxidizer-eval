
  int64_t uu_head::uu_head::h50c9b533b8c9e19e(int64_t* arg1)

{
    int64_t rax = arg1[3];
    int64_t rcx = arg1[4];
    int64_t var_60 = rax;
    int64_t var_58 = rax + rcx * 0x18;
    void* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h49c4ce57715093e8(&var_60);
    
    if (i)
    {
        char rcx_3 = *(arg1 + 0x2a);
        bool rcx_4 = *(arg1 + 0x29);
        bool rsi = arg1[5] & !rcx_4;
        int64_t rcx_5 = *arg1;
        int64_t rcx_6 = arg1[1];
        char rcx_7 = *(arg1 + 0x2b);
        void** r15_1 = nullptr;
        
        do
        {
            int32_t* var_108;
            char var_100;
            int64_t var_f0;
            void** var_d8;
            int32_t var_d0;
            char const* const var_b0;
            void* var_a0;
            int64_t var_70;
            char const* const rbx_1;
            uint64_t r12_1;
            
            if (!rcx_3)
            {
                while (true)
                {
                    rbx_1 = *(i + 8);
                    r12_1 = *(i + 0x10);
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he651f17c72d2bfc1(rbx_1, r12_1, "-: \nsrc/uu/head/src/head.rs==> …", 1))
                        break;
                    
                    var_b0 = rbx_1;
                    uint64_t var_a8_1 = r12_1;
                    std::fs::File::open::h0c25e6f8dfd437ae(&var_d0, rbx_1);
                    
                    if (!var_d0)
                    {
                        int32_t fd_1;
                        int32_t fd = fd_1;
                        
                        if (rcx <= 1)
                        {
                            if (rcx_4)
                            {
                                label_4ba6f1:
                                
                                if (r15_1 & 1)
                                {
                                    var_108 = &data_52cf20;
                                    int64_t var_100_3 = 1;
                                    int64_t var_f8_7 = 8;
                                    var_f0 = {0};
                                    std::io::stdio::_print::he918bceb0c89db46(&var_108);
                                }
                                
                                var_a0 = &var_b0;
                                int64_t (* var_98_4)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a2559eaa6ef57c;
                                var_108 = &data_52cf40;
                                var_100 = 2;
                                int64_t var_e8_4 = 0;
                                void** var_f8_8 = &var_a0;
                                var_f0 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&var_108);
                            }
                        }
                        else if (!rsi)
                            goto label_4ba6f1;
                        
                        void** rax_15 = uu_head::head_file::h48e6bcfaf0dc6df4(&fd, arg1);
                        var_d8 = rax_15;
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::hcd6f8a6171cb1cbe(fd);
                        
                        if (rax_15)
                            goto label_4ba598;
                        
                        goto label_4ba2e5;
                    }
                    
                    int128_t* var_b8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::ha41e17c1af67ee82();
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    int64_t rax_2;
                    int64_t rdx_3;
                    rax_2 = uucore::util_name::h60d842bf27b05e82();
                    var_70 = rax_2;
                    int64_t var_68_1 = rdx_3;
                    var_a0 = &var_70;
                    int64_t (* var_98_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a2559eaa6ef57c;
                    int128_t** var_90_1 = &var_b8;
                    int64_t (* var_88_1)(int64_t* arg1, void* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha092e32133e67aba;
                    var_108 = &data_52ce60;
                    var_100 = 3;
                    int64_t var_e8_1 = 0;
                    void** var_f8_1 = &var_a0;
                    var_f0 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_108);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::hc0cdad0ceeb81ca9(var_b8);
                    i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h49c4ce57715093e8(&var_60);
                    
                    if (!i)
                        return 0;
                }
            }
            else
            {
                rbx_1 = *(i + 8);
                r12_1 = *(i + 0x10);
            }
            
            if (rcx <= 1)
            {
                if (rcx_4)
                {
                    label_4ba48b:
                    
                    if (r15_1 & 1)
                    {
                        var_108 = &data_52cf20;
                        int64_t var_100_1 = 1;
                        int64_t var_f8_2 = 8;
                        var_f0 = {0};
                        std::io::stdio::_print::he918bceb0c89db46(&var_108);
                    }
                    
                    var_108 = &data_52cf30;
                    var_100 = 1;
                    int64_t var_f8_3 = 8;
                    var_f0 = {0};
                    std::io::stdio::_print::he918bceb0c89db46(&var_108);
                }
            }
            else if (!rsi)
                goto label_4ba48b;
            
            std::io::stdio::stdin::h7215cc131abb55d8();
            var_a0 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
            int32_t* rax_5;
            char rdx_5;
            rax_5 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_a0);
            var_108 = rax_5;
            void** rax_9;
            
            switch (rcx_5)
            {
                case 0:
                {
                    rax_9 = uu_head::read_n_lines::hae3a156ed2e97641(&var_108);
                    break;
                }
                case 1:
                {
                    rax_9 =
                        uu_head::read_but_last_n_lines::h3962164e084296b5(&var_108, rcx_6, rcx_7);
                    break;
                }
                case 2:
                {
                    rax_9 = uu_head::read_n_bytes::h6fceecc1df8e2d16(&var_108);
                    break;
                }
                case 3:
                {
                    rax_9 = uu_head::read_but_last_n_bytes::hc5f1d0ad028c7bde(&var_108, rcx_6);
                    break;
                }
            }
            
            var_d8 = rax_9;
            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hd27fd97215145d3b(var_108, 
                rdx_5 & 1);
            
            if (rax_9)
            {
                label_4ba598:
                char rax_10 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he651f17c72d2bfc1(rbx_1, r12_1, "-: \nsrc/uu/head/src/head.rs==> …", 1);
                
                if (rax_10)
                    rbx_1 = "standard input";
                
                if (rax_10)
                    r12_1 = 0xe;
                
                var_b0 = rbx_1;
                uint64_t var_a8_2 = r12_1;
                var_a0 = &var_b0;
                int64_t (* var_98_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a2559eaa6ef57c;
                var_108 = &data_52cf60;
                int64_t var_100_2 = 2;
                int64_t var_e8_2 = 0;
                void** var_f8_4 = &var_a0;
                int64_t var_f0_1 = 1;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::hb3355800140cccf2(&var_48, &var_108);
                var_f0_1 = 1;
                var_108 = var_48;
                int64_t var_38;
                int64_t var_f8_5 = var_38;
                int128_t* rax_12 = alloc::boxed::Box$LT$T$GT$::new::h92b1183da66f27c9(&var_108);
                var_d0 = rax_12;
                void** const var_c8 = &data_52cfb8;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_12));
                int64_t rax_14;
                int64_t rdx_8;
                rax_14 = uucore::util_name::h60d842bf27b05e82();
                var_70 = rax_14;
                int64_t var_68_2 = rdx_8;
                var_a0 = &var_70;
                int64_t (* var_98_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a2559eaa6ef57c;
                int32_t* var_90_2 = &var_d0;
                int64_t (* var_88_2)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8560145aaa71c4e2;
                var_108 = &data_52ce60;
                var_100 = 3;
                int64_t var_e8_3 = 0;
                void** var_f8_6 = &var_a0;
                var_f0 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_108);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hb08365f676f654b9(var_d0, var_c8);
            }
            
            label_4ba2e5:
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h6d35cd5749ca4149(&var_d8);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h49c4ce57715093e8(&var_60);
            r15_1 = 1;
        } while (i);
    }
    
    return 0;
}
