
  fn uu_nproc::num_cpus_all::h7340e3b3a8ccdb85() -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    let result: i64 = sysconf(0x53);
    
    if result == 1
    {
        /* tailcall */
        return uu_nproc::available_parallelism::h0a12aac02eb8d812();
    }
    
    if result > 1
    {
        return result;
    }
    
    1
}
