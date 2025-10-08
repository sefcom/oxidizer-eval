fn ruff_python_formatter::comments::format::normalize_comment(a0: void*, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: struct20;  // [bp-0x98], Other Possible Types: u64
    let v1: u32;  // [bp-0x98]
    let v2: u32;  // [bp-0x94]
    let v3: u64;  // [bp-0x90]
    let v4: core::result::Result<(), std::io::error::Error>;  // [bp-0x88], Other Possible Types: u64
    let v5: u64;  // [bp-0x80]
    let v6: void*;  // [bp-0x78]
    let v7: struct16;  // [bp-0x68], Other Possible Types: u64
    let v8: u64;  // [bp-0x60]
    let v9: i64;  // [bp-0x58]
    let v10: u64;  // [bp-0x50]
    let v11: struct16;  // [bp-0x48]
    let v12: struct16;  // [bp-0x38]
    let v14: u64;  // rdx
    let v16: u64;  // r13
    let v17: u64;  // r15
    let v18: u64;  // r14
    let v20: u64;  // rax
    let v21: i64;  // rax
    let v22: i64;  // rax
    let v23: core::option::Option<&str>;  // rax
    let v24: u64;  // rdx
    let v25: u64;  // rax
    let v26: u64;  // r13
    let v27: u64;  // r12
    let v28: u64;  // r12
    let v29: u64;  // r13
    let v30: u64;  // rax
    let v31: u64;  // r12
    let v32: u64;  // r13
    let v33: u64;  // rax
    let v34: &mut [u8];  // rax:rdx
    let v35: &mut [u8];  // rax:rdx

    v16 = v14;
    v0 = ruff_python_formatter::comments::format::strip_comment_prefix(core::str::<impl str>::trim_end_matches(ruff_formatter::source_code::SourceCodeSlice::text(a1, a2, a3), v14), a2);
    if v0.field_0 != 4 {
        v31 = v3;
        v32 = v4;
        *(&a0[8] as &u32) = v0.field_0;
        *(&a0[12] as &u32) = v2;
        v33 = 1;
    }
    v17 = v3;
    v18 = v4;
    v11 = struct16 {
        field_0: v17
        field_8: v18
    };
    if !v18 {
        v26 = 1;
        v27 = &g_48a7ae;
        return struct32 {
            field_0: v30
            field_8: 0x8000000000000000
            field_16: v28
            field_24: v29
        };
    }
    v0 = struct20 {
        field_0: 2772985689069162972190926176288
        field_16: 39
    };
    if core::str::pattern::Pattern::is_prefix_of(&v0, v17, v18) {
        *(&a0[8] as &i64) = 0x8000000000000000;
    }
    v1 = 0;
    v35 = core::char::methods::encode_utf8_raw(160, &v1, a2);
    if core::slice::<impl [T]>::starts_with(v17, v18, v35.data_ptr, v35.length) {
        v20 = core::str::<impl str>::trim_start_matches(v17, v18);
        v12 = struct16 {
            field_0: v20
            field_8: v14
        };
        if !core::slice::<impl [T]>::starts_with(core::str::<impl str>::trim_start_matches(v12.field_0, v14), v14, "type:") {
            v1 = 0;
            v34 = core::char::methods::encode_utf8_raw(32, &v1, a2);
            if core::slice::<impl [T]>::starts_with(v20, v14, v34.data_ptr, v34.length) {
                goto LABEL_700283;
            }
            v23 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(2, v17, v18) as u64;
LABEL_700211:
            v7 = v23;
            v8 = v24;
            v9 = &v7;
            v10 = <&T as core::fmt::Display>::fmt;
            *(&v0 as &&str) = "# ";
            v3 = 1;
            v6 = 0;
            v22 = &v9;
        } else {
LABEL_700283:
            v7 = struct16 {
                field_0: v21
                field_8: <&T as core::fmt::Display>::fmt
            };
            *(&v0 as &&str) = "# ";
            v3 = 1;
            v6 = 0;
            v22 = &v7;
        }
    } else {
        v23 = core::str::<impl str>::trim_start_matches(v17, v18);
        goto LABEL_700211;
    }
    v4 = v22;
    v5 = 1;
    v25 = core::option::Option<T>::map_or_else(a0 + 8, &v1);
    return struct8 {
        field_0: 0
    };
}
