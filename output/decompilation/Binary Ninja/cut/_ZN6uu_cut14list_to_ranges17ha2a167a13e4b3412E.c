
  int128_t* uu_cut::list_to_ranges::ha2a167a13e4b3412(int128_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    if (!arg4)
    {
        uucore::features::ranges::Range::from_list::h55160c8343b59905(arg1, arg2, arg3);
        return arg1;
    }
    
    char var_28;
    uucore::features::ranges::Range::from_list::h55160c8343b59905(&var_28, arg2, arg3);
    
    if (!(var_28 & 1))
    {
        void var_20;
        uu_cut::list_to_ranges::_$u7b$$u7b$closure$u7d$$u7d$::h22ada85cd920fbe1(arg1 + 8, &var_20);
        *arg1 = 0;
        return arg1;
    }
    
    int128_t zmm0 = var_28;
    int128_t var_18;
    arg1[1] = var_18;
    *arg1 = zmm0;
    return arg1;
}
