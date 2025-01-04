fn uu_truncate::truncate_size_only(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32) -> u64 {
    let v0: i256;  // [sp-0x178], Other Possible Types: Result<struct32, struct32>
    let v1: i64;  // [sp-0x170]
    let v2: i64;  // [sp-0x168]
    let v3: i64;  // [sp-0x140]
    let v4: i64;  // [sp-0x138]
    let v5: i192;  // [sp-0x120]
    let v6: i64;  // [sp-0x108]
    let v7: i128;  // [sp-0x100]
    let v8: i8;  // [sp-0xf0]
    let v9: i1408;  // [bp-0xe8], Other Possible Types: struct24, struct32, Result<struct176, struct16>
    let v10: i32;  // [sp-0xd0]
    let v12: i64;  // rbx
    let v14: i64;  // rax
    let v15: struct8;  // rax
    let v16: struct8;  // r12
    let v17: i64;  // rdx

    v0 = uu_truncate::parse_mode_and_size(a0, a1);
    if v0 != 3 {
        v9 = struct32 {
            field_0: v13
            field_16: *((&v0 as &char + 16) as &i128)
        };
        v14 = uu_truncate::truncate_size_only::{{closure}}(&v9);
        goto LABEL_4ae057;
    } else {
        v12 = v1;
        if v12 != 5 && v12 != 6 || v2 {
            v3 = a2;
            v4 = a2 + a3 * 24;
            loop {
                v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v15 {
                    return 0;
                }
                v16 = v15;
                v9 = std::fs::metadata(v15, v17);
                if v9 != 2 && (*((&v9 as &char + 56) as &i32) & 0xf000) == 0x1000 {
                    v6 = 0;
                    v7 = *((v16 + 8) as &i128);
                    v8 = 1;
                    v5 = format!("cannot open {:?} for writing: No such device or address", &v6);
                    v0 = v5;
                    v14 = alloc::boxed::Box<T>::new(&v0);
                    break;
                }
                v14 = uu_truncate::file_truncate(*((v16 + 8) as &i64), *((v16 + 16) as &i64), a4, uu_truncate::TruncateMode::to_size(v12));
                if v14 {
                    return v14;
                }
            }
        } else {
            v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("division by zero");
            v10 = 1;
            v14 = alloc::boxed::Box<T>::new(&v9);
LABEL_4ae057:
        }
    }
    return v14;
}
