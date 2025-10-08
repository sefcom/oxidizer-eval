
  fn bat::vscreen::EscapeSequenceOffsetsIterator::next_csi::h7a02523b82b98ac2(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut rax: i64 = *arg2.byte_offset(0x28);
    let mut rdx: i32 = *arg2.byte_offset(0x30);
    *arg2.byte_offset(0x30) = 0x110001;
    
    if rdx == 0x110001
    {
        rax = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2.byte_offset(0x10));
    }
    
    if rdx == 0x110000
    {
        core::option::expect_failed::h3f620cfb8545dc61("to not be finishedthis should no…");
        /* no return */
    }
    
    let mut r13: i64 = 1;
    
    if rdx >= 0x80
    {
        r13 = 2;
        
        if rdx >= 0x800
        {
            r13 = 4 - 0;
        }
    }
    
    let r13_1: i64 = r13 + rax;
    let mut var_48: i8;
    bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while::hb1e7c9a8d56ba4f5(&var_48, arg2);
    let mut r14_1: i64 = r13_1;
    let var_38: i64;
    
    if var_48 != 0
    {
        r14_1 = var_38;
    }
    
    bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while::h61c196cbe5d42445(&var_48, arg2);
    let mut rbp: i64 = r14_1;
    
    if var_48 != 0
    {
        rbp = var_38;
    }
    
    let mut rax_1: i64 = *arg2.byte_offset(0x28);
    let mut rdx_1: i32 = *arg2.byte_offset(0x30);
    *arg2.byte_offset(0x30) = 0x110001;
    
    if rdx_1 == 0x110001
    {
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2.byte_offset(0x10));
    }
    
    let mut rcx_1: i64 = rbp;
    
    if rdx_1 != 0x110000
    {
        let mut rcx: i64 = 1;
        
        if rdx_1 >= 0x80
        {
            rcx = 2;
            
            if rdx_1 >= 0x800
            {
                rcx = 4 - 0;
            }
        }
        
        rcx_1 = rcx + rax_1;
    }
    
    *arg1 = 4;
    arg1[1] = arg3;
    arg1[2] = r13_1;
    arg1[3] = r14_1;
    arg1[4] = rbp;
    arg1[5] = rcx_1;
    arg3
}
