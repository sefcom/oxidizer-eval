fn uu_split::platform::unix::paths_refer_to_same_file(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Option<struct8>;  // [sp-0x150], Other Possible Types: i72
    let v1: i64;  // [sp-0xb8], Other Possible Types: Option<struct8>

    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") as i8 {
        v0 = uucore::features::fs::FileInformation::from_path(a0, a1, 1);
    } else {
        v1 = std::io::stdio::stdin();
        v0 = uucore::features::fs::FileInformation::from_file();
    }
    v1 = uucore::features::fs::FileInformation::from_path(a2, a3, 1);
    return uucore::features::fs::infos_refer_to_same_file(&v0, &v1);
}
