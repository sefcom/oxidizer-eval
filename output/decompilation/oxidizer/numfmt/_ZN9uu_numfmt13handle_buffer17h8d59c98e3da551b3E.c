fn uu_numfmt::handle_buffer(a0: u64, a1: i64) -> long long {
    if *((a1 + 200) as &i8) {
        return uu_numfmt::handle_buffer_iterator(std::io::BufRead::split(a0), a1);
    }
    return uu_numfmt::handle_buffer_iterator(a0, a1);
}
