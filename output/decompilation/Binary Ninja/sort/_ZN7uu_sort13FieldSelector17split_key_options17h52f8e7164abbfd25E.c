
  int64_t uu_sort::FieldSelector::split_key_options::h52f8e7164abbfd25(int64_t* arg1, char* arg2, int64_t arg3)

{
    int64_t var_48 = 0;
    char* var_58 = arg2;
    void* var_50 = &arg2[arg3];
    int64_t result;
    int32_t rdx;
    result = core::iter::traits::iterator::Iterator::try_fold::h6f7bd2e13eee62dc(&var_58);
    
    if (rdx != 0x110000)
    {
        int64_t result_1 = result;
        int64_t var_40;
        result = core::str::_$LT$impl$u20$str$GT$::split_at_checked::h496d55096ddfbaef(&var_40, 
            arg2, arg3, result);
        
        if (!var_40)
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, result_1);
            /* no return */
        }
        
        int128_t zmm0 = var_40;
        int128_t var_30;
        *(arg1 + 0x10) = var_30;
        *arg1 = zmm0;
    }
    else
    {
        *arg1 = arg2;
        arg1[1] = arg3;
        arg1[2] = 1;
        arg1[3] = 0;
    }
    
    return result;
}
