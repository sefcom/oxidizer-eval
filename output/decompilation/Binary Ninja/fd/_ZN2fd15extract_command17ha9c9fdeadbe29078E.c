
  int64_t fd::extract_command::ha9c9fdeadbe29078(int128_t* arg1, void* arg2, char arg3)

{
    int64_t r14 = -0x8000000000000000;
    int64_t rax = *(arg2 + 0x160);
    *(arg2 + 0x160) = -0x8000000000000000;
    
    if (-(rax) != -0x8000000000000000)
    {
        int64_t var_18_1 = *(arg2 + 0x178);
        int128_t var_28_1 = *(arg2 + 0x168);
    }
    else
        rax = -0x7fffffffffffffff;
    
    int64_t var_30 = rax;
    int64_t result_1;
    core::option::Option$LT$T$GT$::or_else::hb985d64ac7fccb66(&result_1, &var_30, *(arg2 + 0x1ec), 
        arg3);
    int64_t result = result_1;
    
    if (-(result) == -0x8000000000000000)
    {
        int64_t result_2;
        result = result_2;
        *(arg1 + 8) = result;
        r14 = -0x7fffffffffffffff;
    }
    else if (result != -0x7fffffffffffffff)
    {
        int128_t zmm0_1 = result_1;
        int128_t var_40;
        arg1[1] = var_40;
        *arg1 = zmm0_1;
        return result;
    }
    
    *arg1 = r14;
    return result;
}
