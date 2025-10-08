
  int64_t just::line::Line::is_shebang::h85dfa5042413650f(int32_t* arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_8 = rax;
    void* rax_1;
    int64_t rdx;
    rax_1 = just::line::Line::first::h712dd6f4cff55297(arg1, arg2);
    
    if (!rax_1)
        return 0;
    
    /* tailcall */
    return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_1, rdx, 
        "#!internal error: entered unreac…", 2);
}
