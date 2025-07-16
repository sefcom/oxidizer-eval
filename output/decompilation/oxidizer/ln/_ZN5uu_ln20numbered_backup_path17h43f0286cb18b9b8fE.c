fn uu_ln::numbered_backup_path(a0: i64, a1: i64, a2: i32) -> long long {
    let v0: u64;  // [bp-0x138]
    let v1: i64;  // [bp-0x130]
    let v2: u64;  // [bp-0x128]
    let v3: u64;  // [bp-0x120]
    let v4: u64;  // [bp-0x118]
    let v5: iNone;  // [bp-0x100]
    let v6: u32;  // [bp-0xf0]
    let v7: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe8]
    let v8: u128;  // [bp-0xe8]
    let v9: u64;  // [bp-0xd8]
    let v11: u32;  // r9

    v0 = 1;
    do {
        vvar_139{stack -256} = struct24 OrderedDict({0: 𝜙@128b [((4960189, None), vvar_112{stack -256}), ((4959952, None), None)], 16: 𝜙@64b [((4960189, None), vvar_114{stack -240}), ((4959952, None), None)]})
        format!(".~{}~", &v0);
        v8 = v5 as i128;
        v9 = v6;
        uu_ln::simple_backup_path(a1, a2, 2, v6, v11);
        v7 = std::fs::metadata(v3, v4);
    } while (v7 as i64 != 2);
    *((v1 + 16) as &u64) = v4;
    *(v1 as &i128) = *(&v2 as &i128);
    return v4;
}
