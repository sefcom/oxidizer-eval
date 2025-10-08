
  int64_t just::line::Line::is_infallible::h6abb30f774dbfe3f(int32_t* arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_8 = rax;
    void* rax_1;
    int64_t rdx;
    rax_1 = just::line::Line::first::h712dd6f4cff55297(arg1, arg2);
    
    if (!rax_1)
        return 0;
    
    /* tailcall */
    return just::line::Line::is_infallible::_$u7b$$u7b$closure$u7d$$u7d$::h478bb0846cde286f(rax_1, 
        rdx);
}
