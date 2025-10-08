fn uu_chroot::supplemental_gids(a0: u32, a1: u32) -> void {
    let v0: Result<struct128, struct16>;  // [bp-0x108]
    let v1: struct128;  // [bp-0x108]
    let v2: struct128;  // [bp-0x88]

    v0 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(a1);
    if !((((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char) {
        v2 = v1;
        uucore::features::entries::Passwd::belongs_to(a0, &v2);
        return;
    }
    return struct24 {
        field_0: 0
        field_8: 4
        field_16: 0
    };
}
