
  int64_t bat::printer::Colors::colored::hac989d8705686777(int64_t* arg1, char arg2, int32_t arg3, char arg4)

{
    int32_t result = 0xee12;
    
    if (arg2 & 1)
        result = bat::terminal::to_ansi_color::h5249a5ef8d27cb4b(arg3, arg4);
    
    arg1[1] = 0;
    *arg1 = 0;
    *(arg1 + 9) = result;
    *(arg1 + 0xd) = 0x15;
    *(arg1 + 0x11) = 0;
    *(arg1 + 0x19) = 0;
    *(arg1 + 0x1a) = result;
    *(arg1 + 0x1e) = 0x15;
    *(arg1 + 0x22) = 1;
    *(arg1 + 0x23) = 0;
    *(arg1 + 0x2b) = 0x1500000015;
    *(arg1 + 0x33) = 0;
    *(arg1 + 0x3b) = 0;
    *(arg1 + 0x3c) = 0x1500000004;
    *(arg1 + 0x44) = 0;
    *(arg1 + 0x4c) = 0;
    *(arg1 + 0x4d) = 0x1500000002;
    *(arg1 + 0x55) = 0;
    *(arg1 + 0x5d) = 0;
    *(arg1 + 0x5e) = 0x1500000006;
    *(arg1 + 0x66) = 0;
    *(arg1 + 0x6e) = 0;
    *(arg1 + 0x6f) = result;
    *(arg1 + 0x73) = 0x15;
    return result;
}
