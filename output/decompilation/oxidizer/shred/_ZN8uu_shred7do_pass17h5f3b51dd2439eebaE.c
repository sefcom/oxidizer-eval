fn uu_shred::do_pass() -> int {
    let v0: u8;  // [bp-0x10178]
    let v3: u64;  // rdi
    let v4: u64;  // rsi
    let v7: u64;  // r14
    let v8: u64;  // r12
    let v9: u64;  // r12

    if std::io::Seek::rewind(v3) {
        return;
    }
    uu_shred::BytesWriter::from_pass_type(&v0, v4);
    loop {
        v9 = v8 - 1;
        if v8 == 1 {
            break;
        }
        v8 = v9;
        if std::io::Write::write_all(v3, uu_shred::BytesWriter::bytes_for_pass(&v0, 0x10000), rdx<8>) {
            return;
        }
    }
    if std::io::Write::write_all(v3, uu_shred::BytesWriter::bytes_for_pass(&v0, v7), rdx<8>) {
        return;
    }
    std::fs::File::sync_data(v3);
    return;
}
