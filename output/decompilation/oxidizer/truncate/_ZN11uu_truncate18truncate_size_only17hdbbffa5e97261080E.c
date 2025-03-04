fn uu_truncate::truncate_size_only(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: String;  // [sp-0x178], Other Possible Types: Result<struct32, struct24>
    let v1: i64;  // [sp-0x170]
    let v2: i64;  // [sp-0x168]
    let v3: i32;  // [bp-0x160]
    let v4: i64;  // [sp-0x140]
    let v5: i64;  // [sp-0x138]
    let v6: String;  // [sp-0x120]
    let v7: i64;  // [sp-0x108]
    let v8: iNone;  // [sp-0x100]
    let v9: i8;  // [sp-0xf0]
    let v10: struct24;  // [bp-0xe8], Other Possible Types: Result<struct176, struct8>, struct32
    let v11: i32;  // [sp-0xd0]
    let v13: i64;  // rbx
    let v15: i64;  // rax
    let v16: struct8;  // rax
    let v17: struct8;  // r12
    let v18: i64;  // rax
    let v19: i64;  // r12

    v0 = uu_truncate::parse_mode_and_size(a0, a1);
    if v0 as i32 != 3 {
        v10 = struct32 {
            field_0: v14
            field_16: *((&v0 as &char + 16) as &i128)
        };
        v15 = uu_truncate::truncate_size_only::{{closure}}(&v10);
        goto LABEL_4ae057;
    } else {
        v13 = v1;
        if v13 != 5 && v13 as u32 != 6 || v2 {
            v4 = a2;
            v5 = a2 + a3 * 24;
            loop {
                v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v16 {
                    return 0;
                }
                v17 = v16;
                v10 = std::fs::metadata(v16);
                if v10 as i64 != 2 && (*((&v10 as &char + 56) as &i32) & 0xf000) == 0x1000 {
                    v7 = 0;
                    v8 = *((v17 + 8) as &i128);
                    v9 = 1;
                    v6 = format!("cannot open {} for writing: No such device or address", &v7);
                    *(&v3 as &i32) = 1;
                    v0 = v6;
                    break;
                }
                v18 = uu_truncate::file_truncate(*((v17 + 8) as &i64), *((v17 + 16) as &i64), a4 as u64, uu_truncate::TruncateMode::to_size(v13));
                if v18 {
                    v19 = v18;
                    return v19;
                }
            }
        } else {
            v10 = <T as alloc::slice::hack::ConvertVec>::to_vec("division by zero");
            v11 = 1;
            v15 = alloc::boxed::Box<T>::new(&v10);
LABEL_4ae057:
            v19 = v15;
        }
    }
    return v19;
}
