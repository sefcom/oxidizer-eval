
  int64_t firecracker::seccomp::get_filters::hd13d8ec80e3e2eb0(int128_t* arg1, int32_t arg2, int32_t arg3)

{
    if (!arg2)
        /* tailcall */
        return vmm::seccomp::get_empty_filters::h935f824ab844f693(arg1);
    
    if (arg2 == 1)
        /* tailcall */
        return firecracker::seccomp::get_default_filters::h6575115e05aaac67(arg1);
    
    /* tailcall */
    return firecracker::seccomp::get_custom_filters::hc4381478633696bc(arg1, arg3);
}
