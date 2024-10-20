fn uu_realpath::resolve_path(a0: u32, a1: u32, a2: u8, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct1;  // [bp-0x65]
    let v1: i32;  // [sp-0x64]
    let v2: i64;  // [sp-0x60], Other Possible Types: struct8
    let v3: i64;  // [sp-0x58]
    let v4: i64;  // [sp-0x50]
    let v5: i64;  // [sp-0x48], Other Possible Types: struct24
    let v6: i64;  // [sp-0x40]
    let v7: i64;  // [sp-0x38]
    let v8: i64;  // [bp+0x8]
    let v9: i8;  // [bp+0x10]
    let v10: i8;  // [bp+0x18]
    let v11: i64;  // r12
    let v12: i64;  // rax
    let v13: i64;  // rbp
    let v14: i64;  // r15
    let v15: i64;  // r13
    let v16: i64;  // rbx
    let v17: i64;  // 4096
    let v20: i64;  // r15

    uucore::features::fs::canonicalize();
    v11 = v2;
    v12 = v3;
    if v11 == 0x8000000000000000 {
        return v12;
    }
    v1 = a2;
    v13 = v9;
    v14 = v8;
    v15 = v4;
    if v13 {
        v16 = v12;
        if !std::path::Path::_starts_with(v12, v15, v13, v10) as i8 {
            v5 = v11;
            v6 = v16;
            goto LABEL_487c2d;
        } else {
            v2 = v11;
            v3 = v16;
            v4 = v15;
            if !a5 {
                v14 = v10;
            }
        }
LABEL_487c0d:
        v5 = uucore::features::fs::make_path_relative_to(&v2, v17, v20);
    } else if a5 {
        v2 = v11;
        v3 = v12;
        v4 = v15;
        goto LABEL_487c0d;
    } else {
        v5 = v11;
        v6 = v12;
LABEL_487c2d:
        v7 = v15;
    }
    v2 = struct8 {
        field_0:         std::io::stdio::stdout()
    };
    v12 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v2, v6, v7);
    if !v12 {
        v2 = struct8 {
            field_0:             std::io::stdio::stdout()
        };
        v0 = struct1 {
            field_0: v1 as i8
        };
        v12 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v2, &v0, 1);
        return v12;
    }
    return v12;
}
