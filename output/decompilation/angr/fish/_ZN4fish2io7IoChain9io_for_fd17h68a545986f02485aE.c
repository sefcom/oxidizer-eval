long long fish::io::IoChain::io_for_fd(unsigned long long a0[3], unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long *v4;  // rax
    unsigned long v5;  // cc_ndep

    v0 = a1;
    v1 = a0[1];
    v2 = a0[2] * 16 + a0[1];
    v4 = v1.try_rfold(&v0);
    if (!v4)
        return 0;
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*(v4)) + 1, 0, _ccall(20, v4, 0, v5))))
        return *(v4);
    [D] Unsupported jumpkind Ijk_NoDecode at address 20786292()
}
