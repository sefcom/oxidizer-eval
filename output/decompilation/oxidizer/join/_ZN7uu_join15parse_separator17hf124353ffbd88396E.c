fn uu_join::parse_separator(a0: u64, a1: i64, a2: u64) -> long long {
    let v0: core::slice::iter::Iter<u8>;  // [bp-0xa0]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x90], Other Possible Types: struct24, struct40
    let v2: u64;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v5: u64;  // [bp-0x60]
    let v6: u64;  // [bp-0x58]
    let v7: i64;  // [bp-0x50]
    let v8: u64;  // [bp-0x48]
    let v9: struct24;  // [bp-0x40]
    let v12: u64;  // r14
    let v14: u32;  // edx
    let v17: core::option::Option<u32>;  // rax:rax
    let v18: core::option::Option<u32>;  // rax:rax

    if a2 == 1 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: *(a1 as &i8)
        };
    } else if !a2 {
        return struct8 {
            field_0: 9223372036854775810
        };
    } else {
        v1 = core::str::converts::from_utf8(a1, a2);
        match v1 {
            Err(_) => {
                v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("non-UTF-8 multi-byte tab");
                return struct24 {
                    field_0: 9223372036854775812
                    field_8: alloc::boxed::Box<T>::new(&v1) as u64
                    field_16: &g_4fe360
                };
            },
            Ok(_) => {
                v12 = v2;
                v5 = v12;
                v6 = v3;
                v0 = core::slice::iter::Iter<u8> {
                    ptr: core::ptr::non_null::NonNull<u8> {
                        pointer: v12
                    }
                    end_or_len: v12 + v6
                    _marker: core::marker::PhantomData<&u8> { }
                };
                v17 = core::str::validations::next_code_point(&v0) as u128;
                if let Some(_) = v17 {
                    if v14 != 0x110000 {
                        v18 = core::str::validations::next_code_point(&v0) as u128;
                        if !(v18 as u8 & 1) {
                            return <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a0, v12, v6) as u64;
                        } else if !(v14 ^ 92) && !(v14 ^ 48) {
                            return struct16 {
                                field_0: 0x8000000000000000
                                field_8: 0
                            };
                        } else {
                            v7 = &v5;
                            v8 = <&T as core::fmt::Display>::fmt;
                            v1 = struct40 {
                                field_0: "multi-character tab "
                                field_8: 1
                                field_16: &v7
                                field_24: ""
                            };
                            v9 = core::option::Option<T>::map_or_else(&v1);
                            return struct24 {
                                field_0: 9223372036854775812
                                field_8: alloc::boxed::Box<T>::new(&v9) as u64
                                field_16: &g_4fe360
                            };
                        }
                    }
                }
                core::option::expect_failed("valid string with at least one byte"); /* do not return */
            },
        }
    }
}
