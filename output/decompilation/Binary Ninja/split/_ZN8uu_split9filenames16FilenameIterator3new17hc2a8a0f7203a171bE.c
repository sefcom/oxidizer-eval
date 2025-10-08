
  uint64_t uu_split::filenames::FilenameIterator::new::hc2a8a0f7203a171b(int64_t* arg1, int64_t arg2, uint64_t arg3, void* arg4)

{
    uint64_t r14 = arg3;
    uint64_t rcx;
    rcx = *(arg4 + 0x29) << 3;
    uint64_t rax = 0x100a1a >> rcx;
    int64_t r13 = -0x8000000000000000;
    uint64_t result;
    int64_t rsi;
    
    if (!*(arg4 + 0x28))
    {
        int64_t var_68;
        uu_split::number::FixedWidthNumber::new::h658afa50ae467836(&var_68, rax, *(arg4 + 0x18), 
            *(arg4 + 0x20));
        int64_t rdi_1 = var_68;
        
        if (rdi_1 != -0x8000000000000000)
        {
            int64_t var_60;
            rsi = var_60;
            uint64_t var_58;
            rax = var_58;
            uint64_t var_50;
            rcx = var_50;
            arg3 = rax >> 8;
            r13 = rdi_1;
            goto label_46b527;
        }
        
        void var_48;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_48, "numerical suffix start value is …", 0x3f);
        int32_t var_30_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::he26860fb58d4a888(&var_48);
        arg1[1] = result;
        arg1[2] = &data_50ab40;
        *arg1 = -0x7fffffffffffffff;
    }
    else
    {
        rsi = *(arg4 + 0x20);
        label_46b527:
        int128_t zmm0 = *(arg4 + 8);
        *arg1 = r13;
        arg1[1] = rsi;
        arg1[2] = rax;
        *(arg1 + 0x11) = arg3;
        result = arg3 >> 0x30;
        *(arg1 + 0x17) = result;
        *(arg1 + 0x15) = arg3 >> 0x20;
        arg1[3] = rcx;
        arg1[4] = arg2;
        arg1[5] = r14;
        *(arg1 + 0x30) = zmm0;
        arg1[8] = 1;
    }
    return result;
}
