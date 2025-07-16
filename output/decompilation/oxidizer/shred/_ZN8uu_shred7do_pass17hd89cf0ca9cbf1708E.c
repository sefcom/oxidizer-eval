fn uu_shred::do_pass() -> int {
    let v0: u8;  // [bp-0x10188]
    let v3: u64;  // rdi
    let v4: u64;  // rsi
    let v5: void*;  // r12
    let v6: u64;  // rsi
    let v7: u64;  // rcx
    let v8: u64;  // rdx

    if std::io::Seek::rewind(v3) {
        return;
    }
    uu_shred::BytesWriter::from_pass_type(&v0, v4);
    while (v5 < v7 >> 16) {
        v5 = <u64 as core::iter::range::Step>::forward_unchecked(v5, v6);
        if std::io::Write::write_all(v3, uu_shred::BytesWriter::bytes_for_pass(0x10000, v8), v8) {
            return;
        }
    }
    return;
}
