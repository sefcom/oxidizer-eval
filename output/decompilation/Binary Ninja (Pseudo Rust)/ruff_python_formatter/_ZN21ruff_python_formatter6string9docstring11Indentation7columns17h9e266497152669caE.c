
  fn ruff_python_formatter::string::docstring::Indentation::columns::h9e266497152669ca(arg1: *mut i32) -> i64

{
    let result: i64 = *arg1.byte_offset(8);
    
    match *arg1
    {
        0 | 4 =>
        {
            result
        }
        1 =>
        {
            result << 3
        }
        2 =>
        {
            (result << 3) + *arg1.byte_offset(0x10)
        }
        3 =>
        {
            (result & 0xfffffffffffffff8) + (*arg1.byte_offset(0x10) << 3)
        }
    }
}
