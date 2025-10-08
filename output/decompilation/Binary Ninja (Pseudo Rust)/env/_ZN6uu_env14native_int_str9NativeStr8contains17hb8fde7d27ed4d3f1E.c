
  fn uu_env::native_int_str::NativeStr::contains::hb8fde7d27ed4d3f1(arg1: *mut c_void, arg2: *mut i32) -> *mut i8

{
    let mut result: *mut i8;
    let mut rdx: i8;
    result = uu_env::native_int_str::get_single_native_int_value::h3916294b36a5dcb6(arg2);
    let rcx: i8 = result;
    result = 2;
    
    if (rcx & 1) != 0
    {
        result = core::slice::memchr::memchr::hf33a0085a04e009d(rdx, *arg1.byte_offset(8), 
            *arg1.byte_offset(0x10)) == 1;
    }
    
    result
}
