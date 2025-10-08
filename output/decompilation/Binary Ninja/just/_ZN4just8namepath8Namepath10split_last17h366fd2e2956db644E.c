
  int64_t just::namepath::Namepath::split_last::h366fd2e2956db644(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    if (!arg3)
    {
        int64_t rax;
        int64_t var_8 = rax;
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t result = arg2 + (arg3 - 1) * 0x48;
    *arg1 = result;
    arg1[1] = arg2;
    arg1[2] = arg3 - 1;
    return result;
}
