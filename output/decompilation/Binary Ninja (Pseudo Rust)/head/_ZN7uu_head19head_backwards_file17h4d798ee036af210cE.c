
  fn uu_head::head_backwards_file::h4d798ee036af210c(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let mut var_d0: i32;
    std::fs::File::metadata::h5e84e533705f8c98(&var_d0, arg1);
    
    if var_d0 == 2
    {
        return 1;
    }
    
    let rax_1: i8 = uu_head::is_seekable::h3555132a0bfa349a(arg1);
    let mut rcx_1: i64 = 0x200;
    let var_78: i64;
    
    if var_78 - 1 < 0x20000000
    {
        rcx_1 = var_78;
    }
    
    let var_80: i64;
    
    if rax_1 != 0 && var_80 > rcx_1
    {
        /* tailcall */
        return uu_head::head_backwards_on_seekable_file::h7e88d54791e3601d(arg1, arg2);
    }
    
    /* tailcall */
    uu_head::head_backwards_without_seek_file::hd1f6d04c3bb08f89(arg1, arg2)
}
