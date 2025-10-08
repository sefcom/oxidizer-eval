fn uu_chroot::name_to_uid(a0: i64, a1: u64, a2: u64) -> void {
    let v0: u32;  // [bp-0xb0]
    let v1: u32;  // [bp-0xac]
    let v2: u64;  // [bp-0xa8]
    let v3: Result<struct128, struct16>;  // [bp-0xa0]
    let v4: u64;  // [bp-0xa0]
    let v8: u32;  // ecx
    let v9: core::result::Result<u32, core::num::error::ParseIntError>;  // rax:rax

    v3 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate(a1, a2);
    if !((((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char) {
        v1 = *((&v3 as &char + 120) as &i32);
        v0 = 0;
        return struct8 {
            field_0: v8
            field_4: *((&v3 as &char + 120) as &i32)
        };
    }
    v2 = *((&v3 as &char + 8) as &i64);
    v0 = 1;
    v9 = core::num::<impl u32>::from_ascii_radix(a1, a2, a2) as u128;
    *((a0 + 4) as &u32) = (v9 >> 32) as u32;
}
