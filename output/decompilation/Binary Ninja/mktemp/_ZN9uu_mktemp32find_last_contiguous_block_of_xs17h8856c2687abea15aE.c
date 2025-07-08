
  int64_t uu_mktemp::find_last_contiguous_block_of_xs::h8856c2687abea15a(int64_t* arg1, char* arg2, void* arg3)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t result;
    void* rdx;
    result = core::str::_$LT$impl$u20$str$GT$::rfind::h6ddde4d1ca094418(arg2, arg3);
    int64_t result_1 = result;
    
    if (result)
    {
        if (rdx != -3)
        {
            if (rdx + 3 >= arg3)
            {
                if (rdx + 3 != arg3)
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, rdx + 3);
                    /* no return */
                }
            }
            else if (*(arg2 + rdx + 3) <= 0xbf)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, rdx + 3);
                /* no return */
            }
        }
        
        int64_t rax_1;
        int64_t rdx_2;
        rax_1 = core::str::_$LT$impl$u20$str$GT$::rfind::h5f0bced45080d5d4(arg2, rdx + 3);
        result = core::option::Option$LT$T$GT$::map_or::h073759538f04d9ef(rax_1, rdx_2);
        arg1[1] = result;
        arg1[2] = rdx + 3;
    }
    
    *arg1 = result_1;
    return result;
}
