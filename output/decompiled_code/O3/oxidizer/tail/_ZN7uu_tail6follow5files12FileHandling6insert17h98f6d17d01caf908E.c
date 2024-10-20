fn uu_tail::follow::files::FileHandling::insert(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8, a5: i64) -> u64 {
    let v0: i128;  // [bp-0x218], Other Possible Types: struct24
    let v1: i64;  // [sp-0x208]
    let v2: i128;  // [sp-0x1f8]
    let v3: i64;  // [sp-0x1e8]
    let v4: i192;  // [sp-0x1e0], Other Possible Types: Enum
    let v5: i8;  // [bp-0x108]
    let v7: i64;  // rdx
    let v8: i64;  // rcx
    let v9: i64;  // r8
    let v10: i64;  // r9
    let v12: i64;  // r15
    let v14: i64;  // r13
    let v16: i64;  // rax

    if !(!std::path::Path::is_absolute(a1, a2) as i8) || !(!<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(a1, a2, v7, v8, v9, v10) as i8) {
LABEL_4ade10:
        v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
        if !a4 {
            vvar_263{stack -488} = v1;
            vvar_264{stack -504} = v0;
            memcpy(&v4, a3, 216);
            hashbrown::map::HashMap<K,V,S,A>::insert(&v5, a0 + 24, &v2, &v4, v9, v10);
            return v16;
        }
    } else {
        v4 = std::sys::pal::unix::fs::canonicalize(a1, a2);
        if v4 != 0x8000000000000000 {
            v0 = v4;
            if !a4 {
                v3 = v1;
                v2 = v0;
                memcpy(&v4, a3, 216);
                v16 = hashbrown::map::HashMap<K,V,S,A>::insert(&v5, a0 + 24, &v2, &v4, v9, v10);
                return v16;
            }
        } else {
            goto LABEL_4ade10;
        }
    }
    v12 = v1;
    memcpy(v14, *((&v0 as &char + 8) as &i64), v12);
    *(a0 as &i64) = v12;
    *((a0 + 8) as &i64) = v14;
    *((a0 + 16) as &i64) = v12;
    vvar_255{stack -488} = v1;
    vvar_256{stack -504} = v0;
    memcpy(&v4, a3, 216);
    hashbrown::map::HashMap<K,V,S,A>::insert(&v5, a0 + 24, &v2, &v4, v9, v10);
    return v16;
}
