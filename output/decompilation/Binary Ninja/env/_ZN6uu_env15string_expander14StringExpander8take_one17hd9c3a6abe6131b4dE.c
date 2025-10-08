
  int64_t uu_env::string_expander::StringExpander::take_one::hd9c3a6abe6131b4d(int64_t* arg1)

{
    int64_t var_68;
    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hba4a109ff858d0ec(
        &var_68, &arg1[3]);
    int64_t rcx = var_68;
    int64_t result_1;
    int64_t result = result_1;
    
    if (-(rcx) != -0x8000000000000000)
    {
        int32_t var_57;
        int32_t var_34_1 = var_57;
        int32_t var_37_1 = var_57;
        int64_t var_48 = rcx;
        int64_t result_2 = result;
        char var_58;
        char var_38_1 = var_58;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h46652b8823871c89(&var_68, &var_48);
        int32_t var_30;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he9c63f9b6555fea0(&var_30, &var_68);
        
        if (var_30 == 1)
        {
            do
            {
                int64_t var_28;
                int64_t var_20;
                
                if (!var_28)
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hdfbd7d85d77dea4c(arg1, var_20 >> 0x20);
                else
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hc054d04a7b203992(arg1, var_28, var_20 + var_28);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he9c63f9b6555fea0(&var_30, &var_68);
            } while (var_30 & 1);
        }
        
        int64_t rdx_5;
        result = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hfa054853d4deaf86(&var_68);
        rdx_5 = 2;
    }
    
    return result;
}
