
  fn uu_numfmt::handle_buffer_iterator::h414c95f5f8eb45b9(arg1: i64, arg2: *mut i8) -> *mut i128

{
    let mut result: *mut i128 = nullptr;
    let mut rax: i32 = 0xa;
    
    if arg2[0xc8] != 0
    {
        rax = 0;
    }
    
    let mut var_d4: i32 = rax;
    let mut var_48: ();
    core::iter::traits::iterator::Iterator::enumerate::ha5b6576aba57f0de(&var_48, arg1);
    let mut var_68: i64;
    let mut rdx: i64 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h54f092d491cf1a5a(&var_68, &var_48);
    let var_60: *mut c_void;
    let mut rax_1: *mut c_void = var_60;
    
    if rax_1 != -0x7fffffffffffffff
    {
        let r12_1: i64 = *arg2.byte_offset(0xc0);
        
        loop
        {
            let mut var_d0: *mut c_void;
            let mut var_b8: *mut c_void;
            let mut var_88: i128;
            let mut var_78: *mut i32;
            let var_58: *mut c_void;
            
            if rax_1 == -0x8000000000000000
            {
                var_d0 = var_58;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hae49a63914faa038(&var_88, &var_d0, rdx);
                let var_a0_2: *mut i32 = var_78;
                let var_b0_1: i128 = var_88;
                var_b8 = nullptr;
                result = alloc::boxed::Box$LT$T$GT$::new::hb6e44097f5c9c613(&var_b8);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd93953e64ca236e7(&var_d0);
                break;
            }
            
            let mut var_b0: i128;
            let var_50: i64;
            
            if var_68 >= r12_1
            {
                var_b8 = rax_1;
                var_b0 = var_58;
                *var_b0[8] = var_50;
                result = uu_numfmt::format_and_handle_validation::hcfab93a3f32ae107(var_58, var_50, 
                    arg2);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc2a262c10a1490f(&var_b8);
                
                if result != 0
                {
                    break;
                }
            }
            else
            {
                var_d0 = rax_1;
                let var_c8_1: *mut c_void = var_58;
                let var_c0_1: i64 = var_50;
                var_88 = &var_d0;
                *var_88[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_78 = &var_d4;
                let var_70_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                var_b8 = &data_4195a0;
                var_b0 = 2;
                let var_98_1: i64 = 0;
                *var_b0[8] = &var_88;
                let var_a0_1: i64 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_b8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc2a262c10a1490f(&var_d0);
            }
            rdx = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h54f092d491cf1a5a(&var_68, &var_48);
            rax_1 = var_60;
            
            if rax_1 == -0x7fffffffffffffff
            {
                return nullptr;
            }
        }
    }
    
    result
}
