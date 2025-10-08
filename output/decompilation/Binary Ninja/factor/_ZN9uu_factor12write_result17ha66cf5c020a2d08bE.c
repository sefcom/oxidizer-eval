
  void** uu_factor::write_result::ha66cf5c020a2d08b(int64_t* arg1, int64_t arg2, int64_t* arg3, char arg4)

{
    int64_t var_90 = arg2;
    int64_t* var_120 = &var_90;
    int64_t (* var_118)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8cff5feb862da75f;
    void* const var_88 = &data_544140;
    int64_t var_80 = 2;
    int64_t var_68 = 0;
    int64_t** var_78 = &var_120;
    int64_t var_70 = 1;
    void** result_1 = std::io::Write::write_fmt::h11e288cd92d07ac5(arg1, &var_88);
    void** result = result_1;
    
    if (!result_1)
    {
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h1d9ebb26ff28ed15(&var_88, arg3);
        int128_t var_c8;
        uint64_t var_f0;
        int128_t* var_e8;
        int64_t var_b0;
        int64_t var_a0;
        uint64_t var_98;
        
        if (!arg4)
        {
            while (true)
            {
                _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb07204be7eeaa0b8(&var_b0, &var_88);
                
                if (var_b0 == -0x8000000000000000)
                    goto label_492ca8;
                
                int64_t var_b8_2 = var_a0;
                var_c8 = var_b0;
                var_f0 = var_98;
                int128_t* var_40 = &var_c8;
                uint64_t (* var_38_1)(void* arg1, int64_t* arg2) = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::ha6e9d0f1c82ff230;
                var_120 = &data_544180;
                int64_t var_118_3 = 1;
                int64_t var_100_3 = 0;
                uint64_t var_110_3 = &var_40;
                int64_t var_108_3 = 1;
                core::option::Option$LT$T$GT$::map_or_else::he93485f1b03d4307(&var_e8, &var_120);
                int128_t* rax_3 = var_e8;
                int64_t var_e0;
                int64_t var_d8;
                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::hbd55229d6ccd7063(&var_120, 
                    var_e0, var_d8, var_98);
                int64_t* rax_4 = var_120;
                int64_t rbx_1 = arg1[2];
                
                if (var_110_3 >= *arg1 - rbx_1)
                {
                    void** result_3 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hdfe7125df86ebea5(arg1, var_118_3, var_110_3);
                    result = result_3;
                    
                    if (result_3)
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
            while (true)
            {
                _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb07204be7eeaa0b8(&var_b0, &var_88);
                
                if (var_b0 == -0x8000000000000000)
                {
                    label_492ca8:
                    core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::he4aa61b1160a476d(&var_88);
                    var_88 = &data_544190;
                    int64_t var_80_1 = 1;
                    int64_t var_78_1 = 8;
                    var_70 = {0};
                    void** result_4 = std::io::Write::write_fmt::h11e288cd92d07ac5(arg1, &var_88);
                    result = result_4;
                    
                    if (!result_4)
                        return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h8312d51ea439d633(arg1);
                    
                    goto label_492d16;
                }
                
                int64_t var_b8_1 = var_a0;
                var_c8 = var_b0;
                var_f0 = var_98;
                void** result_2;
                
                if (var_98 <= 1)
                {
                    var_e8 = &var_c8;
                    uint64_t (* var_e0_2)(void* arg1, int64_t* arg2) = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::ha6e9d0f1c82ff230;
                    var_120 = &data_544180;
                    int64_t var_118_2 = 1;
                    int64_t var_100_2 = 0;
                    int128_t** var_110_2 = &var_e8;
                    int64_t var_108_2 = 1;
                    result_2 = std::io::Write::write_fmt::h11e288cd92d07ac5(arg1, &var_120);
                }
                else
                {
                    var_e8 = &var_c8;
                    uint64_t (* var_e0_1)(void* arg1, int64_t* arg2) = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::ha6e9d0f1c82ff230;
                    uint64_t* var_d8_1 = &var_f0;
                    uint64_t (* var_d0_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                    var_120 = &data_544160;
                    int64_t var_118_1 = 2;
                    int64_t var_100_1 = 0;
                    int128_t** var_110_1 = &var_e8;
                    int64_t var_108_1 = 2;
                    result_2 = std::io::Write::write_fmt::h11e288cd92d07ac5(arg1, &var_120);
                }
                
                result = result_2;
                
                if (result_2)
                    break;
                
                core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h68b709cb09988cea(
                    &var_c8);
            }
        }
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h68b709cb09988cea(&var_c8);
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::he4aa61b1160a476d(&var_88);
    }
    else
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::h54aa05dedcd35041(arg3);
    
    label_492d16:
    return result;
}
