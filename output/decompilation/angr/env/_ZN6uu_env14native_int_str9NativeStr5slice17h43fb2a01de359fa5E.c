long long uu_env::native_int_str::NativeStr::slice(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x28]

    v0.match_cow(a1, a2, a3, a2, a3);
    a0.unwrap(&v0);
    return a0;
}
