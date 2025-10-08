
  fn uu_split::number::Number::increment::h58237ec75c7047ba(arg1: *mut i64) -> i64

{
    if !(0 + -(*arg1))
    {
        /* tailcall */
        return uu_split::number::FixedWidthNumber::increment::h7f085b5dde41725f(arg1);
    }
    
    arg1[1] += 1;
    0
}
