
  fn uu_head::take::copy_all_but_n_bytes::h91484b8a539ab948(arg1: *mut i32, arg2: *mut i64, arg3: i64) -> i64

{
    let mut var_50: i64 = 0;
    let var_40: i128 = {0};
    let var_48: i64 = 8;
    let mut var_d0: i64 = 0;
    let var_c8: *mut i64 = 8;
    let var_c0: i64 = 0;
    let mut r13: *mut i64 = 8;
    let mut r15: i64 = 0;
    let mut var_98: i64 = 0;
    let mut r12: i64 = 0;
    let mut result: i64;
    
    loop
    {
        let rax_1: *mut c_void =
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::hcfbc0b54fcac4b80(&var_50);
        let mut rax_3: i64;
        
        if rax_1 != 0
        {
            rax_3 = uu_head::take::TakeAllBuffer::remaining_bytes::hb388a4c93e1b9bcb(rax_1) + arg3;
        }
        
        let mut var_b8: i64;
        let mut var_a8: i128;
        let mut var_88: i128;
        let mut var_78: i64;
        
        if rax_1 == 0 || r12 < rax_3
        {
            let mut var_b0: i64;
            let mut rax_4: i64;
            
            if r15 == 0
            {
                var_b0 = 1;
                var_a8 = {0};
                rax_4 = 0;
                r15 = 0;
            }
            else
            {
                r15 -= 1;
                let rcx_2: i64 = r15 << 5;
                rax_4 = *r13.byte_offset(rcx_2);
                let zmm0: i128 = *r13.byte_offset(rcx_2).byte_offset(8);
                let rcx_3: i64 = *r13.byte_offset(rcx_2).byte_offset(0x18);
                var_78 = rcx_3;
                var_88 = zmm0;
                *var_a8[8] = rcx_3;
                var_b0 = zmm0;
            }
            
            var_b8 = rax_4;
            let mut rax_5: i8;
            let mut rdx: i64;
            rax_5 = uu_head::take::TakeAllBuffer::fill_buffer::hf61126089cbcf29e(&var_b8, arg1);
            
            if (rax_5 & 1) != 0
            {
                let var_c0_2: i64 = r15;
                core::ptr::drop_in_place$LT$std..sys..os_str..bytes..Buf$GT$::he4bde5d3b504ae9d(
                    var_b8, var_b0);
                result = 1;
                break;
            }
            
            if rdx == 0
            {
                core::ptr::drop_in_place$LT$std..sys..os_str..bytes..Buf$GT$::he4bde5d3b504ae9d(
                    var_b8, var_b0);
            }
            else
            {
                var_78 = var_a8;
                var_88 = var_b8;
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::hc3973d42ceccac54(
                    &var_50, &var_88);
                r12 += rdx;
                continue;
            }
        }
        
        if r12 <= arg3
        {
            result = 0;
        }
        else
        {
            let rax_6: *mut c_void =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::hcfbc0b54fcac4b80(
                &var_50);
            
            if rax_6 == 0
            {
                let var_c0_4: i64 = r15;
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let mut rax_7: i8;
            let mut rdx_2: i64;
            rax_7 = uu_head::take::TakeAllBuffer::write_bytes_limit::h60c53a9a38fb6265(rax_6, arg2, 
                r12 - arg3);
            
            if (rax_7 & 1) == 0
            {
                var_98 += rdx_2;
                r12 -= rdx_2;
                
                if uu_head::take::TakeAllBuffer::is_empty::hbeb234606ca195c1(
                    *rax_6.byte_offset(0x10), *rax_6.byte_offset(0x18)) == 0
                {
                    continue;
                }
                else
                {
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hcb277b723d479f3b(&var_88, &var_50);
                    
                    if !(0 + -(var_88))
                    {
                        var_a8 = var_78;
                        var_b8 = var_88;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::ha8e9ce4204a5d833(&var_d0, &var_b8);
                        r13 = var_c8;
                        continue;
                    }
                }
                
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            result = 1;
        }
        
        let var_c0_3: i64 = r15;
        break;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_head..take..TakeAllBuffer$GT$$GT$::h76449acd591f3a78(&var_d0);
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$uu_head..take..TakeAllBuffer$GT$$GT$::h0a9a88a05ab26223(&var_50);
    result
}
