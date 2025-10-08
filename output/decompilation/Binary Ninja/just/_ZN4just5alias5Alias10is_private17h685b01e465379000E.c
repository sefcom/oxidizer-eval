
  int64_t just::alias::Alias::is_private::h685b01e465379000(int64_t* arg1)

{
    void* rax;
    int64_t rdx;
    rax = just::token::Token::lexeme::h66587cdf67f63270(&arg1[4]);
    int32_t var_1c = 0;
    char* rax_1;
    uint64_t rdx_1;
    rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x5f, &var_1c);
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax, rdx, rax_1, 
            rdx_1))
        return 1;
    
    return just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg1, 0xf);
}
