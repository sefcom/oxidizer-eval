fn uu_cp::is_forbidden_to_copy_to_same_file(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i8) -> long long {
    let v0: u8;  // [bp-0xba]
    let v1: u8;  // [bp-0xb9]
    let v2: std::path::Components;  // [bp-0xb0]
    let v3: std::path::Components;  // [bp-0x70]
    let v5: u8;  // r15b
    let v6: u8;  // al

    v1 = std::path::Path::is_symlink(a0, a1);
    v5 = std::path::Path::is_symlink(a2, a3);
    v6 = 1;
    v0 = *((a4 + 65) as &i8);
    if uucore::features::fs::paths_refer_to_same_file(a0, a1, a2, a3, v6) as i8 && *((a4 + 76) as &i8) {
        if !*((a4 + 60) as &i8) && !*((a4 + 61) as &i8) {
            if !(v1 ^ 1) && !!v0 && !v5 {
                goto LABEL_505afe;
            }
        } else {
            if !(!v0 & v1) && !v5 {
LABEL_505afe:
                if !v1 {
                    v2 = std::path::Path::components(a2, a3);
                    v3 = std::path::Path::components(a0, a1);
                }
            }
        }
    }
    return 0;
}
