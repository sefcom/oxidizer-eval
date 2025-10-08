
  int128_t* uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(int128_t* arg1, int64_t* arg2)

{
    if (0 + -(*arg2))
    {
        arg1[1] = arg2[3];
        *arg1 = *(arg2 + 8);
        return arg1;
    }
    
    int128_t var_18 = *(arg2 + 0x10);
    int128_t var_28 = *arg2;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h768a4a9cc1ca9037(arg1, 
        &var_28);
    core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::hd240cd584614de3e(var_28, 
        *var_28[8]);
    return arg1;
}
