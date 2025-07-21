fn uu_split::strategy::NumberType::from(a1: i64, a2: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x108], Other Possible Types: u32
    let v1: u128;  // [bp-0x108]
    let v2: struct16;  // [bp-0x108], Other Possible Types: u128
    let v3: u128;  // [bp-0x108]
    let v4: struct32;  // [bp-0xf8]
    let v7: struct32;  // [bp-0xe8], Other Possible Types: char
    let v8: struct40;  // [bp-0xe0], Other Possible Types: struct24
    let v9: struct40;  // [bp-0xe0]
    let v10: u128;  // [bp-0xc8]
    let v11: struct32;  // [bp-0xb0]
    let v12: alloc::string::String;  // [bp-0xa8], Other Possible Types: struct24
    let v13: u128;  // [bp-0xa0]
    let v14: Result<struct24, struct24>;  // [bp-0x90]
    let v15: i64;  // [bp-0x88]
    let v16: u64;  // [bp-0x80]
    let v17: struct16;  // [bp-0x78]
    let v18: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v19: u16;  // [bp-0x38]
    let v21: u64;  // rcx
    let v22: i64;  // r14
    let v23: alloc::string::String;  // rax, Other Possible Types: struct24
    let v24: u64;  // r14
    let v25: u64;  // r14
    let v26: u64;  // rax
    let v28: u64;  // rax
    let v29: u64;  // r15
    let v30: &mut [u8];  // rax:rdx
    let v31: &mut [u8];  // rax:rdx
    let v32: u128;  // [bp-0xf8]

    v18 = <char as core::str::pattern::Pattern>::into_searcher(a1 as u8, a2, v21);
    v17 = struct16 {
        field_0: 0
        field_8: a2
    };
    v19 = 1;
    v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v17);
    v22 = v15;
    if v16 != 3 {
        if v16 == 2 {
            v0 = 0;
            v0 = v1 & 0xffffffffffffffffffffffff00000000;
            v31 = core::char::methods::encode_utf8_raw(108, &v0, a2);
            if core::slice::<impl [T]>::starts_with() || !((v0 = 0, v0 = v1 & 0xffffffffffffffffffffffff00000000, v30 = core::char::methods::encode_utf8_raw(114, &v0, a2), !core::slice::<impl [T]>::starts_with() as u8)) {
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v22 as &i64), *((v22 + 8) as &i64), "l") as i8 {
                    uucore::parser::parse_size::parse_size_u64(*((v22 + 16) as &i64), *((v22 + 24) as &i64), v21);
                    if v7.field_0 as i32 == 3 {
                        v23 = v8;
                        *((a0 + 8) as &i64) = 2;
                        *((a0 + 16) as &struct24) = v23;
                    }
                    v0 = v7;
                    v11 = uu_split::strategy::NumberType::from::{{closure}}(v22 + 16, &v0);
                    v23 = v12;
                    v10 = v13;
                    if v11.field_0 as i64 != 2 {
                        return struct32 {
                            field_0: v26
                            field_8: v23
                            field_16: v10
                        };
                    }
                    *((a0 + 8) as &i64) = 2;
                    *((a0 + 16) as &struct24) = v23;
                } else {
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v22 as &i64), *((v22 + 8) as &i64), "r") as i8 {
                        uucore::parser::parse_size::parse_size_u64(*((v22 + 16) as &i64), *((v22 + 24) as &i64), v21);
                        if v7.field_0 as i32 == 3 {
                            v23 = v8;
                            *((a0 + 8) as &i64) = 4;
                            *((a0 + 16) as &struct24) = v23;
                        }
                        v0 = v7;
                        v11 = uu_split::strategy::NumberType::from::{{closure}}(v22 + 16, &v0);
                        v23 = v12;
                        v10 = v13;
                        if v11.field_0 as i64 != 2 {
                            return struct32 {
                                field_0: v26
                                field_8: v23
                                field_16: v10
                            };
                        }
                        *((a0 + 8) as &i64) = 4;
                        *((a0 + 16) as &struct24) = v23;
                    } else {
                        vvar_1043{stack -264} = struct32 OrderedDict({0: 𝜙@128b [((5073031, None), None), ((5073352, None), None), ((5073515, None), vvar_828{stack -264})]})
                        <T as alloc::slice::hack::ConvertVec>::to_vec(&v0, a1, a2);
                        *((a0 + 24) as &i64) = v32;
                        *((a0 + 8) as &u128) = v1;
                    }
                }
            }
            uucore::parser::parse_size::parse_size_u64(*((v22 + 16) as &i64), *((v22 + 24) as &i64), v21);
            if v7.field_0 as i32 == 3 {
                v9 = v8;
            } else {
                v0 = v7;
                v11 = uu_split::strategy::NumberType::from::{{closure}}(v22 + 16, &v0);
                v8 = v12;
                v10 = v13;
                if v11.field_0 as i64 != 2 {
                    return struct32 {
                        field_0: v26
                        field_8: v8
                        field_16: v10
                    };
                }
            }
            v23 = v9;
            uucore::parser::parse_size::parse_size_u64(*(v22 as &i64), *((v22 + 8) as &i64), v21);
            if v7.field_0 as i32 == 3 {
                v2 = v1;
LABEL_4d6d98:
                if v23 - 1 >= v8 {
                    <T as alloc::string::ToString>::to_string(&v2, v22);
                    return struct32 {
                        field_0: 1
                        field_8: v2
                        field_24: v4.field_0 as i64
                    };
                }
                return struct32 {
                    field_0: v28
                    field_8: 1
                    field_16: v28
                    field_24: v29
                };
            } else {
                v0 = v7;
                v11 = uu_split::strategy::NumberType::from::{{closure}}(v22, &v0);
                v23 = v12;
                v10 = v13;
                v2 = v1;
                if v11.field_0 as i64 == 2 {
                    goto LABEL_4d6d98;
                }
            }
        } else if v16 == 1 {
            uucore::parser::parse_size::parse_size_u64(*(v22 as &i64), *((v22 + 8) as &i64), v21);
            if *(&v7 as &i32) == 3 || !((v0 = v7, v11 = uu_split::strategy::NumberType::from::{{closure}}(v22, &v0), v23 = v12, v10 = v13, v11.field_0 as i64 != 2)) {
                if v23 {
                    *((a0 + 8) as &i64) = 0;
                    *((a0 + 16) as &struct24) = v23;
                }
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v1, a1, a2);
                *((a0 + 24) as &i64) = v32;
                *((a0 + 8) as &u128) = v1;
            }
        } else {
            vvar_1035{stack -264} = struct32 OrderedDict({0: 𝜙@128b [((5073031, None), None), ((5073352, None), None), ((5073515, None), vvar_828{stack -264})]})
            <T as alloc::slice::hack::ConvertVec>::to_vec(&v0, a1, a2);
            *((a0 + 24) as &i64) = v32;
            *((a0 + 8) as &u128) = v1;
        }
    } else {
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v22 as &i64), *((v22 + 8) as &i64), "l") as i8 {
            uucore::parser::parse_size::parse_size_u64(*((v22 + 32) as &i64), *((v22 + 40) as &i64), v21);
            if *(&v7 as &i32) == 3 {
                v9 = v8;
            } else {
                v0 = v7;
                v11 = uu_split::strategy::NumberType::from::{{closure}}(v22 + 32, &v0);
                v8 = v12;
                v10 = v13;
                if v11.field_0 as i64 != 2 {
                    return struct32 {
                        field_0: v26
                        field_8: v8
                        field_16: v10
                    };
                }
            }
            v23 = v9;
            uucore::parser::parse_size::parse_size_u64(*((v22 + 16) as &i64), *((v22 + 24) as &i64), v21);
            v24 = v22 + 16;
            if *(&v7 as &i32) == 3 {
                v2 = v1;
LABEL_4d6bf7:
                if v23 - 1 >= v8 {
                    <T as alloc::string::ToString>::to_string(&v2, v24);
                    return struct32 {
                        field_0: 1
                        field_8: v2
                        field_24: v4.field_0 as i64
                    };
                }
                *((a0 + 8) as &i64) = 3;
            } else {
                v0 = v7;
                v11 = uu_split::strategy::NumberType::from::{{closure}}(v24, &v0);
                v23 = v12;
                v10 = v13;
                v2 = v3;
                if v11.field_0 as i64 == 2 {
                    goto LABEL_4d6bf7;
                }
            }
        } else {
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v22 as &i64), *((v22 + 8) as &i64), "r") as i8 {
                vvar_1039{stack -264} = struct32 OrderedDict({0: 𝜙@128b [((5073031, None), None), ((5073352, None), None), ((5073515, None), vvar_828{stack -264})]})
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v0, a1, a2);
                *((a0 + 24) as &i64) = v32;
                *((a0 + 8) as &u128) = v1;
            }
            uucore::parser::parse_size::parse_size_u64(*((v22 + 32) as &i64), *((v22 + 40) as &i64), v21);
            if v7.field_0 as i32 == 3 {
                v9 = v8;
            } else {
                v0 = v7;
                v11 = uu_split::strategy::NumberType::from::{{closure}}(v22 + 32, &v0);
                v8 = v12;
                v10 = v13;
                if v11.field_0 as i64 != 2 {
                    return struct32 {
                        field_0: v26
                        field_8: v8
                        field_16: v10
                    };
                }
            }
            v23 = v9;
            uucore::parser::parse_size::parse_size_u64(*((v22 + 16) as &i64), *((v22 + 24) as &i64), v21);
            v25 = v22 + 16;
            if v7.field_0 as i32 == 3 {
                v2 = v1;
LABEL_4d6dec:
                if v23 - 1 >= v8 {
                    <T as alloc::string::ToString>::to_string(&v2, v25);
                    return struct32 {
                        field_0: 1
                        field_8: v2
                        field_24: v4.field_0 as i64
                    };
                }
                *((a0 + 8) as &i64) = 5;
            } else {
                v0 = v7;
                v11 = uu_split::strategy::NumberType::from::{{closure}}(v25, &v0);
                v23 = v12;
                v10 = v13;
                v2 = v3;
                if v11.field_0 as i64 == 2 {
                    goto LABEL_4d6dec;
                }
            }
        }
    }
    return struct32 {
        field_0: v26
        field_8: v23
        field_16: v10
    };
}
