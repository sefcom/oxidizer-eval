
  fn uu_factor::write_result::h4349ac4ce4d74e96(arg1: *mut i64, arg2: i64, arg3: *mut i64, arg4: i8) -> *mut *mut c_void

{
    let mut var_c0: i64 = arg2;
    let mut var_158: *mut i64 = &var_c0;
    let var_150: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha64c5baa0b7eb683;
    let mut var_b8: *mut c_void = &data_58adc0;
    let var_b0: i64 = 2;
    let var_98: i64 = 0;
    let var_a8: *mut *mut i64 = &var_158;
    let mut var_a0: i64 = 1;
    let result_1: *mut *mut c_void = std::io::Write::write_fmt::h3e05af1c32146a29(arg1, &var_b8);
    let mut result: *mut *mut c_void = result_1;
    
    if result_1 == 0
    {
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h67a909a576bf9886(&var_b8, arg3);
        let mut var_f8: i128;
        let mut var_128: i128;
        let mut var_100: u64;
        let mut var_e0: i64;
        let var_d0: i64;
        let var_c8: u64;
        
        if arg4 == 0
        {
            loop
            {
                _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f3bdc940177747e(&var_e0, &var_b8);
                
                if var_e0 == -0x8000000000000000
                {
                    goto 'label_4a3e3c;
                }
                
                let var_e8_2: i64 = var_d0;
                var_f8 = var_e0;
                var_100 = var_c8;
                let mut var_58: *mut i128 = &var_f8;
                let var_50_1: fn(arg1: *mut c_void, arg2: *mut i64) -> u64 = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::h3b55b5376c9fe64d;
                var_158 = &data_58ae00;
                let var_150_3: i64 = 1;
                let var_138_3: i64 = 0;
                let var_148_3: *mut *mut i128 = &var_58;
                let var_140_3: i64 = 1;
                let mut var_48: i128;
                core::option::Option$LT$T$GT$::map_or_else::ha848903e8938f6fd(&var_48, &var_158);
                var_128 = var_48;
                let var_38: u64;
                let var_118_2: u64 = var_38;
                let mut var_70: ();
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_70, *var_128[8], 
                    var_38, var_c8);
                let rbp_1: i64 = arg1[2];
                let var_60: u64;
                let var_68: i64;
                
                if var_60 >= *arg1 - rbp_1
                {
                    let result_3: *mut *mut c_void = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h84c9340cd8b23129(arg1, var_68, var_60);
                    result = result_3;
                    
                    if result_3 != 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0c60f8fdd24455a3(
                            &var_70);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0c60f8fdd24455a3(
                            &var_128);
                        break;
                    }
                }
                else
                {
                    memcpy(arg1[1] + rbp_1, var_68, var_60);
                    arg1[2] = rbp_1 + var_60;
                }
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0c60f8fdd24455a3(&var_70);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0c60f8fdd24455a3(&var_128);
                core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(
                    &var_f8);
            }
        }
        else
        {
            loop
            {
                _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f3bdc940177747e(&var_e0, &var_b8);
                
                if var_e0 == -0x8000000000000000
                {
                    'label_4a3e3c:
                    core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::h58b1d517ade24c2d(&var_b8);
                    var_b8 = &data_58ae10;
                    let var_b0_1: i64 = 1;
                    let var_a8_1: i64 = 8;
                    var_a0 = {0};
                    let result_4: *mut *mut c_void =
                        std::io::Write::write_fmt::h3e05af1c32146a29(arg1, &var_b8);
                    result = result_4;
                    
                    if result_4 == 0
                    {
                        return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hea36ead84b054e88(arg1);
                    }
                    
                    goto 'label_4a3b88;
                }
                
                let var_e8_1: i64 = var_d0;
                var_f8 = var_e0;
                var_100 = var_c8;
                let mut result_2: *mut *mut c_void;
                
                if var_c8 <= 1
                {
                    var_128 = &var_f8;
                    *var_128[8] = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::h3b55b5376c9fe64d;
                    var_158 = &data_58ae00;
                    let var_150_2: i64 = 1;
                    let var_138_2: i64 = 0;
                    let var_148_2: *mut i128 = &var_128;
                    let var_140_2: i64 = 1;
                    result_2 = std::io::Write::write_fmt::h3e05af1c32146a29(arg1, &var_158);
                }
                else
                {
                    var_128 = &var_f8;
                    *var_128[8] = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::h3b55b5376c9fe64d;
                    let var_118_1: *mut i64 = &var_100;
                    let var_110_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    var_158 = &data_58ade0;
                    let var_150_1: i64 = 2;
                    let var_138_1: i64 = 0;
                    let var_148_1: *mut i128 = &var_128;
                    let var_140_1: i64 = 2;
                    result_2 = std::io::Write::write_fmt::h3e05af1c32146a29(arg1, &var_158);
                }
                
                result = result_2;
                
                if result_2 != 0
                {
                    break;
                }
                
                core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(
                    &var_f8);
            }
        }
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(&var_f8);
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::h58b1d517ade24c2d(&var_b8);
    }
    else
    {
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::hc741dac43ddbe340(arg3);
    }
    
    'label_4a3b88:
    result
}
