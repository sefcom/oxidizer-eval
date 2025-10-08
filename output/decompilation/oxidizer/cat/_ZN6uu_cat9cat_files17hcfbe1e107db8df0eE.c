fn uu_cat::cat_files(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct28;  // [bp-0x248]
    let v1: u64;  // [bp-0x230]
    let v2: u64;  // [bp-0x230]
    let v3: void*;  // [bp-0x210], Other Possible Types: struct16
    let v4: u64;  // [bp-0x208]
    let v5: void*;  // [bp-0x200]
    let v6: void*;  // [bp-0x1f8], Other Possible Types: struct24
    let v7: u64;  // [bp-0x1f0]
    let v8: u64;  // [bp-0x1e8]
    let v9: u8;  // [bp-0x1e0]
    let v10: struct8;  // [bp-0x1d8]
    let v11: u64;  // [bp-0x1c8]
    let v12: u64;  // [bp-0x1b0]
    let v13: u64;  // [bp-0x1a8]
    let v14: struct8;  // [bp-0x190]
    let v15: u64;  // [bp-0x180]
    let v16: Option<struct8>;  // [bp-0x178], Other Possible Types: struct56
    let v17: u16;  // [bp-0x140]
    let v18: u8;  // [bp-0x13f]
    let v19: u8;  // [bp-0x13e]
    let v20: iNone;  // [bp-0xe0]
    let v21: u64;  // [bp-0xc8]
    let v22: u8;  // [bp-0xc0]
    let v24: void*;  // rbx
    let v25: u64;  // r15
    let v26: u64;  // r13
    let v27: u64;  // rdx
    let v28: void*;  // r15

    std::io::stdio::stdout();
    v16 = uucore::features::fs::FileInformation::from_file();
    if let None = v16 {
        memcpy(&v22, &v16 as u8, 144);
    }
    v16 = uu_cat::LineNumber::new();
    v17 = 1;
    v19 = 0;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    if !a1 {
        return v28;
    }
    do {
        v25 = *((8 + a0 + v24 as &u8) as &i64);
        v26 = *((16 + a0 + v24 as &u8) as &i64);
        uu_cat::cat_path(&v14, v25, v26, a2, &v16, (v21 as i8 ? &v22 : 0));
        v1 = v1;
        if *(&v14.field_0 as &i64) != 9223372036854775814 {
            v11 = v15;
            v10 = v14;
            v6 = 0;
            v7 = v25;
            v8 = v26;
            v9 = 0;
            format!("{}: {}", &v6, &v29);
            v3 = alloc::vec::Vec<T,A>::push(&v20);
            v1 = v2;
        }
        v24 += 24;
    } while (a1 * 24 != v24);
    if (v18 & 1) {
        print!("\r");
    }
    if v5 {
        v12 = uucore::util_name();
        v13 = v27;
        format!("\n{}: ", &v12);
        v6 = alloc::str::join_generic_copy(0x8, v5, v7, v8);
        v0 = struct28 {
            field_0: v6.field_0
            field_16: v8
            field_24: v5 as u32
        };
        v28 = alloc::boxed::Box<T>::new(&v0) as u64;
    }
    return v28;
}
