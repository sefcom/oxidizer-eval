
  fn uu_split::n_chunks_by_line_round_robin::h3c8d5c037c5c2f2d(arg1: *mut c_void, arg2: *mut i64, arg3: i64, arg4: i64, arg5: *mut i64) -> u64

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_a0: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_68: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_a0);
    let mut var_80: *mut i64 = nullptr;
    let var_78: i64 = 8;
    let var_70: i64 = 0;
    let mut result: u64;
    let mut var_98: i64;
    let mut result_4: u64;
    let mut rdx_1: i64;
    let mut r15_1: i64;
    
    if arg4 == 0
    {
        _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h95c34a5c8d1a9d91(&var_a0, arg3, arg1, *arg1.byte_offset(0xa1));
        let r15_2: *mut i64 = var_a0;
        let result_1: u64;
        result = result_1;
        
        if -(r15_2) == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&var_80);
        }
        else
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&var_80);
            var_80 = r15_2;
            let result_2: u64 = result;
            let var_90: *mut i64;
            let var_70_1: *mut i64 = var_90;
            let rax_13: i8 = *arg1.byte_offset(0xa2);
            
            if arg3 != 0
            {
                let rcx_1: i64 = *arg1.byte_offset(0x88);
                let mut rbp_2: i64 = 0;
                let mut rbx_1: i64 = 0;
                
                loop
                {
                    var_a0 = nullptr;
                    var_98 = 1;
                    let var_90_2: u64 = 0;
                    let mut rax_15: i8;
                    rax_15 = std::io::BufRead::read_until::h0e9a123d5e254a87(arg2, rax_13, &var_a0);
                    
                    if (rax_15 & 1) != 0
                    {
                        goto 'label_471852;
                    }
                    
                    if rdx_1 == 0
                    {
                        goto 'label_47186e;
                    }
                    
                    r15_1 = var_98;
                    let mut rdx_9: u64;
                    
                    if (rbp_2 | arg3) >> 0x20 == 0
                    {
                        rdx_9 = COMBINE(0, rbp_2) % arg3;
                    }
                    else
                    {
                        rdx_9 = COMBINE(0, rbp_2) % arg3;
                    }
                    
                    let mut result_3: u64;
                    _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::h595821988eb35f9a(&result_3, &var_80, rdx_9, arg1);
                    result = result_3;
                    
                    if result != 0
                    {
                        goto 'label_47189b;
                    }
                    
                    let var_50: *mut i64;
                    uu_split::custom_write_all::h5ae19a5a4a9a7063(&result_3, r15_1, var_90_2, 
                        var_50, rcx_1);
                    
                    if result_3 == 1
                    {
                        result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        break;
                    }
                    
                    rbx_1 += *result_3[1] ^ 1;
                    
                    if rbx_1 == arg3
                    {
                        goto 'label_47186e;
                    }
                    
                    rbp_2 += 1;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(
                        var_a0, r15_1);
                }
                
                result = result_4;
                goto 'label_47189b;
            }
            
            var_a0 = nullptr;
            var_98 = 1;
            let var_90_4: i64 = 0;
            let mut rax_27: i8;
            rax_27 = std::io::BufRead::read_until::h0e9a123d5e254a87(arg2, rax_13, &var_a0);
            
            if (rax_27 & 1) != 0
            {
                goto 'label_471852;
            }
            
            if rdx_1 != 0
            {
                core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                /* no return */
            }
            
            'label_47186e:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_a0, 
                var_98);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&var_80);
            result = 0;
        }
    }
    else
    {
        let rax_1: i8 = *arg1.byte_offset(0xa2);
        
        if arg3 != 0
        {
            let mut r12_1: i64 = 0;
            
            loop
            {
                var_a0 = nullptr;
                var_98 = 1;
                let var_90_1: u64 = 0;
                let mut rax_2: i8;
                rax_2 = std::io::BufRead::read_until::h0e9a123d5e254a87(arg2, rax_1, &var_a0);
                
                if (rax_2 & 1) != 0
                {
                    goto 'label_471852;
                }
                
                if rdx_1 == 0
                {
                    goto 'label_47186e;
                }
                
                r15_1 = var_98;
                
                if (r12_1 | arg3) >> 0x20 == 0
                {
                    if COMBINE(0, r12_1) % arg3 == arg5.byte_offset(-1)
                    {
                        'label_47163a:
                        
                        if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_68, r15_1, var_90_1) != 0
                        {
                            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            break;
                        }
                    }
                }
                else if COMBINE(0, r12_1) % arg3 == arg5.byte_offset(-1)
                {
                    goto 'label_47163a;
                }
                
                r12_1 += 1;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(
                    var_a0, r15_1);
            }
            
            result = result_4;
            goto 'label_47189b;
        }
        
        var_a0 = nullptr;
        var_98 = 1;
        let var_90_3: i64 = 0;
        let mut rax_26: i8;
        rax_26 = std::io::BufRead::read_until::h0e9a123d5e254a87(arg2, rax_1, &var_a0);
        
        if (rax_26 & 1) == 0
        {
            if rdx_1 == 0
            {
                goto 'label_47186e;
            }
            
            core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
            /* no return */
        }
        
        'label_471852:
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        r15_1 = var_98;
        'label_47189b:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_a0, r15_1);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(
            &var_80);
    }
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1369307f6e9c4811(var_68);
    result
}
