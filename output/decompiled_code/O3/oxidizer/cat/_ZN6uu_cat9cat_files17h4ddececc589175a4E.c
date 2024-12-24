fn uu_cat::cat_files(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [sp-0x248]
    let v1: i64;  // [sp-0x240]
    let v2: i64;  // [sp-0x238]
    let v3: i64;  // [sp-0x230]
    let v4: i64;  // [sp-0x220], Other Possible Types: struct24
    let v5: i64;  // [sp-0x218]
    let v6: i64;  // [sp-0x210]
    let v7: i8;  // [sp-0x208]
    let v8: struct16;  // [sp-0x200], Other Possible Types: i64
    let v9: i64;  // [sp-0x1f8]
    let v10: i64;  // [sp-0x1f0]
    let v11: i64;  // [sp-0x1e8]
    let v12: i16;  // [sp-0x1e0]
    let v13: i8;  // [sp-0x1de]
    let v14: struct16;  // [bp-0x1d8]
    let v15: i128;  // [sp-0x1c8]
    let v16: i64;  // [sp-0x1b8]
    let v17: Option<Result<struct25, struct16>>;  // [sp-0x1b0], Other Possible Types: i200
    let v18: i64;  // [sp-0x198], Other Possible Types: Option<struct8>, struct40
    let v19: i8;  // [bp-0x190]
    let v20: i64;  // [sp-0x188]
    let v21: i64;  // [bp-0x180]
    let v22: i64;  // [sp-0x178]
    let v23: i192;  // [sp-0xf8], Other Possible Types: struct24
    let v24: struct24;  // [sp-0xe0], Other Possible Types: i192
    let v25: i64;  // [sp-0xc8]
    let v26: i8;  // [bp-0xc0]
    let v28: i64;  // rdx
    let v29: i64;  // rax
    let v30: i256;  // ymm0
    let v31: i64;  // r15
    let v32: i64;  // r12
    let v35: i64;  // rax
    let v36: i128;  // xmm0

    v4 = std::io::stdio::stdout();
    v18 = uucore::features::fs::FileInformation::from_file(&v4, v28);
    if !v18 {
        memcpy(&v26, &v19, 144);
        v25 = 1;
    } else {
        v25 = 0;
    }
    v11 = 1;
    v12 = 1;
    v13 = 0;
    v8 = 0;
    v9 = 8;
    v10 = 0;
    v14 = struct16 {
        field_0: a0
        field_8: a0 + a1 * 24
    };
    v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14);
    if v29 {
        do {
            v31 = *((v29 + 8) as &i64);
            v32 = *((v29 + 16) as &i64);
            v17 = uu_cat::cat_path(v31, v32, a2, &v11, v35);
            if v17 != 9223372036854775814 {
                v16 = *((&v17 as &char + 16) as &i64);
                v36 = v17;
                v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36;
                v15 = v36;
                v4 = 0;
                v5 = v31;
                v6 = v32;
                v7 = 0;
                v0 = &v4;
                v1 = <os_display::Quoted as core::fmt::Display>::fmt;
                v2 = &v15;
                v3 = <uu_cat::CatError as core::fmt::Display>::fmt;
                v18 = &g_5190d8;
                v19 = 2;
                v22 = 0;
                v20 = &v0;
                v21 = 2;
                v24 = core::option::Option<T>::map_or_else(&v18);
                v8 = alloc::vec::Vec<T,A>::push(&v24, v28);
            }
            v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14);
        } while (v29);
        if *((&v12 as &char + 1) as &i8) {
            v18 = "\r";
            v19 = 1;
            v20 = 8;
            v21 = 0;
            std::io::stdio::_print(&v18);
        }
    }
    if !v10 {
        return 0;
    }
    v4 = uucore::util_name();
    v5 = v28;
    v0 = &v4;
    v1 = <&T as core::fmt::Display>::fmt;
    v18 = struct40 {
        field_0: "\n"
        field_8: 2
        field_16: &v0
        field_24: 1
        field_32: 0
    };
    v23 = core::option::Option<T>::map_or_else(&v18);
    v0 = v23;
    v4 = alloc::str::join_generic_copy(v8.field_8, v10, v1, *((&v23 as &char + 16) as &i64));
    v18 = v4;
    return alloc::boxed::Box<T>::new(&v18);
}
