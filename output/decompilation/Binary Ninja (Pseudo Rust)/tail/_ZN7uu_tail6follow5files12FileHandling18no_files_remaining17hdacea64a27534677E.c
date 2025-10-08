
  fn uu_tail::follow::files::FileHandling::no_files_remaining::hdacea64a27534677(arg1: *mut c_void, arg2: i32) -> u64

{
    if *arg1.byte_offset(0x30) == 0
    {
        let mut rbx: i64;
        rbx = 1;
        rbx = 1;
        return rbx;
    }
    
    if uu_tail::follow::files::FileHandling::files_remaining::h4da9cfafa6cde0f6(arg1) != 0
    {
        return 0;
    }
    
    let mut rbx_1: i32;
    rbx_1 = arg2 ^ 1;
    rbx_1 &= 1;
    rbx_1
}
