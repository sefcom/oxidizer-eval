fn uu_truncate::truncate_size_only(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32) -> u64 {
    let v0: i128;  // [sp-0x178], Other Possible Types: Result<struct32, struct32>
    let v1: i64;  // [sp-0x170]
    let v2: i64;  // [sp-0x168]
    let v3: i32;  // [bp-0x160]
    let v4: i64;  // [sp-0x140]
    let v5: i64;  // [sp-0x138]
    let v6: i192;  // [sp-0x120]
    let v7: i64;  // [sp-0x108]
    let v8: i128;  // [sp-0x100]
    let v9: i8;  // [sp-0xf0]
    let v10: i1408;  // [bp-0xe8], Other Possible Types: struct24, Result<struct176, struct16>, struct32
    let v11: i32;  // [sp-0xd0]
    let v13: i64;  // rbx
    let v15: i64;  // rax
    let v16: struct8;  // rax
    let v17: struct8;  // r12
    let v18: i64;  // rdx

    v0 = uu_truncate::parse_mode_and_size(a0, a1);
    if v0 != 3 {
        v10 = struct32 {
            field_0: v14
            field_16: *((&v0 as &char + 16) as &i128)
        };
        v15 = uu_truncate::truncate_size_only::{{closure}}(&v10);
        goto LABEL_4ae097;
    } else {
        v13 = v1;
        if v13 != 5 && v13 != 6 || v2 {
            v4 = a2;
            v5 = a2 + a3 * 24;
            loop {
                v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v16 {
                    return 0;
                }
                v17 = v16;
                v10 = std::fs::metadata(v16, v18);
                if v10 != 2 && (*((&v10 as &char + 56) as &i32) & 0xf000) == 0x1000 {
                    v7 = 0;
                    v8 = *((v17 + 8) as &i128);
                    v9 = 1;
                    v6 = format!("cannot open {:?} for writing: No such device or address", &v7);
                    v3 = 1;
                    v0 = v6;
                    v2 = *((&v6 as &char + 16) as &i64);
                    v15 = alloc::boxed::Box<T>::new(&v0);
                    break;
                }
                v15 = uu_truncate::file_truncate(*((v17 + 8) as &i64), *((v17 + 16) as &i64), a4, uu_truncate::TruncateMode::to_size(v13));
                if v15 {
                    return v15;
                }
            }
        } else {
            v10 = <T as alloc::slice::hack::ConvertVec>::to_vec("division by zero");
            v11 = 1;
            v15 = alloc::boxed::Box<T>::new(&v10);
LABEL_4ae097:
        }
    }
    return v15;
}
