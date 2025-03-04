fn uu_cat::cat_files(a0: u32, a1: u32, a2: &struct5) -> u64 {
    let v0: i64;  // [sp-0x248], Other Possible Types: struct24
    let v1: i64;  // [sp-0x240]
    let v2: i64;  // [sp-0x220], Other Possible Types: struct24
    let v3: i64;  // [sp-0x218]
    let v4: i64;  // [sp-0x210]
    let v5: i8;  // [sp-0x208]
    let v6: i64;  // [sp-0x200], Other Possible Types: struct16
    let v7: i64;  // [sp-0x1f8]
    let v8: i64;  // [sp-0x1f0]
    let v9: i64;  // [sp-0x1e8]
    let v10: i16;  // [sp-0x1e0]
    let v11: i8;  // [sp-0x1de]
    let v12: struct16;  // [bp-0x1d8]
    let v13: iNone;  // [sp-0x1c8]
    let v14: i64;  // [sp-0x1b8]
    let v15: struct25;  // [sp-0x1b0]
    let v16: struct24;  // [sp-0x198], Other Possible Types: struct40, Option<struct8>, unsigned long
    let v17: i32;  // [bp-0x180]
    let v18: struct24;  // [sp-0xf8]
    let v19: String;  // [sp-0xe0]
    let v20: i64;  // [sp-0xc8]
    let v21: i8;  // [bp-0xc0]
    let v23: i64;  // rax
    let v24: iNone;  // ymm0
    let v25: i64;  // r15
    let v26: i64;  // r12
    let v27: i64;  // r9
    let v28: iNone;  // xmm0
    let v29: i64;  // rdx
    let v30: i64;  // rbx
    let v31: i64;  // rbx

    v2 = std::io::stdio::stdout();
    v16 = uucore::features::fs::FileInformation::from_file();
    if !v16 {
        memcpy(&v21, &v16, 144);
        v20 = 1;
    }
    v9 = 1;
    v10 = 1;
    v11 = 0;
    v6 = 0;
    v7 = 8;
    v8 = 0;
    v12 = struct16 {
        field_0: a0
        field_8: a0 + a1 * 24
    };
    v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v12);
    if v23 {
        do {
            v25 = *((v23 + 8) as &i64);
            v26 = *((v23 + 16) as &i64);
            v27 = v20;
            if v27 {
                v27 = &v21;
            }
            v15 = uu_cat::cat_path(v25, v26, a2, &v9, v27);
            if v15.field_0 != 9223372036854775814 {
                v14 = *((&v15.field_9 as &char + 7) as &i64);
                v28 = *(&v15.field_0 as &i128);
                v24 = v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 as u256;
                v13 = v28;
                v2 = 0;
                v3 = v25;
                v4 = v26;
                v5 = 0;
                v19 = format!("{}: {}", &v2, &v13);
                v6 = alloc::vec::Vec<T,A>::push(&v19);
            }
            v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v12);
        } while (v23);
        if *((&v10 as &char + 1) as &i8) {
            print!("");
        }
    }
    if !v8 {
        return v31;
    }
    v2 = uucore::util_name();
    v3 = v29;
    v0 = &v2;
    v1 = <&T as core::fmt::Display>::fmt;
    v16 = struct40 {
        field_0: "\n"
        field_8: 2
        field_16: &v0
        field_24: 1
        field_32: 0
    };
    v18 = core::option::Option<T>::map_or_else(&v16);
    v0 = v18;
    v30 = v8;
    v2 = alloc::str::join_generic_copy(v7, v30, v1, v18.field_16);
    v16 = v2;
    *(&v17 as &u32) = v30 as u32;
    return v31;
}
