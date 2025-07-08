
  fn uu_fmt::parasplit::char_width::h6ecf292e25e6b16b(arg1: i32) -> i64

{
    if arg1 >= 0xa0
    {
        /* tailcall */
        return unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(arg1);
    }
    
    1
}
