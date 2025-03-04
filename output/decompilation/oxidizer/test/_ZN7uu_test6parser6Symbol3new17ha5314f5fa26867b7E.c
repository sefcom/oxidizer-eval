fn uu_test::parser::Symbol::new(a0: &Option<Result<struct24, struct32>>, a1: void*) -> u64 {
    let v0: iNone;  // [sp-0x58]
    let v1: i64;  // [sp-0x48]
    let v2: Result<struct16, struct10>;  // [sp-0x38]
    let v4: i64;  // r14
    let v5: i64;  // r15

    if *(a1 as &i64) == 0x8000000000000000 {
        return struct8 {
            field_0: 6
        };
    }
    v0 = *(a1 as &i128);
    v1 = *((a1 + 16) as &i64);
    v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from((&v0)[8] as i64, *((a1 + 16) as &i64));
    match v2 {
        Err(_) => {
            return struct32 {
                field_0: 3
                field_8: v0
                field_24: v1
            };
        },
        Ok(_) => {
            v4 = *((&v2 as &char + 8) as &i64);
            v5 = *((&v2 as &char + 16) as &i64);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "(") as i8 {
                if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-a") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-o") as i8) {
                    return struct32 {
                        field_0: 2
                        field_8: v0
                        field_24: v1
                    };
                } else if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "=") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "==") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "!=") as i8) {
                    return struct40 {
                        field_0: 4
                        field_8: 0
                        field_16: v0
                        field_32: v1
                    };
                } else if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-eq") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-ge") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-gt") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-le") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-lt") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-ne") as i8) {
                    return struct40 {
                        field_0: 4
                        field_8: 1
                        field_16: v0
                        field_32: v1
                    };
                } else if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-ef") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-nt") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-ot") as i8) {
                    return struct40 {
                        field_0: 4
                        field_8: 2
                        field_16: v0
                        field_32: v1
                    };
                } else if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-n") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-z") as i8) {
                    return struct40 {
                        field_0: 5
                        field_8: 0
                        field_16: v0
                        field_32: v1
                    };
                } else if ... {
                    return struct40 {
                        field_0: 5
                        field_8: 1
                        field_16: v0
                        field_32: v1
                    };
                }
            }
        },
    }
}
