
  uint64_t* just::analyzer::Analyzer::define::ha4013cd8ffc5a32c(uint64_t* arg1, int64_t* arg2, int128_t* arg3, int64_t arg4, uint64_t arg5, char arg6)

{
    uint64_t r12 = arg5;
    int64_t rbp = arg4;
    void* rax;
    int64_t rdx;
    rax = just::token::Token::lexeme::h66587cdf67f63270(arg3);
    void* rax_1 =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h93f8c431b210ac17(arg2, rax, rdx);
    int64_t var_140;
    
    if (rax_1)
    {
        int64_t rdi_2 = *(rax_1 + 0x10);
        uint64_t rsi_1 = *(rax_1 + 0x18);
        
        if (!arg6 || !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rdi_2, rsi_1, rbp, r12))
        {
            int64_t rbx_1 = arg3[3];
            int64_t rax_5 = *(rax_1 + 0x50);
            uint64_t var_160_1;
            int64_t r13_1;
            void* r14_2;
            
            if (rbx_1 >= rax_5)
            {
                r14_2 = arg3;
                rbx_1 = rax_5;
                var_160_1 = rsi_1;
                r13_1 = rdi_2;
            }
            else
            {
                r14_2 = rax_1 + 0x20;
                var_160_1 = r12;
                r13_1 = rbp;
                rbp = rdi_2;
                r12 = rsi_1;
            }
            
            int64_t var_98_1 = *(r14_2 + 0x40);
            int128_t var_a8_1 = *(r14_2 + 0x30);
            int128_t var_b8_1 = *(r14_2 + 0x20);
            int128_t var_c8_1 = *(r14_2 + 0x10);
            int128_t var_d8 = *r14_2;
            void* rax_8;
            int64_t rdx_5;
            rax_8 = just::token::Token::lexeme::h66587cdf67f63270(arg3);
            int128_t var_110;
            *var_110[8] = rbx_1;
            int64_t var_138_1 = r13_1;
            int128_t var_130;
            var_130 = var_160_1;
            *var_130[8] = rax_8;
            int128_t var_120;
            var_120 = rdx_5;
            *var_120[8] = rbp;
            var_110 = r12;
            var_140 = -0x7fffffffffffffd0;
            return just::token::Token::error::h986494da066a4455(arg1, &var_d8, &var_140);
        }
    }
    
    void* rax_3;
    int64_t rdx_2;
    rax_3 = just::token::Token::lexeme::h66587cdf67f63270(arg3);
    var_140 = rbp;
    uint64_t var_138 = r12;
    int128_t var_130_1 = *arg3;
    int128_t var_120_1 = arg3[1];
    int128_t var_110_1 = arg3[2];
    int128_t var_100_1 = arg3[3];
    int64_t var_f0_1 = arg3[4];
    void var_88;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h96cc7913af61e6ff(&var_88, arg2, rax_3, 
        rdx_2, &var_140);
    arg1[9] = 0x25;
    return arg1;
}
