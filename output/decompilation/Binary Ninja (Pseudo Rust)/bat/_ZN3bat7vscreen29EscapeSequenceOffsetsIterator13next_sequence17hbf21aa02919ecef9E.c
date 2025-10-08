
  fn bat::vscreen::EscapeSequenceOffsetsIterator::next_sequence::hbf21aa02919ecef9(arg1: *mut i64, arg2: *mut c_void) -> u64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut r14: i64 = *arg2.byte_offset(0x28);
    let mut rbp: i32 = *arg2.byte_offset(0x30);
    *arg2.byte_offset(0x30) = 0x110001;
    
    if rbp == 0x110001
    {
        let mut rax_1: i64;
        let mut rdx_1: i32;
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2.byte_offset(0x10));
        r14 = rax_1;
        rbp = rdx_1;
    }
    
    if rbp == 0x110000
    {
        core::option::expect_failed::h3f620cfb8545dc61("to not be finishedthis should no…");
        /* no return */
    }
    
    core::option::Option$LT$T$GT$::get_or_insert_with::hc3adaf4f59a89217(arg2.byte_offset(0x28), 
        arg2.byte_offset(0x10));
    let mut result: u64 = *arg2.byte_offset(0x30);
    
    if result == 0x5b
    {
        /* tailcall */
        return bat::vscreen::EscapeSequenceOffsetsIterator::next_csi::h7a02523b82b98ac2(arg1, arg2, 
            r14);
    }
    
    if result == 0x5d
    {
        /* tailcall */
        return bat::vscreen::EscapeSequenceOffsetsIterator::next_osc::hafe287645ca442b5(arg1, arg2, 
            r14);
    }
    
    if result != 0x110000
    {
        if (result & 0xfffffff0) == 0x20
        {
            /* tailcall */
            return bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::h9adbe93dde1fd540(arg1, 
                arg2, r14);
        }
        
        let mut rcx_6: i64 = 1;
        
        if result >= 0x80
        {
            rcx_6 = 2;
            
            if result >= 0x800
            {
                rcx_6 = 4 - 0;
            }
        }
        
        let rcx_7: i64 = rcx_6 + *arg2.byte_offset(0x28);
        *arg1 = 1;
        arg1[1] = r14;
        arg1[2] = rcx_7;
    }
    else
    {
        let mut rax_2: i64 = 1;
        
        if rbp >= 0x80
        {
            rax_2 = 2;
            
            if rbp >= 0x800
            {
                rax_2 = 4 - 0;
            }
        }
        
        result = rax_2 + r14;
        *arg1 = 1;
        arg1[1] = r14;
        arg1[2] = result;
    }
    
    result
}
