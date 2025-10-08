
  fn zoxide::cmd::edit::_$LT$impl$u20$zoxide..cmd..Run$u20$for$u20$zoxide..cmd..cmd..Edit$GT$::run::hf0d62a77defff36c(arg1: *mut i64) -> u64

{
    let mut rax: i8;
    let mut rdx: u64;
    rax = zoxide::util::current_time::hc177626caa3eacce();
    let mut rbx: u64 = rdx;
    
    if (rax & 1) == 0
    {
        let mut var_e8: i32;
        zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open::ha2e4ec58863e42c6(&var_e8);
        let var_e0: u64;
        
        if var_e8 == 1
        {
            return var_e0;
        }
        
        let var_a8: i64;
        let var_50_1: i64 = var_a8;
        let var_b8: i128;
        let var_60_1: i128 = var_b8;
        let mut var_c8: i128;
        let var_70_1: i128 = var_c8;
        let mut var_88: u64 = var_e0;
        let mut var_120: i32;
        let mut var_100: *mut i32;
        let mut var_d8: u128;
        let mut var_a0: *mut i32;
        
        match *arg1
        {
            0 =>
            {
                zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::add::ha2ad4cc963b8a029(&var_88, &arg1[1], rbx, -0x4010000000000000);
                goto 'label_48ec7c;
            }
            1 =>
            {
                zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::remove::he03cc2ff8669cdde(&var_88, &arg1[1]);
                'label_48ec7c:
                let rax_6: u64 = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(&var_88);
                
                if rax_6 == 0
                {
                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                    var_e8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                    let rax_7: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_e8);
                    let mut r14_3: *mut i64 = rax_7;
                    let mut var_128: *mut i64 = rax_7;
                    let rax_8: *mut i32 = var_d8;
                    var_100 = rax_8;
                    let var_f8_1: *mut c_void = &rax_8[*var_d8[8] * 0xa];
                    let mut i: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h98d702943815cc3a(&var_100);
                    
                    if i != 0
                    {
                        do
                        {
                            var_120 = 1;
                            let var_11c: i64 = rbx;
                            let mut var_114: i128;
                            *var_114[4] = i;
                            *var_114[0xc] = 9;
                            var_a0 = &var_120;
                            let var_98_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
                            var_e8 = &data_5348e0;
                            let var_e0_1: i64 = 2;
                            var_c8 = 0;
                            var_d8 = &var_a0;
                            *var_d8[8] = 1;
                            let rax_10: u64 = _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(
                                std::io::Write::write_fmt::h90c817d01f5acb46(&var_128, &var_e8), 
                                "fzf--exact--no-sort--bind=btab:u…", 3);
                            
                            if rax_10 != 0
                            {
                                rbx = rax_10;
                                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h5b7e4e16b06d2aa7(var_128);
                                goto 'label_48ec91;
                            }
                            
                            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h98d702943815cc3a(&var_100);
                        } while i != 0;
                        
                        r14_3 = var_128;
                    }
                    
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h5b7e4e16b06d2aa7(
                        r14_3);
                    core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_88);
                    return 0;
                }
                
                rbx = rax_6;
            }
            2 =>
            {
                zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::add::ha2ad4cc963b8a029(&var_88, &arg1[1], rbx, 0x3ff0000000000000);
                goto 'label_48ec7c;
            }
            3 =>
            {
                goto 'label_48ec7c;
            }
            4 =>
            {
                zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::sort_by_score::h86f3a64116ac2be7(&var_88, rbx);
                let rax_5: u64 = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(&var_88);
                rbx = rax_5;
                
                if rax_5 == 0
                {
                    zoxide::cmd::edit::_$LT$impl$u20$zoxide..cmd..cmd..Edit$GT$::get_fzf::hb8405321246d0372(&var_e8);
                    
                    if var_e8 != 1
                    {
                        let var_e4: i32;
                        var_120 = var_e4;
                        let var_11c_1: u64 = var_e0;
                        let var_114_1: u128 = var_d8;
                        zoxide::util::FzfChild::wait::h58b549ee022416b6(&var_a0, &var_120);
                        let rax_13: *mut i32 = var_a0;
                        let var_98: u64;
                        rbx = var_98;
                        
                        if -(rax_13) != -0x8000000000000000
                        {
                            var_100 = rax_13;
                            let var_f8_2: u64 = rbx;
                            let var_90: i64;
                            let var_f0_1: i64 = var_90;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_100);
                            core::ptr::drop_in_place$LT$zoxide..util..FzfChild$GT$::h8162ffcf0a6e609c(&var_120);
                            core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_88);
                            return 0;
                        }
                        
                        core::ptr::drop_in_place$LT$zoxide..util..FzfChild$GT$::h8162ffcf0a6e609c(
                            &var_120);
                    }
                    else
                    {
                        rbx = var_e0;
                    }
                }
            }
        }
        
        'label_48ec91:
        core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_88);
    }
    
    rbx
}
