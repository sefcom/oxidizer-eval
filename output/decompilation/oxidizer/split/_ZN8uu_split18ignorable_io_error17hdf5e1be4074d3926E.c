fn uu_split::ignorable_io_error(a0: u64, a1: u64) -> char {
    let v1: u64;  // cc_ndep

    return _ccall(1, 8, 0, a1, v1) & std::io::error::Error::kind(a0) as u8 == 11;
}
