
  fn uu_fmt::parasplit::FileLines::match_anti_prefix::h6202e08355a2cec8(arg1: *mut c_void, arg2: *mut i8, arg3: *mut c_void) -> i64

{
    let mut result: i64;
    result = 1;
    
    if *arg1.byte_offset(0x18) != -0x8000000000000000
    {
        let result_1: i64 = result;
        result = uu_fmt::parasplit::FileLines::match_prefix_generic::h76346122f467dd36(
            *arg1.byte_offset(0x20), *arg1.byte_offset(0x28), arg2, arg3, *arg1.byte_offset(0x4d)) ^ 1;
    }
    
    result &= 1;
    result
}
