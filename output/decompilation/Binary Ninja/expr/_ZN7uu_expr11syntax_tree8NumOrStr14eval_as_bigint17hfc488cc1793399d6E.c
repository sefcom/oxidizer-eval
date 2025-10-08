
  void uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hfc488cc1793399d6(int64_t* arg1, int64_t* arg2)

{
    if (!(0 + -(*arg2)))
    {
        int128_t zmm0 = *arg2;
        *(arg1 + 0x18) = *(arg2 + 0x10);
        *(arg1 + 8) = zmm0;
        *arg1 = 0;
        return;
    }
    
    int64_t var_30;
    num_bigint::bigint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..bigint..BigInt$GT$::from_str_radix::h95b949a2093f4bc3(&var_30, arg2[2], arg2[3]);
    int64_t rax_2;
    
    if (var_30 != -0x8000000000000000)
    {
        int128_t zmm0_1 = var_30;
        int128_t var_20;
        *(arg1 + 0x18) = var_20;
        *(arg1 + 8) = zmm0_1;
        rax_2 = 0;
    }
    else
    {
        arg1[1] = 2;
        rax_2 = 1;
    }
    
    *arg1 = rax_2;
    /* tailcall */
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&arg2[1]);
}
