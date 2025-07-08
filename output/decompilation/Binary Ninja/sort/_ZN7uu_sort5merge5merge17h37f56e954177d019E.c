
  int64_t* uu_sort::merge::merge::h37f56e954177d019(int64_t* arg1, int64_t* arg2, int64_t arg3, void* arg4, int64_t arg5, int64_t arg6, void* arg7)

{
    uint64_t rax;
    int64_t rdx_1;
    rax = uu_sort::merge::replace_output_file_in_input_files::h1d16a350d57fc5e2(arg2, arg3, arg5, 
        arg6, arg7);
    
    if (!rax)
    {
        void* rdx_2 = &arg2[arg3 * 3];
        
        if (*(arg4 + 0x30) != -0x8000000000000000)
            uu_sort::merge::merge_with_file_limit::hd33eb504f21b1692(arg1, arg2, rdx_2, arg4, arg7);
        else
            uu_sort::merge::merge_with_file_limit::h68734aa550059387(arg1, arg2, rdx_2, arg4, arg7);
    }
    else
    {
        arg1[1] = rax;
        arg1[2] = rdx_1;
        *arg1 = 3;
    }
    
    return arg1;
}
