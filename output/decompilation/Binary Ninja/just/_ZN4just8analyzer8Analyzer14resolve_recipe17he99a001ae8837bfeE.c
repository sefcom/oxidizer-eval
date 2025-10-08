
  int64_t just::analyzer::Analyzer::resolve_recipe::he99a001ae8837bfe(int64_t arg1, int64_t arg2, void** arg3, void* arg4)

{
    void* r14 = arg4;
    void** r15 = arg3;
    void* var_48;
    just::namepath::Namepath::split_last::h366fd2e2956db644(&var_48, arg1, arg2);
    void* rbx = var_48;
    int64_t var_38;
    
    if (var_38)
    {
        void* var_40;
        void* r12_1 = var_40;
        int64_t i_1 = var_38 * 0x48;
        void* rax_3;
        int64_t i;
        
        do
        {
            void* rax_2;
            uint64_t rdx_1;
            rax_2 = just::token::Token::lexeme::h66587cdf67f63270(r12_1);
            rax_3 =
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::he9fea18cadddca02(
                *r15, r15[1], rax_2, rdx_1);
            
            if (!rax_3)
                return 0;
            
            r12_1 += 0x48;
            r15 = rax_3 + 0x2a0;
            i = i_1;
            i_1 -= 0x48;
        } while (i != 0x48);
        r14 = rax_3 + 0x2b8;
    }
    
    void* rax_5;
    uint64_t rdx_3;
    rax_5 = just::token::Token::lexeme::h66587cdf67f63270(rbx);
    int64_t* rax_6 =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h3ce94925646e0fd0(*r14, 
        *(r14 + 8), rax_5, rdx_3);
    
    if (!rax_6)
        return 0;
    
    int64_t* rcx_2 = *rax_6;
    int64_t temp0_1 = *rcx_2;
    *rcx_2 += 1;
    
    if (temp0_1 <= -1)
        trap(6);
    
    return *rax_6;
}
