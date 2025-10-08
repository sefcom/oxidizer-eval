fn uu_dd::Output::sync(a0: i64) -> u64 {
    if *((*((a0 + 16) as &i64) + 149) as &i8) {
        return uu_dd::Dest::fsync(a0) as u64;
    } else if !*((*((a0 + 16) as &i64) + 148) as &i8) {
        return 0;
    } else {
        return uu_dd::Dest::fdatasync(a0) as u64;
    }
}
