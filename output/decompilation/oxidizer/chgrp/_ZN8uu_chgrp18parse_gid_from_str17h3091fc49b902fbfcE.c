fn uu_chgrp::parse_gid_from_str(a0: u64, a1: u64, a2: u64) -> int {
    let v0: Result<struct32, struct16>;  // [bp-0xa8], Other Possible Types: u64
    let v1: u64;  // [bp-0xa8]
    let v2: u32;  // [bp-0xa8]
    let v3: u64;  // [bp-0xa0]
    let v4: i64;  // [bp-0x98]
    let v5: u64;  // [bp-0x90]
    let v6: void*;  // [bp-0x88]
    let v7: alloc::string::String;  // [bp-0x78], Other Possible Types: core::fmt::rt::Argument
    let v8: u64;  // [bp-0x70]
    let v9: u64;  // [bp-0x68]
    let v10: core::fmt::Arguments;  // [bp-0x60]
    let v11: core::fmt::rt::Argument;  // [bp-0x58]
    let v12: struct16;  // [bp-0x50]
    let v15: u64;  // rcx
    let v16: core::option::Option<&str>;  // rax
    let v17: u64;  // rdx
    let v18: core::result::Result<u32, core::num::error::ParseIntError>;  // rax:rax
    let v19: &mut [u8];  // rax:rdx
    let v20: core::result::Result<u32, core::num::error::ParseIntError>;  // rax:rax

    v10 = a1;
    v11 = a2;
    v2 = 0;
    v19 = core::char::methods::encode_utf8_raw(&v2 as u32, a1, a2);
    v16 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v19.data_ptr, a1, a2, v15) as u64;
    match v16 {
        Some(_) => {
            v12 = struct16 {
                field_0: v16
                field_8: v17
            };
            v18 = core::num::<impl u32>::from_ascii_radix(v16, v17, a2 as u32) as u128;
            if !(v18 as u8 & 1) {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: (v18 >> 32) as u32
                };
            }
            v7 = &v12;
            v8 = <&T as core::fmt::Display>::fmt;
            v0 = "invalid group id: '";
            v3 = 2;
            v6 = 0;
            v4 = &v7;
            v5 = 1;
            core::option::Option<T>::map_or_else(a0, &v0);
            return;
        },
        None => {
            v0 = <uucore::features::entries::Group as uucore::features::entries::Locate<&str>>::locate(a1, a2);
            if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: *((&v0 as &char + 24) as &i32)
                };
            }
            v20 = core::num::<impl u32>::from_ascii_radix(a1, a2, a2 as u32) as u128;
            if !(v20 as u8 & 1) {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: (v20 >> 32) as u32
                };
            }
            v7 = format!("invalid group: '{}'", &v10);
            return struct24 {
                field_0: *(&v7.vec.buf.inner.cap as &i128)
                field_16: v9
            };
        },
    }
}
