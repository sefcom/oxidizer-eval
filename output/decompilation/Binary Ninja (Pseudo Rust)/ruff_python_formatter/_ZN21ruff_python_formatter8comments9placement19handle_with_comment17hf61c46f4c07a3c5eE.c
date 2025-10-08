
  fn ruff_python_formatter::comments::placement::handle_with_comment::hf61c46f4c07a3c5e(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void)

{
    if *arg2.byte_offset(0x48) == 0 && *arg3.byte_offset(0x10) != 0
    {
        let rbx_1: i32 = arg2[4];
        
        if ruff_python_formatter::comments::placement::handle_with_comment::_$u7b$$u7b$closure$u7d$$u7d$::hfc7fe3da220c3fa7(*arg3.byte_offset(0x30), rbx_1, *arg3.byte_offset(8)) != 0
        {
            let rax_2: i32 = *arg2.byte_offset(0x44);
            *arg1.byte_offset(8) = *arg2;
            arg1[3] = rbx_1;
            *arg1.byte_offset(0x1c) = rax_2;
            arg1[4] = 0;
            *arg1 = 0x60;
            return;
        }
    }
    
    *arg1.byte_offset(0x40) = arg2[4];
    let zmm0: i128 = *arg2;
    let zmm1: i128 = arg2[1];
    let zmm2: i128 = arg2[2];
    *arg1.byte_offset(0x30) = arg2[3];
    *arg1.byte_offset(0x20) = zmm2;
    *arg1.byte_offset(0x10) = zmm1;
    *arg1 = zmm0;
}
