
  int64_t uu_tr::operation::Sequence::parse_char_range::h5ec19fc784f30684(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    void* const var_18 = "-' are in reverse collating sequ…";
    int64_t var_10 = 1;
    int32_t var_38;
    nom::sequence::separated_pair::_$u7b$$u7b$closure$u7d$$u7d$::h10f375dd8b7b174e(&var_38, 
        &var_18, arg2, arg3);
    int64_t result;
    int128_t var_28;
    
    if (var_38 != 3)
    {
        int128_t zmm0 = var_38;
        *(arg1 + 0x18) = var_28;
        *(arg1 + 8) = zmm0;
        result = 1;
    }
    else
    {
        uint32_t rax = *var_28[8];
        uint32_t rcx_1 = *var_28[9];
        int64_t r8_1 = -0x7ffffffffffffff5;
        uint32_t rdx_3 = (rax << 8) + (rcx_1 << 0x10) + 1;
        
        if (rax > rcx_1)
            r8_1 = -0x7ffffffffffffff6;
        
        if (rax > rcx_1)
            rdx_3 = rcx_1;
        
        int128_t var_30;
        *(arg1 + 8) = var_30;
        arg1[3] = r8_1;
        arg1[4] = rdx_3;
        *(arg1 + 0x24) = rax;
        result = 0;
    }
    *arg1 = result;
    return result;
}
