long long bat::input::Input::with_name(unsigned long long a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xc0]
    unsigned long long v2;  // rdx

    ::libc.so.0::memcpy(&v0, a1, 160);
    return a0._with_name(&v0, a2.as_ref(a3), v2);
}
