
  fn firecracker::seccomp::get_filters::hd13d8ec80e3e2eb0(arg1: *mut i128, arg2: i32, arg3: i32) -> i64

{
    if arg2 == 0
    {
        /* tailcall */
        return vmm::seccomp::get_empty_filters::h935f824ab844f693(arg1);
    }
    
    if arg2 == 1
    {
        /* tailcall */
        return firecracker::seccomp::get_default_filters::h6575115e05aaac67(arg1);
    }
    
    /* tailcall */
    firecracker::seccomp::get_custom_filters::hc4381478633696bc(arg1, arg3)
}
