
  int64_t just::lexer::Lexer::internal_error::h78cb678bc55cc920(uint64_t* arg1, void* arg2, int128_t* arg3)

{
    int64_t rax = *(arg2 + 0x80);
    char var_78 = 0x23;
    int64_t var_90 = 0;
    int128_t var_88 = *(arg2 + 0x98);
    int128_t var_b8 = *(arg2 + 0x70);
    int64_t var_a8 = rax;
    int128_t var_a0 = *(arg2 + 0x88);
    void var_68;
    core::ops::function::FnMut::call_mut::hc72515ad55b31cc5(&var_68, arg3);
    int64_t var_70 = -0x7fffffffffffffd8;
    return just::compile_error::CompileError::new::hd7f8c5d37ebee6c9(arg1, &var_b8, &var_70);
}
