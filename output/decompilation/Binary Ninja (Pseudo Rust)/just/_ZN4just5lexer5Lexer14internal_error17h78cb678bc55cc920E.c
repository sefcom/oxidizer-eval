
  fn just::lexer::Lexer::internal_error::h78cb678bc55cc920(arg1: *mut u64, arg2: *mut c_void, arg3: *mut i128) -> i64

{
    let rax: i64 = *arg2.byte_offset(0x80);
    let var_78: i8 = 0x23;
    let var_90: i64 = 0;
    let var_88: i128 = *arg2.byte_offset(0x98);
    let mut var_b8: i128 = *arg2.byte_offset(0x70);
    let var_a8: i64 = rax;
    let var_a0: i128 = *arg2.byte_offset(0x88);
    let mut var_68: ();
    core::ops::function::FnMut::call_mut::hc72515ad55b31cc5(&var_68, arg3);
    let mut var_70: i64 = -0x7fffffffffffffd8;
    just::compile_error::CompileError::new::hd7f8c5d37ebee6c9(arg1, &var_b8, &var_70)
}
