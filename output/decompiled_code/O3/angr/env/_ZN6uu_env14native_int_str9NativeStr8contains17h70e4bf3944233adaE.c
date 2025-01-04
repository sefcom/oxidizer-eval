long long uu_env::native_int_str::NativeStr::contains::h70e4bf3944233ada(unsigned long long a0[3], unsigned int *a1, unsigned long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned int v3;  // edx
    unsigned long long v4;  // rax

    v1 = uu_env::native_int_str::get_single_native_int_value::h9b0956bba8ba8cc0(a1);
    v2 = v1 | -0x100 | 2;
    if (((char)(v1 & 4294967295) & 1))
    {
        v4 = ::0x4d8e40::core::slice::memchr::memchr::hd9bdb72df61b073b(v3, a0[1], a0[2]);
        v2 = v4 | -0x100 | v4 == 1;
        return v2;
    }
    return v2;
}
