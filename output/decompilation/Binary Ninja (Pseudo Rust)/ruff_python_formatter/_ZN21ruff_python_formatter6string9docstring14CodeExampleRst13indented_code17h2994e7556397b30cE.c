
  fn ruff_python_formatter::string::docstring::CodeExampleRst::indented_code::h2994e7556397b30c(arg1: *mut c_void) -> *mut c_void

{
    if *arg1.byte_offset(0x30) == 5
    {
        return 8;
    }
    
    let rax: i64;
    let var_38: i64 = rax;
    let result: *mut c_void = *arg1.byte_offset(8);
    let rcx: i64 = *arg1.byte_offset(0x10);
    
    if rcx != 0
    {
        let var_38_1: i64 = rcx;
        let mut i: *mut c_void = result;
        
        do
        {
            let r14_1: *mut i8 = *i;
            let r15_1: u64 = *i.byte_offset(8);
            let mut rax_2: *mut i8;
            let mut rdx_3: i64;
            
            if core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9d68bd4861bf742(r14_1, r15_1) != 0
            {
                rax_2 = ruff_python_formatter::string::docstring::Indentation::trim_start_str::hc370b9ca7c92b427(arg1.byte_offset(0x30), r14_1, r15_1);
            }
            else
            {
                rax_2 = 1;
                rdx_3 = 0;
            }
            
            *i.byte_offset(0x28) = rax_2;
            *i.byte_offset(0x30) = rdx_3;
            i += 0x38;
        } while i != (rcx * 0x38).byte_offset(result);
    }
    
    result
}
