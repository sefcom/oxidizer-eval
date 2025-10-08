fn forc_crypto::main() -> void {
    let v0: u64;  // [bp-0x70]
    let v1: struct16;  // [bp-0x68], Other Possible Types: u128
    let v2: u64;  // [bp-0x58]
    let v3: u8;  // [bp-0x48]
    let v4: u16;  // [bp-0x46]
    let v5: u64;  // [bp-0x38]
    let v6: alloc::string::String;  // [bp-0x20]

    v3 = 0;
    v4 = 1026;
    v1 = struct16 {
        field_0: 6
        field_8: 0x8000000000000000
    };
    forc_tracing::init_tracing_subscriber(&v1);
    v5 = forc_crypto::run() as u64;
    if v5 {
        v0 = v5;
        v6 = format!("{}", &v0);
        v1 = *(&v6.vec.buf.inner.cap as &i128);
        v2 = v6.vec.len;
        forc_tracing::println_error(1, v6.vec.len);
        std::process::exit(1); /* do not return */
    }
    return;
}
