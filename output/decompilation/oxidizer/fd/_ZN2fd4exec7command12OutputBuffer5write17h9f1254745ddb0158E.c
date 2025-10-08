fn fd::exec::command::OutputBuffer::write(a0: i64) -> int {
    let v0: struct24;  // [bp-0x79]
    let v1: u64;  // [bp-0x78]
    let v2: u64;  // [bp-0x70]
    let v3: u64;  // [bp-0x60]
    let v4: std::io::stdio::Stdout;  // [bp-0x58]
    let v5: struct24;  // [bp-0x50]
    let v6: struct17;  // [bp-0x48], Other Possible Types: core::result::Result<(), std::io::error::Error>
    let v8: u8;  // dl
    let v9: u64;  // r14
    let v10: void*;  // rbx

    if !*((a0 + 16) as &i64) {
        return;
    }
    v6 = std::sync::poison::mutex::Mutex<T>::lock(*((a0 + 24) as &i64));
    v3 = core::result::Result<T,E>::unwrap(&v6, "src/exec/command.rs");
    v0 = v8 & 1;
    v4 = std::io::stdio::stdout();
    v5 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.field_0;
    v1 = std::io::stdio::Stderr::lock(&v4);
    v2 = std::io::stdio::Stderr::lock(&v5);
    v9 = *((a0 + 8) as &i64);
    v10 = 0;
    do {
        v6 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, *((8 + v9 + v10 as &u8) as &i64), *((16 + v9 + v10 as &u8) as &i64));
        v6 = <std::io::stdio::StderrLock as std::io::Write>::write_all(&v2, *((32 + v9 + v10 as &u8) as &i64), *((40 + v9 + v10 as &u8) as &i64));
        v10 += 48;
    } while (*((a0 + 16) as &i64) * 48 != v10);
    return;
}
