
  fn uu_fmt::parasplit::FileLines::match_anti_prefix::h4bd2f8ae7ab88b4a(arg1: *mut c_void, arg2: *mut i8, arg3: i64) -> u64

{
    let mut result: u64;
    result = 1;
    
    if !(0 + -(*arg1.byte_offset(0x18)))
    {
        let result_1: u64 = result;
        result = uu_fmt::parasplit::FileLines::match_prefix_generic::hd0d8d5b446adcff4(
            *arg1.byte_offset(0x20), *arg1.byte_offset(0x28), arg2, arg3, *arg1.byte_offset(0x4d)) ^ 1;
    }
    
    result &= 1;
    result
}
