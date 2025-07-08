
  int64_t uu_nproc::num_cpus_all::h7340e3b3a8ccdb85()

{
    int64_t rax;
    int64_t var_8 = rax;
    int64_t result = sysconf(0x53);
    
    if (result == 1)
        /* tailcall */
        return uu_nproc::available_parallelism::h0a12aac02eb8d812();
    
    if (result > 1)
        return result;
    
    return 1;
}
