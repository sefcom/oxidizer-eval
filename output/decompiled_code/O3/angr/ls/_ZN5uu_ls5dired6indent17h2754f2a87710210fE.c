long long uu_ls::dired::indent::h2754f2a87710210f(unsigned long long a0)
{
    unsigned long v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x30]
    unsigned long long v2;  // [sp-0x28]
    int v3;  // [bp-0x20], Other Possible Types: unsigned long
    unsigned long long v5;  // rax
    void* v6;  // rax
    int v7;  // xmm0

    v0 = &anon.e31c85536e11aee39654ff72a53ef708.4.llvm.4239552918814193354;
    v1 = &g_0;
    v2 = &g_0;
    *((uint128_t **)&v3) = &g_0;
    v5 = std::io::Write::write_fmt::h20bee4a5c9f3cc3a(a0, &v0);
    if (!v5)
        return &g_0;
    v0 = 0x8000000000000000;
    v3 = v5;
    v6 = __rust_alloc(32, 8);
    if (v6)
    {
        v7 = *((int128_t *)&v0);
        *((int128_t *)(v6 + &g_10)) = *((int128_t *)&v2);
        *(v6) = v7;
        return v6;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
