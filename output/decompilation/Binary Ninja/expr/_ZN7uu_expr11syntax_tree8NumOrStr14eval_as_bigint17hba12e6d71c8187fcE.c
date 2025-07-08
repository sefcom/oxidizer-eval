
  int512_t uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hba12e6d71c8187fc(int64_t* arg1, int64_t* arg2)

{
    if (*arg2 != -0x8000000000000000)
    {
        int128_t result = *arg2;
        *(arg1 + 0x18) = *(arg2 + 0x10);
        *(arg1 + 8) = result;
        *arg1 = 0;
        return result;
    }
    
    void* rdx_1 = arg2[3];
    void* var_38_1 = rdx_1;
    int128_t var_48 = *(arg2 + 8);
    int64_t var_30;
    num_bigint::bigint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..bigint..BigInt$GT$::from_str_radix::hb9365f03b0604201(&var_30, *var_48[8], rdx_1);
    int64_t rax_2;
    
    if (var_30 != -0x8000000000000000)
    {
        int128_t zmm0 = var_30;
        int128_t var_20;
        *(arg1 + 0x18) = var_20;
        *(arg1 + 8) = zmm0;
        rax_2 = 0;
    }
    else
    {
        arg1[1] = 2;
        rax_2 = 1;
    }
    
    *arg1 = rax_2;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&var_48);
}
