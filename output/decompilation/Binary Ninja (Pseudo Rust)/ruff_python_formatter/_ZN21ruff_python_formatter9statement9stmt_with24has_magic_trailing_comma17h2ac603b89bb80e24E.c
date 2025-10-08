
  fn ruff_python_formatter::statement::stmt_with::has_magic_trailing_comma::h2ac603b89bb80e24(arg1: *mut c_void, arg2: *mut i64) -> i64

{
    let rax_4: i64 = *arg1.byte_offset(0x10);
    
    if rax_4 == 0
    {
        return 0;
    }
    
    let rax_1: u64 = *(*arg1.byte_offset(8) + rax_4 * 0x68 - 0x14);
    let rsi: i32 = *arg1.byte_offset(0x34);
    
    if rax_1 <= rsi
    {
        /* tailcall */
        return ruff_python_formatter::other::commas::has_magic_trailing_comma::h260365a92ddcfcb5(
            rax_1, rsi, arg2);
    }
    
    let var_8: u64 = rax_1;
    core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
    /* no return */
}
