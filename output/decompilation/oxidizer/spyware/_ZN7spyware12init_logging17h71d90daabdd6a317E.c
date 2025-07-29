fn spyware::init_logging() -> void {
    let v0: struct18;  // [bp-0x18]

    v0 = struct18 {
        field_0: 4
        field_8: 0x4000
        field_16: 257
    };
    core::result::Result<T,E>::unwrap(spyware::logging::core::setup_logging(&v0));
    return;
}
