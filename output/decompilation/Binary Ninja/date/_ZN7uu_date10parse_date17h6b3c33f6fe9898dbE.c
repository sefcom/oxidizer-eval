
  int64_t* uu_date::parse_date::h6b3c33f6fe9898db(int64_t* arg1, void* arg2)

{
    int64_t var_50;
    int64_t* result = parse_datetime::parse_datetime::h31f6ee9f0c9ea07f(&var_50, 
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h19d63261396b90f5(arg2));
    
    if (var_50 == -0x7ffffffffffffffe)
    {
        int128_t var_48;
        *(arg1 + 8) = var_48;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int64_t var_40;
    int64_t var_28_1 = var_40;
    int128_t var_38 = var_50;
    return uu_date::parse_date::_$u7b$$u7b$closure$u7d$$u7d$::h0b2ffe81582c5501(arg1, arg2, 
        &var_38);
}
