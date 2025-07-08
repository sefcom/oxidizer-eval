
  fn uu_split::n_chunks_by_line_round_robin::hcac37cfac682ac2b(arg1: *mut c_void, arg2: *mut i64, arg3: *mut *mut i64, arg4: i64, arg5: i64) -> *mut i128

{
    std::io::stdio::stdout::h077da66234850927();
    let mut var_a8: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_80: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_a8);
    let mut var_78: *mut i64 = nullptr;
    let var_70: i64 = 8;
    let var_68: i64 = 0;
    let mut result: *mut i128;
    let mut result_4: *mut i128;
    let mut rdx_1: i64;
    
    if arg4 != 1
    {
        _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h5aea99d9a23c30d0(&var_a8, arg3, arg1, *arg1.byte_offset(0xa1));
        let rbp_2: *mut i64 = var_a8;
        let result_1: *mut i128;
        result = result_1;
        
        if rbp_2 != -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&var_78);
            var_78 = rbp_2;
            let result_2: *mut i128 = result;
            let var_98: *mut *mut i64;
            let var_68_1: *mut *mut i64 = var_98;
            let rbp_3: i8 = *arg1.byte_offset(0xa2);
            
            if arg3 == 0
            {
                var_a8 = nullptr;
                let var_a0_3: i64 = 1;
                let var_98_4: i64 = 0;
                let mut rax_25: i64;
                rax_25 = std::io::BufRead::read_until::h14f0ed33cb77f4c0(arg2, rbp_3, &var_a8);
                
                if rax_25 != 0
                {
                    goto 'label_4cdf13;
                }
                
                if rdx_1 == 0
                {
                    goto 'label_4cdf50;
                }
                
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                /* no return */
            }
            
            let rax_11: i64 = *arg1.byte_offset(0x88);
            let mut r12_2: i64 = 0;
            let mut rbx_1: i64 = 0;
            
            loop
            {
                var_a8 = nullptr;
                let var_a0_1: i64 = 1;
                let var_98_2: u64 = 0;
                let mut rax_12: i64;
                rax_12 = std::io::BufRead::read_until::h14f0ed33cb77f4c0(arg2, rbp_3, &var_a8);
                
                if rax_12 != 0
                {
                    goto 'label_4cdf13;
                }
                
                if rdx_1 == 0
                {
                    goto 'label_4cdf50;
                }
                
                let mut rdx_9: u64;
                
                if (r12_2 | arg3) >> 0x20 == 0
                {
                    rdx_9 = COMBINE(0, r12_2) % arg3;
                }
                else
                {
                    rdx_9 = COMBINE(0, r12_2) % arg3;
                }
                
                let mut result_3: *mut i128;
                _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::hcb920ccabbd9d626(&result_3, &var_78, rdx_9, arg1);
                result = result_3;
                
                if result != 0
                {
                    break;
                }
                
                let var_58: *mut *mut i64;
                uu_split::custom_write_all::h79f0c894f91cdf7a(&result_3, var_a0_1, var_98_2, 
                    var_58, rax_11);
                
                if result_3 != 0
                {
                    result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    goto 'label_4cdf19;
                }
                
                rbx_1 += *result_3[1] ^ 1;
                
                if rbx_1 == arg3
                {
                    goto 'label_4cdf50;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                    &var_a8);
                r12_2 += 1;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_a8);
        }
    }
    else
    {
        let rax_1: i8 = *arg1.byte_offset(0xa2);
        
        if arg3 == 0
        {
            var_a8 = nullptr;
            let var_a0_2: i64 = 1;
            let var_98_3: i64 = 0;
            let mut rax_24: i64;
            rax_24 = std::io::BufRead::read_until::h14f0ed33cb77f4c0(arg2, rax_1, &var_a8);
            
            if rax_24 == 0
            {
                if rdx_1 != 0
                {
                    core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                    /* no return */
                }
                
                'label_4cdf50:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                    &var_a8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&var_78);
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(
                    var_80);
                return nullptr;
            }
            
            'label_4cdf13:
            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
        else
        {
            let mut r15_1: i64 = 0;
            
            loop
            {
                var_a8 = nullptr;
                let var_a0: i64 = 1;
                let var_98_1: u64 = 0;
                let mut rax_2: i64;
                rax_2 = std::io::BufRead::read_until::h14f0ed33cb77f4c0(arg2, rax_1, &var_a8);
                
                if rax_2 != 0
                {
                    goto 'label_4cdf13;
                }
                
                if rdx_1 == 0
                {
                    goto 'label_4cdf50;
                }
                
                if (r15_1 | arg3) >> 0x20 == 0
                {
                    if COMBINE(0, r15_1) % arg3 == arg5 - 1
                    {
                        'label_4cdd09:
                        
                        if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_80, var_a0, var_98_1) != 0
                        {
                            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            break;
                        }
                    }
                }
                else if COMBINE(0, r15_1) % arg3 == arg5 - 1
                {
                    goto 'label_4cdd09;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                    &var_a8);
                r15_1 += 1;
            }
        }
        
        'label_4cdf19:
        result = result_4;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_a8);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(
        &var_78);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(var_80);
    result
}
