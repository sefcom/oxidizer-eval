long long uu_ls::dired::print_dired_output::h9c381e0bcb1a3b12(struct_0 *a0, unsigned long long a1[6], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x98]
    char v1;  // [bp-0x90]
    unsigned long v2;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x80]
    unsigned long v4;  // [sp-0x78], Other Possible Types: unsigned long long
    int v5;  // [sp-0x70], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x58]
    unsigned long long v8;  // [sp-0x48]
    unsigned long long v9;  // [sp-0x40]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdx
    uint128_t v14[2];  // rax
    unsigned long long v15;  // r12
    unsigned long long v16;  // r13
    int v17;  // xmm0
    unsigned long long v19;  // r12
    unsigned long long v21;  // r15
    unsigned long long v22;  // r12
    unsigned long long v24;  // r12

    v11 = _ZN3std2io8buffered9bufwriter18BufWriter$LT$W$GT$9flush_buf17hb095e311e22d771dE.llvm.15944453427201852302(a2, a1, a2, a3, a4, a5, *((long long *)&v0), *((long long *)&v1));
    if (!v11)
    {
        v11 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a2 + 32, v12, v13);
        if (!v11)
        {
            v15 = a1[2];
            if (v15)
            {
                v16 = a1[1];
                v8 = "//DIRED////SUBDIRED////DIRED-OPTIONS// --quoting-style=\n";
                v9 = 9;
                v2 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v3 = 1;
                v6 = 0;
                v4 = &v0;
                v5 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v2, v12, v13);
                do
                {
                    v19 = v15 * 16;
                    v7 = v16;
                    v16 = v7 + 16;
                    v2 = &g_5ad1f0;
                    v3 = 1;
                    v6 = 0;
                    v4 = &v0;
                    v5 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v2, v12, v13);
                } while (v19 != 16);
                v2 = &g_5ad1e0;
                v3 = 1;
                v4 = 8;
                *((int128_t *)&v5) = 0;
                std::io::stdio::_print::he918bceb0c89db46(&v2, v12, v13);
            }
            if (a0->field_e6)
            {
                v21 = a1[4];
                v22 = a1[5];
                v8 = "//SUBDIRED////DIRED-OPTIONS// --quoting-style=\n";
                v9 = 12;
                v2 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v3 = 1;
                v6 = 0;
                v4 = &v0;
                v5 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v2, v12, v13);
                if (v22)
                {
                    do
                    {
                        v24 = v22 * 16;
                        v7 = v21;
                        v21 = v7 + 16;
                        v2 = &g_5ad1f0;
                        v3 = 1;
                        v6 = 0;
                        v4 = &v0;
                        v5 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&v2, v12, v13);
                    } while (v24 != 16);
                }
                v2 = &g_5ad1e0;
                v3 = 1;
                v4 = 8;
                *((int128_t *)&v5) = 0;
                std::io::stdio::_print::he918bceb0c89db46(&v2, v12, v13);
            }
            v2 = &g_5ad1c0;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v2, v12, v13);
            return 0;
        }
    }
    v2 = 0x8000000000000000;
    v5 = v11;
    v14 = __rust_alloc(32, 8);
    if (v14)
    {
        v17 = *((int128_t *)&v2);
        v14[1] = *((int128_t *)&v4);
        *((void*)&v14[0]) = v17;
        return v14;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
