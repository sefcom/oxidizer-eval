fn uu_pr::get_formatted_line_number(a1: i64, a2: i64, a3: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x160]
    let v1: alloc::string::String;  // [bp-0x158], Other Possible Types: struct24, u64
    let v2: Result<struct32, struct32>;  // [bp-0x150], Other Possible Types: u64
    let v3: i64;  // [bp-0x148], Other Possible Types: struct32
    let v4: (usize, std::backtrace_rs::symbolize::gimli::Mapping);  // [bp-0x140], Other Possible Types: u64
    let v5: i64;  // [bp-0x138], Other Possible Types: struct32
    let v6: Result<struct32, struct32>;  // [bp-0x130], Other Possible Types: u64
    let v7: i64;  // [bp-0x128]
    let v8: u64;  // [bp-0x120]
    let v9: i64;  // [bp-0x118]
    let v10: u64;  // [bp-0x110]
    let v11: u64;  // [bp-0x108]
    let v12: void*;  // [bp-0x100]
    let v13: u64;  // [bp-0xf8]
    let v14: u64;  // [bp-0xf0]
    let v15: u64;  // [bp-0xe0]
    let v16: u64;  // [bp-0xd8]
    let v17: void*;  // [bp-0xd0]
    let v18: u64;  // [bp-0xc8]
    let v19: u8;  // [bp-0xc0]
    let v20: u64;  // [bp-0xb8]
    let v21: u64;  // [bp-0xa8]
    let v22: u64;  // [bp-0x98]
    let v23: u64;  // [bp-0x90]
    let v24: struct40;  // [bp-0x88], Other Possible Types: u8
    let v25: struct24;  // [bp-0x80]
    let v26: u64;  // [bp-0x78]
    let v27: u64;  // [bp-0x70]
    let v28: u64;  // [bp-0x68]
    let v29: u64;  // [bp-0x60]
    let v30: u8;  // [bp-0x58]
    let v31: u8;  // [bp-0x40]
    let v33: i64;  // rdi
    let v34: u64;  // r13
    let v35: u64;  // r14
    let v36: u64;  // r14
    let v37: i64;  // rbx
    let v38: core::option::Option<&str>;  // rax
    let v39: u64;  // rdx
    let v40: i64;  // rdi

    v13 = a1;
    if *((a0 + 216) as &i64) != 0x8000000000000000 {
        if *((a0 + 16) as &i64) {
            if a1 && !a2 {
                goto LABEL_5c85ec;
            }
        } else {
            if a1 {
LABEL_5c85ec:
                v25 = <T as alloc::string::ToString>::to_string(&v13);
                v34 = *((a0 + 240) as &i64);
                v0 = a0 + 216;
                v35 = v27;
                v36 = v35 - v34;
                if v35 < v34 {
                    v7 = &v25;
                    v8 = <alloc::string::String as core::fmt::Display>::fmt;
                    v9 = &v0;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v11 = v34;
                    v12 = 0;
                    v14 = 2;
                    v15 = 1;
                    v16 = 2;
                    v17 = 0;
                    v18 = 32;
                    v19 = 1;
                    v20 = 2;
                    v21 = 2;
                    v22 = 1;
                    v23 = 32;
                    v24 = 3;
                    v1 = &g_46bf10.vec.buf.cap.__0;
                    v2 = 2;
                    v5 = &v14;
                    v6 = 2;
                    v3 = &v7;
                    v4 = 3;
                    v37 = &v31;
                    v1 = core::option::Option<T>::map_or_else(a1);
                } else {
                    v38 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v36, v26, v35) as u64;
                    v28 = v38;
                    v29 = v39;
                    v7 = &v28;
                    v8 = <&T as core::fmt::Display>::fmt;
                    v9 = &v0;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v11 = v34;
                    v12 = 0;
                    v14 = 2;
                    v15 = 1;
                    v16 = 2;
                    v17 = 0;
                    v18 = 32;
                    v19 = 1;
                    v20 = 2;
                    v21 = 2;
                    v22 = 1;
                    v23 = 32;
                    v24 = 3;
                    v1 = &g_46bf10.vec.buf.cap.__0;
                    v2 = 2;
                    v5 = &v14;
                    v6 = 2;
                    v3 = &v7;
                    v4 = 3;
                    v37 = &v30;
                    v1 = core::option::Option<T>::map_or_else(a1);
                }
                *((v40 + 16) as &i64) = *((v37 + 16) as &i64);
                *(v40 as &i128) = *(v37 as &i128);
                return;
            }
        }
    }
    *(v33 as &i64) = 0;
    *((v33 + 8) as &i64) = 1;
    *((v33 + 16) as &i64) = 0;
    return;
}
