
  uint64_t uu_touch::prepend_century::h599b7f098e7e4682(int64_t* arg1, char* arg2, int64_t arg3)

{
    char* var_78 = arg2;
    int64_t var_70 = arg3;
    char* rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg2, arg3);
    
    if (!rax)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, 2);
        /* no return */
    }
    
    int64_t rax_1 = core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(rax);
    
    if (rax_1 & 1)
    {
        uint64_t result =
            uu_touch::prepend_century::_$u7b$$u7b$closure$u7d$$u7d$::hf8149f90ade8620d();
        arg1[1] = result;
        arg1[2] = &data_679e10;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int32_t var_7c = 0 + 0x13;
    int32_t* var_68 = &var_7c;
    uint64_t (* var_60_1)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
    int64_t* var_58_1 = &var_78;
    int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h18af96482be5ae0f;
    char const* const var_48 = &data_4574b0;
    int64_t var_40_1 = 2;
    int64_t var_28_1 = 0;
    int32_t** var_38_1 = &var_68;
    int64_t var_30_1 = 2;
    return core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(arg1, &var_48);
}
