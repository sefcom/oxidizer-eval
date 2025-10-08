fn starship::configure::handle_toggle_configuration(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct25 {
    let a0: u64;  // rdi
    let v0: std::io::stdio::Stdin;  // [bp-0x270]
    let v1: u64;  // [bp-0x260]
    let v2: core::fmt::rt::Argument;  // [bp-0x259]
    let v3: u64;  // [bp-0x250]
    let v4: u64;  // [bp-0x248]
    let v5: struct40;  // [bp-0x240], Other Possible Types: struct48
    let v6: core::fmt::Arguments;  // [bp-0x238], Other Possible Types: struct241, u64
    let v7: Result<struct80, struct32>;  // [bp-0x230]
    let v8: core::fmt::Arguments;  // [bp-0x228], Other Possible Types: struct24, u64
    let v9: struct88;  // [bp-0x220]
    let v10: Result<struct80, struct32>;  // [bp-0x190], Other Possible Types: struct24, struct80, struct_0 *, struct_2 *
    let v11: struct13128;  // [bp-0x188], Other Possible Types: struct80, u64
    let v12: core::fmt::Arguments;  // [bp-0x170]
    let v13: struct24;  // [bp-0x158]
    let v14: struct80;  // [bp-0x140]
    let v15: u64;  // [bp-0xe0]
    let v16: i8;  // [bp-0xd8], Other Possible Types: u8
    let v17: iNone;  // [bp-0xd7]
    let v18: i8;  // [bp-0xd0]
    let v20: struct24;  // rax
    let v22: struct17;  // rax
    let v23: struct17;  // rax
    let v25: struct17;  // rcx
    let v26: Result<struct24, struct16>;  // r12
    let v27: struct24;  // 4096
    let v28: core::fmt::Arguments;  // 4096
    let v30: struct40;  // rax
    let v32: u8;  // cl
    let v33: core::result::Result<u8, core::num::error::ParseIntError>;  // rdx
    let v35: i64;  // r15
    let v36: iNone;  // xmm0
    let v37: iNone;  // xmm1

    v3 = a2;
    v4 = a3;
    v0 = a4;
    if !(a5 & a3) {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "Empty table keys are not supported");
        return;
    }
    v20 = toml_edit::table::Table::get_mut(toml_edit::document::DocumentMut::as_table_mut(a1), a2, a3, a3);
    if !v20 {
        v10 = &v3;
        v11 = <&T as core::fmt::Display>::fmt;
        v5 = "Given module '";
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 1;
        core::option::Option<T>::map_or_else(&v15, 0, a2, &v5);
        v20 = *(&v16 as &i64);
        if v15 != 0x8000000000000000 {
            return struct24 {
                field_0: v15
                field_8: v20
                field_16: *(&v18 as &i64)
            };
        }
    }
    v22 = *(v20 as &i64) - 8;
    if v22 < 4 {
        v23 = v22;
    } else {
        v23 = 1;
    }
    v25 = v23;
    if v25 == 2 {
        v20 += 8;
        v26 = &g_11f2aa0;
        v27 = a4;
        v28 = a5;
    } else if v25 == 1 && v22 < -6 {
        v26 = &g_11f29e0;
        v27 = a4;
        v28 = a5;
    } else {
        v10 = &v0;
        v11 = <&T as core::fmt::Display>::fmt;
        v5 = "Given config entry '";
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 1;
        core::option::Option<T>::map_or_else(&v15, 0, a2, &v5);
        v20 = *(&v16 as &i64);
        v26 = *(&v18 as &i64);
        if v15 != 0x8000000000000000 {
            return struct24 {
                field_0: v15
                field_8: v20
                field_16: v26
            };
        }
        v27 = v0;
        v28 = a5;
    }
    v30 = *((v26 + 80) as &i64)(v20, v27, v28) as i64;
    if !v30 {
        v10 = &v0;
        v11 = <&T as core::fmt::Display>::fmt;
        v5 = "Given config key '";
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 1;
        core::option::Option<T>::map_or_else(&v15, 0, a2, &v5);
        v30 = *(&v16 as &i64);
        if v15 != 0x8000000000000000 {
            return struct24 {
                field_0: v15
                field_8: v30
                field_16: *(&v18 as &i64)
            };
        }
    }
    if *(v30 as &i32) != 5 {
        v10 = &v0;
        v11 = <&T as core::fmt::Display>::fmt;
        v5 = "Given config key '";
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 1;
        core::option::Option<T>::map_or_else(&v15, 0, a2, &v5);
        v32 = v16;
        v1 = v17 as i64;
        v2 = *(&v18 as &i64);
        if v15 != 0x8000000000000000 {
            return struct32 {
                field_0: v15
                field_8: v16
                field_9: v2
                field_16: <UNKNOWN>
            };
        }
    }
    v10 = 5;
    v11 = 9223372036854775811;
    v12 = 9223372036854775811;
    v13 = 9223372036854775811;
    v14 = ~(v32) & 1;
    core::option::unwrap(v33);
    v5 = <toml_edit::repr::Decor as core::clone::Clone>::clone(toml_edit::value::Value::decor(v30), a2);
    if v10 - 8 < 4 {
        core::option::unwrap_failed(); /* do not return */
    }
    v35 = toml_edit::value::Value::decor(&v10);
    v36 = v5.field_0;
    v37 = *(&v5.field_16 as &i128);
    *((v35 + 32) as &u128) = v9.field_0;
    *((v35 + 16) as void*) = v37;
    *(v35 as void*) = v36;
    memcpy(&v5, &v10, 176);
    *((v26 + 120) as &i64)(&v15, v20, v0, a5, &v5);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
