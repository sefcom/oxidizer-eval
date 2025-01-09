fn uu_split::Settings::instantiate_current_writer(a0: &Result<struct41, struct8>, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: u64;  // [sp-0x90]
    let v1: u64;  // [sp-0x88]
    let v2: u192;  // [sp-0x40], Other Possible Types: String

    v0 = a2;
    v1 = a3;
    if !uu_split::platform::unix::paths_refer_to_same_file(a1[15], a1[16], a2, a3) as i8 {
        uu_split::platform::unix::instantiate_current_writer(a0, a1 + 17, a2, a3, a4);
        return a0;
    }
    v2 = format!("'{}' would overwrite input; aborting", &v0);
    *(&a0[1] as &long long) = std::io::error::Error::new(39, &v2);
    *(a0) = 0x8000000000000000;
    return a0;
}
