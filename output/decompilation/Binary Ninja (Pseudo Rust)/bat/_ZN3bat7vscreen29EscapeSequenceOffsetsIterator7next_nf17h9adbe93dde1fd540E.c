
  fn bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::h9adbe93dde1fd540(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut r15: i64 = *arg2.byte_offset(0x28);
    let mut rdx: i32 = *arg2.byte_offset(0x30);
    *arg2.byte_offset(0x30) = 0x110001;
    
    if rdx == 0x110001
    {
        let mut rax_1: i64;
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2.byte_offset(0x10));
        r15 = rax_1;
    }
    
    if rdx == 0x110000
    {
        core::option::expect_failed::h3f620cfb8545dc61("to not be finishedthis should no…");
        /* no return */
    }
    
    let mut var_48: i8;
    let mut result: i64 =
        bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while::h61c196cbe5d42445(&var_48, 
        arg2);
    
    if (var_48 & 1) == 0
    {
        *arg1 = 2;
        arg1[1] = arg3;
        arg1[2] = r15;
        arg1[3] = r15;
    }
    else
    {
        let var_38: i64;
        let mut rbp_1: i64 = var_38;
        result = *arg2.byte_offset(0x28);
        let mut rdx_1: i32 = *arg2.byte_offset(0x30);
        *arg2.byte_offset(0x30) = 0x110001;
        
        if rdx_1 == 0x110001
        {
            result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2.byte_offset(0x10));
        }
        
        if rdx_1 != 0x110000
        {
            let mut rbp_2: i64 = 1;
            
            if rdx_1 >= 0x80
            {
                rbp_2 = 2;
                
                if rdx_1 >= 0x800
                {
                    rbp_2 = 4 - 0;
                }
            }
            
            rbp_1 = rbp_2 + result;
        }
        
        *arg1 = 2;
        arg1[1] = arg3;
        arg1[2] = r15;
        arg1[3] = rbp_1;
    }
    
    result
}
