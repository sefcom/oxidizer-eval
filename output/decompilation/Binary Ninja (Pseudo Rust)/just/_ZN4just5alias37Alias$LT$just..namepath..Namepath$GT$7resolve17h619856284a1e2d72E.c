
  fn just::alias::Alias$LT$just..namepath..Namepath$GT$::resolve::h619856284a1e2d72(arg1: *mut i128, arg2: *mut i64, arg3: *mut c_void) -> i64

{
    let var_30: *mut c_void = arg3;
    let mut rax_1: *mut c_void;
    let mut rdx: u64;
    rax_1 = just::token::Token::lexeme::h66587cdf67f63270(
        just::namepath::Namepath::last::hd204dfab89d26ff3(arg2[1], arg2[2]));
    let mut rax_2: *mut c_void;
    let mut rdx_1: i64;
    rax_2 = just::token::Token::lexeme::h66587cdf67f63270(arg3.byte_offset(0xa0));
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax_1, rdx, rax_2, rdx_1) == 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: self.target.la…");
        /* no return */
    }
    
    arg1[1] = arg2[0xe];
    *arg1 = *arg2.byte_offset(0x60);
    let zmm1: i128 = *arg2.byte_offset(0x28);
    let zmm2: i128 = *arg2.byte_offset(0x38);
    let zmm3: i128 = *arg2.byte_offset(0x48);
    arg1[2] = *arg2.byte_offset(0x18);
    arg1[3] = zmm1;
    arg1[4] = zmm2;
    arg1[5] = zmm3;
    arg1[6] = arg2[0xb];
    *arg1.byte_offset(0x18) = arg3;
    /* tailcall */
    core::ptr::drop_in_place$LT$just..namepath..Namepath$GT$::h15a9b2a7c35752fb(arg2)
}
