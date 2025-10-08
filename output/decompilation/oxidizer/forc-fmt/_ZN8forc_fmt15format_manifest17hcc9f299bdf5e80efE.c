fn forc_fmt::format_manifest(a1: i8, a2: i64) -> : struct1 {
    let a0: i64;  // rdi
    let v0: Option<struct40>;  // [bp-0x198], Other Possible Types: u128
    let v1: struct33;  // [bp-0x198]
    let v2: u64;  // [bp-0x190]
    let v3: i64;  // [bp-0x188], Other Possible Types: struct_3 *, u64
    let v4: u64;  // [bp-0x180]
    let v5: void*;  // [bp-0x178], Other Possible Types: u64
    let v6: i64;  // [bp-0x160]
    let v7: alloc::string::String;  // [bp-0x158], Other Possible Types: struct24, struct48
    let v8: u64;  // [bp-0x148]
    let v9: i64;  // [bp-0x120], Other Possible Types: struct_6 *
    let v10: i64;  // [bp-0x118], Other Possible Types: struct_12 *
    let v11: u64;  // [bp-0x110]
    let v12: Result<struct24, struct16>;  // [bp-0x108]
    let v13: u64;  // [bp-0xf8]
    let v14: i64;  // [bp-0xf0], Other Possible Types: u128
    let v15: u64;  // [bp-0xe8]
    let v16: struct24;  // [bp-0xe0]
    let v17: void*;  // [bp-0xd8], Other Possible Types: u64
    let v18: u64;  // [bp-0xd0]
    let v19: u128;  // [bp-0xc8]
    let v20: iNone;  // [bp-0xb8]
    let v21: u64;  // [bp-0xa8]
    let v22: struct64;  // [bp-0xa0], Other Possible Types: u128
    let v23: u128;  // [bp-0x88]
    let v24: void*;  // [bp-0x80]
    let v25: u64;  // [bp-0x78]
    let v26: u64;  // [bp-0x70]
    let v27: struct24;  // [bp-0x70]
    let v28: u128;  // [bp-0x68]
    let v29: i64;  // [bp-0x58]
    let v30: u64;  // [bp-0x50]
    let v31: alloc::string::String;  // [bp-0x48]
    let v35: u8;  // al
    let v37: u64;  // rax
    let v38: i64;  // rdx
    let v40: u8;  // r14b
    let v41: u64;  // rax
    let v43: u8;  // al

    v12 = std::fs::read_to_string(a2);
    if (((0 ^ v12 as i64) & (0 ^ -(v12 as i64))) >> 63) as char {
        v31 = format!("failed to format manifest: {}", a2);
        *((v6 + 8) as &u64) = anyhow::error::<impl anyhow::Error>::msg(&v31);
        *(v6 as &i8) = 1;
        return;
    }
    v25 = v13;
    v23 = v12 as i128;
    v1 = <taplo::formatter::Options as core::default::Default>::default();
    v16 = taplo::formatter::format(v24, v25, &v1);
    if (a1 & 1) {
        if !alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v17, v18, v24, v25) {
            v19 = a2[8] as i128;
            v7 = format!("Improperly formatted manifest file: {}", &v19);
            v0 = *(&v7.vec.buf.inner.cap as &i128);
            v3 = v8;
            forc_tracing::println_error(1, v8);
            forc_fmt::display_file_diff(v24, v25, v17, v18);
        } else if core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E) != 5 && core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E) <= 2 {
            v35 = tracing_core::callsite::DefaultCallsite::interest(&_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.field_0);
            if !v35 || !tracing::__macro_support::__is_enabled(_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.field_0, v35) {
                goto LABEL_7d4f93;
            }
            v7 = struct48 {
                field_0: *(&_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.field_0->field_30 as &i128)
                field_16: _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.field_0->field_40
                field_32: 0
                field_40: _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.field_0->field_38
            };
            v0 = <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v7);
            match v0 {
                None => {
                    core::option::expect_failed("FieldSet corrupted (this is a bug)"); /* do not return */
                },
                Some(_) => {
                    v21 = v5;
                    v20 = *((&v0 as &char + 16) as &i128);
                    v19 = v0 as i128;
                    v22 = a2[8] as i128 as u128;
                    v14 = &v22 as u8;
                    v15 = <std::path::Display as core::fmt::Display>::fmt;
                    v0 = "Manifest Forc.toml formatted correctly: ";
                    v2 = 1;
                    v5 = 0;
                    v3 = &v14;
                    v4 = 1;
                    v9 = &v19;
                    v10 = &v0;
                    v11 = &g_c0a3a8;
                    v7 = struct24 {
                        field_0: &v9
                        field_8: 1
                        field_16: _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.field_0 + 48
                    };
                    forc_fmt::format_manifest::{{closure}}(&v7);
                },
            }
        } else {
LABEL_7d4f93:
            if !core::sync::atomic::atomic_load(&_ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE) && core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E) >= 3 {
                v26 = 3;
                v28 = _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.field_0->field_20;
                v37 = log::logger();
                if *((v38 + 24) as &i64)(v37, &v26) as i8 {
                    v7 = struct48 {
                        field_0: *(&_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.field_0->field_30 as &i128)
                        field_16: _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.field_0->field_40
                        field_32: 0
                        field_40: _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.field_0->field_38
                    };
                    v0 = <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v7);
                    match v0 {
                        None => {
                            core::option::expect_failed("FieldSet corrupted (this is a bug)"); /* do not return */
                        },
                        Some(_) => {
                            v21 = v5;
                            v20 = *((&v0 as &char + 16) as &i128);
                            v19 = v0 as i128;
                            v14 = a2[8] as i128 as u128;
                            v29 = &v14 as u8;
                            v30 = <std::path::Display as core::fmt::Display>::fmt;
                            v0 = "Manifest Forc.toml formatted correctly: ";
                            v2 = 1;
                            v5 = 0;
                            v3 = &v29;
                            v4 = 1;
                            v9 = &v19;
                            v10 = &v0;
                            v11 = &g_c0a3a8;
                            v22 = struct64 {
                                field_0: &v9
                                field_8: 1
                                field_16: _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.field_0 + 48
                                field_24: <UNKNOWN>
                                field_40: <UNKNOWN>
                                field_56: <UNKNOWN>
                            };
                            v7 = v27;
                            tracing::__macro_support::__tracing_log(_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E.field_0, v37, v38, &v7, &v22);
                        },
                    }
                }
            }
        }
LABEL_7d5141:
        *((v6 + 1) as &u8) = v40;
    } else {
        v41 = forc_fmt::write_file_formatted(a2[8] as i64, a2[16] as i64, v17, v18);
        if !v41 {
            goto LABEL_7d5141;
        }
        *((v6 + 8) as &u64) = v41;
    }
    *(a0 as &u8) = v43;
    return;
}
