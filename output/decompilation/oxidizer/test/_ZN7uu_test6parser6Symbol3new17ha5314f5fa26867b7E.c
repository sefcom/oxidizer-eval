fn uu_test::parser::Symbol::new(a1: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x58]
    let v1: u64;  // [bp-0x50]
    let v2: u64;  // [bp-0x48]
    let v3: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x38]
    let v4: void*;  // [bp-0x30]
    let v6: u32;  // r15d
    let v7: u64;  // r12

    if *(a1 as &i64) == 0x8000000000000000 {
        return struct8 {
            field_0: 6
        };
    }
    v0 = *(a1 as &i128);
    v2 = *((a1 + 16) as &i64);
    v3 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v1, *((a1 + 16) as &i64));
    if let Err(_) = v3 {
        return struct32 {
            field_0: 3
            field_8: v0
            field_24: v2
        };
    }
    v6 = *((&v3 as &char + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "(") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "!") as i8 {
        return struct8 {
            field_0: v7
        };
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-a") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-o") as i8 {
        return struct32 {
            field_0: 2
            field_8: v0
            field_24: v2
        };
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "=") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "==") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "!=") as i8 {
        return struct40 {
            field_0: 4
            field_8: 0
            field_16: v0
            field_32: v2
        };
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-eq") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-ge") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-gt") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-le") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-lt") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-ne") as i8 {
        return struct40 {
            field_0: 4
            field_8: 1
            field_16: v0
            field_32: v2
        };
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-ef") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-nt") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-ot") as i8 {
        return struct40 {
            field_0: 4
            field_8: 2
            field_16: v0
            field_32: v2
        };
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-n") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "-z") as i8 {
        return struct40 {
            field_0: 5
            field_8: 0
            field_16: v0
            field_32: v2
        };
    } else if ... {
        return struct40 {
            field_0: 5
            field_8: 1
            field_16: v0
            field_32: v2
        };
    }
    return struct32 {
        field_0: 3
        field_8: v0
        field_24: v2
    };
}
