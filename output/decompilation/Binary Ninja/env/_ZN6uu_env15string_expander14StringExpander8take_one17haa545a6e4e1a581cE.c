
  int64_t uu_env::string_expander::StringExpander::take_one::haa545a6e4e1a581c(int64_t* arg1)

{
    int64_t var_70;
    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::h67e0541a63634aad(
        &var_70, &arg1[3]);
    int64_t rax = var_70;
    int64_t result;
    
    if (rax != -0x8000000000000000)
    {
        int32_t var_5f;
        int32_t var_3c_1 = var_5f;
        int32_t var_3f_1 = var_5f;
        int64_t var_50 = rax;
        int64_t result_1 = result;
        char var_60;
        char var_40_1 = var_60;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h59212428aae9c3a9(&var_70, &var_50);
        int64_t i;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha03a06f4c3eee9d9(&i, &var_70);
        
        while (i)
        {
            int64_t var_30;
            int64_t var_28;
            
            if (!var_30)
                alloc::vec::Vec$LT$T$C$A$GT$::push::hbb1a1cd8ffcceeec(arg1, var_28 >> 0x20);
            else
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h0480c74d12e82013(arg1, var_30, var_28 + var_30);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha03a06f4c3eee9d9(&i, &var_70);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_env..string_parser..Chunk$GT$$GT$::he4b386000dd6eaf5(&var_70);
        int64_t rdx_4;
        rdx_4 = 2;
    }
    
    return result;
}
