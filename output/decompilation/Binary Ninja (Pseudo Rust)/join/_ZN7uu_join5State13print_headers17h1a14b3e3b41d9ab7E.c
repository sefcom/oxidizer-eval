
  fn uu_join::State::print_headers::h1a14b3e3b41d9ab7(arg1: *mut c_void, arg2: *mut i64, arg3: *mut c_void, arg4: *mut c_void) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    let rax_1: i64 = *arg3.byte_offset(0x10);
    let mut result: i64;
    
    if *arg1.byte_offset(0x10) != 0
    {
        if rax_1 == 0
        {
            goto 'label_471b08;
        }
        
        result = uu_join::State::combine::ha24f6cdfc00f5a5d(arg1, arg2, arg3, arg4);
        
        if result != 0
        {
            return result;
        }
    }
    else if rax_1 != 0
    {
        arg1 = arg3;
        'label_471b08:
        result = uu_join::State::print_first_line::he96d1b069c026077(arg1, arg2, arg4);
        
        if result != 0
        {
            return result;
        }
    }
    0
}
