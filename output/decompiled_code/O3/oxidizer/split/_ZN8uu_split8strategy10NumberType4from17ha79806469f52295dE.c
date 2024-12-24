fn uu_split::strategy::NumberType::from(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i256;  // [bp-0x108], Other Possible Types: struct24
    let v1: Option<Result<struct32, struct16>>;  // [sp-0xe8], Other Possible Types: i256
    let v2: i128;  // [sp-0xc8]
    let v3: struct32;  // [sp-0xb0], Other Possible Types: i256
    let v4: i192;  // [sp-0x90], Other Possible Types: struct24
    let v5: struct16;  // [bp-0x78]
    let v6: struct41;  // [sp-0x68]
    let v7: i16;  // [sp-0x38]
    let v9: i64;  // rdx
    let v10: i64;  // r14
    let v11: i64;  // rax
    let v12: i64;  // r13
    let v13: i64;  // rbp
    let v14: i64;  // rax
    let v15: i64;  // r13
    let v16: i64;  // rbp
    let v17: i64;  // r15
    let v18: i64;  // rcx
    let v19: i64;  // rax
    let v20: i64;  // rax
    let v21: i64;  // r14
    let v22: i64;  // r14
    let v23: i64;  // rax

    v6 = <char as core::str::pattern::Pattern>::into_searcher(a1, a2);
    v5 = struct16 {
        field_0: 0
        field_8: a2
    };
    v7 = 1;
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v5, v9);
    v10 = *((&v4 as &char + 8) as &i64);
    v11 = *((&v4 as &char + 16) as &i64);
    if v11 != 3 {
        if v11 != 2 {
            if !(v11 == 1) {
                goto LABEL_4d6b6c;
            }
            v1 = uucore::parser::parse_size::parse_size_u64(*(v10 as &i64), *((v10 + 8) as &i64));
            if v1 == 3 {
                v14 = *((&v1 as &char + 8) as &i64);
                goto LABEL_4d6b09;
            } else {
                v0 = v1;
                v3 = uu_split::strategy::NumberType::from::{{closure}}(v10, &v0);
                v18 = v3;
                v19 = *((&v3 as &char + 8) as &i64);
                v2 = *((&v3 as &char + 16) as &i128);
                if v18 == 2 {
LABEL_4d6b09:
                    if !v14 {
                        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
LABEL_4d6b7a:
                        *((a0 + 24) as &i64) = *((&v0 as &char + 16) as &i64);
                        *((a0 + 8) as &i192) = v0;
                        v23 = 0;
                    } else {
                        *((a0 + 8) as &i64) = 0;
LABEL_4d6b1a:
                        *((a0 + 16) as &i64) = v14;
LABEL_4d6ed5:
                        v23 = 2;
                    }
                    return struct8 {
                        field_0: v23
                    };
                }
            }
        } else {
            v12 = *(v10 as &i64);
            v13 = *((v10 + 8) as &i64);
            v0 = 0;
            if core::slice::<impl [T]>::starts_with(v12, v13, core::char::methods::encode_utf8_raw(108, &v0), v9) as i8 {
LABEL_4d69ec:
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v10 as &i64), *((v10 + 8) as &i64), "l") as i8 {
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v10 as &i64), *((v10 + 8) as &i64), "r") as i8 {
LABEL_4d6b6c:
                        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                        goto LABEL_4d6b7a;
                    }
                    v1 = uucore::parser::parse_size::parse_size_u64(*((v10 + 16) as &i64), *((v10 + 24) as &i64));
                    if v1 == 3 {
                        v14 = *((&v1 as &char + 8) as &i64);
                        *((a0 + 8) as &i64) = 4;
                        goto LABEL_4d6b1a;
                    }
                    v0 = v1;
                    v3 = uu_split::strategy::NumberType::from::{{closure}}(v10 + 16, &v0);
                    v18 = v3;
                    v19 = *((&v3 as &char + 8) as &i64);
                    v2 = *((&v3 as &char + 16) as &i128);
                    if v18 == 2 {
                        *((a0 + 8) as &i64) = 4;
                        goto LABEL_4d6b1a;
                    }
                } else {
                    v1 = uucore::parser::parse_size::parse_size_u64(*((v10 + 16) as &i64), *((v10 + 24) as &i64));
                    if v1 == 3 {
                        v14 = *((&v1 as &char + 8) as &i64);
                        *((a0 + 8) as &i64) = 2;
                        goto LABEL_4d6b1a;
                    }
                    v0 = v1;
                    v3 = uu_split::strategy::NumberType::from::{{closure}}(v10 + 16, &v0);
                    v18 = v3;
                    v19 = *((&v3 as &char + 8) as &i64);
                    v2 = *((&v3 as &char + 16) as &i128);
                    if v18 == 2 {
                        *((a0 + 8) as &i64) = 2;
                        goto LABEL_4d6b1a;
                    }
                }
            } else {
                v15 = *(v10 as &i64);
                v16 = *((v10 + 8) as &i64);
                v0 = 0;
                if !(v11 == 1) {
                    goto LABEL_4d69ec;
                }
                v1 = uucore::parser::parse_size::parse_size_u64(*((v10 + 16) as &i64), *((v10 + 24) as &i64));
                if v1 == 3 {
                    v17 = *((&v1 as &char + 8) as &i64);
                } else {
                    v0 = v1;
                    v3 = uu_split::strategy::NumberType::from::{{closure}}(v10 + 16, &v0);
                    v20 = v3;
                    v17 = *((&v3 as &char + 8) as &i64);
                    v2 = *((&v3 as &char + 16) as &i128);
                    if v20 != 2 {
                        return struct32 {
                            field_0: v20
                            field_8: v17
                            field_16: v2
                        };
                    }
                }
                v1 = uucore::parser::parse_size::parse_size_u64(*(v10 as &i64), *((v10 + 8) as &i64));
                if v1 == 3 {
                    v19 = *((&v1 as &char + 8) as &i64);
                    goto LABEL_4d6e68;
                }
                v0 = v1;
                v3 = uu_split::strategy::NumberType::from::{{closure}}(v10, &v0);
                v18 = v3;
                v19 = *((&v3 as &char + 8) as &i64);
                v2 = *((&v3 as &char + 16) as &i128);
                if v18 == 2 {
LABEL_4d6e68:
                    if v19 - 1 >= v17 {
                        v0 = <T as alloc::string::ToString>::to_string(v10);
                        return struct32 {
                            field_0: 1
                            field_8: v0
                            field_24: *((&v0 as &char + 16) as &i64)
                        };
                    }
                    *((a0 + 8) as &i64) = 1;
                    goto LABEL_4d6ecd;
                }
            }
        }
    } else {
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v10 as &i64), *((v10 + 8) as &i64), "l") as i8 {
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v10 as &i64), *((v10 + 8) as &i64), "r") as i8 {
                goto LABEL_4d6b6c;
            }
            v1 = uucore::parser::parse_size::parse_size_u64(*((v10 + 32) as &i64), *((v10 + 40) as &i64));
            if v1 == 3 {
                v17 = *((&v1 as &char + 8) as &i64);
            } else {
                v0 = v1;
                v3 = uu_split::strategy::NumberType::from::{{closure}}(v10 + 32, &v0);
                v20 = v3;
                v17 = *((&v3 as &char + 8) as &i64);
                v2 = *((&v3 as &char + 16) as &i128);
                if v20 != 2 {
                    return struct32 {
                        field_0: v20
                        field_8: v17
                        field_16: v2
                    };
                }
            }
            v1 = uucore::parser::parse_size::parse_size_u64(*((v10 + 16) as &i64), *((v10 + 24) as &i64));
            v22 = v10 + 16;
            if v1 == 3 {
                v19 = *((&v1 as &char + 8) as &i64);
                goto LABEL_4d6ebc;
            }
            v0 = v1;
            v3 = uu_split::strategy::NumberType::from::{{closure}}(v22, &v0);
            v18 = v3;
            v19 = *((&v3 as &char + 8) as &i64);
            v2 = *((&v3 as &char + 16) as &i128);
            if v18 == 2 {
LABEL_4d6ebc:
                if v19 - 1 >= v17 {
                    v0 = <T as alloc::string::ToString>::to_string(v22);
                    return struct32 {
                        field_0: 1
                        field_8: v0
                        field_24: *((&v0 as &char + 16) as &i64)
                    };
                }
                *((a0 + 8) as &i64) = 5;
                goto LABEL_4d6ecd;
            }
        } else {
            v1 = uucore::parser::parse_size::parse_size_u64(*((v10 + 32) as &i64), *((v10 + 40) as &i64));
            if v1 == 3 {
                v17 = *((&v1 as &char + 8) as &i64);
            } else {
                v0 = v1;
                v3 = uu_split::strategy::NumberType::from::{{closure}}(v10 + 32, &v0);
                v20 = v3;
                v17 = *((&v3 as &char + 8) as &i64);
                v2 = *((&v3 as &char + 16) as &i128);
                if v20 != 2 {
                    return struct32 {
                        field_0: v20
                        field_8: v17
                        field_16: v2
                    };
                }
            }
            v1 = uucore::parser::parse_size::parse_size_u64(*((v10 + 16) as &i64), *((v10 + 24) as &i64));
            v21 = v10 + 16;
            if v1 == 3 {
                v19 = *((&v1 as &char + 8) as &i64);
            } else {
                v0 = v1;
                v3 = uu_split::strategy::NumberType::from::{{closure}}(v21, &v0);
                v18 = v3;
                v19 = *((&v3 as &char + 8) as &i64);
                v2 = *((&v3 as &char + 16) as &i128);
                if v18 != 2 {
                    return struct32 {
                        field_0: v18
                        field_8: v19
                        field_16: v2
                    };
                }
            }
            if v19 - 1 >= v17 {
                v0 = <T as alloc::string::ToString>::to_string(v21);
                return struct32 {
                    field_0: 1
                    field_8: v0
                    field_24: *((&v0 as &char + 16) as &i64)
                };
            }
            *((a0 + 8) as &i64) = 3;
LABEL_4d6ecd:
            *((a0 + 16) as &i64) = v19;
            *((a0 + 24) as &i64) = v17;
            goto LABEL_4d6ed5;
        }
    }
    return struct32 {
        field_0: v18
        field_8: v19
        field_16: v2
    };
}
