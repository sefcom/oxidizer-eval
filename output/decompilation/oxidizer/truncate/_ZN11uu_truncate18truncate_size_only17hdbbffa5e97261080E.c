fn uu_truncate::truncate_size_only(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i224;  // [sp-0x178], Other Possible Types: struct28, Result<struct32, struct24>
    let v1: i64;  // [sp-0x170]
    let v2: i64;  // [sp-0x168]
    let v3: i64;  // [bp-0x160]
    let v4: i64;  // [sp-0x158]
    let v5: i64;  // [sp-0x140]
    let v6: i64;  // [sp-0x138]
    let v7: i64;  // [sp-0x130]
    let v8: i64;  // [sp-0x128]
    let v10: i64;  // [sp-0x108]
    let v11: i128;  // [sp-0x100]
    let v12: i8;  // [sp-0xf0]
    let v13: i128;  // [bp-0xe8], Other Possible Types: struct32, struct24, struct16
    let v14: i32;  // [sp-0xd0]
    let v15: i8;  // [bp-0xb0]
    let v17: i64;  // rbx
    let v19: i64;  // rax
    let v20: struct8;  // rax
    let v21: struct8;  // r12

    v0 = uu_truncate::parse_mode_and_size(a0, a1);
    if v0 != 3 {
        v13 = struct32 {
            field_0: v18
            field_16: *((&v0 as &char + 16) as &i128)
        };
        v19 = uu_truncate::truncate_size_only::{{closure}}(&v13);
        goto LABEL_4ae057;
    } else {
        v17 = v1;
        if v17 != 5 && v17 != 6 || v2 {
            v5 = a2;
            v6 = a2 + a3 * 24;
            loop {
                v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v20 {
                    return 0;
                }
                v21 = v20;
                v13 = std::fs::metadata(v20);
                if v13 != 2 && (v15 & 0xf000) == 0x1000 {
                    v10 = 0;
                    v11 = *((v21 + 8) as &i128);
                    v12 = 1;
                    v7 = &v10;
                    v8 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v0 = struct28 {
                        field_0: "cannot open "
                        field_16: &v7
                        field_24: <UNKNOWN>
                    };
                    v4 = 0;
                    v3 = 1;
                    core::option::Option<T>::map_or_else();
                    v19 = alloc::boxed::Box<T>::new(&v0);
                    break;
                }
                v19 = uu_truncate::file_truncate(*((v21 + 8) as &i64), *((v21 + 16) as &i64), a4, uu_truncate::TruncateMode::to_size(v17));
                if v19 {
                    return v19;
                }
            }
        } else {
            v13 = <T as alloc::slice::hack::ConvertVec>::to_vec("division by zero");
            v14 = 1;
            v19 = alloc::boxed::Box<T>::new(&v13);
LABEL_4ae057:
        }
    }
    return v19;
}
