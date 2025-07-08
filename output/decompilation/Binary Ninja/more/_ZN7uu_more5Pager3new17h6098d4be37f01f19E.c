
  int64_t uu_more::Pager::new::h6098d4be37f01f19(int128_t* arg1, int16_t arg2, int128_t* arg3, int64_t arg4, int64_t arg5, void* arg6)

{
    int64_t result = arg3[1];
    int16_t temp0 = arg2;
    arg2 -= 1;
    
    if (temp0 < 1)
        arg2 = 0;
    
    int16_t r9 = *(arg6 + 0x26);
    *(arg1 + 0x18) = *(arg6 + 0x18);
    arg1[4] = arg2;
    *arg1 = *arg3;
    arg1[1] = arg3[1];
    arg1[2] = arg4;
    *(arg1 + 0x28) = arg5;
    arg1[3] = result;
    *(arg1 + 0x42) = r9;
    *(arg1 + 0x38) = 0;
    return result;
}
