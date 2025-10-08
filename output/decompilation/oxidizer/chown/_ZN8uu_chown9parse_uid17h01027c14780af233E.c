fn uu_chown::parse_uid(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u32) -> int {
    let v0: struct20;  // [bp-0x128], Other Possible Types: u128
    let v1: u64;  // [bp-0x120]
    let v2: u64;  // [bp-0x118]
    let v3: u32;  // [bp-0x110]
    let v4: void*;  // [bp-0xe8]
    let v5: u64;  // [bp-0xe0]
    let v6: u64;  // [bp-0xd8]
    let v7: u8;  // [bp-0xd0]
    let v8: alloc::string::String;  // [bp-0xc8]
    let v9: u64;  // [bp-0xb8]
    let v10: Result<struct128, struct16>;  // [bp-0xb0]
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: void*;  // rax
    let v15: u64;  // rdx
    let v18: core::result::Result<u32, core::num::error::ParseIntError>;  // rax:rax

    if !a2 {
        return struct16 {
            field_0: 0
            field_8: 0
        };
    }
    v10 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate(a1, a2);
    if !((((0 ^ v10 as i64) & (0 ^ -(v10 as i64))) >> 63) as char) {
        return struct16 {
            field_0: 0
            field_8: 1
            field_12: *((&v10 as &char + 120) as &i32)
        };
    }
    if <char as core::str::pattern::Pattern>::is_contained_in(46, a3, a4) && !a5 != 58 && !<char as core::str::pattern::Pattern>::is_contained_in(58, a3, a4) {
        v0 = uu_chown::parse_spec(a3, a4, 46);
        if v0.field_0 != 1 {
            *((a0 + 8) as &i64) = *(&(&v0.field_0)[1] as &i64);
            v14 = 0;
        }
        v12 = v1;
        return struct16 {
            field_0: v13
            field_8: v2
        };
    }
    v18 = core::num::<impl u32>::from_ascii_radix(a1, a2, v15) as u128;
    if !(v18 as u8 & 1) {
        return struct16 {
            field_0: 0
            field_8: 1
            field_12: (v18 >> 32) as u32
        };
    }
    v4 = 0;
    v5 = a3;
    v6 = a4;
    v7 = 1;
    v8 = format!("invalid user: {}", &v4);
    v3 = 1;
    v0 = *(&v8.vec.buf.inner.cap as &i128);
    v2 = v9;
    return struct16 {
        field_0: alloc::boxed::Box<T>::new(&v0 as u384) as u64
        field_8: &g_4f5f38
    };
}
