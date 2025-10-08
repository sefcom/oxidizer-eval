
  uint64_t uu_truncate::truncate::h52f8d6c8d64891bb(char arg1, int64_t arg2, int64_t* arg3, int64_t* arg4, void* arg5, int64_t arg6)

{
    char rax;
    char var_38 = rax;
    arg1 ^= 1;
    int64_t rbx = *arg3;
    int64_t r15 = *arg4;
    int64_t rsi_3;
    int64_t rdi_1;
    uint64_t result;
    
    if (-(rbx) != -0x8000000000000000)
    {
        int64_t r14_1 = arg3[1];
        int64_t rsi_4 = arg3[2];
        
        if (r15 != -0x8000000000000000)
        {
            int64_t rbp_1 = arg4[1];
            uint64_t result_3;
            int64_t rdx_5;
            result_3 = uu_truncate::truncate_reference_and_size::h51f53258c03351bb(r14_1, rsi_4, 
                rbp_1, arg4[2], arg5, arg6, arg1);
            result = result_3;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e1035533d42b527(r15, rbp_1);
        }
        else
        {
            uint64_t result_2;
            int64_t rdx_3;
            result_2 = uu_truncate::truncate_reference_file_only::h81d650944660fde8(r14_1, rsi_4, 
                arg5, arg6, arg1);
            result = result_2;
        }
        
        rdi_1 = rbx;
        rsi_3 = r14_1;
    }
    else
    {
        if (r15 == -0x8000000000000000)
        {
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
        
        int64_t rbx_1 = arg4[1];
        uint64_t result_1;
        int64_t rdx_1;
        result_1 =
            uu_truncate::truncate_size_only::h1f53334980ddb1bc(rbx_1, arg4[2], arg5, arg6, arg1);
        result = result_1;
        rdi_1 = r15;
        rsi_3 = rbx_1;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e1035533d42b527(rdi_1, rsi_3);
    return result;
}
