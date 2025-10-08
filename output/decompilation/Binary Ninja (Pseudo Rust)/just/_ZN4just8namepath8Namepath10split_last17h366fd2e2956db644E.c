
  fn just::namepath::Namepath::split_last::h366fd2e2956db644(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    if arg3 == 0
    {
        let rax: i64;
        let var_8: i64 = rax;
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let result: i64 = arg2 + (arg3 - 1) * 0x48;
    *arg1 = result;
    arg1[1] = arg2;
    arg1[2] = arg3 - 1;
    result
}
