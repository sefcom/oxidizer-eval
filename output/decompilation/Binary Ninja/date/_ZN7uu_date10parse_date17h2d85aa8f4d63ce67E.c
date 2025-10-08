
  int64_t uu_date::parse_date::h2d85aa8f4d63ce67(int64_t* arg1, int64_t* arg2)

{
    int64_t r15 = arg2[1];
    int64_t r12 = arg2[2];
    int64_t var_68;
    parse_datetime::parse_datetime::hb5f5dc534e334c2f(&var_68, 
        _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h0a9eb36fc0b98c5f(r15));
    
    if (var_68 != -0x7ffffffffffffffe)
    {
        int128_t var_50;
        uu_date::parse_date::_$u7b$$u7b$closure$u7d$$u7d$::h9ac90a1b49ad5773(&var_50, r15, r12, 
            &var_68);
        int128_t zmm0_1 = var_50;
        int128_t var_30;
        *(arg1 + 0x20) = var_30;
        int128_t var_40;
        *(arg1 + 0x10) = var_40;
        *arg1 = zmm0_1;
    }
    else
    {
        int128_t var_60;
        *(arg1 + 8) = var_60;
        *arg1 = -0x8000000000000000;
    }
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hca9b678a5ae7a7e7(arg2);
}
