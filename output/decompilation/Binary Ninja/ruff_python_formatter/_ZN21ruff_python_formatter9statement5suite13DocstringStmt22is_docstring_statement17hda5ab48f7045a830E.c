
  int64_t ruff_python_formatter::statement::suite::DocstringStmt::is_docstring_statement::hda5ab48f7045a830(int32_t* arg1, void* arg2)

{
    if (*arg1 != 0x13)
        return 0;
    
    if (0 + -(*(arg1 + 8)))
        return 1;
    
    void* rax_1;
    int64_t rdx_1;
    rax_1 = ruff_python_ast::nodes::StringLiteralValue::iter::ha28899f15c0efce0(&arg1[2]);
    void* var_18 = rax_1;
    int64_t var_10_1 = rdx_1;
    return _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::he15b6d8c4ae7a33c(&var_18, arg2) ^ 1;
}
