
  fn uu_numfmt::format::format_and_print::he481f9ff3837b01f(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut i128

{
    if arg4[0xe] != -0x8000000000000000
    {
        uu_numfmt::format::format_and_print_delimited::h8362ae98c5bd7b3f(arg1, arg2, arg3, arg4);
    }
    else
    {
        uu_numfmt::format::format_and_print_whitespace::h40be5ec289fb4772(arg1, arg2, arg3, arg4);
    }
    
    arg1
}
