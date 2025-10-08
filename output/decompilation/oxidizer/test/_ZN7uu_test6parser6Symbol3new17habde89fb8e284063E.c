fn uu_test::parser::Symbol::new(a0: i64, a1: i64) -> int {
    let v0: void*;  // [bp-0x50]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x48]
    let v2: void*;  // [bp-0x40]
    let v4: u64;  // rax
    let v5: u64;  // r14
    let v6: u64;  // r12
    let v7: u64;  // rbp
    let v8: u64;  // r13

    v4 = *(a1 as &i64);
    if (((0 ^ v4) & (0 ^ -(v4))) >> 63) as char {
        return struct8 {
            field_0: 6
        };
    }
    v5 = *((a1 + 8) as &i64);
    v6 = *((a1 + 16) as &i64);
    v1 = core::str::converts::from_utf8(v5, v6);
    match v1 {
        Err(_) => {
            return struct32 {
                field_0: 3
                field_8: v4
                field_16: v5
                field_24: v6
            };
        },
        Ok(_) => {
            v7 = *((&v1 as &char + 16) as &i64);
            v0 = v2;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v7, "(") as u8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "!") as u8 {
                return struct8 {
                    field_0: v8
                };
            }
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-a") as u8 {
                return struct32 {
                    field_0: 2
                    field_8: v4
                    field_16: v5
                    field_24: v6
                };
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-o") as u8 {
                return struct32 {
                    field_0: 2
                    field_8: v4
                    field_16: v5
                    field_24: v6
                };
            } else {
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "=") as u8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "==") as u8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "!=") as u8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "<") as u8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, ">") as u8 {
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-eq") as u8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-ge") as u8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-gt") as u8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-le") as u8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-lt") as u8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-ne") as u8 {
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-ef") as u8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-nt") as u8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-ot") as u8 {
                            return struct40 {
                                field_0: 4
                                field_8: 2
                                field_16: v4
                                field_24: v5
                                field_32: v6
                            };
                        }
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-n") as u8 {
                            *((a0 + 8) as &i64) = 0;
                        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v7, "-z") as u8 {
                            *((a0 + 8) as &i64) = 0;
                        } else {
                            if ... {
                                return struct40 {
                                    field_0: 5
                                    field_8: 1
                                    field_16: v4
                                    field_24: v5
                                    field_32: v6
                                };
                            }
                            return struct32 {
                                field_0: 3
                                field_8: v4
                                field_16: v5
                                field_24: v6
                            };
                            return struct40 {
                                field_0: 5
                                field_8: 1
                                field_16: v4
                                field_24: v5
                                field_32: v6
                            };
                        }
                        return struct40 {
                            field_0: 4
                            field_8: 2
                            field_16: v4
                            field_24: v5
                            field_32: v6
                        };
                    }
                    *((a0 + 8) as &i64) = 1;
                }
                *((a0 + 8) as &i64) = 0;
            }
            return struct8 {
                field_0: v8
            };
        },
    }
}
