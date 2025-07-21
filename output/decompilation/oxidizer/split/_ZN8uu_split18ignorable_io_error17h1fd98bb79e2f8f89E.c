fn uu_split::ignorable_io_error(a0: i64, a1: i64) -> long long {
    return 0x8000000000000000 | a1 != 0x8000000000000000 & std::io::error::Error::kind(a0) == 11;
}
