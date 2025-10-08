
  fn ruff_python_formatter::builders::JoinCommaSeparatedBuilder::nodes::h093f1809138499c5(arg1: *mut c_void, arg2: i64) -> *mut c_void

{
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h022f528d55d30d71(arg2);
    let mut var_40: i64 = rax;
    let var_38: i64 = rdx_1;
    let i_2: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a264e658f5c99fc(&var_40);
    
    if i_2 != 0
    {
        let mut i_1: i64 = i_2;
        let mut i: i64;
        
        do
        {
            let var_30_1: i64 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..nodes..Alias$GT$$GT$::from::h7ed13ad84bdbb77e(i_1);
            let var_28_1: i8 = 0;
            ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator::h34b4a072574088e2(arg1);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a264e658f5c99fc(&var_40);
            i_1 = i;
        } while i != 0;
    }
    
    arg1
}
