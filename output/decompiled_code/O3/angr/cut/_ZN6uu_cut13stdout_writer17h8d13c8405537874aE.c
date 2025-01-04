long long uu_cut::stdout_writer::h8d13c8405537874a()
{
    unsigned long v0;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax

    v0 = std::io::stdio::stdout::h077da66234850927();
    if (!(char)std::sys::pal::unix::io::is_terminal::hbf2c1ac3b0f72382())
    {
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h5f7624c4bb443e5b(&v0, 0x2000, std::io::stdio::stdout::h077da66234850927());
        v2 = alloc::boxed::Box$LT$T$GT$::new::h6d1e7df55fdb0aee(&v0);
        return v2;
    }
    v2 = alloc::boxed::Box$LT$T$GT$::new::hdee3616ac8f247f5(std::io::stdio::stdout::h077da66234850927());
    return v2;
}
