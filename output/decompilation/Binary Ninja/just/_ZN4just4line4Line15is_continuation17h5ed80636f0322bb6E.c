
  int64_t just::line::Line::is_continuation::h5ed80636f0322bb6(void* arg1, int64_t arg2)

{
    if (arg2)
    {
        int64_t rsi = arg2 << 7;
        
        if (*(arg1 + rsi - 0x80) == 0x12)
        {
            int64_t rax;
            int64_t var_18 = rax;
            void* rax_1;
            int64_t rdx;
            rax_1 = just::token::Token::lexeme::h66587cdf67f63270(arg1 + rsi - 0x78);
            *var_18[4] = 0;
            char* rax_2;
            uint64_t rdx_1;
            rax_2 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x5c, &*var_18[4]);
            return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h7edf1f62087d1f75(rax_1, 
                rdx, rax_2, rdx_1);
        }
    }
    
    return 0;
}
