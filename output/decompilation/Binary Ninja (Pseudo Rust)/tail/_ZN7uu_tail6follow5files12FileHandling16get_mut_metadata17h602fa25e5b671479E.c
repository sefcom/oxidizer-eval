
  fn uu_tail::follow::files::FileHandling::get_mut_metadata::h602fa25e5b671479(arg1: *mut c_void, arg2: *mut i8, arg3: size_t) -> *mut c_void

{
    let rax: i64;
    let var_8: i64 = rax;
    let result: *mut c_void =
        uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(arg1, arg2, arg3);
    
    if *result == 2
    {
        return nullptr;
    }
    
    result
}
