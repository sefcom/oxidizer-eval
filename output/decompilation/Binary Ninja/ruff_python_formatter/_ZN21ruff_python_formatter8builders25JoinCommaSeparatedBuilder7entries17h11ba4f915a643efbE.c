
  void* ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entries::h11ba4f915a643efb(void* arg1, int64_t arg2)

{
    int64_t rax;
    int64_t rdx_1;
    rax = _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h022f528d55d30d71(arg2);
    int64_t var_40 = rax;
    int64_t var_38 = rdx_1;
    int64_t i;
    int64_t rdx_2;
    i = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb1d6a77fc160ddb8(&var_40);
    
    while (i)
    {
        int64_t i_1 = i;
        int64_t var_28_1 = rdx_2;
        ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator::h9423e41039be4e33(arg1);
        i = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb1d6a77fc160ddb8(&var_40);
    }
    
    return arg1;
}
