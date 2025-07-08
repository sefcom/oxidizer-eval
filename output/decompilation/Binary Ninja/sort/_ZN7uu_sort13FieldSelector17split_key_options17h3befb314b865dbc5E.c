
  void* uu_sort::FieldSelector::split_key_options::h3befb314b865dbc5(int64_t* arg1, char* arg2, void* arg3)

{
    int64_t var_48 = 0;
    char* var_58 = arg2;
    void* var_50 = arg2 + arg3;
    void* result;
    int32_t rdx;
    result = core::iter::traits::iterator::Iterator::try_fold::h11c5615e8005357f(&var_58);
    
    if (rdx != 0x110000)
    {
        int64_t var_40;
        core::str::_$LT$impl$u20$str$GT$::split_at_checked::h90efbd1904036d35(&var_40, arg2, arg3, 
            result);
        
        if (!var_40)
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, result);
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
