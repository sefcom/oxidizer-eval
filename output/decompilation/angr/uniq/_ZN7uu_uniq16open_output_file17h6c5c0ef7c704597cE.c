long long uu_uniq::open_output_file::h6c5c0ef7c704597c(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rdx

    if (!a1 || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(a1, a2, "-", 1))
    {
        v2 = std::io::stdio::stdout::h077da66234850927();
        v4 = alloc::boxed::Box$LT$T$GT$::new::hde928dde2dc59f44(std::io::stdio::Stderr::lock::h890f7962a170fc90(&v2));
        v5 = &g_5306d0;
        goto LABEL_4bf0c9;
    }
    else
    {
        std::fs::File::create::hde7652c601917767(&v2, a1, a2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h09998b69f307355c(&v0, &v2, a1, a2);
        v4 = *((long long *)&v0);
        if (v4)
        {
            v5 = *((long long *)&v1);
            v6 = 1;
        }
        else
        {
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h1113dda0f4545092(&v2, 0x2000, *((int *)&v1));
            v4 = alloc::boxed::Box$LT$T$GT$::new::h8ba536df269a656b(&v2);
            v5 = &g_530680;
LABEL_4bf0c9:
            v6 = 0;
        }
    }
    a0[1] = v4;
    a0[2] = v5;
    a0[0] = v6;
    return a0;
}
