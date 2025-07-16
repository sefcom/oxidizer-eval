fn uu_basename::basename(a0: &struct24, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: std::sys::os_str::bytes::Buf;  // [bp-0xf0]
    let v1: u64;  // [bp-0xe8]
    let v2: u64;  // [bp-0xe0]
    let v3: struct24;  // [sp-0xd8], Other Possible Types: u192
    let v4: std::path::Components;  // [bp-0xd8]
    let v5: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xd8]
    let v6: std::sys::os_str::bytes::Buf;  // [bp-0xd0]
    let v7: u8;  // [bp-0x60]
    let v9: u64;  // rax
    let v10: u64;  // rdx
    let v11: u64;  // rdx
    let v12: u64;  // rax
    let v14: void*;  // r12
    let v15: u64;  // r13
    let v16: core::option::Option<&str>;  // rax
    let v17: u64;  // rdx
    let v18: void*;  // rax
    let v19: &std::ffi::os_str::OsStr;  // rax:rdx

    v9 = core::str::<impl str>::trim_end_matches(a1, a2);
    if !v10 {
        v11 = a2;
        if !(v10) {
            goto LABEL_4ab2c3;
        }
LABEL_4ab2c2:
        v12 = v9;
    } else {
        v11 = v10;
        if v10 {
            goto LABEL_4ab2c2;
        }
LABEL_4ab2c3:
        v12 = a1;
    }
    v0 = std::sys::os_str::bytes::Slice::to_owned(v12, v11);
    v4 = std::path::Path::components(v1, v2);
    v7 = 10;
    core::iter::traits::iterator::Iterator::fold(&v4 as u8, &v4, &v7);
    if &v4 as u8 == "\n" {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    v19 = std::path::Component::as_os_str(&v4 as u8);
    v5 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v19.data_ptr, a2);
    match v5 {
        Err(_) => {
            core::option::unwrap_failed(); /* do not return */
        },
        Ok(_) => {
            v14 = v6;
            v15 = *((&v5 as &char + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, a3, a4) as i8 {
                v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(v14, v15);
            } else {
                v16 = <&str as core::str::pattern::Pattern>::strip_suffix_of(a3, a4, v14, v15) as u64;
                match v16 {
                    None => {
                        v17 = v15;
                        if !(v16) {
                            goto LABEL_4ab399;
                        }
LABEL_4ab398:
                        v18 = v16;
                    },
                    Some(_) => {
                        v17 = v10;
                        if let Some(_) = v16 {
                            goto LABEL_4ab398;
                        }
LABEL_4ab399:
                        v18 = v14;
                    },
                }
                v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(v18, v17);
            }
            return struct24 {
                field_0: v3 as i128
                field_16: *((&v3 as &char + 16) as &i64)
            };
        },
    }
}
