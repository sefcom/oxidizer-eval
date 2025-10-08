
  fn ruff_python_formatter::string::docstring::CodeExampleKind::indent::hefc35518797d9953(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let rcx: i64 = -0x8000000000000000 ^ *arg2;
    let mut rax: i64 = 1;
    
    if rcx < 3
    {
        rax = rcx;
    }
    
    if rax == 0
    {
        /* tailcall */
        return ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
            arg1, *arg2.byte_offset(0x20), *arg2.byte_offset(0x28));
    }
    
    if rax != 1
    {
        let rax_5: i64 = *arg2.byte_offset(0x30);
        arg1[1] = rax_5;
        *arg1 = *arg2.byte_offset(0x20);
        return rax_5;
    }
    
    let rax_1: i32 = *arg2.byte_offset(0x30);
    
    if rax_1 == 5
    {
        let rax_2: i64 = *arg2.byte_offset(0x28);
        arg1[1] = rax_2;
        *arg1 = *arg2.byte_offset(0x18);
        return rax_2;
    }
    
    *arg1.byte_offset(0x14) = *arg2.byte_offset(0x44);
    *arg1.byte_offset(4) = *arg2.byte_offset(0x34);
    *arg1 = rax_1;
    rax_1
}
