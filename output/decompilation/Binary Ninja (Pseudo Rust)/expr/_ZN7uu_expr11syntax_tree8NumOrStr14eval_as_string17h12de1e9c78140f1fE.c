
  fn uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    if 0 + -(*arg2)
    {
        arg1[1] = arg2[3];
        *arg1 = *arg2.byte_offset(8);
        return arg1;
    }
    
    let var_18: i128 = *arg2.byte_offset(0x10);
    let mut var_28: i128 = *arg2;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h768a4a9cc1ca9037(arg1, 
        &var_28);
    core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::hd240cd584614de3e(var_28, 
        *var_28[8]);
    arg1
}
