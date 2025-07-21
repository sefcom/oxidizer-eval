fn uu_split::Settings::instantiate_current_writer(a1: i64, a2: i64, a3: i64, a4: i8) -> Result<struct41, struct16> {
    let a0: u64;  // rdi
    let v0: struct16;  // [bp-0x90]
    let v1: alloc::string::String;  // [bp-0x40]

    v0 = struct16 {
        field_0: a2
        field_8: a3
    };
    if !uu_split::platform::unix::paths_refer_to_same_file(*((a1 + 120) as &i64), *((a1 + 128) as &i64), a2, a3) as i8 {
        uu_split::platform::unix::instantiate_current_writer(a0, a1 + 136, a2, a3, a4);
        return a0;
    }
    v1 = format!("'{}' would overwrite input; aborting", &v0);
    return struct16 {
        field_0: 0x8000000000000000
        field_8: std::io::error::Error::new(39, &v1)
    };
}
