
  fn bat::line_range::LineRanges::all::h09bcc01fc053eff0(arg1: *mut i128) -> *mut i128

{
    let s: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x20, 0);
    
    if s == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    __builtin_memset(s, 0, 0x18);
    *(s + 0x18) = -1;
    let mut var_20: i64 = 1;
    let s_1: u64 = s;
    let var_10: i64 = 1;
    bat::line_range::LineRanges::from::h4ce85643fa8989ac(arg1, &var_20);
    arg1
}
