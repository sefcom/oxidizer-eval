
  fn uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg1: *mut c_void) -> *mut i32

{
    let rax: i64;
    let var_8: i64 = rax;
    let result: *mut i32 = core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::h8d812ad43436eba7(
        arg1.byte_offset(0x48));
    
    if *result == 2
    {
        return nullptr;
    }
    
    result
}
