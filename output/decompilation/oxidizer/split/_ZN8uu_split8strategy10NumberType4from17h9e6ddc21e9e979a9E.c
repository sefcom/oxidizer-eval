fn uu_split::strategy::NumberType::from(a0: &Option<struct32>, a1: u32, a2: u32) -> u64 {
    let v0: Option<Result<struct32, struct8>>;  // [sp-0x108], Other Possible Types: unsigned int
    let v1: struct24;  // [sp-0x108], Other Possible Types: int
    let v2: struct24;  // [sp-0x108]
    let v3: Option<Result<struct32, struct8>>;  // [sp-0xe8]
    let v4: iNone;  // [sp-0xc8]
    let v5: struct32;  // [sp-0xb0]
    let v6: struct24;  // [sp-0x90]
    let v7: struct16;  // [bp-0x78]
    let v8: struct41;  // [sp-0x68]
    let v9: i16;  // [sp-0x38]
    let v11: i64;  // r14
    let v12: i64;  // rax
    let v13: i64;  // r13
    let v14: i64;  // rbp
    let v15: i64;  // rdx
    let v16: i64;  // r13
    let v17: i64;  // rbp
    let v18: i64;  // r15
    let v20: i64;  // rax
    let v22: i64;  // r14
    let v23: i64;  // r14

    v8 = <char as core::str::pattern::Pattern>::into_searcher(a1, a2);
    v7 = struct16 {
        field_0: 0
        field_8: a2
    };
    v9 = 1;
    v6 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v7);
    v11 = v6.field_8;
    v12 = v6.field_16;
    if v12 != 3 {
        if v12 != 2 {
            if !(v12 == 1) {
                goto LABEL_4d6a9c;
            }
            v3 = uucore::parser::parse_size::parse_size_u64(*(v11 as &i64), *((v11 + 8) as &i64));
            if v3 as i32 == 3 {
                v20 = *((&v3 as &char + 8) as &i64);
                goto LABEL_4d6a39;
            } else {
                v0 = v3;
                v5 = uu_split::strategy::NumberType::from::{{closure}}(v11, &v0);
                v20 = v5.field_8 as i64;
                v4 = *((&v5.field_8 as &char + 8) as &i128);
                if v5.field_0 == 2 {
LABEL_4d6a39:
                    if !v20 {
                        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
LABEL_4d6aaa:
                        *((a0 + 24) as &i64) = (&v1)[16] as i64;
                        *((a0 + 8) as &i128) = v1 as i128;
                    } else {
                        *((a0 + 8) as &i64) = 0;
LABEL_4d6a4a:
                        *((a0 + 16) as &unsigned long) = v20;
LABEL_4d6e05:
                    }
                    return struct8 {
                        field_0: v24
                    };
                }
            }
        } else {
            v13 = *(v11 as &i64);
            v14 = *((v11 + 8) as &i64);
            *(&v0 as &i32) = 0;
            if core::slice::<impl [T]>::starts_with(v13, v14, core::char::methods::encode_utf8_raw(108, &v0), v15) as i8 {
LABEL_4d691c:
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v11 as &i64), *((v11 + 8) as &i64), "l") as i8 {
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v11 as &i64), *((v11 + 8) as &i64), "r") as i8 {
LABEL_4d6a9c:
                        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                        goto LABEL_4d6aaa;
                    }
                    v3 = uucore::parser::parse_size::parse_size_u64(*((v11 + 16) as &i64), *((v11 + 24) as &i64));
                    if v3 as i32 == 3 {
                        v20 = *((&v3 as &char + 8) as &i64);
                        *((a0 + 8) as &i64) = 4;
                        goto LABEL_4d6a4a;
                    }
                    v0 = v3;
                    v5 = uu_split::strategy::NumberType::from::{{closure}}(v11 + 16, &v0);
                    v20 = v5.field_8 as i64;
                    v4 = *((&v5.field_8 as &char + 8) as &i128);
                    if v5.field_0 == 2 {
                        *((a0 + 8) as &i64) = 4;
                        goto LABEL_4d6a4a;
                    }
                } else {
                    v3 = uucore::parser::parse_size::parse_size_u64(*((v11 + 16) as &i64), *((v11 + 24) as &i64));
                    if v3 as i32 == 3 {
                        v20 = *((&v3 as &char + 8) as &i64);
                        *((a0 + 8) as &i64) = 2;
                        goto LABEL_4d6a4a;
                    }
                    v0 = v3;
                    v5 = uu_split::strategy::NumberType::from::{{closure}}(v11 + 16, &v0);
                    v20 = v5.field_8 as i64;
                    v4 = *((&v5.field_8 as &char + 8) as &i128);
                    if v5.field_0 == 2 {
                        *((a0 + 8) as &i64) = 2;
                        goto LABEL_4d6a4a;
                    }
                }
            } else {
                v16 = *(v11 as &i64);
                v17 = *((v11 + 8) as &i64);
                *(&v0 as &i32) = 0;
                if !(!core::slice::<impl [T]>::starts_with(v16, v17, core::char::methods::encode_utf8_raw(114, &v0), v15) as i8) {
                    goto LABEL_4d691c;
                }
                v3 = uucore::parser::parse_size::parse_size_u64(*((v11 + 16) as &i64), *((v11 + 24) as &i64));
                if v3 as i32 == 3 {
                    v18 = *((&v3 as &char + 8) as &i64);
                } else {
                    v0 = v3;
                    v5 = uu_split::strategy::NumberType::from::{{closure}}(v11 + 16, &v0);
                    v18 = v5.field_8 as i64;
                    v4 = *((&v5.field_8 as &char + 8) as &i128);
                    if v5.field_0 != 2 {
                        return struct32 {
                            field_0: v21
                            field_8: v18
                            field_16: v4
                        };
                    }
                }
                v3 = uucore::parser::parse_size::parse_size_u64(*(v11 as &i64), *((v11 + 8) as &i64));
                if v3 as i32 == 3 {
                    v20 = *((&v3 as &char + 8) as &i64);
                    goto LABEL_4d6d98;
                }
                v0 = v3;
                v5 = uu_split::strategy::NumberType::from::{{closure}}(v11, &v0);
                v20 = v5.field_8 as i64;
                v4 = *((&v5.field_8 as &char + 8) as &i128);
                if v5.field_0 == 2 {
LABEL_4d6d98:
                    if v20 - 1 >= v18 {
                        v2 = <T as alloc::string::ToString>::to_string(v11);
                        return Some(struct32 {
                            field_0: 1
                            field_8: v2 as i128
                            field_24: (&v2)[16] as i64
                        });
                    }
                    *((a0 + 8) as &i64) = 1;
                    goto LABEL_4d6dfd;
                }
            }
        }
    } else {
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v11 as &i64), *((v11 + 8) as &i64), "l") as i8 {
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v11 as &i64), *((v11 + 8) as &i64), "r") as i8 {
                goto LABEL_4d6a9c;
            }
            v3 = uucore::parser::parse_size::parse_size_u64(*((v11 + 32) as &i64), *((v11 + 40) as &i64));
            if v3 as i32 == 3 {
                v18 = *((&v3 as &char + 8) as &i64);
            } else {
                v0 = v3;
                v5 = uu_split::strategy::NumberType::from::{{closure}}(v11 + 32, &v0);
                v18 = v5.field_8 as i64;
                v4 = *((&v5.field_8 as &char + 8) as &i128);
                if v5.field_0 != 2 {
                    return struct32 {
                        field_0: v21
                        field_8: v18
                        field_16: v4
                    };
                }
            }
            v3 = uucore::parser::parse_size::parse_size_u64(*((v11 + 16) as &i64), *((v11 + 24) as &i64));
            v23 = v11 + 16;
            if v3 as i32 == 3 {
                v20 = *((&v3 as &char + 8) as &i64);
                goto LABEL_4d6dec;
            }
            v0 = v3;
            v5 = uu_split::strategy::NumberType::from::{{closure}}(v23, &v0);
            v20 = v5.field_8 as i64;
            v4 = *((&v5.field_8 as &char + 8) as &i128);
            if v5.field_0 == 2 {
LABEL_4d6dec:
                if v20 - 1 >= v18 {
                    v2 = <T as alloc::string::ToString>::to_string(v23);
                    return Some(struct32 {
                        field_0: 1
                        field_8: v2 as i128
                        field_24: (&v2)[16] as i64
                    });
                }
                *((a0 + 8) as &i64) = 5;
                goto LABEL_4d6dfd;
            }
        } else {
            v3 = uucore::parser::parse_size::parse_size_u64(*((v11 + 32) as &i64), *((v11 + 40) as &i64));
            if v3 as i32 == 3 {
                v18 = *((&v3 as &char + 8) as &i64);
            } else {
                v0 = v3;
                v5 = uu_split::strategy::NumberType::from::{{closure}}(v11 + 32, &v0);
                v18 = v5.field_8 as i64;
                v4 = *((&v5.field_8 as &char + 8) as &i128);
                if v5.field_0 != 2 {
                    return struct32 {
                        field_0: v21
                        field_8: v18
                        field_16: v4
                    };
                }
            }
            v3 = uucore::parser::parse_size::parse_size_u64(*((v11 + 16) as &i64), *((v11 + 24) as &i64));
            v22 = v11 + 16;
            if v3 as i32 == 3 {
                v20 = *((&v3 as &char + 8) as &i64);
                goto LABEL_4d6bf7;
            }
            v0 = v3;
            v5 = uu_split::strategy::NumberType::from::{{closure}}(v22, &v0);
            v20 = v5.field_8 as i64;
            v4 = *((&v5.field_8 as &char + 8) as &i128);
            if v5.field_0 == 2 {
LABEL_4d6bf7:
                if v20 - 1 >= v18 {
                    v2 = <T as alloc::string::ToString>::to_string(v22);
                    return Some(struct32 {
                        field_0: 1
                        field_8: v2 as i128
                        field_24: (&v2)[16] as i64
                    });
                }
                *((a0 + 8) as &i64) = 3;
LABEL_4d6dfd:
                *((a0 + 16) as &unsigned long) = v20;
                *((a0 + 24) as &unsigned long) = v18;
                goto LABEL_4d6e05;
            }
        }
    }
    return struct32 {
        field_0: v19
        field_8: v20
        field_16: v4
    };
}
