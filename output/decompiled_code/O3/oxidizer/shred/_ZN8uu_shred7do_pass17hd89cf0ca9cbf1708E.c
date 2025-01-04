fn uu_shred::do_pass() -> u32 {
    let v0: struct8;  // [sp-0x10188]
    let v1: i8;  // [bp-0x10030]
    let v2: void*;  // [sp-0x2030]
    let v4: u64;  // rdi
    let v5: void*;  // r12
    let v6: u64;  // rcx
    let v7: u64;  // rdx
    let v8: u64;  // r14

    do {
        v2 = 0;
    } while (&v2 != &v1);
    if !std::io::Seek::rewind(v4) {
        uu_shred::BytesWriter::from_pass_type();
        v5 = 0;
        do {
            if v5 >= v6 >> 16 {
                v8 = v6 & 65535;
                if v6 {
                    if !v7 {
                        v8 = 0x10000;
                    }
                    v0 = uu_shred::BytesWriter::bytes_for_pass(v8, v7);
                    if std::io::Write::write_all() as i64 {
                        break;
                    }
                }
                if !std::fs::File::sync_data(v4) {
                    break;
                }
            }
            v5 = <u64 as core::iter::range::Step>::forward_unchecked(v5);
            v0 = uu_shred::BytesWriter::bytes_for_pass(0x10000, v7);
        } while (!std::io::Write::write_all() as i64);
    }
    return;
}
