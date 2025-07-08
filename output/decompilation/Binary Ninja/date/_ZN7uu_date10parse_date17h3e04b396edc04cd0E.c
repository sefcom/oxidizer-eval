
  int64_t uu_date::parse_date::h3e04b396edc04cd0(int64_t* arg1, int64_t* arg2)

{
    int64_t r15 = arg2[1];
    int64_t r12 = arg2[2];
    int64_t var_80;
    parse_datetime::parse_datetime::h31f6ee9f0c9ea07f(&var_80, 
        _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h98391d7b071887d9(r15));
    
    if (var_80 != -0x7ffffffffffffffe)
    {
        int64_t var_70;
        int64_t var_58_1 = var_70;
        int128_t var_68 = var_80;
        int128_t var_50;
        uu_date::parse_date::_$u7b$$u7b$closure$u7d$$u7d$::h67e856eb4e5a9f91(&var_50, r15, r12, 
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
        int128_t var_78;
        *(arg1 + 8) = var_78;
        *arg1 = -0x8000000000000000;
    }
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(arg2);
}
