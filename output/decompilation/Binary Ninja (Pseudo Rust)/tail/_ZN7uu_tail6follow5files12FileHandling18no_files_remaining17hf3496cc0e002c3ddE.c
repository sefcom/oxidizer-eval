
  fn uu_tail::follow::files::FileHandling::no_files_remaining::hf3496cc0e002c3dd(arg1: *mut c_void, arg2: i64) -> i64

{
    if *arg1.byte_offset(0x30) == 0
    {
        let mut result: i64;
        result = 1;
        return result;
    }
    
    if uu_tail::follow::files::FileHandling::files_remaining::h86d5a5f2d15f0cfd(arg1) == 0
    {
        return *(arg2 + 0x48) == 0;
    }
    
    0
}
