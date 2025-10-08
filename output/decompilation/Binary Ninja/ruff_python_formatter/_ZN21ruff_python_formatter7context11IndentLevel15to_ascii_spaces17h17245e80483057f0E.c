
  uint16_t ruff_python_formatter::context::IndentLevel::to_ascii_spaces::h17245e80483057f0(int16_t arg1, char arg2) __pure

{
    uint16_t rax = arg2;
    int16_t temp0 = arg1;
    arg1 -= 1;
    
    if (temp0 < 1)
        arg1 = 0;
    
    int16_t temp1;
    uint16_t result;
    temp1 = HIGHW(rax * arg1);
    result = LOWW(rax * arg1);
    int64_t rdx;
    rdx = temp1;
    
    if ((rax * arg1) >> 0x10)
        return 0xffff;
    
    return result;
}
