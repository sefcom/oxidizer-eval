
  fn uu_cksum::had_reset::h64707811948cf7fa(arg1: i64, arg2: i64) -> i64

{
    let rbp: i64 = arg1 + arg2 * 0x18;
    let mut var_40: i64 = arg1;
    let var_38: i64 = rbp;
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h35a4fc5d12fa25d2(&var_40);
    var_40 = arg1;
    let var_38_1: i64 = rbp;
    let mut rax_2: i64;
    let mut rdx_1: i64;
    rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h58b888c41225f503(&var_40);
    var_40 = arg1;
    let var_38_2: i64 = rbp;
    let mut rax_3: i64;
    let mut rdx_2: i64;
    rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h372c78c7d6c62d75(&var_40);
    let mut result: i64 = 0;
    
    if rax_1 == 1 && rax_2 == 1 && rax_3 == 1 && rdx < rdx_1
    {
        result = rdx_1 < rdx_2;
    }
    
    result
}
