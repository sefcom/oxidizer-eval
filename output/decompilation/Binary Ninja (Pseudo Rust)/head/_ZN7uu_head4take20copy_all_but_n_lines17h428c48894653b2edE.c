
  fn uu_head::take::copy_all_but_n_lines::h428c48894653b2ed(arg1: *mut i32, arg2: *mut i64, arg3: i64, arg4: i8) -> i64

{
    let mut r15: i64 = arg3;
    let mut r13: *mut i32 = arg1;
    let mut var_a8: i64 = 0;
    let var_98: i128 = {0};
    let var_a0: i64 = 8;
    let mut var_f0: i64 = 0;
    let var_e8: *mut i64 = 8;
    let var_e0: i64 = 0;
    let mut r14: *mut i64 = 8;
    let mut rbp: i64 = 0;
    let mut rdi: *mut i64 = &var_a8;
    let mut var_50: i64 = 0;
    let mut r12: i64 = 0;
    let var_48: *mut i32 = r13;
    let mut result: i64;
    
    loop
    {
        let rax_1: *mut c_void =
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h5a5c158ece1d5465(rdi, 0);
        let mut var_d8: i128;
        let mut s_1: i128;
        let mut var_b8: i64;
        let mut var_88: i64;
        let mut s: i128;
        let mut var_6f: i128;
        
        if rax_1 == 0 || r12 <= *rax_1.byte_offset(0x20) + r15
        {
            let mut var_80: i64;
            
            if rbp == 0
            {
                rbp = 0;
                'label_466292:
                var_88 = 0;
                var_80 = 1;
                __builtin_memset(&s, 0, 0x19);
            }
            else
            {
                rbp -= 1;
                let rcx_2: i64 = rbp * 0x30;
                let rax_4: i64 = *r14.byte_offset(rcx_2);
                var_b8 = *r14.byte_offset(rcx_2).byte_offset(0x28);
                s_1 = *r14.byte_offset(rcx_2).byte_offset(0x18);
                var_d8 = *r14.byte_offset(rcx_2).byte_offset(8);
                
                if rax_4 == -0x8000000000000000
                {
                    goto 'label_466292;
                }
                
                *var_6f[0xf] = var_b8;
                let zmm0: i128 = var_d8;
                s = s_1;
                var_80 = zmm0;
                var_88 = rax_4;
            }
            
            uu_head::take::TakeAllLinesBuffer::fill_buffer::hfa940c1c6239deab(&var_d8, &var_88, 
                r13, arg4);
            
            if var_d8 == 1
            {
                let var_e0_2: i64 = rbp;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h8a37dd0e9d5ea0f7(
                    var_88, var_80);
                'label_466495:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_head..take..TakeAllLinesBuffer$GT$$GT$::h290366c11b9828a1(&var_f0);
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$uu_head..take..TakeAllLinesBuffer$GT$$GT$::h12acd9d2762baf7e(&var_a8);
                result = 1;
                break;
                break;
            }
            
            if *var_d8[8] == 0
            {
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h8a37dd0e9d5ea0f7(
                    var_88, var_80);
            }
            else
            {
                let rbx_1: i64 = s_1;
                var_b8 = var_6f;
                s_1 = s;
                var_d8 = var_88;
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::hb88475b5b5e73838(
                    &var_a8, &var_d8);
                r12 += rbx_1;
                rdi = &var_a8;
                continue;
            }
        }
        
        if r12 < r15
        {
            'label_4664be:
            let var_e0_3: i64 = rbp;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_head..take..TakeAllLinesBuffer$GT$$GT$::h290366c11b9828a1(&var_f0);
            core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$uu_head..take..TakeAllLinesBuffer$GT$$GT$::h12acd9d2762baf7e(&var_a8);
            result = 0;
            break;
        }
        
        if r12 != r15
        {
            'label_466372:
            let rax_6: *mut c_void =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h5a5c158ece1d5465(
                &var_a8, *var_98[8] - 1);
            
            if rax_6 != 0
            {
                let rax_7: *mut c_void = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get_mut::hd6f6500ac1b3986d(&var_a8);
                
                if rax_7 != 0
                {
                    uu_head::take::TakeAllLinesBuffer::write_lines::hf88d8b4ac800ff57(&var_d8, 
                        rax_7, arg2, r12 - r15 + *rax_6.byte_offset(0x28), arg4);
                    
                    if (var_d8 & 1) != 0
                    {
                        let var_e0_4: i64 = rbp;
                        goto 'label_466495;
                    }
                    
                    var_50 += *var_d8[8];
                    r12 -= s_1;
                    r15 = arg3;
                    r13 = var_48;
                    rdi = &var_a8;
                    
                    if uu_head::take::TakeAllLinesBuffer::is_empty::hb5e5799055f3f758(
                        *rax_7.byte_offset(0x10), *rax_7.byte_offset(0x18)) == 0
                    {
                        continue;
                    }
                    else
                    {
                        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h299678ec2b4397c3(&var_d8, &var_a8);
                        
                        if var_d8 != -0x8000000000000000
                        {
                            let zmm0_2: i128 = var_d8;
                            var_6f = var_b8;
                            s = s_1;
                            var_88 = zmm0_2;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h476a1d2b2c01abc7(&var_f0, &var_88);
                            r14 = var_e8;
                            rdi = &var_a8;
                            continue;
                        }
                    }
                    
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
            }
        }
        else
        {
            let rax_5: *mut c_void =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h5a5c158ece1d5465(
                &var_a8, *var_98[8] - 1);
            
            if rax_5 != 0
            {
                if *rax_5.byte_offset(0x28) == 0
                {
                    goto 'label_4664be;
                }
                
                goto 'label_466372;
            }
        }
        
        let var_e0_5: i64 = rbp;
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    result
}
