long long uu_uniq::open_output_file::h91c67f8c10ed1a09(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rdx

    if (!a1 || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(a1, a2, "-", 1))
    {
        v2 = std::io::stdio::stdout::h077da66234850927();
        v6 = alloc::boxed::Box$LT$T$GT$::new::h0372103559ec95a3(std::io::stdio::Stderr::lock::h890f7962a170fc90(&v2, v4, v5));
        v7 = &g_5312a0;
        goto LABEL_4bf049;
    }
    else
    {
        std::fs::File::create::h683cc5b204baddf3(&v2, a1, a2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc03cd3f480ae6455(&v0, &v2, a1, a2);
        v6 = *((long long *)&v0);
        if (v6)
        {
            v7 = *((long long *)&v1);
            v8 = 1;
        }
        else
        {
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hb1c4dc4d5160445d(&v2, 0x2000, *((int *)&v1));
            v6 = alloc::boxed::Box$LT$T$GT$::new::h3d398e81a0c3b52e(&v2);
            v7 = &g_531250;
LABEL_4bf049:
            v8 = 0;
        }
    }
    a0[1] = v6;
    a0[2] = v7;
    a0[0] = v8;
    return a0;
}
