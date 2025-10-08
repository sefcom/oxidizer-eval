
  char const (**)[0xc0] uu_seq::fast_print_seq::h4eb9a89ecd42b36a(int64_t* arg1, void* arg2, uint64_t arg3, void* arg4, int64_t arg5, uint64_t arg6, int128_t arg7, int64_t arg8)

{
    int128_t var_40 = arg7;
    int64_t rbx = *(arg4 + 8);
    int64_t rbp = *(arg4 + 0x10);
    char const (** result)[0xc0];
    
    if (num_bigint::biguint::cmp_slice::h6473709cb847fdc3(rbx, rbp, *(arg2 + 8), *(arg2 + 0x10))
            < 0)
        result = nullptr;
    else
    {
        int128_t var_c8;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h133769cfed2b71de(&var_c8, rbx, rbp);
        int128_t var_e8 = var_c8;
        num_bigint::biguint::subtraction::_$LT$impl$u20$core..ops..arith..Sub$LT$$RF$num_bigint..biguint..BigUint$GT$$u20$for$u20$num_bigint..biguint..BigUint$GT$::sub::hcb42c6242933f6ef(&var_c8, &var_e8, arg2);
        num_bigint::biguint::division::_$LT$impl$u20$core..ops..arith..Div$LT$u64$GT$$u20$for$u20$num_bigint..biguint..BigUint$GT$::div::hb3d0b8e5d42f970f(&var_e8, &var_c8, arg3);
        int64_t* r14_1 = *var_e8[8];
        int64_t var_b8;
        char rax_2;
        int64_t rdx_4;
        rax_2 = num_bigint::biguint::convert::_$LT$impl$u20$num_traits..cast..ToPrimitive$u20$for$u20$num_bigint..biguint..BigUint$GT$::to_u64::ha0c226e00bec48bc(r14_1, var_b8);
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h190a37287d4c5f59(var_e8, 
            r14_1);
        void var_70;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::haf44c8a775aee2f9(
            &var_70, arg2);
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::haf44c8a775aee2f9(
            &var_c8, arg4);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb5d0045c8189f1b2(&var_c8);
        int64_t var_98;
        _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::he78d97b685c908ad(&var_98, core::cmp::Ord::max::hc4036d29a65f4853(var_b8, arg8) + arg6);
        int64_t var_88;
        int64_t rbp_3 = var_88 - arg6;
        int64_t var_60;
        void* rdi_12 = rbp_3 - var_60;
        void* var_f0 = rdi_12;
        char* var_90;
        int64_t rax_4;
        uint64_t rdx_6;
        rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hf40a0f97a3096e33(rdi_12, rbp_3, var_90, var_88);
        int64_t var_68;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h34292d3a419d10fd(rax_4, 
            rdx_6, var_68, var_60);
        
        if (var_88 < arg6)
        {
            core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rbp_3, var_88);
            /* no return */
        }
        
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h34292d3a419d10fd(
            &var_90[rbp_3], arg6, arg5, arg6);
        var_f0 = core::cmp::Ord::min::he7a4ef9e7b4693b7(var_f0, rbp_3 - arg8);
        int128_t* var_58;
        int64_t rax_6;
        uint64_t rdx_9;
        rax_6 = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(arg3, &var_58, 
            0x14);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9baf5eb350953063(&var_c8, rax_6, rdx_9);
        int64_t var_d8_2 = var_b8;
        var_e8 = var_c8;
        int64_t r15_1 = *var_e8[8];
        int64_t rbx_3 = ((0 - 0) | rdx_4) + 1;
        char const (** result_1)[0xc0];
        
        while (true)
        {
            void* rsi_17 = var_f0;
            int64_t temp0_1 = rbx_3;
            rbx_3 -= 1;
            
            if (temp0_1 == 1)
            {
                int64_t rax_7;
                uint64_t rdx_14;
                rax_7 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h4709196e254eeadc(rsi_17, rbp_3, var_90, var_88);
                result_1 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h7ad87ff7b53aa30a(arg1, rax_7, rdx_14);
                
                if (!result_1)
                {
                    var_58 = &var_40;
                    int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2c2f878c1a275f8a;
                    var_c8 = &data_41b0f0;
                    *var_c8[8] = 1;
                    int64_t var_a8_1 = 0;
                    int128_t** var_b8_1 = &var_58;
                    int64_t var_b0_1 = 1;
                    result_1 = std::io::Write::write_fmt::h58381ced614654a5(arg1, &var_c8);
                    
                    if (!result_1)
                        result_1 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hfb65489923a70636(arg1);
                }
                
                break;
            }
            
            if (var_88 < rsi_17)
            {
                core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rsi_17, var_88);
                /* no return */
            }
            
            result_1 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h7ad87ff7b53aa30a(arg1, rsi_17 + var_90, var_88 - rsi_17);
            
            if (result_1)
                break;
            
            uucore::features::fast_inc::fast_inc::h9b00daadefd0682a(var_90, var_88, &var_f0, rbp_3, 
                r15_1, var_b8);
        }
        
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb5d0045c8189f1b2(&var_e8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h92c01f6ee31c8691(var_98, 
            var_90);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb5d0045c8189f1b2(&var_70);
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h68c34cef8e3ce886(arg1);
    return result;
}
