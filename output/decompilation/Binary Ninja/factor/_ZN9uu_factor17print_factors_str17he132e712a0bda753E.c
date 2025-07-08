
  int128_t* uu_factor::print_factors_str::he132e712a0bda753(int64_t arg1, void** arg2, int64_t* arg3, char arg4)

{
    char const (** rax)[0x8b];
    void* rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5a6ebf145b1a03b(arg1, arg2);
    int64_t var_60;
    num_bigint::biguint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..biguint..BigUint$GT$::from_str_radix::hdbc74ae67ae58087(&var_60, rax, rdx, 0xa);
    char var_148;
    int128_t var_128;
    int64_t* var_e8;
    int64_t var_c8;
    
    if (var_60 != -0x8000000000000000)
    {
        int128_t var_98 = var_60;
        int128_t var_48;
        num_bigint::biguint::convert::_$LT$impl$u20$core..convert..From$LT$u64$GT$$u20$for$u20$num_bigint..biguint..BigUint$GT$::from::h863489988f6613a1(&var_48);
        var_128 = var_48;
        int64_t var_b8;
        char var_b0;
        int64_t var_50;
        int64_t var_38;
        
        if (num_bigint::biguint::cmp_slice::h04e9fe9c6a1333c8(*var_98[8], var_50, *var_128[8], 
            var_38) != 1)
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
            int64_t var_d8_2 = var_38;
            var_e8 = var_128;
            var_128 = 2;
            num_prime::nt_funcs::factors::h468006e1cecc35d2(&var_c8, &var_e8, &var_128);
        }
        
        int64_t var_78 = var_c8;
        var_148 = var_b0;
        
        if (var_148 != -0x8000000000000000)
        {
            int64_t var_a0;
            int64_t var_d8_3 = var_a0;
            var_e8 = var_148;
            int64_t var_a8;
            int64_t var_e0_3 = var_a8;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h9329aa7fedbb9010(
                &var_c8);
            int64_t var_118_4 = var_b8;
            var_128 = var_c8;
            int64_t var_110;
            var_110 = 1;
            int128_t* rbx_1 = alloc::boxed::Box$LT$T$GT$::new::h658e481b4643525f(&var_128);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$::he7eccbe3b1c15ef2(&var_e8);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::hc741dac43ddbe340(&var_78);
            core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(
                &var_98);
            return rbx_1;
        }
        
        int64_t var_118_3 = var_b8;
        var_128 = var_78;
        int64_t var_c0;
        *var_128[8] = var_c0;
        int128_t* rax_16 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7f508640b0b65873(uu_factor::write_result::h4349ac4ce4d74e96(arg3, &var_98, &var_128, 
            arg4));
        
        if (rax_16)
        {
            if (var_148 != -0x8000000000000000)
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$::he7eccbe3b1c15ef2(&var_148);
            
            core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(
                &var_98);
            return rax_16;
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$$GT$::hdf28aa94b7ec965c(&var_148);
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(&var_98);
    }
    else
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = uucore::util_name::h60d842bf27b05e82();
        var_c8 = rax_1;
        int64_t var_c0_1 = rdx_1;
        var_e8 = &var_c8;
        int64_t (* var_e0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h60e20a2526965720;
        var_128 = &data_58ae20;
        *var_128[8] = 2;
        int64_t var_108_1 = 0;
        int64_t** var_118 = &var_e8;
        int64_t var_110_1 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
        var_c8 = 0;
        int64_t var_c0_2 = arg1;
        void** const var_b8_1 = arg2;
        char var_b0_1 = 0;
        var_148 = core::result::Result$LT$T$C$E$GT$::unwrap_err::hae40621fe63b5d0e(&var_60);
        var_e8 = &var_c8;
        int64_t (* var_e0_2)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        char* var_d8_1 = &var_148;
        int64_t (* var_d0_1)(char* arg1, int64_t arg2) = _$LT$num_bigint..ParseBigIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h9d7563e6912e108a;
        var_128 = &data_58ae40;
        *var_128[8] = 3;
        int64_t var_108_2 = 0;
        int64_t** var_118_1 = &var_e8;
        int64_t var_110_2 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
    }
    return nullptr;
}
