long long uu_tail::paths::Input::is_tailable::h44b147754085e2d4(unsigned long long a0[6], unsigned long a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned long long v0[3];  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rbx
    unsigned int v5;  // ebp
    unsigned long long v6;  // r14

    if (a0[3] != 0x8000000000000000)
        return uu_tail::paths::path_is_tailable::ha9fa7a9cf403217f(a0[4], a0[5]);
    uu_tail::paths::Input::resolve::h45f63211a88f196a(v0, a0, a2, a3, a4, a5);
    v4 = v0[0];
    if (v4 == 0x8000000000000000)
        return 0;
    v6 = *((long long *)&v1);
    v5 = uu_tail::paths::path_is_tailable::ha9fa7a9cf403217f(v6, *((long long *)&v2));
    if (v4)
    {
        __rust_dealloc(v6);
        return v5;
    }
    return v5;
}
