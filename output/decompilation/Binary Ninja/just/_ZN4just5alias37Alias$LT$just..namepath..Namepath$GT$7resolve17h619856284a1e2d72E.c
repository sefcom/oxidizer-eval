
  int64_t just::alias::Alias$LT$just..namepath..Namepath$GT$::resolve::h619856284a1e2d72(int128_t* arg1, int64_t* arg2, void* arg3)

{
    void* var_30 = arg3;
    void* rax_1;
    uint64_t rdx;
    rax_1 = just::token::Token::lexeme::h66587cdf67f63270(
        just::namepath::Namepath::last::hd204dfab89d26ff3(arg2[1], arg2[2]));
    void* rax_2;
    int64_t rdx_1;
    rax_2 = just::token::Token::lexeme::h66587cdf67f63270(arg3 + 0xa0);
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax_1, rdx, rax_2, rdx_1))
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: self.target.la…");
        /* no return */
    }
    
    arg1[1] = arg2[0xe];
    *arg1 = *(arg2 + 0x60);
    int128_t zmm1 = *(arg2 + 0x28);
    int128_t zmm2 = *(arg2 + 0x38);
    int128_t zmm3 = *(arg2 + 0x48);
    arg1[2] = *(arg2 + 0x18);
    arg1[3] = zmm1;
    arg1[4] = zmm2;
    arg1[5] = zmm3;
    arg1[6] = arg2[0xb];
    *(arg1 + 0x18) = arg3;
    /* tailcall */
    return core::ptr::drop_in_place$LT$just..namepath..Namepath$GT$::h15a9b2a7c35752fb(arg2);
}
