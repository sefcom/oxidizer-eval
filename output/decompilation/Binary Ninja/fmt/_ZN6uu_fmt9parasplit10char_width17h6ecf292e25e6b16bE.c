
  int64_t uu_fmt::parasplit::char_width::h6ecf292e25e6b16b(int32_t arg1)

{
    if (arg1 >= 0xa0)
        /* tailcall */
        return unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(arg1);
    
    return 1;
}
