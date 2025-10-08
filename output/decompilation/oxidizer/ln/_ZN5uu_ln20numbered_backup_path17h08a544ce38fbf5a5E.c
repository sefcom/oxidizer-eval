fn uu_ln::numbered_backup_path(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: Result<struct24, struct16>;  // [bp-0x130]
    let v1: i64;  // [bp-0x128]
    let v2: u64;  // [bp-0x118]
    let v3: u64;  // [bp-0x110]
    let v4: struct24;  // [bp-0xf8]
    let v5: u64;  // [bp-0xf0]
    let v6: u64;  // [bp-0xe8]
    let v7: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v9: struct24;  // [bp-0x120]

    v0 = 1;
    do {
        vvar_134{stack -248} = struct24 OrderedDict([(0, 𝜙@64b [((4615091, None), vvar_107{stack -248}), ((4614864, None), None)]), (16, 𝜙@64b [((4615091, None), vvar_110{stack -232}), ((4614864, None), None)])])
        format!(".~{}~", &v0);
        v9 = uu_ln::simple_backup_path(a1, a2, v5, v6);
        v7 = std::fs::metadata(v2, v3);
    } while (v7 as i64 != 2);
    *((v1 + 16) as &u64) = v3;
    *(v1 as &u128) = v9.field_0;
    return v3;
}
