
  uint64_t bat::input::InputReader::new::h407450f3d585c368(int128_t* arg1, int64_t* arg2)

{
    int64_t var_70 = 0;
    int64_t var_68 = 1;
    int64_t var_60 = 0;
    int64_t r15;
    r15 = 1;
    int64_t rax;
    int64_t rdx_1;
    rax = std::io::BufRead::read_until::h5771d3be7d49021a(arg2, 0xa, &var_70);
    int64_t var_58 = rax;
    int64_t var_50 = rdx_1;
    
    if (rax & 1)
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h405c8beab0de965b(&var_58);
    
    uint64_t rbp;
    
    if (!var_60)
        rbp = 7;
    else
    {
        int32_t rax_1 = content_inspector::inspect::hcf347dc73ed4857e(var_68, var_60);
        rbp = rax_1;
        
        if (rax_1 == 4)
        {
            bat::input::read_utf16_line::h81af2cff810bf36a(&var_58, arg2, &var_70, 0xa, 0);
            
            if (var_58 == 1)
                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h349626ed873c0762(&var_58);
            
            rbp = 4;
        }
        else if (rbp == 3)
        {
            bat::input::read_utf16_line::h81af2cff810bf36a(&var_58, arg2, &var_70, 0, 0xa);
            
            if (var_58 == 1)
                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h349626ed873c0762(&var_58);
            
            rbp = 3;
        }
    }
    
    int64_t var_28 = arg2[6];
    int128_t var_38 = *(arg2 + 0x20);
    int128_t var_48 = *(arg2 + 0x10);
    var_58 = *arg2;
    uint64_t result = alloc::boxed::Box$LT$T$GT$::new::h3afd0b6c433f8ac6(&var_58);
    arg1[1] = var_60;
    *arg1 = var_70;
    *(arg1 + 0x18) = result;
    arg1[2] = &data_ace530;
    *(arg1 + 0x28) = rbp;
    return result;
}
