
  int64_t uu_expr::syntax_tree::Parser::next::he96b47f70d6fcb97(int64_t* arg1, int64_t* arg2)

{
    int64_t rax = arg2[1];
    int64_t rdi = arg2[2];
    int64_t result;
    
    if (rdi >= rax)
    {
        if (rdi - 1 >= rax)
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(rdi - 1, rax);
            /* no return */
        }
        
        int64_t* rax_2 = *arg2;
        int64_t rdi_3 = (rdi - 1) << 4;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(&arg1[1], 
            *(rax_2 + rdi_3), *(rax_2 + rdi_3 + 8));
        result = 1;
    }
    else
    {
        int128_t* rax_1 = *arg2;
        arg2[2] = rdi + 1;
        *(arg1 + 8) = rax_1[rdi];
        result = 7;
    }
    
    *arg1 = result;
    return result;
}
