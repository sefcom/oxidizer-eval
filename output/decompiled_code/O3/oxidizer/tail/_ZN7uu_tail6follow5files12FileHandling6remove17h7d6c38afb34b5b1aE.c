fn uu_tail::follow::files::FileHandling::remove(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [bp-0x1f8], Other Possible Types: struct24
    let v1: Enum;  // [sp-0x1e0], Other Possible Types: i192
    let v2: i8;  // [bp-0x1c8]
    let v3: i8;  // [bp-0x1c0]
    let v4: i8;  // [bp-0xf0]
    let v6: i64;  // rdx
    let v7: i64;  // rcx
    let v8: i64;  // r8
    let v9: i64;  // r9
    let v10: i64;  // r14

    if !(!std::path::Path::is_absolute(a2, a3) as i8) || !(!<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(a2, a3, v6, v7, v8, v9) as i8) {
LABEL_4adfea:
        v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
    } else {
        v1 = std::sys::pal::unix::fs::canonicalize(a2, a3);
        if v1 != 0x8000000000000000 {
            v0 = v1;
        } else {
            goto LABEL_4adfea;
        }
    }
    hashbrown::raw::RawTable<T,A>::remove_entry(&v1, a1 + 24, core::hash::BuildHasher::hash_one(a1 + 56, &v0), &v0, v8, v9);
    v10 = v2;
    if v10 != 3 {
        memcpy(&v4, &v3, 208);
        *(a0 as &i64) = v10;
        memcpy(a0 + 8, &v4, 208);
        return a0;
    }
    core::option::unwrap_failed(); /* do not return */
}
