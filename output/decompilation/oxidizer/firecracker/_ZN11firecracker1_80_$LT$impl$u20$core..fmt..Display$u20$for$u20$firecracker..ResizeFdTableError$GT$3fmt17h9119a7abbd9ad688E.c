fn firecracker::_::<impl core::fmt::Display for firecracker::ResizeFdTableError>::fmt(a0: i64, a1: i64) -> long long {
    let v0: struct40;  // [bp-0x30]

    v0 = struct40 {
        field_0: (!*(a0 as &i64) ? "Failed to get RLIMIT_NOFILE" : (*(a0 as &i64) as i32 == 1 ? "Failed to call dup2 to resize fdtable" : "Failed to close dup2'd file descriptor"))
        field_8: 1
        field_16: 8
        field_24: 0
    };
    return core::fmt::Formatter::write_fmt(*(a1 as &i64), *((a1 + 8) as &i64), &v0);
}
