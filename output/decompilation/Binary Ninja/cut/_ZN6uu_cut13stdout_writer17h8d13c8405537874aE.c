
  int128_t* uu_cut::stdout_writer::h8d13c8405537874a()

{
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_30 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int128_t* result;
    
    if (!std::sys::pal::unix::io::is_terminal::hbf2c1ac3b0f72382())
    {
        std::io::stdio::stdout::h077da66234850927();
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h5f7624c4bb443e5b(&var_30, 
            0x2000, &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
        result = alloc::boxed::Box$LT$T$GT$::new::h6d1e7df55fdb0aee(&var_30);
    }
    else
    {
        std::io::stdio::stdout::h077da66234850927();
        result = alloc::boxed::Box$LT$T$GT$::new::hdee3616ac8f247f5(
            &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
    }
    
    return result;
}
