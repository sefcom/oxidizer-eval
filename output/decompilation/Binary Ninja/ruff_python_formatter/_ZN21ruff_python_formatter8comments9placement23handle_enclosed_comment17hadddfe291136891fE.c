
  int64_t sub_701525(int64_t* arg1, int128_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8)

{
    int64_t rcx_1 = arg2[3];
    int64_t result = *(arg2 + 0x38);
    char rcx;
    
    if (rcx_1 == 0x59)
    {
        rcx = *(arg2 + 0x48);
        arg1[1] = 0x59;
        label_701aaf:
        arg1[2] = result;
        result = arg2[4];
        arg1[3] = result;
        arg1[4] = 0;
        *(arg1 + 0x21) = rcx;
        *arg1 = 0x60;
    }
    else
    {
        if (rcx_1 == 0x5a)
        {
            rcx = *(arg2 + 0x48);
            arg1[1] = 0x5a;
            goto label_701aaf;
        }
        
        *(arg1 + 0x40) = arg2[4];
        int128_t zmm0 = *arg2;
        int128_t zmm1 = arg2[1];
        int128_t zmm2 = arg2[2];
        *(arg1 + 0x30) = arg2[3];
        *(arg1 + 0x20) = zmm2;
        *(arg1 + 0x10) = zmm1;
        *arg1 = zmm0;
    }
    return result;
}
