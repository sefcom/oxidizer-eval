fn bat::line_range::LineRange::parse_range(a1: &str) -> : struct80 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x98], Other Possible Types: u8
    let v1: struct16;  // [bp-0x98]
    let v2: iNone;  // [bp-0x97]
    let v3: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x90], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>, unsigned long
    let v4: core::str::pattern::CharSearcher;  // [bp-0x88]
    let v5: u128;  // [bp-0x78]
    let v6: u128;  // [bp-0x68]
    let v7: u16;  // [bp-0x58]
    let v8: u8;  // [bp-0x48]
    let v9: i64;  // [bp-0x40], Other Possible Types: struct_3 *, unsigned long
    let v10: i8;  // [bp-0x38]
    let v12: u64;  // rdx
    let v13: i64;  // rsi
    let v16: struct16;  // rcx
    let v18: u64;  // rax
    let v19: u64;  // r12
    let v20: struct40;  // r13
    let v22: Result<struct80, struct9>;  // rax
    let v25: struct48;  // rax
    let v26: i64;  // r14
    let v28: struct24;  // rax
    let v31: struct24;  // cc_ndep
    let v33: Option<struct24>;  // r14
    let v34: i64;  // r13
    let v35: struct32;  // r12
    let v36: u64;  // r15
    let v37: u32;  // eax
    let v46: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v47: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v48: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v49: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v50: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v51: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v52: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v53: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v54: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v55: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v56: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v57: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v58: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v59: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    if !v12 {
        <bat::error::Error as core::convert::From<&str>>::from(a0, "Empty line range");
        return;
    }
    if *(v13 as &i8) != 58 {
        v0 = struct16 {
            field_0: v13
            field_8: v13 + v12
        };
        v18 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v0);
        if !v18 {
            <bat::error::Error as core::convert::From<&str>>::from(a0, "Empty line range");
            return;
        }
        if v18 == ":" {
            v19 = v12 - 1;
            if *(v13 as &i8) == 45 {
                v49 = core::num::<impl usize>::from_ascii_radix(&v0, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(1, v19, a1) as u64, v12);
                if !v0.field_0 as i8 {
                    v22 = v3;
                    return struct40 {
                        field_0: 13
                        padding_1: <UNKNOWN>
                        field_8: v20
                        field_16: v22
                        field_24: 0
                        field_32: -1
                    };
                }
            } else {
                v57 = core::num::<impl usize>::from_ascii_radix(&v0, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v19, a1) as u64, v12);
                if !v0.field_0 as i8 {
                    v22 = v3;
                    return struct40 {
                        field_0: 13
                        padding_1: <UNKNOWN>
                        field_8: v20
                        field_16: v22
                        field_24: 0
                        field_32: -1
                    };
                }
            }
        } else {
            v4 = <char as core::str::pattern::Pattern>::into_searcher(0x3a, a1);
            v1 = struct16 {
                field_0: 0
                field_8: v12
            };
            v7 = 1;
            core::iter::traits::iterator::Iterator::collect(&v8, &v1);
            v25 = *(&v10 as &i64);
            if v25 != 1 {
                if v25 != 2 {
                    if v25 == 3 {
                        v26 = v9;
                        if *((v26 + 24) as &i64) {
                            v56 = core::num::<impl usize>::from_ascii_radix(&v1, *(v26 as &i64), *((v26 + 8) as &i64));
                            if v1.field_0 as i8 == 1 {
                                <bat::error::Error as core::convert::From<&str>>::from(&v1, "Invalid start line number in N:M:C format");
                            } else {
                                v50 = core::num::<impl usize>::from_ascii_radix(&v1, *((v26 + 16) as &i64), *((v26 + 24) as &i64));
                                if v1.field_0 as i8 == 1 {
                                    <bat::error::Error as core::convert::From<&str>>::from(&v1, "Invalid end line number in N:M:C format");
                                } else {
                                    v52 = core::num::<impl usize>::from_ascii_radix(&v1, *((v26 + 32) as &i64), *((v26 + 40) as &i64));
                                    if v1.field_0 as i8 == 1 {
                                        <bat::error::Error as core::convert::From<&str>>::from(&v1, "Invalid context number in N:M:C format");
                                    } else {
                                        if true {
                                            v3 = v3;
                                            return struct40 {
                                                field_0: 13
                                                padding_1: <UNKNOWN>
                                                field_8: 0
                                                field_16: v28
                                                field_24: 0
                                                field_32: (_ccall(3, 4, v3, v3, v31) as char ? v3 + v3 : -1)
                                            };
                                        }
                                        v3 = v3;
                                        return struct40 {
                                            field_0: 13
                                            padding_1: <UNKNOWN>
                                            field_8: 0
                                            field_16: v28
                                            field_24: 0
                                            field_32: (_ccall(3, 4, v3, v3, v31) as char ? v3 + v3 : -1)
                                        };
                                    }
                                }
                            }
                        } else {
                            v51 = core::num::<impl usize>::from_ascii_radix(&v1, *(v26 as &i64), *((v26 + 8) as &i64));
                            if v1.field_0 as i8 == 1 {
                                <bat::error::Error as core::convert::From<&str>>::from(&v1, "Invalid line number in N::C format");
                            } else {
                                v59 = core::num::<impl usize>::from_ascii_radix(&v1, *((v26 + 32) as &i64), *((v26 + 40) as &i64));
                                if v1.field_0 as i8 != 1 {
                                    v3 = v3;
                                    return struct40 {
                                        field_0: 13
                                        padding_1: <UNKNOWN>
                                        field_8: 0
                                        field_16: v28
                                        field_24: 0
                                        field_32: (_ccall(3, 4, v3, v3, v31) as char ? v3 + v3 : -1)
                                    };
                                }
                                <bat::error::Error as core::convert::From<&str>>::from(&v1, "Invalid context number in N::C format");
                            }
                        }
                    } else {
                        <bat::error::Error as core::convert::From<&str>>::from(&v1, "Line range contained too many ':' characters. Expected format: 'N', 'N:M', 'N::C', or 'N:M:C'");
                        return struct80 {
                            field_0: *(&v1.field_0 as &i128)
                            field_16: *(&v4.haystack.data_ptr as &i128)
                            field_32: v5
                            field_48: v6
                            field_64: *(&v7 as &i128)
                        };
                    }
                } else {
                    v33 = v9;
                    v53 = core::num::<impl usize>::from_ascii_radix(&v1, *(v33 as &i64), *((v33 + 8) as &i64));
                    if v1.field_0 as i8 == 1 {
                        return struct2 {
                            field_0: 4
                            field_1: *((&v1.field_0 as &char + 1) as &i8)
                        };
                    }
                    v34 = v3;
                    v35 = *((v33 + 16) as &i64);
                    v36 = *((v33 + 24) as &i64);
                    if !v36 {
                        goto LABEL_83c683;
                    }
                    match (v37) {
                        43 => {
                            v55 = core::num::<impl usize>::from_ascii_radix(&v1, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v35, v36) as u64, v12);
                            if v1.field_0 as i8 {
                                <bat::error::Error as core::convert::From<&str>>::from(&v1, "Invalid character after +");
                            } else {
                                *((a0 + 8) as &i64) = 0;
                                *((a0 + 16) as &unsigned long) = v34;
                                *((a0 + 24) as &i64) = 0;
                                *((a0 + 32) as &unsigned long) = v34;
                                break;
                            }
                        }
                        45 => {
                            if v12 && core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v35, v36) as u64 == "+" {
                                <bat::error::Error as core::convert::From<&str>>::from(&v1, "Invalid character after -");
                            } else {
                                v54 = core::num::<impl usize>::from_ascii_radix(&v1, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v35, v36) as u64, v12);
                                if v1.field_0 as i8 != 1 {
                                    break;
                                }
                                <bat::error::Error as core::convert::From<&str>>::from(&v1, "Invalid character after -");
                            }
                        }
                        _ => {
LABEL_83c683:
                            v58 = core::num::<impl usize>::from_ascii_radix(&v1, v35, v36);
                            if v1.field_0 as i8 == 1 {
                                return struct2 {
                                    field_0: 4
                                    field_1: *((&v1.field_0 as &char + 1) as &i8)
                                };
                            }
                            v34 = v3;
                            break;
                            break;
                        }
                    }
                }
                return struct80 {
                    field_0: *(&v1.field_0 as &i128)
                    field_16: *(&v4.haystack.data_ptr as &i128)
                    field_32: v5
                    field_48: v6
                    field_64: *(&v7 as &i128)
                };
            } else {
                v47 = core::num::<impl usize>::from_ascii_radix(&v1, *(v9 as &i64), *((v9 + 8) as &i64));
                if v1.field_0 as i8 {
                    return struct2 {
                        field_0: 4
                        field_1: *((&v1.field_0 as &char + 1) as &i8)
                    };
                }
                *((a0 + 8) as &i64) = 0;
                *((a0 + 16) as &unsigned long) = v3;
                *((a0 + 24) as &i64) = 0;
                *((a0 + 32) as &unsigned long) = v3;
            }
        }
    } else if v12 != 1 && *((v13 + 1) as &i8) == 45 {
        v48 = core::num::<impl usize>::from_ascii_radix(&v0, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(2, a1) as u64, v12);
        if !v0 {
            return struct40 {
                field_0: 13
                padding_1: <UNKNOWN>
                field_8: 0
                field_24: v16
                field_32: v3
            };
        }
    } else {
        v46 = core::num::<impl usize>::from_ascii_radix(&v0, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, a1) as u64, v12);
        if !v0 {
            return struct40 {
                field_0: 13
                padding_1: <UNKNOWN>
                field_8: 0
                field_24: v16
                field_32: v3
            };
        }
    }
    return struct2 {
        field_0: 4
        field_1: v2 as i8
    };
}
