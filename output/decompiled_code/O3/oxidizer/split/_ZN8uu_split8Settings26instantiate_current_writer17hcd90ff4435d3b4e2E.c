fn uu_split::Settings::instantiate_current_writer(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32) -> u64 {
    let v0: i64;  // [sp-0x90]
    let v1: i64;  // [sp-0x88]
    let v2: i192;  // [sp-0x40]

    v0 = a2;
    v1 = a3;
    if !uu_split::platform::unix::paths_refer_to_same_file(*((a1 + 120) as &i64), *((a1 + 128) as &i64), a2, a3) as i8 {
        uu_split::platform::unix::instantiate_current_writer(a0, a1 + 136, a2, a3, a4);
        return a0;
    }
    v2 = format!("'{:?}' would overwrite input; aborting", &v0);
    *((a0 + 8) as &long long) = std::io::error::Error::new(39, &v2);
    *(a0 as &i64) = 0x8000000000000000;
    return a0;
}
