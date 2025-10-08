fn zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open_dir(a1: &struct24) -> Result<struct64, struct8> {
    let a0: void*;  // rdi
    let v0: struct24;  // [bp-0xf8], Other Possible Types: u192
    let v1: struct24;  // [bp-0xf8]
    let v2: u64;  // [bp-0xf0]
    let v3: u64;  // [bp-0xe8]
    let v5: struct24;  // [bp-0xd8]
    let v6: struct24;  // [bp-0xd8]
    let v7: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0xc0], Other Possible Types: struct24
    let v8: struct16;  // [bp-0xa8], Other Possible Types: struct24, struct57
    let v9: struct24;  // [bp-0xa8]
    let v10: u128;  // [bp-0x88]
    let v11: Result<struct24, struct16>;  // [bp-0x60]
    let v12: u64;  // [bp-0x60]
    let v13: struct24;  // [bp-0x48]
    let v15: u64;  // rbx
    let v17: u64;  // rdx
    let v18: u64;  // rbp
    let v19: u64;  // rax
    let v20: iNone;  // xmm0
    let v21: iNone;  // xmm1
    let v22: &std::path::Path;  // rax:rdx

    v15 = *((a1 + 8) as &i64);
    v22 = std::path::<impl core::convert::AsRef<std::path::Path> for alloc::string::String>::as_ref(v15);
    v5 = std::path::Path::join(v22.data_ptr, v17, "db.zo");
    v7 = std::fs::canonicalize(&v5, v17);
    v9 = v6;
    v1 = core::result::Result<T,E>::unwrap_or(&v7, &v9);
    v11 = std::fs::read(&v1);
    if (((0 ^ v11 as i64) & (0 ^ -(v12))) >> 63) as char {
        v18 = *((&v11 as &char + 8) as &i64);
        if std::io::error::Error::kind(v18) as u8 {
            v8 = struct16 {
                field_0: 1
                field_8: v18
            };
            anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(a0, &v8, v2, v3);
            goto LABEL_491998;
        } else {
            v19 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(std::fs::create_dir_all(v22.data_ptr, v22.length), v22.data_ptr, v22.length);
            if v19 {
                *(&a0[8] as &u64) = v19;
                *(a0 as &i64) = 1;
LABEL_491998:
                core::mem::drop(v1.field_0, v2);
            } else {
                v13 = v0;
                v7 = struct24 {
                    field_0: 0
                    field_8: ""
                };
                v8 = zoxide::db::ouroboros_impl_database::Database::new(&v13, &v7);
                v20 = v8.field_0;
                v21 = v8.field_16;
                *(&a0[56] as &i128) = *(&v8.field_48 as &i128);
                *(&a0[40] as &u128) = v10;
                a0[24] = v21;
                a0[8] = v20;
                *(a0 as &i64) = 0;
            }
        }
    } else {
        v8 = v0;
        zoxide::db::ouroboros_impl_database::Database::try_new(a0, &v8, &v11);
    }
    core::mem::drop(*(a1 as &i64), v15);
    return;
}
