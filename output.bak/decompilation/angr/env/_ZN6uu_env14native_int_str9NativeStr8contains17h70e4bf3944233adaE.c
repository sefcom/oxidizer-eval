char uu_env::native_int_str::NativeStr::contains::h70e4bf3944233ada(unsigned long long a0[3], unsigned int *a1)
{
    unsigned int v1;  // edx

    if (((char)(uu_env::native_int_str::get_single_native_int_value::h9b0956bba8ba8cc0(a1) & 255 & 4294967295) & 1))
    {
        ::0x4d8e40::core::slice::memchr::memchr::hd9bdb72df61b073b(v1, a0[1], a0[2]);
        return 2;
    }
    return 2;
}
