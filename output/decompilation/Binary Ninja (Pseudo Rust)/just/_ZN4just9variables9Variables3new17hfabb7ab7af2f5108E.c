
  fn just::variables::Variables::new::hfabb7ab7af2f5108(arg1: *mut i64, arg2: i64) -> u64

{
    let rax: i64;
    let var_18: i64 = rax;
    let result: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
    
    if result == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *result = arg2;
    *arg1 = 1;
    arg1[1] = result;
    arg1[2] = 1;
    result
}
