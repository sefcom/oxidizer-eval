
  fn ruff_python_formatter::string::docstring::Indentation::text_len::h16847b427cd10733(arg1: *mut i32) -> u64

{
    let mut rbx: i64;
    
    match *arg1
    {
        0 | 1 =>
        {
            rbx = *arg1.byte_offset(8);
        }
        2 | 3 =>
        {
            rbx = *arg1.byte_offset(0x10) + *arg1.byte_offset(8);
        }
        4 =>
        {
            return arg1[1];
        }
    }
    
    if rbx >> 0x20 == 0
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(0);
        return rbx;
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(1);
    trap(6);
}
