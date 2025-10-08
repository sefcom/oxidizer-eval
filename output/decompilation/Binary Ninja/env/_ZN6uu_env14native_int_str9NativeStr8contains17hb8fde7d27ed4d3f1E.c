
  char* uu_env::native_int_str::NativeStr::contains::hb8fde7d27ed4d3f1(void* arg1, int32_t* arg2)

{
    char* result;
    char rdx;
    result = uu_env::native_int_str::get_single_native_int_value::h3916294b36a5dcb6(arg2);
    char rcx = result;
    result = 2;
    
    if (rcx & 1)
        result =
            core::slice::memchr::memchr::hf33a0085a04e009d(rdx, *(arg1 + 8), *(arg1 + 0x10)) == 1;
    
    return result;
}
