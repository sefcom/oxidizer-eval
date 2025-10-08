
  int64_t uu_dd::bufferedoutput::BufferedOutput::new::hbb882339419c4f36(int64_t* arg1, char* arg2)

{
    int64_t rax;
    int64_t var_28 = rax;
    char r15 = *arg2;
    int32_t rbp = *(arg2 + 4);
    int64_t result;
    int64_t rdx;
    result = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::hcd13cdacfb44ecb8(
        *(*(arg2 + 0x10) + 0x78), 1, 1);
    arg1[3] = r15;
    *(arg1 + 0x19) = *(arg2 + 1);
    *(arg1 + 0x1b) = arg2[3];
    *(arg1 + 0x1c) = rbp;
    *(arg1 + 0x20) = *(arg2 + 8);
    *arg1 = result;
    arg1[1] = rdx;
    arg1[2] = 0;
    return result;
}
