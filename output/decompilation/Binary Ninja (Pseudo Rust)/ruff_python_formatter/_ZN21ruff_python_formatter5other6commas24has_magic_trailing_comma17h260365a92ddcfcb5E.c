
  fn ruff_python_formatter::other::commas::has_magic_trailing_comma::h260365a92ddcfcb5(arg1: i32, arg2: i32, arg3: *mut i64) -> i64

{
    if *arg3.byte_offset(0x37) == 0
    {
        /* tailcall */
        return ruff_python_formatter::other::commas::has_trailing_comma::h43d4bedccd638eda(arg1, 
            arg2, *arg3, arg3[1]);
    }
    
    0
}
