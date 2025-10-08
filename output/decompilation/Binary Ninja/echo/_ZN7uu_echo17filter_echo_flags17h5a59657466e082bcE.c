
  int64_t uu_echo::filter_echo_flags::h5a59657466e082bc(int128_t* arg1, int128_t* arg2)

{
    int64_t var_e8 = 0;
    int64_t var_e0 = 8;
    int64_t var_d8 = 0;
    int16_t result_1 = 1;
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    int128_t var_78 = *arg2;
    int128_t var_c8;
    
    while (true)
    {
        int64_t var_90;
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfb50bb4acd145f37(&var_90, &var_78);
        
        if (var_90 == -0x8000000000000000)
            break;
        
        int128_t var_108 = var_90;
        
        if (!uu_echo::is_echo_flag::h50b86463f524c5ed(&var_108, &result_1))
        {
            int128_t var_b8;
            int64_t var_80;
            var_b8 = var_80;
            var_c8 = var_108;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h9dad9423e5c6bf86(&var_e8, &var_c8);
            break;
        }
        
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h209e065877f44192(var_108, 
            *var_108[8]);
    }
    
    int128_t var_a8 = zmm2;
    int128_t var_b8_1 = zmm1;
    var_c8 = var_78;
    
    while (true)
    {
        int64_t var_48;
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfb50bb4acd145f37(&var_48, &var_c8);
        
        if (var_48 == -0x8000000000000000)
            break;
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h9dad9423e5c6bf86(&var_e8, &var_48);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$core..iter..adapters..skip..Skip$LT$core..iter..adapters..cloned..Cloned$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$$GT$$GT$::h0cbdb65c0fbd85df(var_c8, *var_c8[8]);
    arg1[1] = var_d8;
    *arg1 = var_e8;
    int16_t result = result_1;
    *(arg1 + 0x18) = result;
    return result;
}
