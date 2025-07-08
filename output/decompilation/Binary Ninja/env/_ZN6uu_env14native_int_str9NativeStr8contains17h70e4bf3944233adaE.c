
  int64_t uu_env::native_int_str::NativeStr::contains::h70e4bf3944233ada(void* arg1, int32_t* arg2)

{
    int64_t result;
    char rdx;
    result = uu_env::native_int_str::get_single_native_int_value::h9b0956bba8ba8cc0(arg2);
    char rcx = result;
    result = 2;
    
    if (rcx & 1)
        result =
            core::slice::memchr::memchr::hd9bdb72df61b073b(rdx, *(arg1 + 8), *(arg1 + 0x10)) == 1;
    
    return result;
}
