fn uu_df::filesystem::Filesystem::from_path(a0: &struct232, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [sp-0xe8], Other Possible Types: unsigned long
    let v1: i64;  // [sp-0xe0]
    let v2: struct24;  // [sp-0xd0]
    let v3: struct146;  // [sp-0xb8]
    let v5: i64;  // rdx
    let v6: i64;  // rax

    v0 = <&T as core::convert::AsRef<U>>::as_ref(a3);
    v1 = v5;
    v2 = <T as alloc::string::ToString>::to_string(&v0);
    v6 = uu_df::filesystem::mount_info_from_path(a1, a2, a3);
    if v6 {
        v3 = <uucore::features::fsext::MountInfo as core::clone::Clone>::clone(v6);
        v0 = v2;
        uu_df::filesystem::Filesystem::new(a0, &v3, &v0);
        return a0;
    }
    return a0;
}
