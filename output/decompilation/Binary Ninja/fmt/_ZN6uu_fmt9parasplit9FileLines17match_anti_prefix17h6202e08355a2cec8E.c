
  int64_t uu_fmt::parasplit::FileLines::match_anti_prefix::h6202e08355a2cec8(void* arg1, char* arg2, void* arg3)

{
    int64_t result;
    result = 1;
    
    if (*(arg1 + 0x18) != -0x8000000000000000)
    {
        int64_t result_1 = result;
        result = uu_fmt::parasplit::FileLines::match_prefix_generic::h76346122f467dd36(
            *(arg1 + 0x20), *(arg1 + 0x28), arg2, arg3, *(arg1 + 0x4d)) ^ 1;
    }
    
    result &= 1;
    return result;
}
