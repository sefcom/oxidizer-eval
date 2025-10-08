long long fish::env_universal_common::EnvUniversal::acquire_variables(unsigned long a0, unsigned long long a1)
{
    int v0;  // [bp-0xa0]
    char v1;  // [bp-0x90]
    char v2;  // [bp-0x88]
    int v3;  // [bp-0x60]
    char v4;  // [bp-0x48]
    unsigned long long v6[3];  // rax
    void* v7;  // rax
    char *v8;  // rdi
    void* v9;  // r13
    unsigned long long v10;  // cc_ndep
    unsigned long long v11;  // cc_ndep

    v2.iter(a0 + 88);
    v6 = v2.next();
    if (!v6)
        return v6;
    while (true)
    {
        v7 = a0 + 40.get_inner(v6);
        if (!v7)
        {
            v0.remove(a1, v6);
            v8 = &v0;
        }
        else
        {
            v9 = v7;
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v4, v6[1], v6[2]);
            v10 = _ccall(20, v7, 0, v11);
            if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add((long long)v9[24]) + 1, 0, _ccall(20, v7, 0, v11)))
                [D] Unsupported jumpkind Ijk_NoDecode at address 20580372()
            *((int128_t *)&v0) = (int128_t)v9[24];
            v1 = (char)v9[40];
            v3.insert(a1, &v4, &v0);
            v8 = &v3;
            v11 = v10;
        }
        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(v8);
        v6 = v2.next();
        if (!v6)
            return v6;
    }
}
