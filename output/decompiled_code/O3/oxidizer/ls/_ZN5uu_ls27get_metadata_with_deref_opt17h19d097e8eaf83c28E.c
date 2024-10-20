fn uu_ls::get_metadata_with_deref_opt(a0: i64, a1: i64, a2: i64, a3: i32) -> u64 {
    let v0: i1408;  // [sp-0xb8], Other Possible Types: Enum

    if !a3 {
        v0 = std::sys::pal::unix::fs::lstat(a1, a2);
        if v0 != 2 {
            memcpy(a0, &v0, 176);
            return a0;
        }
    } else {
        v0 = std::sys::pal::unix::fs::stat(a1, a2);
        if v0 != 2 {
            memcpy(a0, &v0, 176);
            return a0;
        }
    }
    *((a0 + 8) as &i64) = *((&v0 as &char + 8) as &i64);
    *(a0 as &i64) = 2;
    return a0;
}
