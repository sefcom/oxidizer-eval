char uu_env::native_int_str::NativeStr::contains(unsigned long long a0[3], unsigned int *a1)
{
    char v1;  // dl

    if (!(uu_env::native_int_str::get_single_native_int_value(a1) & 1))
        return 2;
    return ::0x4bd710::core::slice::memchr::memchr(v1, a0[1], a0[2]) == 1;
}
