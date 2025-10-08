
  fn alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::should_build_sequence::h9a6073c4bf79275a(arg1: *mut i16, arg2: i64, arg3: i32, arg4: i32) -> u64

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut rbx: u64;
    rbx = 1;
    
    if (arg3 & 0x200000) == 0
    {
        let mut rcx: u32;
        
        if (arg3 & 0x40000) != 0
        {
            if _$LT$winit..keyboard..Key$LT$Str$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h6a0d934177bf7820(arg1, &data_4f7bb0[0x40]) == 0 && arg1[0x3d] != 3
            {
                if arg4 == 0
                {
                    goto 'label_8568c9;
                }
                
                if arg4 == 4
                {
                    if *arg1 != 0
                    {
                        rbx = arg2 == 0;
                    }
                    else
                    {
                        rcx = arg1[1];
                        
                        if rcx > 0x19 || !TEST_BITD(0x200c000, rcx)
                        {
                            goto 'label_856924;
                        }
                    }
                }
            }
        }
        else
        {
            'label_8568c9:
            
            if *arg1 == 0
            {
                rcx = arg1[1];
                'label_856924:
                
                if rcx < 0x2b
                {
                    rbx = 0x3fffdfe3fff >> rcx;
                }
            }
            else
            {
                rbx = arg2 == 0;
            }
        }
    }
    
    rbx &= 1;
    rbx
}
