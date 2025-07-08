
  fn uu_base32::base_common::fast_decode::write_to_output::h32257a8eb7dfc8a1(arg1: *mut c_void, arg2: i64, arg3: i64) -> i512

{
    let mut rax_1: i64;
    let mut result: i512;
    rax_1 = (*(arg3 + 0x38))(arg2, *arg1.byte_offset(8), *arg1.byte_offset(0x10), arg2);
    
    if rax_1 != 0
    {
        return result;
    }
    
    *arg1.byte_offset(0x10) = 0;
    result
}
