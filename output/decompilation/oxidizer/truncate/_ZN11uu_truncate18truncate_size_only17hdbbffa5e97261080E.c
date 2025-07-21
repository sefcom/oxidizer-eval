fn uu_truncate::truncate_size_only(a1: i32, a2: i64, a3: i32, a4: i8) -> : struct32 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x178], Other Possible Types: struct28, struct437, char
    let v1: u64;  // [bp-0x170]
    let v2: i64;  // [bp-0x168], Other Possible Types: char, u64
    let v3: u64;  // [bp-0x160]
    let v4: void*;  // [bp-0x158]
    let v5: struct16;  // [bp-0x140]
    let v6: i64;  // [bp-0x130]
    let v7: u64;  // [bp-0x128]
    let v8: u128;  // [bp-0x120]
    let v9: u64;  // [bp-0x110]
    let v10: void*;  // [bp-0x108]
    let v11: u128;  // [bp-0x100]
    let v12: u8;  // [bp-0xf0]
    let v13: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [sp-0xe8], Other Possible Types: struct28, struct32
    let v15: u128;  // xmm0
    let v16: u64;  // rax
    let v17: i64;  // rax
    let v18: i64;  // r12
    let v19: u64;  // rax
    let v20: u64;  // rax
    let v21: u64;  // r12
    let v22: struct16;  // [bp-0xb0]

    uu_truncate::parse_mode_and_size(a0, a1, a3);
    if *(&v0 as &i32) != 3 {
        v15 = *(&v0 as &i128);
        v13 = struct32 {
            field_0: v15
            field_16: *(&v2 as &i128)
        };
        v16 = uu_truncate::truncate_size_only::{{closure}}(&v13);
        goto LABEL_4ae057;
    } else if v1 != 5 && v1 != 6 || v2 {
        v5 = struct16 {
            field_0: a2
            field_8: a2 + a3 * 24
        };
        loop {
            v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
            if !v17 {
                return 0;
            }
            v18 = v17;
            v13 = std::fs::metadata(v17, a2);
            if let Ok(_) = v13 {
                if (v22.field_0 as i32 as i16 & 0xf000) == 0x1000 {
                    break;
                }
            }
            v19 = uu_truncate::TruncateMode::to_size(v1) as u64;
            v20 = uu_truncate::file_truncate(*((v18 + 8) as &i64), *((v18 + 16) as &i64), a4, v19);
            if v20 {
                return v20;
            }
        }
        v10 = 0;
        v11 = *((v18 + 8) as &i128);
        v12 = 1;
        v6 = &v10;
        v7 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = "cannot open ";
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        v0 = core::option::Option<T>::map_or_else(a2);
        v0 = struct28 {
            field_0: v8
            field_16: v9
            field_24: 1
        };
        v21 = alloc::boxed::Box<T>::new(&v0);
    } else {
        <T as alloc::slice::hack::ConvertVec>::to_vec("division by zero", a3);
        v13 = struct28 {
            field_0: <UNKNOWN>
            field_16: <UNKNOWN>
            field_24: 1
        };
        v16 = alloc::boxed::Box<T>::new(&v13);
LABEL_4ae057:
        v21 = v16;
    }
    return v21;
}
