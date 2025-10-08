
  int64_t bat::input::InputReader::read_line::h6988384c287f514e(int16_t* arg1, void* arg2, int64_t* arg3)

{
    int64_t rax;
    int64_t var_18 = rax;
    uint64_t rdx = *(arg2 + 0x10);
    
    if (rdx)
    {
        int64_t rax_2 = alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h6ae3258b718e1a7e(arg3, 
            *(arg2 + 8), rdx);
        *(arg2 + 0x10) = 0;
        *arg1 = 0x100;
        return rax_2;
    }
    
    uint32_t rdx_1 = *(arg2 + 0x28);
    int64_t rsi_1 = *(arg2 + 0x18);
    void* rax_3 = *(arg2 + 0x20);
    
    if (rdx_1 == 3)
        /* tailcall */
        return bat::input::read_utf16_line::h0b621ced04bc80c9(arg1, rsi_1, rax_3, arg3, 0, 0xa);
    
    if (rdx_1 == 4)
        /* tailcall */
        return bat::input::read_utf16_line::h0b621ced04bc80c9(arg1, rsi_1, rax_3, arg3, 0xa, 0);
    
    char rax_6;
    int64_t rdx_7;
    rax_6 = (*(rax_3 + 0x70))(rsi_1, 0xa, arg3);
    
    if (rax_6 & 1)
    {
        *(arg1 + 8) = rdx_7;
        *arg1 = 1;
        return rax_6;
    }
    
    *(arg1 + 1) = rdx_7;
    *arg1 = 0;
    return rax_6;
}
