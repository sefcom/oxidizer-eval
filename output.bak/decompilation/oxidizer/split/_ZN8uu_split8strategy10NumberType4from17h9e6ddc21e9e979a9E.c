fn uu_split::strategy::NumberType::from(a0: &Option<struct32>, a1: u32, a2: u32) -> u64 {
    let v0: struct32;  // [bp-0x108], Other Possible Types: struct24, i192
    let v1: Option<Result<struct32, struct8>>;  // [sp-0xe8], Other Possible Types: i264
    let v2: i128;  // [sp-0xc8]
    let v3: i256;  // [sp-0xb0], Other Possible Types: struct32
    let v4: struct24;  // [sp-0x90], Other Possible Types: i192
    let v5: struct16;  // [bp-0x78]
    let v6: struct41;  // [sp-0x68]
    let v7: i16;  // [sp-0x38]
    let v9: i64;  // r14
    let v10: i64;  // rax
    let v11: i64;  // r13
    let v12: i64;  // rbp
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v15: i64;  // r13
    let v16: i64;  // rbp
    let v17: i64;  // r15
    let v19: i64;  // rax
    let v21: i64;  // r14
    let v22: i64;  // r14

    v6 = <char as core::str::pattern::Pattern>::into_searcher(a1, a2);
    v5 = struct16 {
        field_0: 0
        field_8: a2
    };
    v7 = 1;
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v5);
    v9 = *((&v4 as &char + 8) as &i64);
    v10 = *((&v4 as &char + 16) as &i64);
    if v10 != 3 {
        if v10 != 2 {
            if !(v10 == 1) {
                goto LABEL_4d6a9c;
            }
            v1 = uucore::parser::parse_size::parse_size_u64(*(v9 as &i64), *((v9 + 8) as &i64));
            if v1 == 3 {
                v14 = *((&v1 as &char + 8) as &i64);
                goto LABEL_4d6a39;
            } else {
                v0 = struct32 {
                    field_0: v1
                    field_16: *((&v1 as &char + 16) as &i128)
                };
                v3 = uu_split::strategy::NumberType::from::{{closure}}(v9, &v0);
                v19 = *((&v3 as &char + 8) as &i64);
                v2 = *((&v3 as &char + 16) as &i128);
                if v3 == 2 {
LABEL_4d6a39:
                    if !v14 {
                        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
LABEL_4d6aaa:
                        *((a0 + 24) as &i64) = *((&v0 as &char + 16) as &i64);
                        *((a0 + 8) as &i192) = v0;
                    } else {
                        *((a0 + 8) as &i64) = 0;
LABEL_4d6a4a:
                        *((a0 + 16) as &i64) = v14;
LABEL_4d6e05:
                    }
                    return struct8 {
                        field_0: v23
                    };
                }
            }
        } else {
            v11 = *(v9 as &i64);
            v12 = *((v9 + 8) as &i64);
            v0 = 0;
            if core::slice::<impl [T]>::starts_with(v11, v12, core::char::methods::encode_utf8_raw(108, &v0), v13) as i8 {
LABEL_4d691c:
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v9 as &i64), *((v9 + 8) as &i64), "l") as i8 {
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v9 as &i64), *((v9 + 8) as &i64), "r") as i8 {
LABEL_4d6a9c:
                        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                        goto LABEL_4d6aaa;
                    }
                    v1 = uucore::parser::parse_size::parse_size_u64(*((v9 + 16) as &i64), *((v9 + 24) as &i64));
                    if v1 == 3 {
                        v14 = *((&v1 as &char + 8) as &i64);
                        *((a0 + 8) as &i64) = 4;
                        goto LABEL_4d6a4a;
                    }
                    v0 = struct32 {
                        field_0: v1
                        field_16: *((&v1 as &char + 16) as &i128)
                    };
                    v3 = uu_split::strategy::NumberType::from::{{closure}}(v9 + 16, &v0);
                    v19 = *((&v3 as &char + 8) as &i64);
                    v2 = *((&v3 as &char + 16) as &i128);
                    if v3 == 2 {
                        *((a0 + 8) as &i64) = 4;
                        goto LABEL_4d6a4a;
                    }
                } else {
                    v1 = uucore::parser::parse_size::parse_size_u64(*((v9 + 16) as &i64), *((v9 + 24) as &i64));
                    if v1 == 3 {
                        v14 = *((&v1 as &char + 8) as &i64);
                        *((a0 + 8) as &i64) = 2;
                        goto LABEL_4d6a4a;
                    }
                    v0 = struct32 {
                        field_0: v1
                        field_16: *((&v1 as &char + 16) as &i128)
                    };
                    v3 = uu_split::strategy::NumberType::from::{{closure}}(v9 + 16, &v0);
                    v19 = *((&v3 as &char + 8) as &i64);
                    v2 = *((&v3 as &char + 16) as &i128);
                    if v3 == 2 {
                        *((a0 + 8) as &i64) = 2;
                        goto LABEL_4d6a4a;
                    }
                }
            } else {
                v15 = *(v9 as &i64);
                v16 = *((v9 + 8) as &i64);
                v0 = 0;
                if !(v10 == 1) {
                    goto LABEL_4d691c;
                }
                v1 = uucore::parser::parse_size::parse_size_u64(*((v9 + 16) as &i64), *((v9 + 24) as &i64));
                if v1 == 3 {
                    v17 = *((&v1 as &char + 8) as &i64);
                } else {
                    v0 = struct32 {
                        field_0: v1
                        field_16: *((&v1 as &char + 16) as &i128)
                    };
                    v3 = uu_split::strategy::NumberType::from::{{closure}}(v9 + 16, &v0);
                    v17 = *((&v3 as &char + 8) as &i64);
                    v2 = *((&v3 as &char + 16) as &i128);
                    if v3 != 2 {
                        return struct32 {
                            field_0: v20
                            field_8: v17
                            field_16: v2
                        };
                    }
                }
                v1 = uucore::parser::parse_size::parse_size_u64(*(v9 as &i64), *((v9 + 8) as &i64));
                if v1 == 3 {
                    v19 = *((&v1 as &char + 8) as &i64);
                    goto LABEL_4d6d98;
                }
                v0 = struct32 {
                    field_0: v1
                    field_16: *((&v1 as &char + 16) as &i128)
                };
                v3 = uu_split::strategy::NumberType::from::{{closure}}(v9, &v0);
                v19 = *((&v3 as &char + 8) as &i64);
                v2 = *((&v3 as &char + 16) as &i128);
                if v3 == 2 {
LABEL_4d6d98:
                    if v19 - 1 >= v17 {
                        v0 = <T as alloc::string::ToString>::to_string(v9);
                        return Some(struct32 {
                            field_0: 1
                            field_8: v0
                            field_24: *((&v0 as &char + 16) as &i64)
                        });
                    }
                    *((a0 + 8) as &i64) = 1;
                    goto LABEL_4d6dfd;
                }
            }
        }
    } else {
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v9 as &i64), *((v9 + 8) as &i64), "l") as i8 {
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v9 as &i64), *((v9 + 8) as &i64), "r") as i8 {
                goto LABEL_4d6a9c;
            }
            v1 = uucore::parser::parse_size::parse_size_u64(*((v9 + 32) as &i64), *((v9 + 40) as &i64));
            if v1 == 3 {
                v17 = *((&v1 as &char + 8) as &i64);
            } else {
                v0 = struct32 {
                    field_0: v1
                    field_16: *((&v1 as &char + 16) as &i128)
                };
                v3 = uu_split::strategy::NumberType::from::{{closure}}(v9 + 32, &v0);
                v17 = *((&v3 as &char + 8) as &i64);
                v2 = *((&v3 as &char + 16) as &i128);
                if v3 != 2 {
                    return struct32 {
                        field_0: v20
                        field_8: v17
                        field_16: v2
                    };
                }
            }
            v1 = uucore::parser::parse_size::parse_size_u64(*((v9 + 16) as &i64), *((v9 + 24) as &i64));
            v22 = v9 + 16;
            if v1 == 3 {
                v19 = *((&v1 as &char + 8) as &i64);
                goto LABEL_4d6dec;
            }
            v0 = struct32 {
                field_0: v1
                field_16: *((&v1 as &char + 16) as &i128)
            };
            v3 = uu_split::strategy::NumberType::from::{{closure}}(v22, &v0);
            v19 = *((&v3 as &char + 8) as &i64);
            v2 = *((&v3 as &char + 16) as &i128);
            if v3 == 2 {
LABEL_4d6dec:
                if v19 - 1 >= v17 {
                    v0 = <T as alloc::string::ToString>::to_string(v22);
                }
                *((a0 + 8) as &i64) = 5;
                goto LABEL_4d6dfd;
                goto LABEL_4d6dfd;
            }
        } else {
            v1 = uucore::parser::parse_size::parse_size_u64(*((v9 + 32) as &i64), *((v9 + 40) as &i64));
            if v1 == 3 {
                v17 = *((&v1 as &char + 8) as &i64);
            } else {
                v0 = struct32 {
                    field_0: v1
                    field_16: *((&v1 as &char + 16) as &i128)
                };
                v3 = uu_split::strategy::NumberType::from::{{closure}}(v9 + 32, &v0);
                v17 = *((&v3 as &char + 8) as &i64);
                v2 = *((&v3 as &char + 16) as &i128);
                if v3 != 2 {
                    return struct32 {
                        field_0: v20
                        field_8: v17
                        field_16: v2
                    };
                }
            }
            v1 = uucore::parser::parse_size::parse_size_u64(*((v9 + 16) as &i64), *((v9 + 24) as &i64));
            v21 = v9 + 16;
            if v1 == 3 {
                v19 = *((&v1 as &char + 8) as &i64);
                goto LABEL_4d6bf7;
            }
            v0 = struct32 {
                field_0: v1
                field_16: *((&v1 as &char + 16) as &i128)
            };
            v3 = uu_split::strategy::NumberType::from::{{closure}}(v21, &v0);
            v19 = *((&v3 as &char + 8) as &i64);
            v2 = *((&v3 as &char + 16) as &i128);
            if v3 == 2 {
LABEL_4d6bf7:
                if v19 - 1 >= v17 {
                    v0 = <T as alloc::string::ToString>::to_string(v21);
                    return Some(struct32 {
                        field_0: 1
                        field_8: v0
                        field_24: *((&v0 as &char + 16) as &i64)
                    });
                }
                *((a0 + 8) as &i64) = 3;
LABEL_4d6dfd:
                *((a0 + 16) as &i64) = v19;
                *((a0 + 24) as &i64) = v17;
                goto LABEL_4d6e05;
            }
        }
    }
    return struct32 {
        field_0: v18
        field_8: v19
        field_16: v2
    };
}
