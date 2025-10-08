
  uint64_t uu_sort::merge::merge::h185e646314122f60(int128_t* arg1, int64_t arg2, void* arg3, int64_t* arg4, void* arg5)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t rdx = 0;
    
    if (!(0 + -(*arg4)))
        rdx = arg4[1];
    
    uint64_t result;
    int64_t rdx_1;
    result = uu_sort::merge::replace_output_file_in_input_files::hfdb0f95794ab3c79(arg1, arg2, rdx, 
        arg4[2], arg5);
    
    if (result)
    {
        core::ptr::drop_in_place$LT$uu_sort..Output$GT$::h7def0b71731a8447(arg4);
        return result;
    }
    
    void* rsi_1 = arg1 + arg2 * 0x18;
    
    if (*(arg3 + 0x30) != -0x8000000000000000)
        /* tailcall */
        return uu_sort::merge::merge_with_file_limit::h70249b242f083bc2(arg1, rsi_1, arg3, arg4, 
            arg5);
    
    /* tailcall */
    return uu_sort::merge::merge_with_file_limit::hb24f5112306a39a4(arg1, rsi_1, arg3, arg4, arg5);
}
