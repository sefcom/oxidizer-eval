
  fn uu_uniq::Uniq::print_uniq::h818dd57e8b925a7a(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: *mut i64) -> *mut i128

{
    let r13: *mut *mut c_void;
    let var_20: *mut *mut c_void = r13;
    let mut rbp: i8 = 0xa;
    
    if *arg1.byte_offset(0x35) != 0
    {
        rbp = 0;
    }
    
    let mut var_68: i128;
    std::io::BufRead::split::h55d0a47e7c3c4bc4(&var_68, arg2, arg3, rbp);
    let mut var_c8: i64;
    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h98b1df7ad774e08e(&var_c8, &var_68);
    let rax: i64 = var_c8;
    let mut result: *mut i128;
    
    if rax == -0x7fffffffffffffff
    {
        result = nullptr;
        core::ptr::drop_in_place$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hab86488a13dfdbdc(var_68, *var_68[8]);
    }
    else if rax != -0x8000000000000000
    {
        let mut var_f8: i64 = rax;
        let var_b8: u64;
        let mut var_e8_1: u64 = var_b8;
        let var_58: i64;
        let var_78_1: i64 = var_58;
        let mut var_88: i128 = var_68;
        let rax_3: i8 = *arg1.byte_offset(0x32);
        let rax_4: i8 = arg1[6];
        let rax_5: i8 = *arg1.byte_offset(0x31);
        let mut r12_1: i64 = 1;
        let mut rbx_1: i8 = 0;
        let var_50_1: i64 = -0x7fffffffffffffff;
        
        loop
        {
            let mut var_48: i64;
            _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h98b1df7ad774e08e(&var_48, &var_88);
            let rax_6: i64 = var_48;
            let var_c0: *mut i8;
            
            if rax_6 == var_50_1
            {
                core::ptr::drop_in_place$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hab86488a13dfdbdc(var_88, *var_88[8]);
                
                if (r12_1 == 1 & rax_4 == 0) == 0 && (r12_1 > 1 & rax_5 == 0) == 0
                {
                    let rax_15: u32 = *arg1.byte_offset(0x36);
                    
                    if rax_15 != 0
                    {
                        if rax_15 != 3 || (rbx_1 & 1) == 0
                        {
                            goto 'label_4709bc;
                        }
                        
                        goto 'label_47097b;
                    }
                    
                    if (rbx_1 & 1) != 0
                    {
                        goto 'label_47097b;
                    }
                    
                    goto 'label_4709bc;
                }
                
                let result_3: *mut i128 = uu_uniq::Uniq::print_line::h32e5970fdc1721c7(arg1, arg4, 
                    arg5, var_c0, var_e8_1, r12_1, rbx_1 & 1);
                result = result_3;
                
                if result_3 == 0
                {
                    let rax_18: u32 = *arg1.byte_offset(0x36);
                    
                    if rax_18 != 0 && rax_18 != 3
                    {
                        'label_4709bc:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&var_f8);
                        result = nullptr;
                        break;
                    }
                    
                    'label_47097b:
                    var_c8 = rbp;
                    let result_4: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1a47c8c078c37691(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(arg4, arg5, &var_c8, 1));
                    result = result_4;
                    
                    if result_4 == 0
                    {
                        goto 'label_4709bc;
                    }
                }
            }
            else
            {
                if rax_6 == -0x8000000000000000
                {
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
                else
                {
                    let mut var_a0: i64 = rax_6;
                    let var_40: i64;
                    let var_98_1: i64 = var_40;
                    let var_38: u64;
                    
                    if uu_uniq::Uniq::cmp_keys::h242b77250fdb6028(arg1, var_c0, var_e8_1) != 0
                    {
                        let mut result_1: *mut i128;
                        
                        if (r12_1 == 1 & rax_4 == 0) != 0 || (r12_1 > 1 & rax_5 == 0) != 0
                        {
                            result_1 = uu_uniq::Uniq::print_line::h32e5970fdc1721c7(arg1, arg4, 
                                arg5, var_c0, var_e8_1, r12_1, rbx_1 & 1);
                            result = result_1;
                            rbx_1 = 1;
                        }
                        
                        if ((r12_1 == 1 & rax_4 == 0) == 0 && (r12_1 > 1 & rax_5 == 0) == 0)
                            || result_1 == 0
                        {
                            var_c8 = var_a0;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&var_f8);
                            var_e8_1 = var_38;
                            var_f8 = var_c8;
                            r12_1 = 1;
                            continue;
                        }
                    }
                    else if rax_3 == 0
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&var_a0);
                        r12_1 += 1;
                        continue;
                    }
                    else
                    {
                        let result_2: *mut i128 = uu_uniq::Uniq::print_line::h32e5970fdc1721c7(
                            arg1, arg4, arg5, var_c0, var_e8_1, r12_1, rbx_1 & 1);
                        result = result_2;
                        
                        if result_2 == 0
                        {
                            var_c8 = var_a0;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&var_f8);
                            var_e8_1 = var_38;
                            var_f8 = var_c8;
                            r12_1 += 1;
                            rbx_1 = 1;
                            continue;
                        }
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(
                        &var_a0);
                }
                
                core::ptr::drop_in_place$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hab86488a13dfdbdc(var_88, *var_88[8]);
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&var_f8);
            break;
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        core::ptr::drop_in_place$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hab86488a13dfdbdc(var_68, *var_68[8]);
    }
    
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h2ae1655ce00f55b1(arg4, arg5);
    result
}
