fn uu_df::filesystem::Filesystem::from_mount(a1: i64, a2: i64, a3: i64, a4: i64) -> Result<struct232, struct9> {
    let a0: u64;  // rdi
    let v0: struct146;  // [bp-0x198]
    let v1: Option<struct232>;  // [bp-0x100]

    if uu_df::filesystem::is_over_mounted(a1, a2, a3) {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: 0
        };
    }
    v0 = <uucore::features::fsext::MountInfo as core::clone::Clone>::clone(a3);
    v1 = uu_df::filesystem::Filesystem::new(&v0, a4);
    if !((((0 ^ v1) & (0 ^ -(v1))) >> 63) as char) {
        memcpy(a0, &v1, 232);
        return;
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: 2
    };
}
