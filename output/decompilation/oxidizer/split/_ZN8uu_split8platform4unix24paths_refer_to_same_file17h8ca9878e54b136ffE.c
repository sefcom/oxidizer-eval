fn uu_split::platform::unix::paths_refer_to_same_file(a0: u64, a1: u32, a2: u32, a3: u32) -> long long {
    let v0: Option<struct8>;  // [bp-0x150], Other Possible Types: u128
    let v1: Option<struct8>;  // [bp-0xb8]

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") {
        std::io::stdio::stdin();
        v0 = uucore::features::fs::FileInformation::from_file();
    } else {
        v0 = uucore::features::fs::FileInformation::from_path(a0, a1);
    }
    v1 = uucore::features::fs::FileInformation::from_path(a2, a3);
    return uucore::features::fs::infos_refer_to_same_file(&v0, &v1);
}
