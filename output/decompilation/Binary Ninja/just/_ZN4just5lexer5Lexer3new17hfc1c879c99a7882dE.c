
  int64_t just::lexer::Lexer::new::hfc1c879c99a7882d(uint64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_48 = arg4;
    int64_t var_40 = arg4 + arg5;
    char rax_1;
    int32_t rdx;
    rax_1 = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_48, arg1);
    uint64_t rax_2 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x10);
    
    if (!rax_2)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    int32_t rcx = 0x110000;
    
    if (rax_1 & 1)
        rcx = rdx;
    
    *rax_2 = 1;
    *(rax_2 + 8) = 0;
    *(arg1 + 0x60) = var_48;
    *arg1 = 1;
    *(arg1 + 8) = rax_2;
    *(arg1 + 0x10) = 1;
    *(arg1 + 0x18) = 0;
    *(arg1 + 0x20) = 8;
    *(arg1 + 0x28) = {0};
    *(arg1 + 0xc0) = rcx;
    *(arg1 + 0x38) = 8;
    *(arg1 + 0x40) = {0};
    *(arg1 + 0x70) = arg2;
    *(arg1 + 0x78) = arg3;
    *(arg1 + 0xc4) = 0;
    *(arg1 + 0x80) = arg4;
    *(arg1 + 0x88) = arg5;
    __builtin_memset(arg1 + 0x90, 0, 0x30);
    *(arg1 + 0x50) = 8;
    *(arg1 + 0x58) = 0;
    return arg3;
}
