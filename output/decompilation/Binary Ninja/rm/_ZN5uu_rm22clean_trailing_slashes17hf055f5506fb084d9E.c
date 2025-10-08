
  int64_t uu_rm::clean_trailing_slashes::hf055f5506fb084d9(int64_t arg1, int64_t arg2)

{
    int64_t result = arg1;
    int64_t var_38 = arg1;
    int64_t var_30 = arg2;
    int64_t var_40 = 0;
    
    if (arg2 >= 2 && *(result + arg2 - 1) == 0x2f)
    {
        int64_t rcx_1 = arg2;
        int64_t rdx_1;
        bool cond:0_1;
        
        do
        {
            if (rcx_1 <= 1)
            {
                rdx_1 = arg2 - 1;
                break;
            }
            
            rdx_1 = rcx_1 - 1;
            cond:0_1 = *(result + rcx_1 - 2) == 0x2f;
            rcx_1 = rdx_1;
        } while (cond:0_1);
        int64_t var_28 = 0;
        int64_t var_20_1 = rdx_1;
        char var_18_1 = 0;
        int64_t result_1;
        int64_t rdx_3;
        result_1 = _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9243e1a17a31bdc5(&var_28, result, arg2);
        result = result_1;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$$RF$$u5b$u8$u5d$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h161a4a1502d63dd1(&var_40);
    return result;
}
