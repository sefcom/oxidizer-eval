
  fn uu_env::native_int_str::NativeStr::contains::h70e4bf3944233ada(arg1: *mut c_void, arg2: *mut i32) -> i64

{
    let mut result: i64;
    let mut rdx: i8;
    result = uu_env::native_int_str::get_single_native_int_value::h9b0956bba8ba8cc0(arg2);
    let rcx: i8 = result;
    result = 2;
    
    if (rcx & 1) != 0
    {
        result = core::slice::memchr::memchr::hd9bdb72df61b073b(rdx, *arg1.byte_offset(8), 
            *arg1.byte_offset(0x10)) == 1;
    }
    
    result
}
