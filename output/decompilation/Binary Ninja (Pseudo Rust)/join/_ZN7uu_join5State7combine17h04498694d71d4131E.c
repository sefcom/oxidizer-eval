
  fn uu_join::State::combine::h04498694d71d4131(arg1: *mut c_void, arg2: *mut i64, arg3: *mut c_void, arg4: *mut c_void) -> i64

{
    let mut rax: i64;
    let mut rdx: u64;
    rax = uu_join::State::get_current_key::hb0aa7b8c555c38dc(arg1);
    let mut var_a8: i64 = rax;
    let mut var_40: i64 = rax;
    let mut var_98: u64 = rdx;
    let var_38: u64 = rdx;
    let rax_1: i64 = *arg1.byte_offset(0x10);
    
    if rax_1 == 0
    {
        return 0;
    }
    
    let rcx: *mut c_void = *arg1.byte_offset(8);
    let r14_3: *mut c_void = rax_1 * 0x30 + rcx;
    let mut var_b0_1: *mut c_void = rcx;
    let mut rsi: *mut c_void = rcx.byte_offset(0x30);
    let mut rdi: *mut c_void = *arg3.byte_offset(8);
    let rcx_4: *mut c_void = *arg3.byte_offset(0x10) * 0x30 + rdi;
    let rcx_5: i8 = *arg4.byte_offset(0x148);
    let var_a0_1: *mut c_void = rdi;
    let mut result: i64;
    let mut var_68: *mut i64;
    
    if *arg4.byte_offset(0x140) == 0
    {
        if var_a8 == 0
        {
            var_a8 = *arg4.byte_offset(0x120);
            var_98 = *arg4.byte_offset(0x128);
        }
        
        let rax_5: i64 = *arg1.byte_offset(0x40);
        let r13_1: i64 = *arg4.byte_offset(0x108);
        let r15_1: i64 = *arg4.byte_offset(0x110);
        let rax_6: i64 = *arg3.byte_offset(0x40);
        let mut rax_8: *mut c_void;
        
        do
        {
            let mut r12_1: *mut c_void = rdi;
            
            loop
            {
                let mut rbp_2: *mut c_void = r12_1.byte_offset(0x30);
                
                if r12_1 == rcx_4
                {
                    rbp_2 = r12_1;
                }
                
                if r12_1 == rcx_4
                {
                    break;
                }
                
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, var_a8, var_98);
                
                if result != 0
                {
                    return result;
                }
                
                result = uu_join::Repr$LT$Sep$GT$::print_fields::h4210fd7bff018645(r13_1, r15_1, 
                    arg2, var_b0_1, rax_5);
                
                if result != 0
                {
                    return result;
                }
                
                result = uu_join::Repr$LT$Sep$GT$::print_fields::h4210fd7bff018645(r13_1, r15_1, 
                    arg2, r12_1, rax_6);
                
                if result != 0
                {
                    return result;
                }
                
                var_68 = rcx_5;
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, &var_68, 1);
                r12_1 = rbp_2;
                
                if result != 0
                {
                    return result;
                }
            }
            
            rax_8 = rsi;
            rsi = rax_8.byte_offset(0x30);
            var_b0_1 = rax_8;
            
            if rax_8 == r14_3
            {
                rsi = rax_8;
            }
            
            rdi = var_a0_1;
            result = 0;
        } while rax_8 != r14_3;
    }
    else
    {
        do
        {
            let r14_4: *mut c_void = var_b0_1;
            var_b0_1 = rsi;
            let mut rcx_6: *mut c_void = rdi;
            
            loop
            {
                let mut rbp_1: *mut c_void = rcx_6.byte_offset(0x30);
                
                if rcx_6 == rcx_4
                {
                    rbp_1 = rcx_6;
                }
                
                if rcx_6 == rcx_4
                {
                    break;
                }
                
                var_68 = &var_40;
                let var_60_1: *mut c_void = arg1;
                let var_58_1: *mut c_void = r14_4;
                let var_50_1: *mut c_void = arg3;
                let var_48_1: *mut c_void = rcx_6;
                result =
                    uu_join::Repr$LT$Sep$GT$::print_format::heaf7e2b100816df7(arg4, arg2, &var_68);
                
                if result != 0
                {
                    return result;
                }
                
                var_68 = rcx_5;
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, &var_68, 1);
                rcx_6 = rbp_1;
                
                if result != 0
                {
                    return result;
                }
            }
            
            rsi = var_b0_1.byte_offset(0x30);
            
            if var_b0_1 == r14_3
            {
                rsi = var_b0_1;
            }
            
            rdi = var_a0_1;
            result = 0;
        } while var_b0_1 != r14_3;
    }
    result
}
