
  fn firecracker::resize_fdtable::ha61461e97c9c9377() -> i64

{
    let mut rlimits: i128 = {0};
    
    if getrlimit(RLIMIT_NOFILE, &rlimits) < 0
    {
        return 0;
    }
    
    let rax_1: i64 = rlimits;
    let mut rbp_1: i32 = 0x800;
    
    if rax_1 <= 0x7fffffff
    {
        rbp_1 = rax_1;
    }
    
    let mut result: i64 = 3;
    
    if rbp_1 >= 4
    {
        if dup2(0, rbp_1 - 1) < 0
        {
            result = 1;
            *__errno_location();
        }
        else if close(rbp_1 - 1) < 0
        {
            result = 2;
            *__errno_location();
        }
    }
    
    result
}
