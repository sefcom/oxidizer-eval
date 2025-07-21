fn uu_split::custom_write_all(a1: i64, a2: i64, a3: i64, a4: i32) -> : struct9 {
    let a0: i64;  // rdi
    let v1: core::result::Result<(), std::io::error::Error>;  // rax

    v1 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, a1, a2);
    if !v1 {
        return struct2 {
            field_0: 0x100
        };
    } else if uu_split::ignorable_io_error(v1, a4) as i8 {
        return struct2 {
            field_0: 0
        };
    } else {
        return struct16 {
            field_0: 1
            padding_1: <UNKNOWN>
            field_8: v1
        };
    }
}
