
  fn ruff_python_formatter::comments::placement::handle_trailing_module_comment::h61c2f4e57ae7d9d7(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i128)

{
    if arg3[1] != 0x5e || arg3[2] != 0x5e
    {
        *arg1.byte_offset(0x40) = arg3[4];
        let zmm0: i128 = *arg3;
        let zmm1: i128 = arg3[1];
        let zmm2: i128 = arg3[2];
        *arg1.byte_offset(0x30) = arg3[3];
        *arg1.byte_offset(0x20) = zmm2;
        *arg1.byte_offset(0x10) = zmm1;
        *arg1 = zmm0;
        return;
    }
    
    let rax: i64 = *arg2.byte_offset(0x10);
    
    if rax == 0
    {
        let rax_6: i8 = *arg3.byte_offset(0x48);
        *arg1.byte_offset(8) = *arg3;
        arg1[3] = arg3[4];
        arg1[4] = 0;
        *arg1.byte_offset(0x21) = rax_6;
        *arg1 = 0x5e;
        return;
    }
    
    let rbx: i8 = *arg3.byte_offset(0x48);
    let mut rax_4: i64;
    let mut rdx: i64;
    rax_4 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(((rax << 7) + *arg2.byte_offset(8)).byte_offset(-0x80));
    arg1[1] = rax_4;
    arg1[2] = rdx;
    arg1[3] = arg3[4];
    arg1[4] = 0;
    *arg1.byte_offset(0x21) = rbx;
    *arg1 = 0x5f;
}
