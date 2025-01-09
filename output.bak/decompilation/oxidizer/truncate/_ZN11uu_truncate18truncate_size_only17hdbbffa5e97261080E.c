fn uu_truncate::truncate_size_only(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i264;  // [sp-0x178], Other Possible Types: struct28, Result<struct32, struct24>
    let v1: i64;  // [sp-0x170]
    let v2: i64;  // [sp-0x168]
    let v3: i64;  // [bp-0x160]
    let v4: i64;  // [sp-0x158]
    let v5: i64;  // [sp-0x140]
    let v6: i64;  // [sp-0x138]
    let v7: i64;  // [sp-0x130]
    let v8: i64;  // [sp-0x128]
    let v11: i64;  // [sp-0x108]
    let v12: i128;  // [sp-0x100]
    let v13: i8;  // [sp-0xf0]
    let v14: i192;  // [bp-0xe8], Other Possible Types: struct16, struct32, struct24
    let v15: i32;  // [sp-0xd0]
    let v16: i8;  // [bp-0xb0]
    let v18: i64;  // rbx
    let v20: i64;  // rax
    let v21: struct8;  // rax
    let v22: struct8;  // r12

    v0 = uu_truncate::parse_mode_and_size(a0, a1);
    if v0 != 3 {
        v14 = struct32 {
            field_0: v19
            field_16: *((&v0 as &char + 16) as &i128)
        };
        v20 = uu_truncate::truncate_size_only::{{closure}}(&v14);
        goto LABEL_4ae057;
    } else {
        v18 = v1;
        if v18 != 5 && v18 != 6 || v2 {
            v5 = a2;
            v6 = a2 + a3 * 24;
            loop {
                v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v21 {
                    return 0;
                }
                v22 = v21;
                v14 = std::fs::metadata(v21);
                if v14 != 2 && (v16 & 0xf000) == 0x1000 {
                    v11 = 0;
                    v12 = *((v22 + 8) as &i128);
                    v13 = 1;
                    v7 = &v11;
                    v8 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v0 = "cannot open ";
                    v1 = 2;
                    v4 = 0;
                    v2 = &v7;
                    v3 = 1;
                    core::option::Option<T>::map_or_else();
                    v0 = struct28 {
                        field_0: v9
                        field_16: v10
                        field_24: 1
                    };
                    v20 = alloc::boxed::Box<T>::new(&v0);
                    break;
                }
                v20 = uu_truncate::file_truncate(*((v22 + 8) as &i64), *((v22 + 16) as &i64), a4, uu_truncate::TruncateMode::to_size(v18));
                if v20 {
                    return v20;
                }
            }
        } else {
            v14 = <T as alloc::slice::hack::ConvertVec>::to_vec("division by zero");
            v15 = 1;
            v20 = alloc::boxed::Box<T>::new(&v14);
LABEL_4ae057:
        }
    }
    return v20;
}
