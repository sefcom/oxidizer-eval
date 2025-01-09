fn uu_cat::cat_files(a0: u32, a1: u32, a2: &struct5) -> u64 {
    let v0: i64;  // [sp-0x248]
    let v1: i64;  // [sp-0x240]
    let v2: i64;  // [sp-0x238]
    let v3: i64;  // [sp-0x230]
    let v4: i64;  // [sp-0x220], Other Possible Types: struct24
    let v5: i64;  // [sp-0x218]
    let v6: i64;  // [sp-0x210]
    let v7: i8;  // [sp-0x208]
    let v8: i64;  // [sp-0x200], Other Possible Types: struct16
    let v9: i64;  // [sp-0x1f8]
    let v10: i64;  // [sp-0x1f0]
    let v11: i64;  // [sp-0x1e8]
    let v12: i16;  // [sp-0x1e0]
    let v13: i8;  // [sp-0x1de]
    let v14: struct16;  // [bp-0x1d8]
    let v15: i128;  // [sp-0x1c8]
    let v16: i64;  // [sp-0x1b8]
    let v17: i8;  // [bp-0x1b0]
    let v18: i8;  // [bp-0x1a0]
    let v19: i64;  // [sp-0x198], Other Possible Types: Option<struct8>, struct28
    let v20: i64;  // [sp-0x190]
    let v21: i64;  // [sp-0x188]
    let v22: i64;  // [bp-0x180]
    let v23: i64;  // [sp-0x178]
    let v24: i8;  // [bp-0xf8]
    let v25: i8;  // [bp-0xe8]
    let v26: i8;  // [bp-0xe0]
    let v27: i64;  // [sp-0xc8]
    let v28: i8;  // [bp-0xc0]
    let v30: i64;  // rax
    let v31: i256;  // ymm0
    let v32: i64;  // r15
    let v33: i64;  // r12
    let v34: i128;  // xmm0
    let v35: i64;  // rdx
    let v37: i64;  // rbx

    v4 = std::io::stdio::stdout();
    v19 = uucore::features::fs::FileInformation::from_file();
    if !v19 {
        memcpy(&v28, &v19, 144);
        v27 = 1;
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
    v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14);
    if v30 {
        do {
            v32 = *((v30 + 8) as &i64);
            v33 = *((v30 + 16) as &i64);
            uu_cat::cat_path();
            if v17 != 9223372036854775814 {
                v16 = v18;
                v34 = v17;
                v31 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
                v15 = v34;
                v4 = 0;
                v5 = v32;
                v6 = v33;
                v7 = 0;
                v0 = &v4;
                v1 = <os_display::Quoted as core::fmt::Display>::fmt;
                v2 = &v15;
                v3 = <uu_cat::CatError as core::fmt::Display>::fmt;
                v19 = &g_5185e8;
                v20 = 2;
                v23 = 0;
                v21 = &v0;
                v22 = 2;
                core::option::Option<T>::map_or_else();
                v8 = alloc::vec::Vec<T,A>::push(&v26);
            }
            v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14);
        } while (v30);
        if *((&v12 as &char + 1) as &i8) {
            print!("\r");
        }
    }
    if !v10 {
        return v37;
    }
    v4 = uucore::util_name();
    v5 = v35;
    v0 = &v4;
    v1 = <&T as core::fmt::Display>::fmt;
    v19 = struct28 {
        field_0: "\n"
        field_16: &v0
        field_24: <UNKNOWN>
    };
    v23 = 0;
    v22 = 1;
    core::option::Option<T>::map_or_else();
    v0 = v24;
    v2 = v25;
    v4 = alloc::str::join_generic_copy(v9, v10, v1, v25);
    v19 = v4;
    alloc::boxed::Box<T>::new(&v19);
    return v37;
}
