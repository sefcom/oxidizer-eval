fn uu_df::filesystem::Filesystem::from_path(a1: i64, a2: i64, a3: i64) -> Option<struct232> {
    let a0: u64;  // rsi
    let v0: u128;  // [bp-0xe8]
    let v1: u64;  // [bp-0xd8]
    let v2: struct24;  // [bp-0xd0]
    let v3: u64;  // [bp-0xc0]
    let v4: struct146;  // [bp-0xb8]
    let v6: u64;  // rdx
    let v7: void*;  // rax
    let v8: i64;  // rdi
    let v9: u64;  // rdi

    v0 = struct16 {
        field_0: <&T as core::convert::AsRef<U>>::as_ref(a2)
        field_8: v6
    };
    v2 = <T as alloc::string::ToString>::to_string(&v0);
    v7 = uu_df::filesystem::mount_info_from_path(a0, a1, a2);
    if !v7 {
        *(v8 as &i64) = 0x8000000000000000;
        return;
    }
    v4 = <uucore::features::fsext::MountInfo as core::clone::Clone>::clone(v7);
    v1 = v3;
    memcpy(&v0, &v2, 16);
    uu_df::filesystem::Filesystem::new(v9, &v4, &v0);
    return;
}
