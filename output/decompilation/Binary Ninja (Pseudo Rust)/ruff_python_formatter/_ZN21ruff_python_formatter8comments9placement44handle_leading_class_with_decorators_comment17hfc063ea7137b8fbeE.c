
  fn ruff_python_formatter::comments::placement::handle_leading_class_with_decorators_comment::hfc063ea7137b8fbe(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void)

{
    if *arg2.byte_offset(0x48) == 1
    {
        let rax: i32 = arg2[4];
        
        if rax < *arg3.byte_offset(0x30)
        {
            let rcx_1: i64 = *arg3.byte_offset(0x10);
            
            if rcx_1 != 0 && *(*arg3.byte_offset(8) + rcx_1 * 0x60 - 0xc) < rax
            {
                let rcx_4: i32 = *arg2.byte_offset(0x44);
                arg1[1] = 3;
                arg1[2] = arg3;
                arg1[3] = rax;
                *arg1.byte_offset(0x1c) = rcx_4;
                arg1[4] = 0x100;
                *arg1 = 0x60;
                return;
            }
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
