
  fn uu_nproc::num_cpus_all::hd72076020a4f12e1() -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    let result: i64 = sysconf(0x53);
    
    if result == 1
    {
        /* tailcall */
        return uu_nproc::available_parallelism::h7e39191f6c9c795b();
    }
    
    if result > 1
    {
        return result;
    }
    
    1
}
