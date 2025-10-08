fn uu_ls::parse_time_style(a0: i64, a1: u64) -> int {
    let v0: struct24;  // [bp-0xf8]
    let v1: Result<struct40, struct16>;  // [bp-0xf8]
    let v2: struct24;  // [bp-0xf8]
    let v3: u64;  // [bp-0xe8]
    let v4: u128;  // [bp-0xe0]
    let v5: u64;  // [bp-0xd8]
    let v7: u128;  // [bp-0xc8]
    let v8: core::fmt::rt::Argument;  // [bp-0xc0]
    let v9: u64;  // [bp-0xb8]
    let v10: core::slice::iter::Iter<u8>;  // [bp-0xa8], Other Possible Types: struct24, u128
    let v11: u64;  // [bp-0x98]
    let v12: alloc::string::String;  // [bp-0x88], Other Possible Types: struct24, u128
    let v14: u64;  // [bp-0x78]
    let v16: iNone;  // [bp-0x68]
    let v17: u64;  // [bp-0x58]
    let v18: iNone;  // [bp-0x48]
    let v19: u64;  // [bp-0x38]
    let v22: core::fmt::rt::Argument;  // r15
    let v23: void*;  // r15
    let v24: u8;  // al
    let v26: u32;  // rdx
    let v27: u64;  // r12
    let v28: u64;  // r14
    let v29: u64;  // rcx
    let v31: u32;  // eax
    let v33: core::option::Option<u32>;  // rax:rax

    v22 = alloc::alloc::Global::alloc_impl(8, 120, 0);
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("full-iso");
    v17 = v3;
    v16 = *(&v0.field_0 as &i128);
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("long-iso");
    v19 = v3;
    v18 = *(&v0.field_0 as &i128);
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("iso");
    v9 = v3;
    v7 = *(&v0.field_0 as &i128);
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("locale");
    v11 = v3;
    v10 = *(&v0.field_0 as &i128);
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("+FORMAT (e.g., +%H:%M) for a 'date'-style format");
    v14 = v3;
    v12 = *(&v0.field_0 as &i128);
    *((v22 + 16) as &u64) = v17;
    *(v22 as void*) = v16;
    *((v22 + 40) as &u64) = v19;
    *((v22 + 24) as void*) = v18;
    *((v22 + 64) as &u64) = v9;
    *((v22 + 48) as &u128) = v7;
    *((v22 + 72) as &u128) = v10;
    *((v22 + 88) as &u64) = v11;
    *((v22 + 96) as &u128) = v12;
    *((v22 + 112) as &u64) = v14;
    v7 = 5;
    v8 = v22;
    v9 = 5;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "time-style");
    v23 = clap_builder::parser::error::MatchesError::unwrap("time-style", &v1);
    if !v23 {
        return struct16 {
            field_0: 9223372036854775814
            field_8: v29
        };
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "full-time") {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "full-time");
        if !v0.field_0 {
            goto LABEL_5913ab;
        }
        v10 = v2;
        v24 = <clap_builder::parser::matches::arg_matches::Indices as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v10);
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "time-style");
        if !v0.field_0 {
            goto LABEL_5913ab;
        }
        v12 = v2;
        if !(v24 & 1) || (<clap_builder::parser::matches::arg_matches::Indices as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v12) & v26 <= v26) {
            goto LABEL_5911c8;
        }
    } else {
LABEL_5911c8:
        v27 = v23[8] as i64;
        v28 = v23[16] as i64;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, v28, "full-iso") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, v28, "long-iso") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, v28, "iso") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, v28, "locale") {
            v10 = core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: v27
                }
                end_or_len: v27 + v28
                _marker: core::marker::PhantomData<&u8> { }
            };
            v33 = core::str::validations::next_code_point(&v10) as u128;
            match (v31) {
                43 => {
                    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v27, v28) as u64, v26);
                    *((a0 + 24) as &u64) = v3;
                    *((a0 + 8) as &i128) = *(&v0.field_0 as &i128);
                }
                1114112 => {
LABEL_5913ab:
                    core::option::unwrap_failed(); /* do not return */
                }
                _ => {
                    v12 = <alloc::string::String as core::clone::Clone>::clone(v23);
                    v4 = *((&v1 as &char + 48) as &i128);
                    v3 = v14;
                    return struct48 {
                        field_0: *(&v12.vec.buf.inner.cap as &i128)
                        field_16: v3
                        field_24: v4 as i64
                        field_32: v5
                        field_40: 5
                    };
                }
            }
        }
    }
    return struct16 {
        field_0: 9223372036854775814
        field_8: v29
    };
}
