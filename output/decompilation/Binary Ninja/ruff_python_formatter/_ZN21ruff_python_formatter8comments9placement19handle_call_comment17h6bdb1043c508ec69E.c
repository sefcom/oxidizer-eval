
  int512_t ruff_python_formatter::comments::placement::handle_call_comment::h6bdb1043c508ec69(int64_t* arg1, int128_t* arg2)

{
    int128_t result;
    
    if (*(arg2 + 0x48) != 1)
    {
        label_7033ed:
        *(arg1 + 0x40) = arg2[4];
        result = *arg2;
        int128_t zmm1 = arg2[1];
        int128_t zmm2 = arg2[2];
        *(arg1 + 0x30) = arg2[3];
        *(arg1 + 0x20) = zmm2;
        *(arg1 + 0x10) = zmm1;
        *arg1 = result;
    }
    else
    {
        int64_t rax_1 = arg2[1];
        
        if (rax_1 == 0x5e)
            goto label_7033ed;
        
        int64_t rcx_1 = *(arg2 + 0x18);
        int64_t var_30 = rax_1;
        int64_t var_28_1 = rcx_1;
        int64_t rcx_2 = arg2[2];
        
        if (rcx_2 == 0x5e)
            goto label_7033ed;
        
        *(arg2 + 0x28);
        int32_t rbx_1 = arg2[4];
        int32_t rbp_1 = *(arg2 + 0x44);
        
        if (!ruff_python_formatter::comments::placement::handle_call_comment::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hd7e0ed6b45e73cb8(&var_30, rbx_1, rbp_1, rcx_2))
            goto label_7033ed;
        
        result = *arg2;
        *(arg1 + 8) = result;
        arg1[3] = rbx_1;
        *(arg1 + 0x1c) = rbp_1;
        arg1[4] = 0x100;
        *arg1 = 0x60;
    }
    
    return result;
}
