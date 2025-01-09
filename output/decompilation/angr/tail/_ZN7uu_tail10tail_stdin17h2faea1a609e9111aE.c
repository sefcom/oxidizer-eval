long long uu_tail::tail_stdin::h2faea1a609e9111a(char a0[77], unsigned long long a1, unsigned long long a2[3], char a3[143])
{
    unsigned long long v0;  // [sp-0xe8]
    int v1;  // [sp-0xd8]
    unsigned long long v2;  // [sp-0xc8]
    char v3;  // [bp-0xb8]
    char v4;  // [bp-0xa8]
    char v5;  // [bp-0xa4]
    char v6;  // [bp-0x98]
    int v7;  // [sp-0x88]
    int v8;  // [bp-0x78], Other Possible Types: unsigned long long
    int v9;  // [sp-0x68]
    unsigned long v10;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x48]
    char v12;  // [bp-0x40]
    char v13;  // [bp-0x30]
    void* v15;  // r13
    void* v16;  // rax
    unsigned long long v17;  // r15
    unsigned long long v18;  // r14
    int v19;  // xmm0
    unsigned long long v20;  // r13

    uu_tail::paths::Input::resolve::h81e1f38162942b9d(&v12, a2);
    if (*((long long *)&v12) != 0x8000000000000000)
    {
        v2 = *((long long *)&v13);
        *((int128_t *)&v1) = *((int128_t *)&v12);
        same_file::Handle::stdin::hcbeef53980d87d0e(&v3);
        if (v5 == 2)
        {
            v15 = 0;
            goto LABEL_500a18;
        }
        else
        {
            v8 = *((long long *)&v4);
            *((int128_t *)&v7) = *((int128_t *)&v3);
            v10 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(same_file::Handle::as_file_mut::h942b877c8aa1743b(&v7), 2, 0);
            v11 = v15;
            if (v10)
                v15 = 0;
            ::0x4ff790::core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h93858c9ebe12dc82(&v10);
            ::0x4ff360::core::ptr::drop_in_place$LT$same_file..Handle$GT$::h3c7dcb0c2c6f5816(&v7);
            if (v5 == 2)
            {
LABEL_500a18:
                ::0x4ff7e0::core::ptr::drop_in_place$LT$core..result..Result$LT$same_file..Handle$C$std..io..error..Error$GT$$GT$::h499404730bbf963d(&v3);
            }
        }
        v0 = v20;
        v16 = uu_tail::tail_file::he6a88cf1ecd2d2b4(a0, a1, a2, (long long)(&v1)[8], v2, a3);
        if (!v16)
        {
            ::0x4ff370::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
            return 0;
        }
        ::0x4ff370::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
    }
    else
    {
        uu_tail::paths::HeaderPrinter::print_input::hd83f77d6875adb59(a1, a2);
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4e7e0dc8796ce058(&v3, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
        v16 = uu_tail::unbounded_tail::h0ff524f5b27707ea(&v3, a0);
        if (v16)
        {
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::hf4f586446f1cde67(&v3);
        }
        else
        {
            v17 = a2[1];
            v18 = a2[2];
            v19 = *((int128_t *)&v3);
            *((int128_t *)&v9) = *((int128_t *)&v6);
            *((int128_t *)&v8) = *((int128_t *)&v4);
            v7 = v19;
            v16 = uu_tail::follow::watch::Observer::add_stdin::h52ffe74598bd409c(a3, v17, v18, alloc::boxed::Box$LT$T$GT$::new::hc4e768c36fc58529(&v7), &g_5bb9d0, 1);
            if (!v16)
                return 0;
            return v16;
        }
    }
    return v16;
}
