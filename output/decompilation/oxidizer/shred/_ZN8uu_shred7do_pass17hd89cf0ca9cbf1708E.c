fn uu_shred::do_pass() -> u32 {
    let v0: i72;  // [sp-0x10188], Other Possible Types: Option<struct9>
    let v1: i8;  // [bp-0x10030]
    let v2: i64;  // [sp-0x2030]
    let v4: i64;  // rdi
    let v5: i64;  // rsi
    let v6: i64;  // r12
    let v7: i64;  // rcx
    let v8: i64;  // rdx
    let v9: i64;  // r14

    do {
        v2 = 0;
    } while (&v2 != &v1);
    if !std::io::Seek::rewind(v4) {
        v0 = uu_shred::BytesWriter::from_pass_type(v5);
        v6 = 0;
        do {
            if v6 >= v7 >> 16 {
                v9 = v7 & 65535;
                if v7 {
                    if !v8 as u8 {
                        v9 = 0x10000;
                    }
                    if std::io::Write::write_all(v4, uu_shred::BytesWriter::bytes_for_pass(&v0, v9), v8) {
                        break;
                    }
                }
                if !std::fs::File::sync_data(v4) {
                    break;
                }
            }
        } while ((v6 = <u64 as core::iter::range::Step>::forward_unchecked(v6), !std::io::Write::write_all(v4, uu_shred::BytesWriter::bytes_for_pass(&v0, 0x10000), v8)));
    }
    return;
}
