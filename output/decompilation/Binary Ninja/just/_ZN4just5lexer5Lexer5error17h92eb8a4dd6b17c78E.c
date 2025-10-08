
  int64_t just::lexer::Lexer::error::h92eb8a4dd6b17c78(uint64_t* arg1, void* arg2, int64_t* arg3)

{
    int64_t rax = *arg3;
    void* rdx_2;
    
    if (rax == -0x7fffffffffffffba || rax == -0x7fffffffffffffb8)
    {
        void* rax_1;
        int64_t rdx;
        rax_1 = just::lexer::Lexer::lexeme::h6f4e5a895dbfd937(arg2);
        char rax_2 = just::string_kind::StringKind::from_token_start::h243afdb46a506377(rax_1, rdx);
        
        if (rax_2 == 2)
        {
            just::lexer::Lexer::internal_error::hc085b50b9a8f6202(arg1, arg2, 
                "Lexer::error: expected string or…", 0x35);
            /* tailcall */
            return core::ptr::drop_in_place$LT$just..compile_error_kind..CompileErrorKind$GT$::he0bfeab3ddccc897(arg3);
        }
        
        rdx_2 = (rax_2 << 1) + 1;
    }
    else
        rdx_2 = just::lexer::Lexer::lexeme::h6f4e5a895dbfd937(arg2);
    
    int128_t zmm1 = *(arg2 + 0x80);
    int64_t var_40 = *(arg2 + 0xa8);
    char var_20 = 0x23;
    void* var_38 = rdx_2;
    int128_t var_30 = *(arg2 + 0xb0);
    int128_t var_60 = *(arg2 + 0x70);
    int128_t var_50 = zmm1;
    return just::compile_error::CompileError::new::hd7f8c5d37ebee6c9(arg1, &var_60, arg3);
}
