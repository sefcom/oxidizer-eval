
  fn uu_numfmt::handle_buffer::h9ad60b7403393a62(arg1: i64, arg2: *mut i64) -> *mut i128

{
    let mut var_68: i64 = arg1;
    let mut var_60: *mut i64 = &var_68;
    let var_58: i64 = 0;
    let mut var_50: *mut i64;
    let mut rdx: i64 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0cf431a8968d0747(&var_50, &var_60);
    let var_48: *mut c_void;
    let mut rax: *mut c_void = var_48;
    
    if rax != -0x7fffffffffffffff
    {
        let r12_1: i64 = arg2[0x18];
        
        loop
        {
            let mut result: *mut i128;
            let mut var_c0: *mut i128;
            let mut var_b0: i128;
            let mut var_a0: i64;
            let mut var_98: *mut c_void;
            let var_40: *mut i128;
            
            if rax == -0x8000000000000000
            {
                var_c0 = var_40;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h4cabc1d81ea85127(
                    &var_b0, &var_c0, rdx);
                let var_80_2: i64 = var_a0;
                let var_90_1: i128 = var_b0;
                var_98 = nullptr;
                result = alloc::boxed::Box$LT$T$GT$::new::hb050645051cd6aca(&var_98);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf7266ee2a8c411ce(&var_c0);
            }
            else
            {
                let mut var_90: i128;
                let var_38: i64;
                
                if var_50 >= r12_1
                {
                    var_98 = rax;
                    var_90 = var_40;
                    *var_90[8] = var_38;
                    result = uu_numfmt::format_and_handle_validation::he0ebc98d5f24d5da(var_40, 
                        var_38, arg2);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8713d35d56fb5a34(
                        &var_98);
                    
                    if result == 0
                    {
                        goto 'label_47144a;
                    }
                }
                else
                {
                    var_b0 = rax;
                    *var_b0[8] = var_40;
                    var_a0 = var_38;
                    var_c0 = &var_b0;
                    let var_b8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    var_98 = &data_532968;
                    var_90 = 2;
                    let var_78_1: i64 = 0;
                    *var_90[8] = &var_c0;
                    let var_80_1: i64 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&var_98);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8713d35d56fb5a34(
                        &var_b0);
                    'label_47144a:
                    rdx = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0cf431a8968d0747(&var_50, &var_60);
                    rax = var_48;
                    
                    if rax == -0x7fffffffffffffff
                    {
                        break;
                    }
                    
                    continue;
                }
            }
            return result;
        }
    }
    
    nullptr
}
