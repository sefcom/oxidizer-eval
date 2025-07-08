
  uint64_t uu_split::filenames::FilenameIterator::new::hd5c894c6ceac3496(uint64_t arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    uint64_t rcx;
    rcx = *(arg4 + 0x29) << 3;
    uint64_t rax = 0x100a1a >> rcx;
    uint64_t result = arg1;
    int64_t r15 = -0x8000000000000000;
    int64_t r8_1;
    
    if (!*(arg4 + 0x28))
    {
        int64_t var_68;
        uu_split::number::FixedWidthNumber::new::he6f7e0494f2522ba(&var_68, rax, *(arg4 + 0x18), 
            *(arg4 + 0x20));
        int64_t rdx_1 = var_68;
        
        if (rdx_1 != -0x8000000000000000)
        {
            int64_t var_60;
            r8_1 = var_60;
            uint64_t var_58;
            rax = var_58;
            uint64_t var_50;
            rcx = var_50;
            arg1 = rax >> 8;
            r15 = rdx_1;
            goto label_4d9a9d;
        }
        
        void var_48;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&var_48);
        int32_t var_30_1 = 1;
        *(result + 8) = alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&var_48);
        *(result + 0x10) = &data_549160;
        *result = -0x7fffffffffffffff;
    }
    else
    {
        r8_1 = *(arg4 + 0x20);
        label_4d9a9d:
        int128_t zmm0 = *(arg4 + 8);
        *result = r15;
        *(result + 8) = r8_1;
        *(result + 0x10) = rax;
        *(result + 0x11) = arg1;
        *(result + 0x17) = arg1 >> 0x30;
        *(result + 0x15) = arg1 >> 0x20;
        *(result + 0x18) = rcx;
        *(result + 0x20) = arg2;
        *(result + 0x28) = arg3;
        *(result + 0x30) = zmm0;
        *(result + 0x40) = 1;
    }
    return result;
}
