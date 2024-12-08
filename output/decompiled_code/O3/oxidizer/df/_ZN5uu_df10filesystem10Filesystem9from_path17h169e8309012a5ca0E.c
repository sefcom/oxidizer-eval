fn uu_df::filesystem::Filesystem::from_path(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xe8], Other Possible Types: struct24
    let v1: i64;  // [sp-0xe0]
    let v2: struct24;  // [sp-0xd0]
    let v3: i1168;  // [sp-0xb8], Other Possible Types: struct146
    let v5: i64;  // rdx
    let v6: i64;  // rcx
    let v7: i64;  // r8
    let v8: i64;  // r9
    let v9: i64;  // rax

    v0 = <&T as core::convert::AsRef<U>>::as_ref(a3);
    v1 = v5;
    v2 = <T as alloc::string::ToString>::to_string(&v0);
    v9 = uu_df::filesystem::mount_info_from_path(a1, a2, a3, v6, v7, v8);
    if !v9 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v3 = <uucore::features::fsext::MountInfo as core::clone::Clone>::clone(v9);
    v0 = struct24 {
        field_0: v2
        field_16: *((&v2 as &char + 16) as &i64)
    };
    uu_df::filesystem::Filesystem::new(a0, &v3, &v0);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
