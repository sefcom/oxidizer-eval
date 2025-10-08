
  int64_t uu_dd::blocks::block::h2c05bb6e2c97f889(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, char arg5, void* arg6)

{
    int64_t var_60 = arg4;
    int64_t var_40 = arg2;
    int64_t var_38 = arg3;
    char var_30 = 0;
    int64_t var_78 = 0;
    int64_t var_70 = 8;
    int64_t var_68 = 0;
    int128_t var_58;
    core::iter::traits::iterator::Iterator::fold::hbe779d8b366e38de(&var_58, &var_40, &var_78, 
        &var_60, arg6 + 0x18);
    int64_t result;
    
    if (result && (!arg5 || !*(arg6 + 8)))
    {
        int64_t r12_1 = *var_58[8];
        int64_t rax_1 = result * 3;
        int64_t r14_1 = *(r12_1 + (rax_1 << 3) - 0x10);
        int64_t rax_3 = *(r12_1 + (rax_1 << 3) - 8) + r14_1;
        var_78 = r14_1;
        int64_t var_70_1 = rax_3;
        
        if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::ha95a2ca59d7da05b(&var_78))
        {
            int64_t result_1 = result - 1;
            result = result_1;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$::h130dd2a707481b7d(*(r12_1 + result_1 * 0x18), r14_1);
        }
    }
    
    arg1[1] = result;
    *arg1 = var_58;
    return result;
}
