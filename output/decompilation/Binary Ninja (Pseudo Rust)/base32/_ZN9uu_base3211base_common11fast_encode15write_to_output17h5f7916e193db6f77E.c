
  fn uu_base32::base_common::fast_encode::write_to_output::h5f7916e193db6f77(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: *mut c_void, arg5: i8) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    let rcx: i64 = *arg4.byte_offset(0x38);
    let mut result: i64;
    
    if *arg1 != -0x8000000000000000
    {
        result = uu_base32::base_common::fast_encode::write_with_line_breaks::h03d07599502588da(
            arg1, arg2, arg3, rcx, arg5);
        
        if result != 0
        {
            return result;
        }
    }
    else
    {
        result = uu_base32::base_common::fast_encode::write_without_line_breaks::h6fa0e036bb3780e0(
            arg2, arg3, rcx, arg5);
        
        if result != 0
        {
            return result;
        }
    }
    0
}
