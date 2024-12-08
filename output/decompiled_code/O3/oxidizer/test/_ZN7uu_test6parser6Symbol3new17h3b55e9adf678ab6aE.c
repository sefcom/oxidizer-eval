fn uu_test::parser::Symbol::new(a0: &struct_0, a1: &struct_1) -> u64 {
    let v0: u128;  // [sp-0x58]
    let v1: u64;  // [sp-0x48]
    let v2: u128;  // [sp-0x38], Other Possible Types: Result<struct16, struct10>
    let v3: i8;  // [bp-0x28]
    let v5: u64;  // r14
    let v6: u64;  // r15

    if a1->field_0 == 0x8000000000000000 {
        return struct40 {
            field_0: 5
            field_8: 1
            field_16: v0
            field_32: v1
        };
    }
    v0 = *(&a1->field_0 as &i128);
    v1 = a1->field_10;
    v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((&v0 as &char + 8) as &i64), a1->field_10);
    match v2 {
        Ok(_) => {
            v5 = *((&v2 as &char + 8) as &i64);
            v6 = v3;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "(") as i8 {
                return struct8 {
                    field_0: 0
                };
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "!") as i8 {
                return struct40 {
                    field_0: 5
                    field_8: 1
                    field_16: v0
                    field_32: v1
                };
            } else if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-a") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-o") as i8) {
                return struct40 {
                    field_0: 5
                    field_8: 1
                    field_16: v0
                    field_32: v1
                };
            } else if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "=") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "==") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "!=") as i8) {
                return struct40 {
                    field_0: 5
                    field_8: 1
                    field_16: v0
                    field_32: v1
                };
            } else if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-eq") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-ge") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-gt") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-le") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-lt") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-ne") as i8) {
                return struct40 {
                    field_0: 5
                    field_8: 1
                    field_16: v0
                    field_32: v1
                };
            } else if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-ef") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-nt") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-ot") as i8) {
                return struct40 {
                    field_0: 5
                    field_8: 1
                    field_16: v0
                    field_32: v1
                };
            } else if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-n") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-z") as i8) {
                return struct40 {
                    field_0: 5
                    field_8: 1
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
        },
        Err(_) => {
            *((&a0->field_10 as &char + 8) as &u64) = v1;
            a0->field_8 = v0;
            a0->field_0 = 3 as u64;
        },
    }
    return struct40 {
        field_0: 5
        field_8: 1
        field_16: v0
        field_32: v1
    };
}
