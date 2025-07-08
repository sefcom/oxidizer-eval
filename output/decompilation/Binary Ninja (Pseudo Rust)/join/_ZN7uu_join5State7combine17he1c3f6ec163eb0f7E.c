
  fn uu_join::State::combine::he1c3f6ec163eb0f7(arg1: *mut c_void, arg2: *mut i64, arg3: *mut c_void, arg4: *mut c_void) -> i64

{
    let mut rax: i64;
    let mut rdx: u64;
    rax = uu_join::State::get_current_key::h6b22667ac5a703a7(arg1);
    let mut r15: i64 = rax;
    let mut var_40: i64 = rax;
    let mut var_a0: u64 = rdx;
    let var_38: u64 = rdx;
    let rax_1: i64 = *arg1.byte_offset(8);
    let rcx: i64 = *arg1.byte_offset(0x10);
    let mut var_88: i64 = rax_1;
    let var_80: i64 = rcx * 0x30 + rax_1;
    let i_3: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&var_88);
    
    if i_3 != 0
    {
        let mut i_1: *mut c_void = i_3;
        let mut rcx_4: i64 = *arg3.byte_offset(8);
        let mut rax_5: i64 = *arg3.byte_offset(0x10) * 0x30 + rcx_4;
        let rdx_1: i8 = *arg4.byte_offset(0x148);
        let var_a8_1: i64 = rcx_4;
        let var_b0_1: i64 = rax_5;
        let mut var_98: i64;
        let mut var_68: *mut i64;
        let mut result: i64;
        
        if *arg4.byte_offset(0x140) == 0
        {
            if r15 == 0
            {
                r15 = *arg4.byte_offset(0x120);
                var_a0 = *arg4.byte_offset(0x128);
            }
            
            let rdx_4: i64 = *arg1.byte_offset(0x40);
            let r12_1: i64 = *arg4.byte_offset(0x108);
            let rbp_1: i64 = *arg4.byte_offset(0x110);
            let rdx_5: i64 = *arg3.byte_offset(0x40);
            
            loop
            {
                var_98 = rcx_4;
                let var_90_2: i64 = rax_5;
                
                loop
                {
                    let rax_8: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&var_98);
                    
                    if rax_8 == 0
                    {
                        break;
                    }
                    
                    result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, r15, var_a0);
                    
                    if result == 0
                    {
                        result = uu_join::Repr$LT$Sep$GT$::print_fields::h1387b25fbf2df66a(r12_1, 
                            rbp_1, arg2, i_1, rdx_4);
                        
                        if result == 0
                        {
                            result = uu_join::Repr$LT$Sep$GT$::print_fields::h1387b25fbf2df66a(
                                r12_1, rbp_1, arg2, rax_8, rdx_5);
                            
                            if result == 0
                            {
                                var_68 = rdx_1;
                                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, &var_68, 1);
                                
                                if result == 0
                                {
                                    continue;
                                }
                            }
                        }
                    }
                    
                    return result;
                }
                
                let i_4: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&var_88);
                i_1 = i_4;
                rcx_4 = var_a8_1;
                rax_5 = var_b0_1;
                
                if i_4 == 0
                {
                    break;
                }
            }
        }
        else
        {
            let mut i: *mut c_void;
            
            do
            {
                var_98 = rcx_4;
                let var_90_1: i64 = rax_5;
                
                loop
                {
                    let rax_6: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&var_98);
                    
                    if rax_6 == 0
                    {
                        break;
                    }
                    
                    var_68 = &var_40;
                    let var_60_1: *mut c_void = arg1;
                    let i_2: *mut c_void = i_1;
                    let var_50_1: *mut c_void = arg3;
                    let var_48_1: i64 = rax_6;
                    result = uu_join::Repr$LT$Sep$GT$::print_format::h7a7867d185f65886(arg4, arg2, 
                        &var_68);
                    
                    if result != 0
                    {
                        return result;
                    }
                    
                    var_68 = rdx_1;
                    result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, &var_68, 1);
                    
                    if result != 0
                    {
                        return result;
                    }
                }
                
                i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&var_88);
                i_1 = i;
                rcx_4 = var_a8_1;
                rax_5 = var_b0_1;
            } while i != 0;
        }
    }
    
    0
}
