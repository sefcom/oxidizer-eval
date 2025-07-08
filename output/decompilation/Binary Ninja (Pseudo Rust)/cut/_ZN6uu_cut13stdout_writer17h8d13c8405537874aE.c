
  fn uu_cut::stdout_writer::h8d13c8405537874a() -> *mut i128

{
    std::io::stdio::stdout::h077da66234850927();
    let mut var_30: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut result: *mut i128;
    
    if std::sys::pal::unix::io::is_terminal::hbf2c1ac3b0f72382() == 0
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
    
    result
}
