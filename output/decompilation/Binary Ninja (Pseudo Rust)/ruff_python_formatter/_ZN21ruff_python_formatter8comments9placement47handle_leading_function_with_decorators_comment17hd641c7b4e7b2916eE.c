
  fn ruff_python_formatter::comments::placement::handle_leading_function_with_decorators_comment::hd641c7b4e7b2916e(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let mut rax: i64 = arg2[1];
    let mut rcx: i64;
    
    if rax != 0x5e
    {
        rax = rax == 0x56;
        rcx = arg2[2];
        
        if rcx != 0x5e
        {
            goto 'label_702e58;
        }
    }
    else
    {
        rcx = arg2[2];
        
        if rcx != 0x5e
        {
            rax = 0;
            'label_702e58:
            let mut rcx_1: i8;
            
            if rcx != 0x4f
            {
                rcx_1 = *arg2.byte_offset(0x48);
                rax &= rcx == 0x58 & rcx_1;
                
                if rax == 1
                {
                    'label_702ea1:
                    *arg1.byte_offset(8) = *arg2;
                    let rax_1: i64 = arg2[4];
                    arg1[3] = rax_1;
                    arg1[4] = 0;
                    *arg1.byte_offset(0x21) = rcx_1;
                    *arg1 = 0x60;
                    return rax_1;
                }
            }
            else
            {
                rcx_1 = *arg2.byte_offset(0x48);
                
                if (rax & rcx_1) != 0
                {
                    goto 'label_702ea1;
                }
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
    rax
}
