
  int128_t* uu_base32::base_common::format_read_error::h8e4fcbf99236ba5f(int128_t* arg1, char arg2)

{
    char var_d9 = arg2;
    void var_60;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7bd6b561c7dd34ea(&var_60, &var_d9);
    char const (** const var_c0)[0x98];
    int64_t var_50;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h82af769b21b92444(&var_c0, var_50, 0);
    int64_t var_b8;
    
    if (var_c0)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_b8);
        /* no return */
    }
    
    int64_t var_d8 = var_b8;
    int64_t var_b0;
    int64_t var_d0 = var_b0;
    int64_t var_c8 = 0;
    int64_t var_58;
    int64_t var_48 = var_58;
    int64_t var_40 = var_50 + var_58;
    int64_t var_38 = 0;
    int64_t rax_2;
    int32_t i;
    rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_48);
    int64_t* var_88;
    
    if (i != 0x110000)
    {
        do
        {
            if (rax_2)
                alloc::string::String::push::h859ae11851fd8b8e(&var_d8, i);
            else
            {
                core::unicode::unicode_data::conversions::to_upper::h75a19f004959258f(&var_88, i);
                core::char::CaseMappingIter::new::h3810fcac66648f70(&var_c0, &var_88);
                int128_t var_78_1 = var_b0;
                var_88 = var_c0;
                
                while (true)
                {
                    int32_t rax_4 = _$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc58afee2023a2b2b(&var_88);
                    
                    if (rax_4 == 0x110000)
                        break;
                    
                    alloc::string::String::push::h859ae11851fd8b8e(&var_d8, rax_4);
                }
                
                core::ptr::drop_in_place$LT$core..char..ToUppercase$GT$::h43adcbb5a5b65b60();
            }
            
            rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_48);
        } while (i != 0x110000);
    }
    
    var_88 = &var_d8;
    int64_t (* var_80)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    var_c0 = &data_549910;
    int64_t var_b8_1 = 1;
    int64_t var_a0 = 0;
    int64_t** var_b0_1 = &var_88;
    int64_t var_a8 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hb37e8cc30801e00b(arg1, &var_c0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb8d56522d3c47933(&var_d8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb8d56522d3c47933(&var_60);
    return arg1;
}
