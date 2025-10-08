
  fn ruff_python_formatter::comments::map::InOrderEntry::range::h6e360fb934eb8131(arg1: *mut c_void) -> u64

{
    let mut rax_1: i32 = *arg1.byte_offset(0xc);
    
    if rax_1 == 0
    {
        rax_1 = *arg1.byte_offset(8);
        
        if rax_1 == 0
        {
            return *arg1.byte_offset(4) - 1;
        }
    }
    else if rax_1 == 0
    {
        return *arg1.byte_offset(4) - 1;
    }
    
    rax_1 - 1
}
