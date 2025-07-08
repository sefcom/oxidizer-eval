
  int64_t uu_yes::splice::maybe_unsupported::ha4b4a1ce58e22c87(int32_t arg1) __pure

{
    uint64_t rax_3 = arg1;
    
    if (arg1 <= 0x26 && TEST_BITQ(0x4000400200, rax_3))
        return 0;
    
    return rax_3 << 0x20 | 2;
}
