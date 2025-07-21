fn uu_join::parse_separator(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: core::slice::iter::Iter<u8>;  // [bp-0xa0]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x90], Other Possible Types: struct24, u64
    let v2: core::fmt::rt::Argument;  // [bp-0x88], Other Possible Types: u64
    let v3: core::fmt::rt::Argument;  // [bp-0x80], Other Possible Types: struct_0 *
    let v4: u64;  // [bp-0x78]
    let v5: void*;  // [bp-0x70]
    let v6: core::fmt::Arguments;  // [bp-0x60]
    let v7: core::fmt::rt::Argument;  // [bp-0x58]
    let v8: struct8;  // [bp-0x50]
    let v9: u64;  // [bp-0x48]
    let v10: u8;  // [bp-0x40]
    let v14: u64;  // r14
    let v16: u32;  // edx
    let v18: u64;  // rdx
    let v19: u64;  // rdx
    let v20: core::option::Option<u32>;  // rax:rax
    let v21: core::option::Option<u32>;  // rax:rax

    if a2 == 1 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: *(a1 as &i8) as u8 as u64 as u8
        };
    } else if !a2 {
        return struct8 {
            field_0: 9223372036854775810
        };
    } else {
        v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
        match v1 {
            Err(_) => {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("non-UTF-8 multi-byte tab");
                return struct24 {
                    field_0: 9223372036854775812
                    field_8: alloc::boxed::Box<T>::new(&v1)
                    field_16: &g_5352b8
                };
            },
            Ok(_) => {
                v14 = v2;
                v6 = v14;
                v7 = v3;
                v0 = core::slice::iter::Iter<u8> {
                    ptr: core::ptr::non_null::NonNull<u8> {
                        pointer: v14
                    }
                    end_or_len: v14 + v7
                    _marker: core::marker::PhantomData<&u8> { }
                };
                v21 = core::str::validations::next_code_point(&v0) as u128;
                if let Some(_) = v21 {
                    if v16 != 0x110000 {
                        v20 = core::str::validations::next_code_point(&v0) as u128;
                        if !v20 as u32 {
                            return <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a0, v14, v7) as u64;
                        }
                        if v16 == 92 && v18 as u32 == 48 {
                            return struct16 {
                                field_0: 0x8000000000000000
                                field_8: 0
                            };
                        }
                        v8 = &v6;
                        v9 = <&T as core::fmt::Display>::fmt;
                        v1 = "multi-character tab ";
                        v2 = 1;
                        v5 = 0;
                        v3 = &v8;
                        v4 = 1;
                        v1 = core::option::Option<T>::map_or_else(v19);
                        return struct24 {
                            field_0: 9223372036854775812
                            field_8: alloc::boxed::Box<T>::new(&v10)
                            field_16: &g_5352b8
                        };
                    }
                }
                core::option::expect_failed("valid string with at least one byte"); /* do not return */
            },
        }
    }
}
