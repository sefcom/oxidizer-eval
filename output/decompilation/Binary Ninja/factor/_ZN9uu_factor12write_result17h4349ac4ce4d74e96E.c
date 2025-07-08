
  void** uu_factor::write_result::h4349ac4ce4d74e96(int64_t* arg1, int64_t arg2, int64_t* arg3, char arg4)

{
    int64_t var_c0 = arg2;
    int64_t* var_158 = &var_c0;
    int64_t (* var_150)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha64c5baa0b7eb683;
    void* const var_b8 = &data_58adc0;
    int64_t var_b0 = 2;
    int64_t var_98 = 0;
    int64_t** var_a8 = &var_158;
    int64_t var_a0 = 1;
    void** result_1 = std::io::Write::write_fmt::h3e05af1c32146a29(arg1, &var_b8);
    void** result = result_1;
    
    if (!result_1)
    {
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h67a909a576bf9886(&var_b8, arg3);
        int128_t var_f8;
        int128_t var_128;
        uint64_t var_100;
        int64_t var_e0;
        int64_t var_d0;
        uint64_t var_c8;
        
        if (!arg4)
        {
            while (true)
            {
                _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f3bdc940177747e(&var_e0, &var_b8);
                
                if (var_e0 == -0x8000000000000000)
                    goto label_4a3e3c;
                
                int64_t var_e8_2 = var_d0;
                var_f8 = var_e0;
                var_100 = var_c8;
                int128_t* var_58 = &var_f8;
                uint64_t (* var_50_1)(int64_t arg1, int64_t* arg2) = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::h3b55b5376c9fe64d;
                var_158 = &data_58ae00;
                int64_t var_150_3 = 1;
                int64_t var_138_3 = 0;
                int128_t** var_148_3 = &var_58;
                int64_t var_140_3 = 1;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::ha848903e8938f6fd(&var_48, &var_158);
                var_128 = var_48;
                uint64_t var_38;
                uint64_t var_118_2 = var_38;
                void var_70;
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_70, *var_128[8], 
                    var_38, var_c8);
                int64_t rbp_1 = arg1[2];
                uint64_t var_60;
                int64_t var_68;
                
                if (var_60 >= *arg1 - rbp_1)
                {
                    void** result_3 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h84c9340cd8b23129(arg1, var_68, var_60);
                    result = result_3;
                    
                    if (result_3)
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
            while (true)
            {
                _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f3bdc940177747e(&var_e0, &var_b8);
                
                if (var_e0 == -0x8000000000000000)
                {
                    label_4a3e3c:
                    core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::h58b1d517ade24c2d(&var_b8);
                    var_b8 = &data_58ae10;
                    int64_t var_b0_1 = 1;
                    int64_t var_a8_1 = 8;
                    var_a0 = {0};
                    void** result_4 = std::io::Write::write_fmt::h3e05af1c32146a29(arg1, &var_b8);
                    result = result_4;
                    
                    if (!result_4)
                        return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hea36ead84b054e88(arg1);
                    
                    goto label_4a3b88;
                }
                
                int64_t var_e8_1 = var_d0;
                var_f8 = var_e0;
                var_100 = var_c8;
                void** result_2;
                
                if (var_c8 <= 1)
                {
                    var_128 = &var_f8;
                    *var_128[8] = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::h3b55b5376c9fe64d;
                    var_158 = &data_58ae00;
                    int64_t var_150_2 = 1;
                    int64_t var_138_2 = 0;
                    int128_t* var_148_2 = &var_128;
                    int64_t var_140_2 = 1;
                    result_2 = std::io::Write::write_fmt::h3e05af1c32146a29(arg1, &var_158);
                }
                else
                {
                    var_128 = &var_f8;
                    *var_128[8] = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::h3b55b5376c9fe64d;
                    int64_t* var_118_1 = &var_100;
                    uint64_t (* var_110_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    var_158 = &data_58ade0;
                    int64_t var_150_1 = 2;
                    int64_t var_138_1 = 0;
                    int128_t* var_148_1 = &var_128;
                    int64_t var_140_1 = 2;
                    result_2 = std::io::Write::write_fmt::h3e05af1c32146a29(arg1, &var_158);
                }
                
                result = result_2;
                
                if (result_2)
                    break;
                
                core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(
                    &var_f8);
            }
        }
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(&var_f8);
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::h58b1d517ade24c2d(&var_b8);
    }
    else
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::hc741dac43ddbe340(arg3);
    
    label_4a3b88:
    return result;
}
