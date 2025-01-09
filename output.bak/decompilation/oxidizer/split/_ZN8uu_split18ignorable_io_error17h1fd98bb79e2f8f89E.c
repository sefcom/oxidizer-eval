fn uu_split::ignorable_io_error(a0: u64, a1: u32) -> u64 {
    return -0x100 | a1 != 0x8000000000000000 & std::io::error::Error::kind(a0) as i8 == 11;
}
