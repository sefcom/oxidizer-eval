fn uu_split::custom_write(a0: u64, a1: u64, a2: &u64, a3: u64) -> u64 {
    let v2: u64;  // rdx

    if !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write(a2, a0, a1) {
        return 0;
    } else if uu_split::ignorable_io_error(v2, a3) as i32 {
        return 0;
    } else {
        return 1;
    }
}
