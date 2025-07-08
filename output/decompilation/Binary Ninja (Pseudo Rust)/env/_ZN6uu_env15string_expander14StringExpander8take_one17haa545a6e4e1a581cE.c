
  fn uu_env::string_expander::StringExpander::take_one::haa545a6e4e1a581c(arg1: *mut i64) -> i64

{
    let mut var_70: i64;
    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::h67e0541a63634aad(
        &var_70, &arg1[3]);
    let rax: i64 = var_70;
    let result: i64;
    
    if rax != -0x8000000000000000
    {
        let var_5f: i32;
        let var_3c_1: i32 = var_5f;
        let var_3f_1: i32 = var_5f;
        let mut var_50: i64 = rax;
        let result_1: i64 = result;
        let var_60: i8;
        let var_40_1: i8 = var_60;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h59212428aae9c3a9(&var_70, &var_50);
        let mut i: i64;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha03a06f4c3eee9d9(&i, &var_70);
        
        while i != 0
        {
            let var_30: i64;
            let var_28: i64;
            
            if var_30 == 0
            {
                alloc::vec::Vec$LT$T$C$A$GT$::push::hbb1a1cd8ffcceeec(arg1, var_28 >> 0x20);
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h0480c74d12e82013(arg1, var_30, var_28 + var_30);
            }
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha03a06f4c3eee9d9(&i, &var_70);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_env..string_parser..Chunk$GT$$GT$::he4b386000dd6eaf5(&var_70);
        let mut rdx_4: i64;
        rdx_4 = 2;
    }
    
    result
}
