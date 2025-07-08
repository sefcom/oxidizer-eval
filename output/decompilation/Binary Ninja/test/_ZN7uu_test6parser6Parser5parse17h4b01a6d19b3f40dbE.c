
  int64_t uu_test::parser::Parser::parse::h4b01a6d19b3f40db(int64_t* arg1, int64_t* arg2)

{
    int32_t var_88;
    int64_t result = uu_test::parser::Parser::expr::h14b244d6254724ab(&var_88, arg2);
    int128_t var_78;
    
    if (var_88 != 7)
    {
        int128_t zmm0_1 = var_88;
        *(arg1 + 0x10) = var_78;
        *arg1 = zmm0_1;
    }
    else
    {
        result = arg2[3];
        arg2[3] = -0x7fffffffffffffff;
        int64_t result_1;
        int128_t var_40;
        
        if (result != -0x7fffffffffffffff)
        {
            var_40 = *(arg2 + 0x20);
            result_1 = result;
        }
        else
        {
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h64663e472b050a2b(&result_1, &arg2[6]);
            result = result_1;
        }
        
        if (result != -0x8000000000000000)
        {
            int128_t var_68 = result_1;
            var_88 = 1;
            int64_t var_80_1 = *var_68[8];
            var_78 = *var_40[8];
            *var_78[8] = 1;
            int128_t var_30;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&var_30, 
                &var_88);
            int64_t var_20;
            arg1[3] = var_20;
            *(arg1 + 8) = var_30;
            *arg1 = 2;
            return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(
                &var_68);
        }
        
        *arg1 = 7;
    }
    return result;
}
