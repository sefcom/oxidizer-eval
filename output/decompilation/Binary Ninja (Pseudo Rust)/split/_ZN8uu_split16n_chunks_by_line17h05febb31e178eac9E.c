
  fn uu_split::n_chunks_by_line::h05febb31e178eac9(arg1: *mut i64, arg2: *mut c_void, arg3: *mut *mut c_void, arg4: i64, arg5: i64) -> u64

{
    let mut var_b0: i64 = 0;
    let var_a8: *mut i64 = 1;
    let var_a0: i64 = 0;
    let mut rax: i8;
    let mut rdx_1: i64;
    rax = uu_split::get_input_size::h76e4bf9c0daaab1c(&arg1[0xe], arg2, &var_b0, *arg1, arg1[1]);
    let mut result: u64;
    let mut rsi: *mut i64;
    
    if (rax & 1) == 0
    {
        if rdx_1 == 0 && (arg4 != 0 || *arg1.byte_offset(0xa1) != 0)
        {
            'label_471409:
            result = 0;
        }
        else
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            let mut var_78: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            let mut var_100: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_78);
            let mut var_f8: *mut i64 = nullptr;
            let var_f0_1: i64 = 8;
            let var_e8_1: i64 = 0;
            
            if arg3 == 0
            {
                core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
                /* no return */
            }
            
            let mut var_e0_1: u64;
            let mut r13_1: u64;
            
            if (rdx_1 | arg3) >> 0x20 != 0
            {
                let rdx_2: i64 = 0;
                let temp2_1: i32 = arg3;
                var_e0_1 = COMBINE(rdx_2, rdx_1) % temp2_1;
                r13_1 = COMBINE(rdx_2, rdx_1) / temp2_1;
                
                if arg4 == 0
                {
                    goto 'label_47113e;
                }
                
                goto 'label_4710fb;
            }
            
            let rax_9: i32 = rdx_1;
            let temp2_2: i32 = arg3;
            var_e0_1 = COMBINE(0, rax_9) % temp2_2;
            r13_1 = COMBINE(0, rax_9) / temp2_2;
            let mut var_98_1: i64;
            let mut rdx_4: i8;
            
            if arg4 != 0
            {
                'label_4710fb:
                var_98_1 = rdx_1;
                rdx_4 = *arg1.byte_offset(0xa1);
                'label_4711d0:
                let rax_16: i8 = *arg1.byte_offset(0xa2);
                let mut rbx_2: i64 = r13_1 + 1;
                var_78 = var_a8;
                let var_70: i64 = var_a0;
                let var_68_1: *mut c_void = arg2;
                let var_60_1: i8 = 0;
                let var_58_1: i8 = rax_16;
                let rcx_4: i64 = arg1[0x11];
                let mut r14: *mut *mut c_void = 1;
                let var_d8_2: i64 = -0x7fffffffffffffff;
                let mut var_108: u64;
                var_108 = rax_16;
                let mut rbp_1: i64 = 0;
                
                loop
                {
                    let mut var_48: i64;
                    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0018ef1f4ff01f8f(&var_48, &var_78);
                    let rax_20: i64 = var_48;
                    
                    if rax_20 != var_d8_2
                    {
                        let var_40: i64;
                        let mut r15_3: i64 = var_40;
                        
                        if rax_20 == -0x8000000000000000
                        {
                            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            break;
                        }
                        
                        let mut var_c8: i64 = rax_20;
                        let var_c0_1: i64 = r15_3;
                        let var_38: u64;
                        
                        if var_38 + rbp_1 < var_98_1
                        {
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hec3bc305ec2b1aaa(&var_c8, var_108);
                            r15_3 = var_c0_1;
                        }
                        
                        let mut result_3: u64;
                        
                        if (arg4 & 1) == 0
                        {
                            let mut result_5: u64;
                            _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::h595821988eb35f9a(&result_5, &var_f8, r14.byte_offset(-1), arg1);
                            let result_2: u64 = result_5;
                            
                            if result_2 != 0
                            {
                                result = result_2;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_c8, var_c0_1);
                                break;
                            }
                            
                            let var_80: *mut i64;
                            uu_split::custom_write_all::h5ae19a5a4a9a7063(&result_5, r15_3, var_38, 
                                var_80, rcx_4);
                            
                            if result_5 == 1
                            {
                                result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                'label_47143f:
                                result = result_3;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_c8, var_c0_1);
                                break;
                            }
                        }
                        else if r14 == arg5 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_100, r15_3, var_38) != 0
                        {
                            result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            goto 'label_47143f;
                        }
                        rbp_1 += var_38;
                        let mut rax_18: i32 = -1;
                        let mut r12_1: i64;
                        
                        if rbx_2 > rbp_1
                        {
                            r12_1 = arg4;
                        }
                        else
                        {
                            r12_1 = arg4;
                            
                            do
                            {
                                rbx_2 = rbx_2 + r13_1;
                                r14 += 1;
                                rax_18 += 1;
                            } while rbx_2 <= rbp_1;
                        }
                        
                        let mut rax_19: u64 = rax_18;
                        
                        if rax_18 <= 0
                        {
                            rax_19 = 0;
                        }
                        
                        if ((rdx_4 ^ 1) & 1) != 0
                        {
                            rax_19 = 0;
                        }
                        
                        if r12_1 != 0
                        {
                            rax_19 = 0;
                        }
                        
                        r14 -= rax_19;
                        r15_3 = r14 > arg5;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_c8, var_c0_1);
                        
                        if (r12_1 & r15_3) == 0
                        {
                            continue;
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&var_f8);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1369307f6e9c4811(
                        var_100);
                    goto 'label_471409;
                }
            }
            else
            {
                'label_47113e:
                let rax_11: i8 = *arg1.byte_offset(0xa1);
                _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h95c34a5c8d1a9d91(&var_78, arg3, arg1, rax_11);
                let r14_1: *mut i64 = var_78;
                let result_1: u64;
                
                if r14_1 != -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&var_f8);
                    var_98_1 = rdx_1;
                    var_f8 = r14_1;
                    let result_4: u64 = result_1;
                    let var_68: *mut *mut c_void;
                    let var_e8_2: *mut *mut c_void = var_68;
                    rdx_4 = rax_11;
                    goto 'label_4711d0;
                }
                
                result = result_1;
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&var_f8);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1369307f6e9c4811(var_100);
        }
        
        rsi = var_a8;
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        rsi = var_a8;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_b0, rsi);
    result
}
