fn starship::modules::utils::directory_nix::is_write_allowed(a1: &std::path::Path) -> Result<struct24, struct9> {
    let a0: i64;  // rdi
    let v0: struct92;  // [bp-0x110], Other Possible Types: u192
    let v1: struct40;  // [bp-0x100]
    let v2: struct24;  // [bp-0xf8]
    let v3: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd8]
    let v4: u64;  // [bp-0xd0]
    let v5: struct24;  // [bp-0xa0]
    let v6: struct24;  // [bp-0x9c]
    let v8: u64;  // rsi
    let v9: u64;  // rdx
    let v10: struct24;  // r12b
    let v11: Option<struct40>;  // eax
    let v12: struct40;  // r12b
    let v13: Option<struct48>;  // eax
    let v14: struct16;  // al

    v3 = std::fs::metadata(v8, v9);
    match v3 {
        Err(_) => {
            starship::modules::utils::directory_nix::is_write_allowed::{{closure}}(&v0, v4, v9);
            v2 = v0;
            return Ok(struct24 {
                field_0: v2.field_0
                field_16: v1
            });
        },
        Ok(_) => {
            v10 = v5 as u8;
            v11 = nix::unistd::Uid::effective();
            match v11 {
                None => {
                    *((a0 + 8) as &i8) = 1;
                },
                Some(_) => {
                    if v6 == v11 {
                        return struct16 {
                            field_0: 0x8000000000000000
                            field_8: v12
                        };
                    }
                    v13 = nix::unistd::Gid::effective();
                    if *((&v3 as &char + 64) as &i32) != v13 {
                        starship::modules::utils::directory_nix::get_supplementary_groups(&v3);
                        v0 = *((&v3 as &char + 64) as &i32);
                        v14 = <u32 as core::slice::cmp::SliceContains>::slice_contains(&v0, v4, *((&v3 as &char + 16) as &i64)) as u32 as u8;
                    }
                    return struct16 {
                        field_0: 0x8000000000000000
                        field_8: v12
                    };
                },
            }
        },
    }
}
