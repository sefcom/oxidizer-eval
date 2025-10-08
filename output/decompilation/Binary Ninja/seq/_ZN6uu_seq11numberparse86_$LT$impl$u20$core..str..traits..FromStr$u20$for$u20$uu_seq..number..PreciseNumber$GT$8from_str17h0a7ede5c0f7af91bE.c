
  int64_t* uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h0a7ede5c0f7af91b(int64_t* arg1, void* arg2, uint64_t arg3)

{
    int64_t var_70;
    _$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$uucore..features..parser..num_parser..ExtendedParser$GT$::extended_parse::hb787f774fac0045c(&var_70, arg2, arg3);
    int64_t rax = var_70;
    int64_t var_68;
    int64_t var_60;
    int128_t var_58;
    int64_t var_48;
    int64_t rsi;
    int64_t rdi_1;
    
    if (rax == -0x7ffffffffffffff7)
    {
        rdi_1 = var_68;
        rsi = var_60;
        int64_t rcx_1 = 0;
        
        if (rdi_1 < -0x7ffffffffffffffb)
            rcx_1 = rdi_1 - 0x7fffffffffffffff;
        
        if (TEST_BITQ(6, rcx_1))
        {
            arg1[6] = var_48;
            *(arg1 + 0x20) = var_58;
            *arg1 = 1;
            arg1[1] = 0;
            arg1[2] = rdi_1;
            arg1[3] = rsi;
            arg1[7] = 0;
        }
        else
        {
            if (TEST_BITQ(9, rcx_1))
                goto label_471785;
            
            arg1[1] = 1;
            *arg1 = 2;
            core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(rdi_1, rsi);
        }
    }
    else if (rax != -0x7ffffffffffffff8)
    {
        arg1[1] = 0;
        *arg1 = 2;
        core::ptr::drop_in_place$LT$uucore..features..parser..num_parser..ExtendedParserError$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$$GT$::hb361ebd9deba089a(&var_70);
    }
    else
    {
        rdi_1 = var_68;
        rsi = var_60;
        label_471785:
        int64_t var_28_1 = var_48;
        int128_t var_38_1 = var_58;
        var_70 = rdi_1;
        int64_t var_68_1 = rsi;
        var_60 = var_58;
        *var_58[8] = var_48;
        uu_seq::numberparse::compute_num_digits::h50b73e0ed5b48e8c(arg1, arg2, arg3, &var_70);
    }
    return arg1;
}
