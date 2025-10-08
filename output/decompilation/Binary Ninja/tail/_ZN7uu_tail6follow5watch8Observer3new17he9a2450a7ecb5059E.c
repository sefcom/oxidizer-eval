
  int64_t uu_tail::follow::watch::Observer::new::he9a2450a7ecb5059(int64_t* arg1, char arg2, char arg3, char arg4, int128_t* arg5, int32_t arg6)

{
    int64_t rax;
    int64_t var_38 = rax;
    char result = uu_tail::platform::unix::supports_pid_checks::ha9469f91d23a1bd0(arg6);
    int32_t rcx = 0;
    
    if (result)
        rcx = arg6;
    
    *(arg1 + 0x8c) = arg2;
    *(arg1 + 0x8e) = arg3;
    *(arg1 + 0x8d) = arg4;
    *arg1 = 3;
    arg1[4] = 0;
    arg1[5] = 8;
    arg1[6] = 0;
    int128_t zmm1 = arg5[1];
    int128_t zmm2 = arg5[2];
    int128_t zmm3 = arg5[3];
    *(arg1 + 0x38) = *arg5;
    *(arg1 + 0x48) = zmm1;
    *(arg1 + 0x58) = zmm2;
    *(arg1 + 0x68) = zmm3;
    *(arg1 + 0x78) = arg5[4];
    arg1[0x11] = rcx;
    return result;
}
