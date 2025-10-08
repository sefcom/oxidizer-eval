fn fd::walk::ReceiverBuffer<W>::print(a0: i64, a1: i64) -> u8 {
    let v0: core::fmt::Arguments;  // [bp-0x68]
    let v1: alloc::string::String;  // [bp-0x20]
    let v3: u64;  // rax

    v3 = fd::output::print_entry(a0 + 16, a1, *((a0 + 96) as &i64));
    if v3 {
        v0 = v3;
        if std::io::error::Error::kind(v3) as u8 != 11 {
            v1 = format!("Could not write to output: {}", &v0);
            fd::error::print_error(&v1);
            return 4;
        }
    }
    if !core::sync::atomic::atomic_load(*((a0 + 112) as &i64), 0) as u8 {
        return 6;
    }
    fd::walk::ReceiverBuffer<W>::flush(a0);
    return 5;
}
