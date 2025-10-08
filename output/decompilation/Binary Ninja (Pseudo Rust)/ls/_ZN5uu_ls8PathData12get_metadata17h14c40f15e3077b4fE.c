
  fn uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg1: *mut c_void, arg2: *mut c_void) -> *mut c_void

{
    let rax: i64;
    let var_18: i64 = rax;
    core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::h71e0e2e9f3cc89de(arg1.byte_offset(0x48), 
        arg1, arg2);
    
    if *arg1.byte_offset(0x48) != 2
    {
        return arg1.byte_offset(0x48);
    }
    
    nullptr
}
