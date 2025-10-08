
  fn ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entries::h11ba4f915a643efb(arg1: *mut c_void, arg2: i64) -> *mut c_void

{
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h022f528d55d30d71(arg2);
    let mut var_40: i64 = rax;
    let var_38: i64 = rdx_1;
    let mut i: i64;
    let mut rdx_2: i64;
    i = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb1d6a77fc160ddb8(&var_40);
    
    while i != 0
    {
        let i_1: i64 = i;
        let var_28_1: i64 = rdx_2;
        ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator::h9423e41039be4e33(arg1);
        i = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb1d6a77fc160ddb8(&var_40);
    }
    
    arg1
}
