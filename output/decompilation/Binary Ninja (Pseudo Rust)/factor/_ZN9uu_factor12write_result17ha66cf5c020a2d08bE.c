
  fn uu_factor::write_result::ha66cf5c020a2d08b(arg1: *mut i64, arg2: i64, arg3: *mut i64, arg4: i8) -> *mut *mut c_void

{
    let mut var_90: i64 = arg2;
    let mut var_120: *mut i64 = &var_90;
    let var_118: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8cff5feb862da75f;
    let mut var_88: *mut c_void = &data_544140;
    let var_80: i64 = 2;
    let var_68: i64 = 0;
    let var_78: *mut *mut i64 = &var_120;
    let mut var_70: i64 = 1;
    let result_1: *mut *mut c_void = std::io::Write::write_fmt::h11e288cd92d07ac5(arg1, &var_88);
    let mut result: *mut *mut c_void = result_1;
    
    if result_1 == 0
    {
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h1d9ebb26ff28ed15(&var_88, arg3);
        let mut var_c8: i128;
        let mut var_f0: u64;
        let mut var_e8: *mut i128;
        let mut var_b0: i64;
        let var_a0: i64;
        let var_98: u64;
        
        if arg4 == 0
        {
            loop
            {
                _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb07204be7eeaa0b8(&var_b0, &var_88);
                
                if var_b0 == -0x8000000000000000
                {
                    goto 'label_492ca8;
                }
                
                let var_b8_2: i64 = var_a0;
                var_c8 = var_b0;
                var_f0 = var_98;
                let mut var_40: *mut i128 = &var_c8;
                let var_38_1: fn(arg1: *mut c_void, arg2: *mut i64) -> u64 = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::ha6e9d0f1c82ff230;
                var_120 = &data_544180;
                let var_118_3: i64 = 1;
                let var_100_3: i64 = 0;
                let var_110_3: u64 = &var_40;
                let var_108_3: i64 = 1;
                core::option::Option$LT$T$GT$::map_or_else::he93485f1b03d4307(&var_e8, &var_120);
                let rax_3: *mut i128 = var_e8;
                let var_e0: i64;
                let var_d8: i64;
                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::hbd55229d6ccd7063(&var_120, 
                    var_e0, var_d8, var_98);
                let rax_4: *mut i64 = var_120;
                let rbx_1: i64 = arg1[2];
                
                if var_110_3 >= *arg1 - rbx_1
                {
                    let result_3: *mut *mut c_void = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hdfe7125df86ebea5(arg1, var_118_3, var_110_3);
                    result = result_3;
                    
                    if result_3 != 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9cf4137fd0897025(
                            rax_4, var_118_3);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9cf4137fd0897025(
                            rax_3, var_e0);
                        break;
                    }
                }
                else
                {
                    memcpy(arg1[1] + rbx_1, var_118_3, var_110_3);
                    arg1[2] = rbx_1 + var_110_3;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9cf4137fd0897025(rax_4, 
                    var_118_3);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9cf4137fd0897025(rax_3, 
                    var_e0);
                core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h68b709cb09988cea(
                    &var_c8);
            }
        }
        else
        {
            loop
            {
                _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb07204be7eeaa0b8(&var_b0, &var_88);
                
                if var_b0 == -0x8000000000000000
                {
                    'label_492ca8:
                    core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::he4aa61b1160a476d(&var_88);
                    var_88 = &data_544190;
                    let var_80_1: i64 = 1;
                    let var_78_1: i64 = 8;
                    var_70 = {0};
                    let result_4: *mut *mut c_void =
                        std::io::Write::write_fmt::h11e288cd92d07ac5(arg1, &var_88);
                    result = result_4;
                    
                    if result_4 == 0
                    {
                        return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h8312d51ea439d633(arg1);
                    }
                    
                    goto 'label_492d16;
                }
                
                let var_b8_1: i64 = var_a0;
                var_c8 = var_b0;
                var_f0 = var_98;
                let mut result_2: *mut *mut c_void;
                
                if var_98 <= 1
                {
                    var_e8 = &var_c8;
                    let var_e0_2: fn(arg1: *mut c_void, arg2: *mut i64) -> u64 = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::ha6e9d0f1c82ff230;
                    var_120 = &data_544180;
                    let var_118_2: i64 = 1;
                    let var_100_2: i64 = 0;
                    let var_110_2: *mut *mut i128 = &var_e8;
                    let var_108_2: i64 = 1;
                    result_2 = std::io::Write::write_fmt::h11e288cd92d07ac5(arg1, &var_120);
                }
                else
                {
                    var_e8 = &var_c8;
                    let var_e0_1: fn(arg1: *mut c_void, arg2: *mut i64) -> u64 = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::ha6e9d0f1c82ff230;
                    let var_d8_1: *mut u64 = &var_f0;
                    let var_d0_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                    var_120 = &data_544160;
                    let var_118_1: i64 = 2;
                    let var_100_1: i64 = 0;
                    let var_110_1: *mut *mut i128 = &var_e8;
                    let var_108_1: i64 = 2;
                    result_2 = std::io::Write::write_fmt::h11e288cd92d07ac5(arg1, &var_120);
                }
                
                result = result_2;
                
                if result_2 != 0
                {
                    break;
                }
                
                core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h68b709cb09988cea(
                    &var_c8);
            }
        }
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h68b709cb09988cea(&var_c8);
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::he4aa61b1160a476d(&var_88);
    }
    else
    {
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::h54aa05dedcd35041(arg3);
    }
    
    'label_492d16:
    result
}
