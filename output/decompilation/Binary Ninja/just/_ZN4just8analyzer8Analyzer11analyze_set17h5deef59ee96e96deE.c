
  void* just::analyzer::Analyzer::analyze_set::h5deef59ee96e96de(uint64_t* arg1, void* arg2, int64_t arg3, void* arg4)

{
    void* rax;
    uint64_t rdx;
    rax = just::token::Token::lexeme::h66587cdf67f63270(arg4 + 0x50);
    void* result =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hcd3ea63b15358f58(arg2, 
        arg3, rax, rdx);
    
    if (!result)
    {
        arg1[9] = 0x25;
        return result;
    }
    
    void* rax_1;
    int64_t rdx_2;
    rax_1 = just::token::Token::lexeme::h66587cdf67f63270(result + 0x50);
    void* var_80_1 = rax_1;
    int64_t var_78_1 = rdx_2;
    int64_t var_70_1 = *(result + 0x80);
    int64_t var_88 = -0x7fffffffffffffe3;
    return just::token::Token::error::h986494da066a4455(arg1, arg4 + 0x50, &var_88);
}
