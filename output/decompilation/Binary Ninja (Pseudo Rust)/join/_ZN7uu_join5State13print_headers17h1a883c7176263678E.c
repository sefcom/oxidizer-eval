
  fn uu_join::State::print_headers::h1a883c7176263678(arg1: *mut c_void, arg2: *mut i64, arg3: *mut c_void, arg4: *mut c_void) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    let rax_1: i64 = *arg3.byte_offset(0x10);
    let mut result: i64;
    
    if *arg1.byte_offset(0x10) != 0
    {
        if rax_1 == 0
        {
            goto 'label_462618;
        }
        
        result = uu_join::State::combine::h9cc01a532d9d0943(arg1, arg2, arg3, arg4);
        
        if result != 0
        {
            return result;
        }
    }
    else if rax_1 != 0
    {
        arg1 = arg3;
        'label_462618:
        result = uu_join::State::print_first_line::h4753b74b852bc4d0(arg1, arg2, arg4);
        
        if result != 0
        {
            return result;
        }
    }
    0
}
