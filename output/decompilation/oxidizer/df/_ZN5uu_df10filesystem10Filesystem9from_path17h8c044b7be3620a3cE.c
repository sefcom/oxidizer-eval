fn uu_df::filesystem::Filesystem::from_path(a0: u64, a1: u64, a2: u64, a3: &u64) -> int {
    let v0: struct24;  // [bp-0x90]
    let v2: u64;  // [bp-0x80]
    let v3: struct9;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: struct16;  // [bp-0x68], Other Possible Types: u128
    let v6: u64;  // [bp-0x58]
    let v7: u64;  // [bp-0x50]
    let v8: u64;  // [bp-0x48]
    let v9: struct24;  // [bp-0x38]
    let v11: u64;  // rdx

    v5 = struct16 {
        field_0: <&T as core::convert::AsRef<U>>::as_ref(a3)
        field_8: v11
    };
    v0 = <T as alloc::string::SpecToString>::spec_to_string(&v5);
    v3 = uu_df::filesystem::mount_info_from_path(a1, a2, a3);
    v7 = a1;
    v8 = a2;
    v5 = v0.field_0;
    v6 = v2;
    if v3.field_0 != 1 {
        uu_df::filesystem::Filesystem::from_mount(a0, a1, a2, v4, &v9 as u128);
        return;
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: (&v3.field_0)[1]
    };
}
