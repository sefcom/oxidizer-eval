
  int64_t* uu_seq::numberparse::parse_decimal_no_exponent::hf3af1526d793a9d8(int64_t* arg1, char* arg2, void* arg3, int64_t arg4)

{
    int64_t var_70;
    bigdecimal::impl_num::_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$::from_str_radix::h190f4d397e37218e(&var_70, arg2, arg3);
    int64_t rax = var_70;
    char var_68;
    int128_t var_67;
    
    if (rax != -0x8000000000000000)
    {
        int128_t var_8f_1 = var_67;
        int64_t var_98 = rax;
        char var_90_1 = var_68;
        int64_t rcx_3 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(
            arg2, arg3, "-.", 2) + arg4;
        void* r14_2 = ~arg4 + arg3;
        
        if (!uu_seq::numberparse::is_minus_zero_float::hd0ffcc4c912113de(arg2, arg3, &var_98))
        {
            int64_t var_78;
            arg1[4] = var_78;
            int128_t zmm0_1 = var_98;
            *(arg1 + 0x10) = var_67;
            *arg1 = zmm0_1;
            arg1[5] = rcx_3;
            arg1[6] = r14_2;
        }
        else
        {
            *arg1 = -0x7ffffffffffffffe;
            arg1[5] = rcx_3;
            arg1[6] = r14_2;
            core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&var_98);
        }
    }
    else
    {
        int64_t var_38_1 = *var_67[0xf];
        int128_t var_48 = var_68;
        core::ptr::drop_in_place$LT$bigdecimal..ParseBigDecimalError$GT$::h74d029f24c9f47db(
            &var_48);
        arg1[1] = 0;
        *arg1 = -0x7ffffffffffffffc;
    }
    return arg1;
}
