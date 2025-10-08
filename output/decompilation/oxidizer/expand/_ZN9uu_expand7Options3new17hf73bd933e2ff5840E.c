fn uu_expand::Options::new(a1: &struct56) -> Result<struct75, struct57> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x155]
    let v1: i32;  // [bp-0x154]
    let v2: u32;  // [bp-0x150]
    let v3: u32;  // [bp-0x14d]
    let v4: u64;  // [bp-0x148]
    let v5: u64;  // [bp-0x140]
    let v6: struct24;  // [bp-0x138], Other Possible Types: struct56, u64
    let v7: struct24;  // [bp-0x138]
    let v8: struct56;  // [bp-0x138]
    let v9: u64;  // [bp-0x138]
    let v10: struct24;  // [bp-0x138]
    let v11: struct41;  // [bp-0x138]
    let v12: i64;  // [bp-0x130]
    let v13: u32;  // [bp-0x12c]
    let v14: u64;  // [bp-0x128]
    let v15: u64;  // [bp-0x128]
    let v16: i64;  // [bp-0x120]
    let v17: u64;  // [bp-0xf0]
    let v18: iNone;  // [bp-0xe8], Other Possible Types: struct24
    let v19: u64;  // [bp-0xe0]
    let v20: u64;  // [bp-0xd8]
    let v21: u8;  // [bp-0xc8]
    let v22: u64;  // [bp-0xc0]
    let v23: u32;  // [bp-0xb8]
    let v24: struct64;  // [bp-0xb0]
    let v25: struct64;  // [bp-0x70]
    let v27: i64;  // r14
    let v28: i64;  // rax
    let v29: u8;  // al
    let v30: u64;  // rdx
    let v32: i64;  // r12
    let v33: iNone;  // xmm0

    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "tabs");
    v24 = clap_builder::parser::error::MatchesError::unwrap("tabs", &v6);
    if v24.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v21, &v24);
        v18 = alloc::str::join_generic_copy(v22, v23);
        v11 = uu_expand::tabstops_parse(v19, v20);
        if v11.field_0 != 9223372036854775814 {
            v3 = v13;
            v2 = *(&(&v11.field_8)[1] as &i32);
            return struct64 {
                field_0: 0x8000000000000000
                field_8: v11.field_0
                field_16: v1 as u8
                field_17: v3
                field_20: v11.field_9
                field_24: <UNKNOWN>
                field_40: <UNKNOWN>
            };
        }
        v1 = v11.field_8;
        v4 = v14;
        v27 = v16;
        v5 = v11.field_24;
    } else {
        v28 = alloc::alloc::Global::alloc_impl(8, 8);
        v27 = v28;
        *(v28 as &i64) = 8;
        v4 = 1;
        v1 = 0;
        v5 = 1;
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "initial");
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-utf8");
    v6 = struct24 {
        field_0: v27
        field_8: v27 + v5 * 8
        field_16: 0
    };
    if !(core::iter::traits::iterator::Iterator::reduce(&v6) & 1) {
        core::option::unwrap_failed(); /* do not return */
    }
    v7 = alloc::slice::<impl [T]>::repeat(v30);
    v17 = *((&v7.field_0 as &char + 8) as &i64);
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "FILES");
    v25 = clap_builder::parser::error::MatchesError::unwrap("FILES", &v8);
    if !v25.field_0 as i64 {
        v32 = alloc::alloc::Global::alloc_impl(8, 24);
        v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
        v20 = v14;
        v33 = v10.field_0;
        v18 = v33;
        *((v32 + 16) as &u64) = v14;
        *(v32 as void*) = v33;
        v6 = 1;
        v12 = v32;
        v15 = 1;
        return Ok(struct80 {
            field_0: 1
            field_8: v12
            field_16: 1
            field_24: v4
            field_32: v27
            field_40: v5
            field_48: v9
            field_56: v17
            field_64: v14
            field_72: v0
            field_73: v29 ^ 1
            field_74: v1 as u8
        });
    }
    core::iter::traits::iterator::Iterator::collect(&v8, &v25);
    return Ok(struct80 {
        field_0: v9
        field_8: v12
        field_16: v14
        field_24: v4
        field_32: v27
        field_40: v5
        field_48: v9
        field_56: v17
        field_64: v14
        field_72: v0
        field_73: v29 ^ 1
        field_74: v1 as u8
    });
}
