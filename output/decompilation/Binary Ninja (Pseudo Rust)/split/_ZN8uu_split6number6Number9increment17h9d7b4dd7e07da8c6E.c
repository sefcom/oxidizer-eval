
  fn uu_split::number::Number::increment::h9d7b4dd7e07da8c6(arg1: *mut i64) -> i64

{
    if *arg1 != -0x8000000000000000
    {
        /* tailcall */
        return uu_split::number::FixedWidthNumber::increment::h00b6e667aed53161(arg1);
    }
    
    arg1[1] += 1;
    0
}
