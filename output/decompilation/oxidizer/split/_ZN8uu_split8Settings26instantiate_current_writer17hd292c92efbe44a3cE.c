fn uu_split::Settings::instantiate_current_writer(a0: u64, a1: i64, a2: u64, a3: u64, a4: u8) -> long long {
    let v0: struct16;  // [bp-0x98]
    let v1: alloc::string::String;  // [bp-0x48]

    v0 = struct16 {
        field_0: a2
        field_8: a3
    };
    if !uu_split::platform::unix::paths_refer_to_same_file(*((a1 + 120) as &i64), *((a1 + 128) as &i64), a2, a3) {
        return uu_split::platform::unix::instantiate_current_writer(a0, (*((a1 + 136) as &i64) == 0x8000000000000000 ? 0 : *((a1 + 144) as &i64)), *((a1 + 152) as &i64), a2, a3, a4);
    }
    v1 = format!("'{}' would overwrite input; aborting", &v0);
    return struct16 {
        field_0: 0x8000000000000000
        field_8: std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v1), &g_50ad88)
    };
}
