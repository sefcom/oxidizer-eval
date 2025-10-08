
  fn uu_env::string_expander::StringExpander::take_one::hd9c3a6abe6131b4d(arg1: *mut i64) -> i64

{
    let mut var_68: i64;
    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hba4a109ff858d0ec(
        &var_68, &arg1[3]);
    let rcx: i64 = var_68;
    let result_1: i64;
    let mut result: i64 = result_1;
    
    if -(rcx) != -0x8000000000000000
    {
        let var_57: i32;
        let var_34_1: i32 = var_57;
        let var_37_1: i32 = var_57;
        let mut var_48: i64 = rcx;
        let result_2: i64 = result;
        let var_58: i8;
        let var_38_1: i8 = var_58;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h46652b8823871c89(&var_68, &var_48);
        let mut var_30: i32;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he9c63f9b6555fea0(&var_30, &var_68);
        
        if var_30 == 1
        {
            do
            {
                let var_28: i64;
                let var_20: i64;
                
                if var_28 == 0
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hdfbd7d85d77dea4c(arg1, var_20 >> 0x20);
                }
                else
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hc054d04a7b203992(arg1, var_28, var_20 + var_28);
                }
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he9c63f9b6555fea0(&var_30, &var_68);
            } while (var_30 & 1) != 0;
        }
        
        let mut rdx_5: i64;
        result = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hfa054853d4deaf86(&var_68);
        rdx_5 = 2;
    }
    
    result
}
