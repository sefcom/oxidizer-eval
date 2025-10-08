
  fn just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg1: *mut c_void, arg2: i64, arg3: u64) -> i64

{
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = just::lexer::Lexer::rest::h4f82959a07fe6144(arg1);
    /* tailcall */
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax, rdx, arg2, arg3)
}
