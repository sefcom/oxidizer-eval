
  fn uu_split::n_chunks_by_line::hfea4751dad8f6ed1(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64) -> *mut i128

{
    let mut r12: *mut *mut c_void;
    let var_28: *mut *mut c_void = r12;
    let mut var_a0: i64 = 0;
    let var_98: *mut i64 = 1;
    let var_90: i64 = 0;
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = uu_split::get_input_size::hff72b499bd50ee30(&arg1[0xe], arg2, &var_a0, *arg1, arg1[1]);
    let mut result: *mut i128;
    
    if rax != 0
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    }
    else if rdx_1 != 0
    {
        'label_4cd7c3:
        std::io::stdio::stdout::h077da66234850927();
        let mut var_78: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
        let mut var_108: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_78);
        let mut var_100: *mut i64 = nullptr;
        let var_f8_1: i64 = 8;
        let var_f0_1: i64 = 0;
        
        if arg3 == 0
        {
            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
            /* no return */
        }
        
        let mut var_d8_1: u64;
        let mut rbx_1: u64;
        
        if (rdx_1 | arg3) >> 0x20 != 0
        {
            let rdx_2: i64 = 0;
            let temp2_1: i32 = arg3;
            var_d8_1 = COMBINE(rdx_2, rdx_1) % temp2_1;
            rbx_1 = COMBINE(rdx_2, rdx_1) / temp2_1;
            
            if arg4 != 1
            {
                goto 'label_4cd85d;
            }
            
            goto 'label_4cd831;
        }
        
        let rax_11: i32 = rdx_1;
        let temp2_2: i32 = arg3;
        var_d8_1 = COMBINE(0, rax_11) % temp2_2;
        rbx_1 = COMBINE(0, rax_11) / temp2_2;
        let mut var_111_1: i8;
        let mut var_a8_1: i64;
        
        if arg4 == 1
        {
            'label_4cd831:
            var_a8_1 = rdx_1;
            var_111_1 = *arg1.byte_offset(0xa1);
            'label_4cd8cf:
            let rax_14: i8 = *arg1.byte_offset(0xa2);
            let mut rbp_2: i64 = rbx_1 + 1;
            var_78 = var_98;
            let var_70: i64 = var_90;
            let var_68_1: *mut c_void = arg2;
            let var_60_1: i8 = 0;
            let var_58_1: i8 = rax_14;
            let rcx_5: i64 = arg1[0x11];
            r12 = 1;
            let mut r13_2: i64 = 0;
            let var_d0_2: i64 = -0x7fffffffffffffff;
            let mut var_e0_1: i64;
            var_e0_1 = rax_14;
            
            loop
            {
                let mut var_48: i64;
                _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7f08040107fbede2(&var_48, &var_78);
                let rax_17: i64 = var_48;
                
                if rax_17 != var_d0_2
                {
                    if rax_17 == -0x8000000000000000
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                        break;
                    }
                    
                    let mut var_c0: i64 = rax_17;
                    let var_38: u64;
                    
                    if var_38 + r13_2 < var_a8_1
                    {
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hf1e1eb1ae4f6230e(&var_c0, var_e0_1);
                    }
                    
                    let var_40: i64;
                    let mut result_4: *mut i128;
                    
                    if arg4 == 0
                    {
                        let mut result_5: *mut i128;
                        _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::hcb920ccabbd9d626(&result_5, &var_100, r12.byte_offset(-1), arg1);
                        let result_3: *mut i128 = result_5;
                        
                        if result_3 != 0
                        {
                            result = result_3;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_c0);
                            break;
                        }
                        
                        let var_80: *mut *mut c_void;
                        uu_split::custom_write_all::h79f0c894f91cdf7a(&result_5, var_40, var_38, 
                            var_80, rcx_5);
                        
                        if result_5 != 0
                        {
                            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            'label_4cdb49:
                            result = result_4;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_c0);
                            break;
                        }
                    }
                    else if r12 == arg5 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_108, var_40, var_38) != 0
                    {
                        result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                        goto 'label_4cdb49;
                    }
                    r13_2 += var_38;
                    
                    if rbp_2 <= r13_2
                    {
                        let mut rax_20: i32 = -1;
                        let mut rcx_8: i32 = -2;
                        
                        do
                        {
                            rbp_2 = rbp_2 + rbx_1;
                            r12 += 1;
                            rax_20 += 1;
                            rcx_8 += 1;
                        } while rbp_2 <= r13_2;
                        
                        if var_111_1 == 0 || rcx_8 >= 0x7fffffff
                        {
                            goto 'label_4cda87;
                        }
                        
                        if arg4 != 1
                        {
                            r12 -= rax_20;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_c0);
                            continue;
                        }
                        else if r12 <= arg5
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_c0);
                            continue;
                        }
                    }
                    else
                    {
                        'label_4cda87:
                        
                        if arg4 != 1 || r12 <= arg5
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_c0);
                            continue;
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                        &var_c0);
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&var_100);
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(
                    var_108);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                    &var_a0);
                return nullptr;
            }
        }
        else
        {
            'label_4cd85d:
            let rax_13: i8 = *arg1.byte_offset(0xa1);
            var_111_1 = rax_13;
            _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h5aea99d9a23c30d0(&var_78, arg3, arg1, rax_13);
            let r13_1: *mut i64 = var_78;
            let result_2: *mut i128;
            result = result_2;
            
            if r13_1 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&var_100);
                var_a8_1 = rdx_1;
                var_100 = r13_1;
                let result_1: *mut i128 = result;
                let var_68: *mut *mut c_void;
                let var_f0_2: *mut *mut c_void = var_68;
                goto 'label_4cd8cf;
            }
        }
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(
            &var_100);
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(var_108);
    }
    else
    {
        result = nullptr;
        
        if arg4 != 1 && *arg1.byte_offset(0xa1) == 0
        {
            goto 'label_4cd7c3;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_a0);
    result
}
