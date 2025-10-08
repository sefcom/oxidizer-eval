
  int64_t linera_summary::performance_summary::PerformanceSummary::init::hd45f7079d32341d8(void* arg1, int64_t arg2, int128_t* arg3)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t result = memcpy(arg1, arg2, 0x118);
    int128_t zmm1 = arg3[1];
    int128_t zmm2 = arg3[2];
    *(arg1 + 0x118) = *arg3;
    *(arg1 + 0x128) = zmm1;
    *(arg1 + 0x138) = zmm2;
    *(arg1 + 0x2e0) = 0;
    return result;
}
