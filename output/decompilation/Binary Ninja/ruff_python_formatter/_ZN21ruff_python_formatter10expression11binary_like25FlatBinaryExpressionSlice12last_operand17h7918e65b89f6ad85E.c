
  int64_t ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::last_operand::h7918e65b89f6ad85(int64_t arg1, int64_t arg2)

{
    if (arg2)
    {
        int64_t rsi = arg2 << 5;
        
        if (*(arg1 + rsi - 0x20) != 3)
            return arg1 + rsi - 0x20;
    }
    
    char const (** const var_30)[0xf1] = &data_97d630;
    int64_t var_28 = 1;
    void var_38;
    void* var_20 = &var_38;
    int128_t var_18 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_30);
    /* no return */
}
