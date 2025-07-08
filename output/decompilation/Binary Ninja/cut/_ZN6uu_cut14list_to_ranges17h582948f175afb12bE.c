
  int64_t* uu_cut::list_to_ranges::h582948f175afb12b(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    if (!arg4)
        uucore::features::ranges::Range::from_list::hf67be8a5ce4e6c04(arg1, arg2, arg3);
    else
    {
        int64_t var_30;
        uucore::features::ranges::Range::from_list::hf67be8a5ce4e6c04(&var_30, arg2, arg3);
        int64_t rax_2;
        int128_t var_28;
        int64_t var_18;
        
        if (!var_30)
        {
            int64_t var_38_1 = var_18;
            int128_t var_48 = var_28;
            uu_cut::list_to_ranges::_$u7b$$u7b$closure$u7d$$u7d$::h500d2b69098a6b6e(&arg1[1], 
                &var_48);
            rax_2 = 0;
        }
        else
        {
            arg1[3] = var_18;
            *(arg1 + 8) = var_28;
            rax_2 = 1;
        }
        *arg1 = rax_2;
    }
    
    return arg1;
}
