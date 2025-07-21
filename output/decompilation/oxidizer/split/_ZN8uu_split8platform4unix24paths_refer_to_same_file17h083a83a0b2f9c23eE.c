fn uu_split::platform::unix::paths_refer_to_same_file(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: struct16;  // [bp-0x150], Other Possible Types: u128
    let v1: std::io::stdio::Stdin;  // [bp-0xb8], Other Possible Types: struct16

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") as i8 {
        v1 = std::io::stdio::stdin();
        v0 = uucore::features::fs::FileInformation::from_file();
    } else {
        v0 = uucore::features::fs::FileInformation::from_path(a0, a1, 1);
    }
    v1 = uucore::features::fs::FileInformation::from_path(a2, a3, 1);
    return uucore::features::fs::infos_refer_to_same_file(&v0, &v1);
}
