
  int64_t ruff_python_formatter::statement::stmt_with::has_magic_trailing_comma::h2ac603b89bb80e24(void* arg1, int64_t* arg2)

{
    int64_t rax_4 = *(arg1 + 0x10);
    
    if (!rax_4)
        return 0;
    
    uint64_t rax_1 = *(*(arg1 + 8) + rax_4 * 0x68 - 0x14);
    int32_t rsi = *(arg1 + 0x34);
    
    if (rax_1 <= rsi)
        /* tailcall */
        return ruff_python_formatter::other::commas::has_magic_trailing_comma::h260365a92ddcfcb5(
            rax_1, rsi, arg2);
    
    uint64_t var_8 = rax_1;
    core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
    /* no return */
}
