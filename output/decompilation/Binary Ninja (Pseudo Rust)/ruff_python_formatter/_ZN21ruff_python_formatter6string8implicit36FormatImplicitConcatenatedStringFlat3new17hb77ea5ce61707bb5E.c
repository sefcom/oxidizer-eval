
  fn ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringFlat::new::hb77ea5ce61707bb5(arg1: *mut i64, arg2: i64, arg3: *mut i64, arg4: *mut *mut i8)

{
    (&jump_table_487bac)[arg2];
    
    if !(0 + -(*arg3))
    {
        let mut rax: i8;
        let mut rdx_1: i8;
        rax = ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringFlat::new::merge_flags::h859f9d81ac4b6b16(arg2, arg3, arg4);
        
        if (rax & 1) != 0
        {
            *arg1 = arg2;
            arg1[1] = arg3;
            arg1[2] = 0;
            *arg1.byte_offset(0x11) = rdx_1;
            return;
        }
    }
    
    *arg1 = 4;
}
