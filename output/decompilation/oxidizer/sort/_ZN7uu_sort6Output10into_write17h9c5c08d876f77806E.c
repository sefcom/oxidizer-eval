fn uu_sort::Output::into_write(a0: i64, a1: i64) -> long long {
    let v0: struct32;  // [bp-0x34]
    let v1: core::result::Result<(), std::io::error::Error>;  // [bp-0x30]
    let v4: u64;  // 4096

    if *(a1 as &i64) == 0x8000000000000000 {
        alloc::boxed::Box<T>::new(std::io::stdio::stdout());
        v4 = a0;
    } else {
        v0 = struct32 {
            field_0: *((a1 + 24) as &i32)
            padding_4: <UNKNOWN>
            field_12: <UNKNOWN>
            field_28: <UNKNOWN>
        };
        v1 = std::fs::File::set_len(&v0, 0);
        alloc::boxed::Box<T>::new(v0.field_0);
        v4 = a0;
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v4, 0x2000);
    return a0;
}
