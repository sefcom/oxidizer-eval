fn uu_cut::stdout_writer() -> long long {
    let v0: std::io::stdio::Stdout;  // [bp-0x30], Other Possible Types: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>

    v0 = std::io::stdio::stdout();
    if std::sys::pal::unix::io::is_terminal() {
        return alloc::boxed::Box<T>::new(std::io::stdio::stdout());
    }
    std::io::stdio::stdout();
    v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
    return alloc::boxed::Box<T>::new(&v0);
}
