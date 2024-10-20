int uu_ls::show_dir_name::ha190ab568f7f4d0f()
{
    int v0;  // [bp-0x98]
    char v1;  // [bp-0x90]
    unsigned long long v2;  // [sp-0x88]
    unsigned long v3;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x78]
    unsigned long long v5;  // [sp-0x70]
    unsigned long long v6;  // [sp-0x68]
    void* v7;  // [sp-0x60]
    unsigned long v8;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x48]
    char v10;  // [bp-0x40]
    char v11;  // [bp-0x38]
    char v12;  // [bp-0x30]
    unsigned long long v14[6];  // rdi
    char v15[240];  // rdx
    unsigned long long v16;  // r14
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rax
    unsigned long long v20;  // rax

    _ZN6uucore8features13quoting_style17escape_name_inner17hc1e207419e5ca31cE.llvm.12893112445454193587(&v10, v14[4], v14[5], &v15[1 + 5], 1);
    if (!(!v15[238] & v15[239]))
    {
        v2 = *((long long *)&v12);
        *((int128_t *)&v0) = *((int128_t *)&v10);
        v8 = &v0;
        v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v3 = &g_5ac710;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        v18 = std::io::Write::write_fmt::h20bee4a5c9f3cc3a(v17, &v3);
        if (v18)
        {
            v3 = v18;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        if ((long long)v0)
        {
            v16 = (long long)(&v0)[8];
LABEL_4cec45:
            __rust_dealloc(v16);
        }
    }
    else
    {
        v16 = *((long long *)&v11);
        uu_ls::create_hyperlink::h748af3500b65b09d(&v0, v16, *((long long *)&v12), v14);
        v8 = &v0;
        v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v3 = &g_5ac710;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        v20 = std::io::Write::write_fmt::h20bee4a5c9f3cc3a(v17, &v3);
        if (v20)
        {
            v3 = v20;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        if ((long long)v0)
            __rust_dealloc(*((long long *)&v1));
        if (*((long long *)&v10))
            goto LABEL_4cec45;
    }
    return;
}
