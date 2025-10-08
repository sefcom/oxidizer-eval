
  uint64_t uu_factor::print_factors_str::h9017d6fa399a3f46(int64_t arg1, void** arg2, int64_t* arg3, char arg4)

{
    char* rax;
    int64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::h4b4b60ca41feee4f(arg1, arg2);
    int64_t var_60;
    num_bigint::biguint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..biguint..BigUint$GT$::from_str_radix::hcb4cef4a4660a821(&var_60, rax, rdx, 0xa);
    int128_t var_148;
    int64_t var_128;
    void* const var_f8;
    int64_t* var_b8;
    
    if (!(0 + -(var_60)))
    {
        var_148 = var_60;
        void var_48;
        num_bigint::biguint::convert::_$LT$impl$u20$core..convert..From$LT$u64$GT$$u20$for$u20$num_bigint..biguint..BigUint$GT$::from::heb41d9a125b0bad7(&var_48, 1);
        void** const r14 = *var_148[8];
        int64_t var_50;
        int64_t var_40;
        int64_t var_38;
        char rax_4 = num_bigint::biguint::cmp_slice::h6473709cb847fdc3(r14, var_50, var_40, var_38);
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h68b709cb09988cea(&var_48);
        int64_t var_118;
        char var_110;
        
        if (rax_4 <= 0)
        {
            var_128 = 0;
            var_118 = 0;
            var_110 = -0x8000000000000000;
        }
        else
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h15eea0e396b9263c(&var_f8, r14, var_50);
            int64_t var_e8;
            int64_t var_a8_2 = var_e8;
            var_b8 = var_f8;
            var_f8 = 2;
            num_prime::nt_funcs::factors::h154881c305cbdc42(&var_128, &var_b8, &var_f8);
        }
        
        int64_t var_68_1 = var_118;
        int64_t var_78 = var_128;
        int64_t var_120;
        int64_t var_70_1 = var_120;
        int64_t var_98 = var_110;
        int64_t var_108;
        int64_t var_90_1 = var_108;
        int64_t var_100;
        int64_t var_88_1 = var_100;
        
        if (var_98 != -0x8000000000000000)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h934deac0777802c8(&var_128, "Factorization incomplete. Remain…", 0x2c);
            int64_t var_e8_3 = var_118;
            var_f8 = var_128;
            int64_t var_e0;
            var_e0 = 1;
            uint64_t rbx_1 = alloc::boxed::Box$LT$T$GT$::new::hce9ab1ca74379778(&var_f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$::h7a0cdbfb03ecd258(&var_98);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::h54aa05dedcd35041(&var_78);
            core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h68b709cb09988cea(
                &var_148);
            return rbx_1;
        }
        
        uint64_t rax_13 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc9190645284cc036(uu_factor::write_result::ha66cf5c020a2d08b(arg3, &var_148, &var_78, 
            arg4));
        
        if (rax_13)
        {
            core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h68b709cb09988cea(
                &var_148);
            return rax_13;
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$$GT$::h5e23804ed63f8a8e(&var_98);
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h68b709cb09988cea(&var_148);
    }
    else
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = uucore::util_name::h074417a1e6395129();
        var_128 = rax_1;
        int64_t var_120_1 = rdx_1;
        var_b8 = &var_128;
        int64_t (* var_b0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc900c5a3cc04ff1b;
        var_f8 = &data_5441a0;
        int64_t var_f0_1 = 2;
        int64_t var_d8_1 = 0;
        int64_t** var_e8_1 = &var_b8;
        int64_t var_e0_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
        var_128 = 0;
        int64_t var_120_2 = arg1;
        void** const var_118_1 = arg2;
        char var_110_1 = 0;
        var_148 = core::result::Result$LT$T$C$E$GT$::unwrap_err::h414907258e9c3a0c(&var_60);
        var_b8 = &var_128;
        int64_t (* var_b0_2)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        int128_t* var_a8_1 = &var_148;
        int64_t (* var_a0_1)(char* arg1, int64_t arg2) = _$LT$num_bigint..ParseBigIntError$u20$as$u20$core..fmt..Display$GT$::fmt::he634208fdac266b5;
        var_f8 = &data_5441c0;
        int64_t var_f0_2 = 3;
        int64_t var_d8_2 = 0;
        int64_t** var_e8_2 = &var_b8;
        int64_t var_e0_2 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
    }
    return 0;
}
