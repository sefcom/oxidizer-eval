
  int64_t uu_cksum::had_reset::h64707811948cf7fa(int64_t arg1, int64_t arg2)

{
    int64_t rbp = arg1 + arg2 * 0x18;
    int64_t var_40 = arg1;
    int64_t var_38 = rbp;
    int64_t rax_1;
    int64_t rdx;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h35a4fc5d12fa25d2(&var_40);
    var_40 = arg1;
    int64_t var_38_1 = rbp;
    int64_t rax_2;
    int64_t rdx_1;
    rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h58b888c41225f503(&var_40);
    var_40 = arg1;
    int64_t var_38_2 = rbp;
    int64_t rax_3;
    int64_t rdx_2;
    rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h372c78c7d6c62d75(&var_40);
    int64_t result = 0;
    
    if (rax_1 == 1 && rax_2 == 1 && rax_3 == 1 && rdx < rdx_1)
        result = rdx_1 < rdx_2;
    
    return result;
}
