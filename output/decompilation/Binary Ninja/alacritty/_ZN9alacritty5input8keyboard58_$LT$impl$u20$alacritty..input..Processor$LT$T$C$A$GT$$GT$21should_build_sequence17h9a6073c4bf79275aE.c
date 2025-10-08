
  uint64_t alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::should_build_sequence::h9a6073c4bf79275a(int16_t* arg1, int64_t arg2, int32_t arg3, int32_t arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    uint64_t rbx;
    rbx = 1;
    
    if (!(arg3 & 0x200000))
    {
        uint32_t rcx;
        
        if (arg3 & 0x40000)
        {
            if (!_$LT$winit..keyboard..Key$LT$Str$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h6a0d934177bf7820(arg1, &data_4f7bb0[0x40]) && arg1[0x3d] != 3)
            {
                if (!arg4)
                    goto label_8568c9;
                
                if (arg4 == 4)
                {
                    if (*arg1)
                        rbx = !arg2;
                    else
                    {
                        rcx = arg1[1];
                        
                        if (rcx > 0x19 || !TEST_BITD(0x200c000, rcx))
                            goto label_856924;
                    }
                }
            }
        }
        else
        {
            label_8568c9:
            
            if (!*arg1)
            {
                rcx = arg1[1];
                label_856924:
                
                if (rcx < 0x2b)
                    rbx = 0x3fffdfe3fff >> rcx;
            }
            else
                rbx = !arg2;
        }
    }
    
    rbx &= 1;
    return rbx;
}
