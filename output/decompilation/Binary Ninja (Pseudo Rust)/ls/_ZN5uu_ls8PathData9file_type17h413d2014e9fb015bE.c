
  fn uu_ls::PathData::file_type::h413d2014e9fb015b(arg1: *mut c_void, arg2: *mut c_void) -> *mut c_void

{
    core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::h4b0349b49958bbec(arg1.byte_offset(0xf8), 
        arg1, arg2);
    
    if *arg1.byte_offset(0xf8) != 0
    {
        return arg1.byte_offset(0xfc);
    }
    
    nullptr
}
