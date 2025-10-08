
  fn uu_tail::follow::files::FileHandling::get_mut_metadata::h3eb5234edd98ad23(arg1: *mut c_void, arg2: *mut i8, arg3: u64) -> *mut i32

{
    let rax: i64;
    let var_8: i64 = rax;
    let result: *mut i32 =
        uu_tail::follow::files::FileHandling::get_mut::h1b58406c510d0063(arg1, arg2, arg3);
    
    if *result == 2
    {
        return nullptr;
    }
    
    result
}
