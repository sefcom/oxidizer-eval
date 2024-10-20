long long uu_dd::progress::ProgUpdate::print_transfer_stats::had6da2b6d1c40dc5(void* a0, unsigned int a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    uint128_t v1[2];  // [sp-0x38], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [sp-0x30]
    unsigned long long v3;  // [sp-0x28]
    int v4;  // [bp-0x20], Other Possible Types: unsigned long
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    uint128_t v8[2];  // rax
    unsigned int v9;  // rcx
    unsigned int v10;  // r8
    unsigned int v11;  // r9
    int v12;  // xmm0
    unsigned long long v13;  // rdx

    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
    if (!a1 || (v1 = (unsigned long long)&anon.09342749f2f0afc509120f10eba31a78.31.llvm.15503904748741807753, v2 = (unsigned long long)1, v3 = (unsigned long long)8, *((int128_t *)&v4) = 0, v6 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(&v0, &v1, a2), !v6))
    {
        v7 = _ZN5uu_dd8progress10ProgUpdate14write_io_lines17h6f1e01542e89c0ffE.llvm.15503904748741807753(a0, &v0, a2);
        if (!v7)
        {
            v8 = _ZN5uu_dd8progress10ProgUpdate15write_prog_line17hdb9c25357fe61bdaE.llvm.15503904748741807753(a0, &v0, 0, v9, v10, v11);
            if (v8)
            {
                *((uint128_t *[2])&v1[0]) = v8;
                v2 = v13;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            return v8;
        }
        else
        {
            v1 = 0x8000000000000000;
            v4 = v7;
            v8 = __rust_alloc(32, 8);
            if (!v8)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
    }
    else
    {
        v1 = 0x8000000000000000;
        v4 = v6;
        v8 = __rust_alloc(32, 8);
        if (!v8)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    v12 = *((int128_t *)&v1);
    v8[1] = *((int128_t *)&v3);
    *((void*)&v8[0]) = v12;
    vvar_159{stack -56} = v8;
    vvar_160{stack -48} = v13;
    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
}
