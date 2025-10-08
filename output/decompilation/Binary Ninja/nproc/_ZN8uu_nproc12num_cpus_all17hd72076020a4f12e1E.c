
  int64_t uu_nproc::num_cpus_all::hd72076020a4f12e1()

{
    int64_t rax;
    int64_t var_8 = rax;
    int64_t result = sysconf(0x53);
    
    if (result == 1)
        /* tailcall */
        return uu_nproc::available_parallelism::h7e39191f6c9c795b();
    
    if (result > 1)
        return result;
    
    return 1;
}
