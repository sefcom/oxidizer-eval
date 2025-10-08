
  void* ruff_python_formatter::builders::JoinCommaSeparatedBuilder::nodes::h093f1809138499c5(void* arg1, int64_t arg2)

{
    int64_t rax;
    int64_t rdx_1;
    rax = _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h022f528d55d30d71(arg2);
    int64_t var_40 = rax;
    int64_t var_38 = rdx_1;
    int64_t i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a264e658f5c99fc(&var_40);
    
    if (i_2)
    {
        int64_t i_1 = i_2;
        int64_t i;
        
        do
        {
            int64_t var_30_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..nodes..Alias$GT$$GT$::from::h7ed13ad84bdbb77e(i_1);
            char var_28_1 = 0;
            ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator::h34b4a072574088e2(arg1);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a264e658f5c99fc(&var_40);
            i_1 = i;
        } while (i);
    }
    
    return arg1;
}
