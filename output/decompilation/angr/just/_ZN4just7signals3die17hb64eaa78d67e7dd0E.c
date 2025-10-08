void just::signals::die(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x238]
    char v1;  // [bp-0x230]
    char v2;  // [bp-0x220]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]
    unsigned long long v8;  // r15
    unsigned long long v9;  // r14
    unsigned long long v10;  // r12
    unsigned long long v11;  // rbx
    unsigned long long v13;  // rdx

    v6 = v8;
    v5 = v9;
    v4 = v10;
    v3 = v11;
    v0 = 0;
    memset(&v2, 0, 0x200);
    just::signals::die::{{closure}}(&v2, &v0, "error: src/signals.rs", 7);
    just::signals::die::{{closure}}(&v2, &v0, a0, a1);
    just::signals::die::{{closure}}(&v2, &v0, "\n", 1);
    nix::unistd::write(&v1, 2, 0.index(v0, &v2, 0x200, &g_830f50), v13);
    std::process::abort(); /* do not return */
}
