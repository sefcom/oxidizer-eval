fn uu_sort::Output::into_write(a1: i64) -> : struct41 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x24]
    let v1: u64;  // [bp-0x20]

    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) {
        v0 = *((a1 + 24) as &i32);
        v1 = std::fs::File::set_len(&v0, 0);
        std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a0, alloc::boxed::Box<T>::new(v0), &g_58cc50);
        return;
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a0, alloc::boxed::Box<T>::new(std::io::stdio::stdout()), &g_58cc00);
    return;
}
