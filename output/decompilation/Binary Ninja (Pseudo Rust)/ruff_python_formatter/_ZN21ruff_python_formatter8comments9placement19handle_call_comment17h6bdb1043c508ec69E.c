
  fn ruff_python_formatter::comments::placement::handle_call_comment::h6bdb1043c508ec69(arg1: *mut i64, arg2: *mut i128) -> i512

{
    let mut result: i128;
    
    if *arg2.byte_offset(0x48) != 1
    {
        'label_7033ed:
        *arg1.byte_offset(0x40) = arg2[4];
        result = *arg2;
        let zmm1: i128 = arg2[1];
        let zmm2: i128 = arg2[2];
        *arg1.byte_offset(0x30) = arg2[3];
        *arg1.byte_offset(0x20) = zmm2;
        *arg1.byte_offset(0x10) = zmm1;
        *arg1 = result;
    }
    else
    {
        let rax_1: i64 = arg2[1];
        
        if rax_1 == 0x5e
        {
            goto 'label_7033ed;
        }
        
        let rcx_1: i64 = *arg2.byte_offset(0x18);
        let mut var_30: i64 = rax_1;
        let var_28_1: i64 = rcx_1;
        let rcx_2: i64 = arg2[2];
        
        if rcx_2 == 0x5e
        {
            goto 'label_7033ed;
        }
        
        *arg2.byte_offset(0x28);
        let rbx_1: i32 = arg2[4];
        let rbp_1: i32 = *arg2.byte_offset(0x44);
        
        if ruff_python_formatter::comments::placement::handle_call_comment::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hd7e0ed6b45e73cb8(&var_30, rbx_1, rbp_1, rcx_2) == 0
        {
            goto 'label_7033ed;
        }
        
        result = *arg2;
        *arg1.byte_offset(8) = result;
        arg1[3] = rbx_1;
        *arg1.byte_offset(0x1c) = rbp_1;
        arg1[4] = 0x100;
        *arg1 = 0x60;
    }
    
    result
}
