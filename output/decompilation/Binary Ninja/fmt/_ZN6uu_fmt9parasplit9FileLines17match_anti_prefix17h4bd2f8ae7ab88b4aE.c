
  uint64_t uu_fmt::parasplit::FileLines::match_anti_prefix::h4bd2f8ae7ab88b4a(void* arg1, char* arg2, int64_t arg3)

{
    uint64_t result;
    result = 1;
    
    if (!(0 + -(*(arg1 + 0x18))))
    {
        uint64_t result_1 = result;
        result = uu_fmt::parasplit::FileLines::match_prefix_generic::hd0d8d5b446adcff4(
            *(arg1 + 0x20), *(arg1 + 0x28), arg2, arg3, *(arg1 + 0x4d)) ^ 1;
    }
    
    result &= 1;
    return result;
}
