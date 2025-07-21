fn uu_ls::parse_time_style(a1: i64) -> : struct57 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0xf0]
    let v1: struct24;  // [bp-0xf0]
    let v2: struct24;  // [bp-0xf0]
    let v3: Result<struct40, struct16>;  // [bp-0xf0]
    let v4: struct24;  // [bp-0xf0]
    let v5: struct24;  // [bp-0xf0]
    let v6: struct24;  // [bp-0xf0]
    let v7: struct24;  // [bp-0xf0]
    let v8: struct24;  // [bp-0xf0]
    let v9: u128;  // [bp-0xe9]
    let v10: u64;  // [bp-0xd9]
    let v11: alloc::string::String;  // [bp-0xc8], Other Possible Types: struct24, u128
    let v13: u64;  // [bp-0xb8]
    let v15: struct24;  // [bp-0xa8], Other Possible Types: u128
    let v16: u64;  // [bp-0x98]
    let v17: core::slice::iter::Iter<u8>;  // [bp-0x88], Other Possible Types: struct16, u128
    let v18: u64;  // [bp-0x78]
    let v19: u128;  // [bp-0x68]
    let v20: u64;  // [bp-0x58]
    let v21: u128;  // [bp-0x48]
    let v22: u64;  // [bp-0x38]
    let v24: u64;  // rdx
    let v26: i64;  // r15
    let v27: i64;  // r15
    let v28: u64;  // rax
    let v30: u64;  // r12
    let v31: u64;  // r14
    let v32: u64;  // rax
    let v34: u32;  // eax
    let v37: core::option::Option<u32>;  // rax:rax

    v26 = alloc::alloc::Global::alloc_impl(0x78, a1, v24) as u64;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("full-iso");
    v20 = v0.field_16;
    v19 = *(&v0.field_0 as &i128);
    v7 = <T as alloc::slice::hack::ConvertVec>::to_vec("long-iso");
    v22 = v7.field_16;
    v21 = *(&v7.field_0 as &i128);
    v8 = <T as alloc::slice::hack::ConvertVec>::to_vec("iso");
    v18 = v8.field_16;
    v17 = *(&v8.field_0 as &i128);
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("locale");
    v16 = v1.field_16;
    v15 = *(&v1.field_0 as &i128);
    v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("+FORMAT (e.g., +%H:%M) for a 'date'-style format");
    v13 = v2.field_16;
    v11 = *(&v2.field_0 as &i128);
    *((v26 + 16) as &u64) = v20;
    *(v26 as &u128) = v19;
    *((v26 + 40) as &u64) = v22;
    *((v26 + 24) as &u128) = v21;
    *((v26 + 64) as &u64) = v18;
    *((v26 + 48) as &u128) = v17;
    *((v26 + 72) as &u128) = v15;
    *((v26 + 88) as &u64) = v16;
    *((v26 + 96) as &u128) = v11;
    *((v26 + 112) as &u64) = v13;
    v15 = alloc::slice::hack::into_vec(v26, 5);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "time-style");
    v27 = clap_builder::parser::error::MatchesError::unwrap("time-style", &v3);
    if !v27 {
        return struct16 {
            field_0: 7
            padding_1: <UNKNOWN>
            field_8: v32
        };
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "full-time") as i8 {
        v4 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "full-time");
        if !v4.field_0 {
            goto LABEL_51ebdc;
        }
        v11 = v5;
        v28 = core::iter::traits::iterator::Iterator::fold(&v11);
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "time-style");
        if !v5.field_0 {
            goto LABEL_51ebdc;
        }
        v11 = v6;
        if !(v28) || core::iter::traits::iterator::Iterator::fold(&v11) && v24 <= v24 {
            goto LABEL_51ea11;
        }
    } else {
LABEL_51ea11:
        v30 = *((v27 + 8) as &i64);
        v31 = *((v27 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v30, v31, "full-iso") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v30, v31, "long-iso") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v30, v31, "iso") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v30, v31, "locale") as i8 {
            v17 = struct16 {
                field_0: v30
                field_8: v30 + v31
            };
            v17 = core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: v30
                }
                end_or_len: v30 + v31
                _marker: core::marker::PhantomData<&u8> { }
            };
            v37 = core::str::validations::next_code_point(&v17) as u128;
            match (v34) {
                43 => {
                    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v30, v31) as u64, v24);
                    *((a0 + 24) as &u64) = v6.field_16;
                    *((a0 + 8) as &i128) = *(&v6.field_0 as &i128);
                }
                1114112 => {
LABEL_51ebdc:
                    core::option::unwrap_failed(); /* do not return */
                }
                _ => {
                    v11 = <alloc::string::String as core::clone::Clone>::clone(v27);
                    v9 = *(&v11.vec.buf.cap as &i128);
                    v10 = v13;
                    return struct64 {
                        field_0: 6
                        field_1: <UNKNOWN>
                        field_16: v10
                        field_24: *((&v3 as &char + 72) as &i128)
                        field_32: <UNKNOWN>
                        field_48: <UNKNOWN>
                    };
                }
            }
        }
    }
    return struct16 {
        field_0: 7
        padding_1: <UNKNOWN>
        field_8: v32
    };
}
