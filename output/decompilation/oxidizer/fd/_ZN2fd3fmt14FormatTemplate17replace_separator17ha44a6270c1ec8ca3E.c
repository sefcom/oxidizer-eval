fn fd::fmt::FormatTemplate::replace_separator(a0: i64, a1: &u8, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: u64;  // [bp-0x148]
    let v1: u64;  // [bp-0x140]
    let v2: void*;  // [bp-0x138]
    let v3: i64;  // [bp-0x130]
    let v4: core::option::Option<std::path::Component>;  // [bp-0x128], Other Possible Types: struct64
    let v5: struct20;  // [bp-0x128]
    let v6: u8;  // [bp-0x128]
    let v10: u64;  // [bp-0xf8]
    let v11: u128;  // [bp-0xe8]
    let v12: &mut [u8];  // [bp-0xe0]
    let v13: u128;  // [bp-0xd8]
    let v14: u64;  // [bp-0xd0]
    let v15: iNone;  // [bp-0xc8]
    let v16: u64;  // [bp-0xb8]
    let v17: struct56;  // [bp-0xa8]
    let v22: struct64;  // [bp-0x70]
    let v24: u64;  // rdx
    let v25: u128;  // xmm1
    let v26: iNone;  // xmm2
    let v27: struct16;  // rax
    let v28: i64;  // rcx
    let v30: &mut [u8];  // rbx
    let v31: core::option::Option<&str>;  // r13

    if !a3 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: a1
            field_16: a2
        };
    }
    v0 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a2, 1, 1, "/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sys/os_str/bytes.rs");
    v1 = v24;
    v2 = 0;
    v5 = std::path::Path::components(a1, a2);
    v22 = v4;
    loop {
        v4 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v22);
        if &v4 == "\n" {
            break;
        }
        v25 = *((&v4 as &char + 16) as &i128);
        v26 = *((&v4 as &char + 32) as &i128);
        v11 = *(&v6 as &i128);
        v16 = v10;
        v15 = v26;
        v13 = v25;
        v27 = v11;
        v28 = v27 - 5;
        if v28 {
            if v28 != 1 {
                std::ffi::os_str::OsString::push(&v0, std::path::Component::as_os_str(&v11) as u64, a2);
                v17 = core::option::Option<T>::get_or_insert_with(&v22);
                if &v17 == "\n" {
                    continue;
                }
            }
            std::ffi::os_str::OsString::push(&v0, a3, a4);
        } else {
            if v27 as u8 == 4 {
                v30 = v14;
                v31 = v15 as i64;
                std::ffi::os_str::OsString::push(&v0, a3, a4);
                std::ffi::os_str::OsString::push(&v0, a3, a4);
                std::ffi::os_str::OsString::push(&v0, v12, v13 as i64);
                std::ffi::os_str::OsString::push(&v0, a3, a4);
            } else {
                v30 = std::path::Component::as_os_str(&v11) as u64;
            }
            std::ffi::os_str::OsString::push(&v0, v30, v24);
        }
    }
    *((v3 + 16) as &i64) = 0;
    *(v3 as &i128) = *(&v0 as &i128);
    return 0;
}
