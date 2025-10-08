
  fn bat::input::InputReader::new::h407450f3d585c368(arg1: *mut i128, arg2: *mut i64) -> u64

{
    let mut var_70: i64 = 0;
    let var_68: i64 = 1;
    let var_60: i64 = 0;
    let mut r15: i64;
    r15 = 1;
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = std::io::BufRead::read_until::h5771d3be7d49021a(arg2, 0xa, &var_70);
    let mut var_58: i64 = rax;
    let var_50: i64 = rdx_1;
    
    if (rax & 1) != 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h405c8beab0de965b(&var_58);
    }
    
    let mut rbp: u64;
    
    if var_60 == 0
    {
        rbp = 7;
    }
    else
    {
        let rax_1: i32 = content_inspector::inspect::hcf347dc73ed4857e(var_68, var_60);
        rbp = rax_1;
        
        if rax_1 == 4
        {
            bat::input::read_utf16_line::h81af2cff810bf36a(&var_58, arg2, &var_70, 0xa, 0);
            
            if var_58 == 1
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h349626ed873c0762(&var_58);
            }
            
            rbp = 4;
        }
        else if rbp == 3
        {
            bat::input::read_utf16_line::h81af2cff810bf36a(&var_58, arg2, &var_70, 0, 0xa);
            
            if var_58 == 1
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h349626ed873c0762(&var_58);
            }
            
            rbp = 3;
        }
    }
    
    let var_28: i64 = arg2[6];
    let var_38: i128 = *arg2.byte_offset(0x20);
    let var_48: i128 = *arg2.byte_offset(0x10);
    var_58 = *arg2;
    let result: u64 = alloc::boxed::Box$LT$T$GT$::new::h3afd0b6c433f8ac6(&var_58);
    arg1[1] = var_60;
    *arg1 = var_70;
    *arg1.byte_offset(0x18) = result;
    arg1[2] = &data_ace530;
    *arg1.byte_offset(0x28) = rbp;
    result
}
