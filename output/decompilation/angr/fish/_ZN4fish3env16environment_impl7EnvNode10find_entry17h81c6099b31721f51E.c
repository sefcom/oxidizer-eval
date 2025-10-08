long long fish::env::environment_impl::EnvNode::find_entry(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v1;  // rax
    unsigned long v2;  // cc_ndep
    unsigned long v3;  // rax

    v1 = a1.get_inner(a2, a3);
    if (!v1)
    {
        *((unsigned long long *)a0) = 0;
        return 0;
    }
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add((long long)v1[24]) + 1, 0, _ccall(20, v1, 0, v2))))
    {
        v3 = (char)v1[40];
        *((int128_t *)a0) = (int128_t)v1[24];
        *((char *)&a0[16]) = v3;
        return v3;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20539482()
}
