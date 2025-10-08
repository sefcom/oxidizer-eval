
  uint64_t rg::flags::hiargs::BinaryDetection::from_low_args::h6e6bee379070ab5d(char arg1, char arg2) __pure

{
    int32_t rax;
    rax = arg2 == 1;
    uint64_t result = (rax << 0x10) + 0x10002;
    
    if (arg1 & 1)
        result = 0;
    
    if (arg2 == 2)
        return 0;
    
    return result;
}
