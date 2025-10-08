fn uu_sort::Line::print(a0: u64, a1: u64, a2: u64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x18]
    let v1: u8;  // [bp-0x11]
    let v3: u64;  // rax
    let v4: core::result::Result<(), std::io::error::Error>;  // rax

    v0 = v3;
    if *((a3 + 124) as &i8) {
        return uu_sort::Line::print_debug(a0, a1, a3, a2);
    }
    v4 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, a0, a1);
    match v4 {
        Ok(_) => {
            v1 = *((a3 + 153) as &i8);
            return <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, &v1, 1);
        },
        Err(_) => {
            return v4;
        },
    }
}
