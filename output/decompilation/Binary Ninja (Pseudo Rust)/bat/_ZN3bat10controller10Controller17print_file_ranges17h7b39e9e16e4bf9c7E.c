
  fn bat::controller::Controller::print_file_ranges::h7b39e9e16e4bf9c7(arg1: *mut i8, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64 @ r13, arg8: *mut c_void, arg9: *mut c_void) -> i64

{
    let var_20: i64 = arg7;
    let mut var_e8: i64 = 0;
    let mut var_e0: i64 = 1;
    let mut var_d8: i64 = 0;
    let r12_1: i64 = *arg9.byte_offset(0x28) + 1;
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h2ab28548f23fa4ab(r12_1, 8, 0x20);
    let var_48: i128 = {0};
    let mut var_58: i64 = rax_1;
    let var_50: i64 = rdx;
    let mut rax_2: i32 =
        bat::style::StyleComponents::snip::he74b3e7bba828b6e(arg2.byte_offset(0xc0));
    let var_112: i8 = rax_2;
    rax_2 ^= 1;
    let var_111: i8 = rax_2;
    rax_2 = 1;
    let mut var_104: i32 = rax_2;
    let mut var_f0: u64 = 0;
    let mut rbx_2: i64 = 0;
    let mut r15: i8 = 0;
    let mut rbp: i64 = 1;
    
    loop
    {
        if (r15 & 1) == 0
        {
            let mut var_b8: i8;
            bat::input::InputReader::read_line::h6988384c287f514e(&var_b8, arg8, &var_e8);
            let var_b0: i64;
            
            if var_b8 == 1
            {
                *arg1 = 0;
                *arg1.byte_offset(8) = var_b0;
                break;
            }
            
            let var_b7: i8;
            let mut var_a8: i64;
            let mut var_a0: i64;
            
            if var_b7 != 1
            {
                r15 = 1;
                
                if rbx_2 < r12_1 && (r15 & 1) == 0
                {
                    continue;
                }
            }
            else
            {
                var_a8 = var_d8;
                var_b8 = var_e8;
                var_e8 = 0;
                var_e0 = 1;
                var_d8 = 0;
                var_a0 = rbp;
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h5f2bd84eb9945f81(
                    &var_58, &var_b8);
                rbp += 1;
                rbx_2 = *var_48[8];
                'label_838426:
                
                if rbx_2 < r12_1 && (r15 & 1) == 0
                {
                    continue;
                }
            }
            
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hb0761a58fb998fd1(
                &var_b8, &var_58);
            let rcx_1: i64 = var_b8;
            
            if rcx_1 == -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$alloc..vec..Vec$LT$u8$GT$$C$usize$RP$$GT$$GT$::h26ce487b647d2482(-0x8000000000000000, var_b0);
            }
            else
            {
                rbx_2 = *var_48[8];
                let rax_7: *mut c_void =
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h3b0853890391e73f(
                    &var_58, rbx_2 - 1);
                let mut r14_1: u64;
                
                if rax_7 == 0
                {
                    r14_1 = 2;
                }
                else
                {
                    r14_1 = r15 & 1;
                    arg7 = *rax_7.byte_offset(0x18);
                }
                
                if r14_1 == 2
                {
                    arg7 = var_a0;
                }
                
                if r14_1 == 2
                {
                    r14_1 = 1;
                }
                
                let rax_8: i8 = bat::line_range::LineRanges::check::h858adae3b81fddb3(arg9, var_a0, 
                    r14_1, arg7);
                let var_97: i128;
                let var_78: i128;
                
                if rax_8 == 0
                {
                    let mut rax_12: u64;
                    
                    if ((var_111 | var_104 | var_f0) & 1) == 0
                    {
                        arg4(&var_b8, arg3, arg6);
                        rax_12 = var_b8;
                        
                        if rax_12 == 0xd
                        {
                            rax_12 = 1;
                            var_f0 = rax_12;
                            var_104 = 0;
                            goto 'label_8385de;
                        }
                    }
                    else
                    {
                        let mut rsi_6: u64;
                        rsi_6 = var_f0 | (var_112 & var_104);
                        var_f0 = rsi_6;
                        let mut rdx_3: i32;
                        rdx_3 = var_104 & var_111;
                        var_104 = rdx_3;
                        'label_8385de:
                        arg5(&var_b8, arg3, 0, arg6, var_a0, var_b0, var_a8, r14_1, arg7);
                        rax_12 = var_b8;
                        
                        if rax_12 == 0xd
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(rcx_1, var_b0);
                            continue;
                            continue;
                        }
                    }
                    
                    *arg1.byte_offset(0x40) = var_78;
                    let var_87: i128;
                    *arg1.byte_offset(0x31) = var_87;
                    *arg1.byte_offset(0x21) = var_97;
                    *arg1.byte_offset(0x11) = *var_a8[1];
                    *arg1.byte_offset(1) = var_b7;
                    *arg1 = rax_12;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(
                        rcx_1, var_b0);
                    break;
                }
                
                if rax_8 == 1
                {
                    arg5(&var_b8, arg3, 1, arg6, var_a0, var_b0, var_a8, r14_1, arg7);
                    
                    if var_b8 == 0xd
                    {
                        var_f0 = 0;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(rcx_1, var_b0);
                        continue;
                    }
                    
                    *arg1.byte_offset(0x40) = var_78;
                    let zmm0_2: i128 = var_b8;
                    *arg1.byte_offset(0x30) = var_97;
                    let var_98: i128;
                    *arg1.byte_offset(0x20) = var_98;
                    *arg1.byte_offset(0x10) = var_a8;
                    *arg1 = zmm0_2;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(
                        rcx_1, var_b0);
                    break;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(rcx_1, 
                    var_b0);
            }
        }
        else if rbx_2 != 0
        {
            goto 'label_838426;
        }
        
        *arg1 = 0xd;
        break;
    }
    
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$$LP$alloc..vec..Vec$LT$u8$GT$$C$usize$RP$$GT$$GT$::h28d9f414cd84ecb1(&var_58);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(var_e8, var_e0)
}
