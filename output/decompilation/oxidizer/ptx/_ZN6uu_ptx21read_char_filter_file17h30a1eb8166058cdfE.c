fn uu_ptx::read_char_filter_file(a0: i64, a1: u64) -> int {
    let v0: struct24;  // [bp-0x60]
    let v1: Result<struct40, struct16>;  // [bp-0x48]
    let v2: struct48;  // [bp-0x48]
    let v3: u32;  // [bp-0x44]
    let v4: u64;  // [bp-0x40]
    let v5: u128;  // [bp-0x38]
    let v7: i64;  // rax
    let v8: u64;  // rax
    let v9: i64;  // r14
    let v10: u64;  // rdx
    let v11: iNone;  // xmm0

    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "break-file");
    v7 = clap_builder::parser::error::MatchesError::unwrap("break-file", &v1);
    if !v7 {
        core::option::expect_failed("parsing options failed!"); /* do not return */
    }
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v7 + 8) as &i64), *((v7 + 16) as &i64), "-") {
        v8 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
    } else {
        v1 = std::fs::File::open(v7);
        match v1 {
            Err(_) => {
                return struct16 {
                    field_0: 0
                    field_8: v4
                };
            },
            Ok(_) => {
                v8 = alloc::boxed::Box<T>::new(v3);
            },
        }
    }
    v0 = struct24 {
        field_0: 0
        field_8: ""
    };
    if !(*((v9 + 56) as &i64)(v8, &v0) as i8 & 1) {
        v2 = core::iter::traits::iterator::Iterator::collect(0x1, 1);
        v11 = v2.field_0;
        return struct48 {
            field_0: v11
            field_16: v5
            field_32: v2.field_32
        };
    }
    return struct16 {
        field_0: 0
        field_8: v10
    };
}
