
  fn ruff_python_formatter::string::docstring::CodeExampleKind::code::h9330386394a94940(arg1: *mut c_void) -> i64

{
    let rcx: i64 = -0x8000000000000000 ^ *arg1;
    let mut rax: i64 = 1;
    
    if rcx < 3
    {
        rax = rcx;
    }
    
    if rax != 0 && rax == 1
    {
        /* tailcall */
        return ruff_python_formatter::string::docstring::CodeExampleRst::indented_code::h2994e7556397b30c(arg1);
    }
    
    *arg1.byte_offset(0x18);
    *arg1.byte_offset(0x10)
}
