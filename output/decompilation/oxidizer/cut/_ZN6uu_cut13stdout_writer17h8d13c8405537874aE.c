fn uu_cut::stdout_writer() -> u64 {
    let v0: i64;  // [sp-0x30], Other Possible Types: struct33
    let v2: i64;  // rax

    v0 = std::io::stdio::stdout();
    if !std::sys::pal::unix::io::is_terminal() {
        v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
        v2 = alloc::boxed::Box<T>::new(&v0);
        return v2;
    }
    v2 = alloc::boxed::Box<T>::new(std::io::stdio::stdout());
    return v2;
}
