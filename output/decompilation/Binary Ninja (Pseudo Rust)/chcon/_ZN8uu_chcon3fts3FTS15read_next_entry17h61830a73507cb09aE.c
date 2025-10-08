
  fn uu_chcon::fts::FTS::read_next_entry::h61830a73507cb09a(arg1: *mut i32, arg2: *mut i64) -> *mut FTSENT

{
    let rax: *mut FTSENT = fts_read(*arg2);
    arg2[1] = rax;
    
    if rax != 0
    {
        arg1[1] = 1;
        *arg1 = 0x12;
        return rax;
    }
    
    let r14_3: i64 = *__errno_location() << 0x20 | 2;
    let mut var_28: i64 = r14_3;
    let mut var_20: i8;
    let rax_2: *mut c_void =
        std::io::error::repr_bitpacked::decode_repr::h77be729a8c24f411(&var_20, r14_3);
    let var_1c: i32;
    
    if var_20 == 0 && var_1c == 0
    {
        arg1[1] = 0;
        *arg1 = 0x12;
        return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2038812c87ccc8f0(&var_28);
    }
    
    *arg1 = 0x10;
    *arg1.byte_offset(8) = "fts_read()FTS::set()fts_set()ver…";
    *arg1.byte_offset(0x10) = 0xa;
    *arg1.byte_offset(0x18) = r14_3;
    rax_2
}
