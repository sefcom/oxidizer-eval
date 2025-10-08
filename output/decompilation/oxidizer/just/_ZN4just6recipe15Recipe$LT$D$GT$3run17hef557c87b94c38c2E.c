fn just::recipe::Recipe<D>::run(a0: u64, a1: i64, a2: i64, a3: u64, a4: u64, a5: u64, a6: u8) -> long long {
    let v0: void*;  // [bp-0xf8]
    let v1: u32;  // [bp-0xf7]
    let v2: struct24;  // [bp-0xf4], Other Possible Types: u32
    let v3: i32;  // [bp-0xf0], Other Possible Types: u64
    let v4: u32;  // [bp-0xec]
    let v5: u8;  // [bp-0xe8]
    let v6: u32;  // [bp-0xe7]
    let v7: core::fmt::Arguments;  // [bp-0xe4]
    let v8: struct16;  // [bp-0xe0]
    let v9: struct64;  // [bp-0xdc]
    let v10: struct18;  // [bp-0xc8], Other Possible Types: struct48
    let v11: core::fmt::rt::Argument;  // [bp-0xb8]
    let v12: struct64;  // [bp-0xb8]
    let v13: u64;  // [bp-0xb8]
    let v14: u64;  // [bp-0xa8]
    let v15: struct24;  // [bp-0xa8]
    let v16: u64;  // [bp-0xa8]
    let v17: void*;  // [bp-0x90], Other Possible Types: struct16
    let v18: struct16;  // [bp-0x88], Other Possible Types: u64
    let v19: struct24;  // [bp-0x80], Other Possible Types: u8
    let v20: struct18;  // [bp-0x70]
    let v21: struct17;  // [bp-0x40]
    let v22: struct40;  // [bp-0x38]
    let v23: i64;  // r14
    let v24: struct81;  // eax
    let v25: core::option::Option<&str>;  // eax
    let v26: core::result::Result<&str, core::str::error::Utf8Error>;  // cl
    let v27: struct17;  // rax
    let v28: struct40;  // rdx
    let v29: struct24;  // xmm0
    let v30: struct24;  // xmm0
    let v31: struct73;  // [bp-0xf8]

    v23 = *(a2 as &i64);
    v10 = struct18 {
        field_0: *((v23 + 388) as &i128)
        field_16: *((v23 + 404) as &i16)
    };
    v20 = just::color::Color::stderr(&v10);
    v24 = *((&v20.field_16 as &char + 1) as &i8);
    if !v24 {
        v31 = 1;
        v1 = 0;
        v2 = 0;
        v3 = 42949672966;
    } else if v24 == 1 {
        v31 = v20.field_0 as i8;
        v1 = 0;
        v2 = 0;
        v3 = (v31 ^ 1) as u32 * 4 + 6;
        v4 = 10;
    } else {
        v0 = 0;
        v3 = 42949672970;
    }
    v5 = v26;
    v6 = 0;
    v7 = 0;
    v8 = v25;
    v9 = 10;
    if *((v23 + 423) as &i8) >= 2 {
        eprintln!("{}===> Running recipe `{}`...{}", &v31, a1 + 144, &v5);
    }
    v12 = v11;
    v15 = v14;
    if *((v23 + 410) as &i8) {
        v27 = just::recipe::Recipe<D>::doc(a1);
        v12 = v11;
        v15 = v14;
        if v27 {
            v21 = v27;
            v22 = v28;
            eprintln!("{}#### {}{}", &v31, &v21, &v5);
            v12 = v13;
            v15 = v16;
        }
    }
    if !*((a1 + 254) as &i8) {
        v30 = *(a2 as &i128);
        v17 = 0;
        v10 = struct48 {
            field_0: v30
            field_16: *((a2 + 16) as &i128)
            field_32: 0
        };
        v18 = a3;
        v19 = a6;
        return just::recipe::Recipe<D>::run_linewise(a0, a1, a2, a3, a4, a5, &v10);
    }
    v29 = *(a2 as &i128);
    v17 = 0;
    v10 = struct48 {
        field_0: v29
        field_16: *((a2 + 16) as &i128)
        field_32: 0
    };
    v18 = a3;
    v19 = a6;
    return just::recipe::Recipe<D>::run_script(a0, a1, a2, a3, a4, a5, &v10);
}
