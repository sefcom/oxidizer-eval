
  fn uu_factor::print_factors_str::he132e712a0bda753(arg1: i64, arg2: *mut *mut c_void, arg3: *mut i64, arg4: i8) -> *mut i128

{
    let mut rax: *mut *mut [i8; 0x8b];
    let mut rdx: *mut c_void;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5a6ebf145b1a03b(arg1, arg2);
    let mut var_60: i64;
    num_bigint::biguint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..biguint..BigUint$GT$::from_str_radix::hdbc74ae67ae58087(&var_60, rax, rdx, 0xa);
    let mut var_148: i8;
    let mut var_128: i128;
    let mut var_e8: *mut i64;
    let mut var_c8: i64;
    
    if var_60 != -0x8000000000000000
    {
        let mut var_98: i128 = var_60;
        let mut var_48: i128;
        num_bigint::biguint::convert::_$LT$impl$u20$core..convert..From$LT$u64$GT$$u20$for$u20$num_bigint..biguint..BigUint$GT$::from::h863489988f6613a1(&var_48);
        var_128 = var_48;
        let mut var_b8: i64;
        let mut var_b0: i8;
        let var_50: i64;
        let var_38: i64;
        
        if num_bigint::biguint::cmp_slice::h04e9fe9c6a1333c8(*var_98[8], var_50, *var_128[8], 
            var_38) != 1
        {
            core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(
                &var_128);
            var_c8 = 0;
            var_b8 = 0;
            var_b0 = -0x8000000000000000;
        }
        else
        {
            core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(
                &var_128);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0e547a70c3f80ae3(&var_128, &var_98);
            let var_d8_2: i64 = var_38;
            var_e8 = var_128;
            var_128 = 2;
            num_prime::nt_funcs::factors::h468006e1cecc35d2(&var_c8, &var_e8, &var_128);
        }
        
        let mut var_78: i64 = var_c8;
        var_148 = var_b0;
        
        if var_148 != -0x8000000000000000
        {
            let var_a0: i64;
            let var_d8_3: i64 = var_a0;
            var_e8 = var_148;
            let var_a8: i64;
            let var_e0_3: i64 = var_a8;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h9329aa7fedbb9010(
                &var_c8);
            let var_118_4: i64 = var_b8;
            var_128 = var_c8;
            let mut var_110: i64;
            var_110 = 1;
            let rbx_1: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h658e481b4643525f(&var_128);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$::he7eccbe3b1c15ef2(&var_e8);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::hc741dac43ddbe340(&var_78);
            core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(
                &var_98);
            return rbx_1;
        }
        
        let var_118_3: i64 = var_b8;
        var_128 = var_78;
        let var_c0: i64;
        *var_128[8] = var_c0;
        let rax_16: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7f508640b0b65873(uu_factor::write_result::h4349ac4ce4d74e96(arg3, &var_98, &var_128, 
            arg4));
        
        if rax_16 != 0
        {
            if var_148 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$::he7eccbe3b1c15ef2(&var_148);
            }
            
            core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(
                &var_98);
            return rax_16;
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$$GT$::hdf28aa94b7ec965c(&var_148);
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(&var_98);
    }
    else
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = uucore::util_name::h60d842bf27b05e82();
        var_c8 = rax_1;
        let var_c0_1: i64 = rdx_1;
        var_e8 = &var_c8;
        let var_e0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h60e20a2526965720;
        var_128 = &data_58ae20;
        *var_128[8] = 2;
        let var_108_1: i64 = 0;
        let var_118: *mut *mut i64 = &var_e8;
        let var_110_1: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
        var_c8 = 0;
        let var_c0_2: i64 = arg1;
        let var_b8_1: *mut *mut c_void = arg2;
        let var_b0_1: i8 = 0;
        var_148 = core::result::Result$LT$T$C$E$GT$::unwrap_err::hae40621fe63b5d0e(&var_60);
        var_e8 = &var_c8;
        let var_e0_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        let var_d8_1: *mut i8 = &var_148;
        let var_d0_1: fn(arg1: *mut i8, arg2: i64) -> i64 = _$LT$num_bigint..ParseBigIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h9d7563e6912e108a;
        var_128 = &data_58ae40;
        *var_128[8] = 3;
        let var_108_2: i64 = 0;
        let var_118_1: *mut *mut i64 = &var_e8;
        let var_110_2: i64 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
    }
    nullptr
}
