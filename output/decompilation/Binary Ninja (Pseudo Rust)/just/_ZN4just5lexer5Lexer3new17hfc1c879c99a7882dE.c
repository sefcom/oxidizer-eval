
  fn just::lexer::Lexer::new::hfc1c879c99a7882d(arg1: u64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut var_48: i64 = arg4;
    let var_40: i64 = arg4 + arg5;
    let mut rax_1: i8;
    let mut rdx: i32;
    rax_1 = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_48, arg1);
    let rax_2: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x10);
    
    if rax_2 == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    let mut rcx: i32 = 0x110000;
    
    if (rax_1 & 1) != 0
    {
        rcx = rdx;
    }
    
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
    arg3
}
