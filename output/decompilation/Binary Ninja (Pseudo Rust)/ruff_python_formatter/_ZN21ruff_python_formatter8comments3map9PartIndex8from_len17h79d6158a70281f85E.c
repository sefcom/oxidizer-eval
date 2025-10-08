
  fn ruff_python_formatter::comments::map::PartIndex::from_len::h79d6158a70281f85(arg1: i64) -> u64

{
    if arg1 < 0xffffffff
    {
        return arg1 + 1;
    }
    
    let var_8: i64 = 0xffffffff;
    core::panicking::panic::h85d6dd562679980c("assertion failed: value < u32::M…");
    /* no return */
}
