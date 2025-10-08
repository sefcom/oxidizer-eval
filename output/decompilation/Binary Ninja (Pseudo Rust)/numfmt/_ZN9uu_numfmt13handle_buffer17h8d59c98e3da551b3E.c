
  fn uu_numfmt::handle_buffer::h8d59c98e3da551b3(arg1: i64, arg2: *mut i8) -> i64

{
    if arg2[0xc8] == 0
    {
        /* tailcall */
        return uu_numfmt::handle_buffer_iterator::hfeb0cb0be5b9a655(arg1, arg2);
    }
    
    /* tailcall */
    uu_numfmt::handle_buffer_iterator::h414c95f5f8eb45b9(
        std::io::BufRead::split::h0409658dc3119191(arg1), arg2)
}
