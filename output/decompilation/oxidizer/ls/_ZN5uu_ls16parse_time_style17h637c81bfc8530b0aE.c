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
    let v9: u64;  // [bp-0xd9]
    let v10: u128;  // [bp-0xc8], Other Possible Types: alloc::string::String
    let v11: u64;  // [bp-0xb8]
    let v12: u8;  // [bp-0xa8], Other Possible Types: struct24
    let v13: u64;  // [bp-0x98]
    let v14: u128;  // [bp-0x88]
    let v15: u64;  // [bp-0x78]
    let v16: u8;  // [bp-0x68]
    let v17: u64;  // [bp-0x58]
    let v18: u8;  // [bp-0x48]
    let v19: u64;  // [bp-0x38]
    let v21: u64;  // rdx
    let v23: i64;  // r15
    let v24: i64;  // r15
    let v25: u64;  // rax
    let v27: u64;  // r12
    let v28: u64;  // r14
    let v29: u64;  // rax
    let v31: u32;  // eax
    let v34: core::option::Option<u32>;  // rax:rax

    v23 = alloc::alloc::Global::alloc_impl(0x78, a1, v21) as u64;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("full-iso");
    v17 = v0.field_16;
    memcpy(&v16, &v0, 16);
    v7 = <T as alloc::slice::hack::ConvertVec>::to_vec("long-iso");
    v19 = v7.field_16;
    memcpy(&v18, &v7, 16);
    v8 = <T as alloc::slice::hack::ConvertVec>::to_vec("iso");
    v15 = v8.field_16;
    v14 = *(&v8.field_0 as &i128);
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("locale");
    v13 = v1.field_16;
    memcpy(&v12, &v1, 16);
    v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("+FORMAT (e.g., +%H:%M) for a 'date'-style format");
    v11 = v2.field_16;
    memcpy(&v10, &v2, 16);
    *((v23 + 16) as &u64) = v17;
    *(v23 as &u128) = v16;
    *((v23 + 40) as &u64) = v19;
    *((v23 + 24) as &u128) = v18;
    *((v23 + 64) as &u64) = v15;
    *((v23 + 48) as &u128) = v14;
    *((v23 + 72) as &u128) = v12;
    *((v23 + 88) as &u64) = v13;
    *((v23 + 96) as &u128) = v10;
    *((v23 + 112) as &u64) = v11;
    v12 = alloc::slice::hack::into_vec(v23, 5);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "time-style");
    v24 = clap_builder::parser::error::MatchesError::unwrap("time-style", &v3);
    if v24 {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "full-time") as i8 {
            v4 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "full-time");
            if !v4.field_0 {
                goto LABEL_51ebdc;
            }
            v11 = v4.field_16;
            memcpy(&v3, &v3, 16);
            v25 = core::iter::traits::iterator::Iterator::fold(&v3 as u128);
            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "time-style");
            if !v5.field_0 {
                goto LABEL_51ebdc;
            }
            v11 = v5.field_16;
            memcpy(&v3, &v3, 16);
            if !(v25) || core::iter::traits::iterator::Iterator::fold(&v3 as u128) && v21 <= v21 {
                goto LABEL_51ea11;
            }
        } else {
LABEL_51ea11:
            v27 = *((v24 + 8) as &i64);
            v28 = *((v24 + 16) as &i64);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, v28, "full-iso") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, v28, "long-iso") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, v28, "iso") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, v28, "locale") as i8 {
                v14 = core::slice::iter::Iter<u8> {
                    ptr: core::ptr::non_null::NonNull<u8> {
                        pointer: v27
                    }
                    end_or_len: v27 + v28
                    _marker: core::marker::PhantomData<&u8> { }
                };
                v34 = core::str::validations::next_code_point(&v14) as u128;
                match (v31) {
                    43 => {
                        v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v27, v28) as u64, v21);
                        return struct40 {
                            field_0: 7
                            field_8: <UNKNOWN>
                            field_24: <UNKNOWN>
                        };
                    }
                    1114112 => {
LABEL_51ebdc:
                        core::option::unwrap_failed(); /* do not return */
                    }
                    _ => {
                        v10 = <alloc::string::String as core::clone::Clone>::clone(v24);
                        memcpy(&v3 as u8, &v10, 16);
                        v9 = v11;
                        return struct72 {
                            field_0: 6
                            field_1: *((&v3 as &char + 15) as &i64)
                            field_16: *((&v3 as &char + 72) as &i128)
                            field_24: <UNKNOWN>
                            field_32: v13
                            field_48: <UNKNOWN>
                        };
                    }
                }
            }
        }
    }
    *((a0 + 8) as &u64) = v29;
}
