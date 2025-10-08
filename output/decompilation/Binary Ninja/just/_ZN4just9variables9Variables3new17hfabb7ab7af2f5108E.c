
  uint64_t just::variables::Variables::new::hfabb7ab7af2f5108(int64_t* arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    uint64_t result = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
    
    if (!result)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *result = arg2;
    *arg1 = 1;
    arg1[1] = result;
    arg1[2] = 1;
    return result;
}
