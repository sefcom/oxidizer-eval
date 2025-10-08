fn zoxide::db::stream::Stream::filter_by_base_dir(a0: i64, a1: i64, a2: i64) -> u8 {
    if !((((0 ^ *((a0 + 48) as &i64)) & (0 ^ -(*((a0 + 48) as &i64)))) >> 63) as char) {
        return std::path::Path::starts_with(a1, a2, a0 + 48);
    }
    return 1;
}
