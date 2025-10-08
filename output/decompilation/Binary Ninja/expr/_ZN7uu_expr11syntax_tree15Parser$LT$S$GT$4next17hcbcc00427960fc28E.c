
  int64_t uu_expr::syntax_tree::Parser$LT$S$GT$::next::hcbcc00427960fc28(int64_t* arg1, int64_t* arg2)

{
    int64_t rax = arg2[1];
    int64_t rdi = arg2[2];
    
    if (rdi < rax)
    {
        int64_t rax_1 = *arg2;
        int64_t rcx = rdi * 3;
        arg2[2] = rdi + 1;
        *(rax_1 + (rcx << 3) + 0x10);
        int64_t rax_2;
        int64_t rdx;
        rax_2 = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h0a9eb36fc0b98c5f(*(rax_1 + (rcx << 3) + 8));
        arg1[1] = rax_2;
        arg1[2] = rdx;
        *arg1 = 0xd;
        return rax_2;
    }
    
    if (rdi - 1 >= rax)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi - 1, rax);
        /* no return */
    }
    
    int64_t rax_3 = *arg2;
    int64_t rcx_1 = (rdi - 1) * 3;
    *(rax_3 + (rcx_1 << 3) + 0x10);
    int64_t rax_4;
    uint64_t rdx_1;
    rax_4 = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h0a9eb36fc0b98c5f(*(rax_3 + (rcx_1 << 3) + 8));
    int128_t var_20;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha1ed10b7b3735d74(&var_20, rax_4, rdx_1);
    *arg1 = 1;
    *(arg1 + 8) = var_20;
    int64_t var_10;
    arg1[3] = var_10;
    return var_10;
}
