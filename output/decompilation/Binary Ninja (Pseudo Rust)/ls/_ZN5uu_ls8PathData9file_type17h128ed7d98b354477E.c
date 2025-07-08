
  fn uu_ls::PathData::file_type::h128ed7d98b354477(arg1: *mut c_void) -> *mut c_void

{
    let rax: i64;
    let var_8: i64 = rax;
    let rax_1: *mut i32 = core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::he9c14013ab1ff432(
        arg1.byte_offset(0xf8), arg1);
    
    if *rax_1 != 0
    {
        return &rax_1[1];
    }
    
    nullptr
}
