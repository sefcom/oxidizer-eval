
  uint64_t zoxide::cmd::edit::_$LT$impl$u20$zoxide..cmd..Run$u20$for$u20$zoxide..cmd..cmd..Edit$GT$::run::hf0d62a77defff36c(int64_t* arg1)

{
    char rax;
    uint64_t rdx;
    rax = zoxide::util::current_time::hc177626caa3eacce();
    uint64_t rbx = rdx;
    
    if (!(rax & 1))
    {
        int32_t var_e8;
        zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open::ha2e4ec58863e42c6(&var_e8);
        uint64_t var_e0;
        
        if (var_e8 == 1)
            return var_e0;
        
        int64_t var_a8;
        int64_t var_50_1 = var_a8;
        int128_t var_b8;
        int128_t var_60_1 = var_b8;
        int128_t var_c8;
        int128_t var_70_1 = var_c8;
        uint64_t var_88 = var_e0;
        int32_t var_120;
        int32_t* var_100;
        uint128_t var_d8;
        int32_t* var_a0;
        
        switch (*arg1)
        {
            case 0:
            {
                zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::add::ha2ad4cc963b8a029(&var_88, &arg1[1], rbx, -0x4010000000000000);
                goto label_48ec7c;
            }
            case 1:
            {
                zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::remove::he03cc2ff8669cdde(&var_88, &arg1[1]);
                label_48ec7c:
                uint64_t rax_6 = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(&var_88);
                
                if (!rax_6)
                {
                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                    var_e8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                    int64_t* rax_7 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_e8);
                    int64_t* r14_3 = rax_7;
                    int64_t* var_128 = rax_7;
                    int32_t* rax_8 = var_d8;
                    var_100 = rax_8;
                    void* var_f8_1 = &rax_8[*var_d8[8] * 0xa];
                    int64_t i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h98d702943815cc3a(&var_100);
                    
                    if (i)
                    {
                        do
                        {
                            var_120 = 1;
                            int64_t var_11c = rbx;
                            int128_t var_114;
                            *var_114[4] = i;
                            *var_114[0xc] = 9;
                            var_a0 = &var_120;
                            int64_t (* var_98_1)(char* arg1, int64_t* arg2) = _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
                            var_e8 = &data_5348e0;
                            int64_t var_e0_1 = 2;
                            var_c8 = 0;
                            var_d8 = &var_a0;
                            *var_d8[8] = 1;
                            uint64_t rax_10 = _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(
                                std::io::Write::write_fmt::h90c817d01f5acb46(&var_128, &var_e8), 
                                "fzf--exact--no-sort--bind=btab:u…", 3);
                            
                            if (rax_10)
                            {
                                rbx = rax_10;
                                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h5b7e4e16b06d2aa7(var_128);
                                goto label_48ec91;
                            }
                            
                            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h98d702943815cc3a(&var_100);
                        } while (i);
                        
                        r14_3 = var_128;
                    }
                    
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h5b7e4e16b06d2aa7(
                        r14_3);
                    core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_88);
                    return 0;
                }
                
                rbx = rax_6;
                break;
            }
            case 2:
            {
                zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::add::ha2ad4cc963b8a029(&var_88, &arg1[1], rbx, 0x3ff0000000000000);
                goto label_48ec7c;
            }
            case 3:
            {
                goto label_48ec7c;
            }
            case 4:
            {
                zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::sort_by_score::h86f3a64116ac2be7(&var_88, rbx);
                uint64_t rax_5 = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(&var_88);
                rbx = rax_5;
                
                if (!rax_5)
                {
                    zoxide::cmd::edit::_$LT$impl$u20$zoxide..cmd..cmd..Edit$GT$::get_fzf::hb8405321246d0372(&var_e8);
                    
                    if (var_e8 != 1)
                    {
                        int32_t var_e4;
                        var_120 = var_e4;
                        uint64_t var_11c_1 = var_e0;
                        uint128_t var_114_1 = var_d8;
                        zoxide::util::FzfChild::wait::h58b549ee022416b6(&var_a0, &var_120);
                        int32_t* rax_13 = var_a0;
                        uint64_t var_98;
                        rbx = var_98;
                        
                        if (-(rax_13) != -0x8000000000000000)
                        {
                            var_100 = rax_13;
                            uint64_t var_f8_2 = rbx;
                            int64_t var_90;
                            int64_t var_f0_1 = var_90;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_100);
                            core::ptr::drop_in_place$LT$zoxide..util..FzfChild$GT$::h8162ffcf0a6e609c(&var_120);
                            core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_88);
                            return 0;
                        }
                        
                        core::ptr::drop_in_place$LT$zoxide..util..FzfChild$GT$::h8162ffcf0a6e609c(
                            &var_120);
                    }
                    else
                        rbx = var_e0;
                }
                break;
            }
        }
        
        label_48ec91:
        core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_88);
    }
    
    return rbx;
}
