fn uu_df::filesystem::Filesystem::from_path(a1: i64, a2: i64, a3: i64) -> Option<struct232> {
    let a0: u64;  // rsi
    let v0: struct16;  // [bp-0xe8], Other Possible Types: struct24
    let v1: struct24;  // [bp-0xd0]
    let v2: struct24;  // [bp-0xd0]
    let v3: struct146;  // [bp-0xb8]
    let v5: u64;  // rdx
    let v6: void*;  // rax
    let v7: i64;  // rdi
    let v8: u64;  // rdi

    v0 = struct16 {
        field_0: <&T as core::convert::AsRef<U>>::as_ref(a2)
        field_8: v5
    };
    v1 = <T as alloc::string::ToString>::to_string(&v0);
    v6 = uu_df::filesystem::mount_info_from_path(a0, a1, a2);
    if !v6 {
        *(v7 as &i64) = 0x8000000000000000;
        return;
    }
    v3 = <uucore::features::fsext::MountInfo as core::clone::Clone>::clone(v6);
    v0 = v2;
    uu_df::filesystem::Filesystem::new(v8, &v3, &v0);
    return;
}
