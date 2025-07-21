fn uu_cat::cat_files(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: &u64;  // [bp-0x248], Other Possible Types: u128
    let v1: &u64;  // [bp-0x248]
    let v2: &u64;  // [bp-0x248]
    let v3: u64;  // [bp-0x238]
    let v4: void*;  // [bp-0x220], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>, std::io::stdio::Stdout, u64
    let v5: u64;  // [bp-0x218]
    let v6: u64;  // [bp-0x210]
    let v7: u8;  // [bp-0x208]
    let v8: void*;  // [bp-0x200], Other Possible Types: struct16
    let v9: u64;  // [bp-0x1f8]
    let v10: void*;  // [bp-0x1f0]
    let v11: u64;  // [bp-0x1e8]
    let v12: u16;  // [bp-0x1e0]
    let v13: u8;  // [bp-0x1df]
    let v14: u8;  // [bp-0x1de]
    let v15: u64;  // [bp-0x1d8]
    let v16: u64;  // [bp-0x1d0]
    let v17: u128;  // [bp-0x1c8]
    let v18: u64;  // [bp-0x1b8]
    let v19: u128;  // [bp-0x1b0]
    let v20: u64;  // [bp-0x1a0]
    let v21: struct16;  // [bp-0x198], Other Possible Types: struct28
    let v22: u64;  // [bp-0x180]
    let v23: u64;  // [bp-0x180]
    let v24: u128;  // [bp-0xf8]
    let v25: u64;  // [bp-0xe8]
    let v26: u192;  // [bp-0xe0]
    let v27: u64;  // [bp-0xc8]
    let v28: u8;  // [bp-0xc0]
    let v30: i64;  // rax
    let v31: void*;  // rbx
    let v32: u64;  // rdx

    v4 = std::io::stdio::stdout();
    v21 = uucore::features::fs::FileInformation::from_file();
    if !v21.field_0 {
        memcpy(&v28, &v21 as u8, 144);
    }
    v11 = 1;
    v12 = 1;
    v14 = 0;
    v8 = 0;
    v9 = 8;
    v10 = 0;
    v15 = a0;
    v16 = a0 + a1 * 24;
    v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v15);
    if v30 {
        do {
            uu_cat::cat_path(*((v30 + 8) as &i64), *((v30 + 16) as &i64), a2, &v11, (v27 ? &v28 : 0), v0);
            v1 = v0;
            if v19 as i64 != 9223372036854775814 {
                v18 = v20;
                v17 = v19;
                v4 = 0;
                v5 = *((v30 + 8) as &i64);
                v6 = *((v30 + 16) as &i64);
                v7 = 0;
                format!("{}: {}", &v4, &v17);
                v8 = alloc::vec::Vec<T,A>::push(&v26);
                v1 = v2;
                v22 = v23;
            }
            v0 = v1;
            v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v15);
        } while (v30);
        if v13 {
            print!("\r");
        }
    }
    if v10 {
        v4 = uucore::util_name();
        v5 = v32;
        format!("\n{}: ", &v4);
        v0 = v24;
        v3 = v25;
        v4 = alloc::str::join_generic_copy(0x8, v10, <&T as core::fmt::Display>::fmt, v25);
        v21 = struct28 {
            field_0: *(&v4.buf.cap as &i128)
            field_16: v6
            field_24: v10 as u32
        };
        v31 = alloc::boxed::Box<T>::new(&v21);
    }
    return v31;
}
