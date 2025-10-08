fn uu_chown::parse_gid(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> void {
    let v0: u128;  // [bp-0xc8]
    let v1: u64;  // [bp-0xb8]
    let v2: u32;  // [bp-0xb0]
    let v3: Result<struct32, struct16>;  // [bp-0x90]
    let v4: u64;  // [bp-0x90]
    let v5: void*;  // [bp-0x60]
    let v6: u64;  // [bp-0x58]
    let v7: u64;  // [bp-0x50]
    let v8: u8;  // [bp-0x48]
    let v9: alloc::string::String;  // [bp-0x40]
    let v13: core::result::Result<u32, core::num::error::ParseIntError>;  // rax:rax

    if !a2 {
        return struct16 {
            field_0: 0
            field_8: 0
        };
    }
    v3 = <uucore::features::entries::Group as uucore::features::entries::Locate<&str>>::locate(a1, a2);
    if !((((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char) {
        return struct16 {
            field_0: 0
            field_8: 1
            field_12: *((&v3 as &char + 24) as &i32)
        };
    }
    v13 = core::num::<impl u32>::from_ascii_radix(a1, a2, a2) as u128;
    if !(v13 as u8 & 1) {
        return struct16 {
            field_0: 0
            field_8: 1
            field_12: (v13 >> 32) as u32
        };
    }
    v5 = 0;
    v6 = a3;
    v7 = a4;
    v8 = 1;
    v9 = format!("invalid group: {}", &v5);
    v2 = 1;
    v0 = *(&v9.vec.buf.inner.cap as &i128);
    v1 = v9.vec.len;
    return struct16 {
        field_0: alloc::boxed::Box<T>::new(&v0 as u384) as u64
        field_8: &g_4f5f38
    };
}
