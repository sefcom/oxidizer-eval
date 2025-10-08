fn meilitool::upgrade::v1_12::rebuild_field_distribution(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x119]
    let v1: struct24;  // [bp-0x118], Other Possible Types: u8
    let v2: Result<struct24, struct13>;  // [bp-0x118]
    let v3: u32;  // [bp-0x114]
    let v4: u64;  // [bp-0x110]
    let v5: u64;  // [bp-0x108]
    let v6: u32;  // [bp-0x104]
    let v7: core::fmt::rt::Argument;  // [bp-0x100]
    let v8: struct24;  // [bp-0xf8]
    let v9: u64;  // [bp-0xe8]
    let v10: void*;  // [bp-0xd8], Other Possible Types: struct32, struct96, u32
    let v11: Result<struct12, struct8>;  // [bp-0xd8], Other Possible Types: u128
    let v12: Result<struct12, struct8>;  // [bp-0xd8]
    let v13: Result<struct24, struct12>;  // [bp-0xd8]
    let v14: u32;  // [bp-0xd4]
    let v15: core::fmt::rt::Argument;  // [bp-0xd0], Other Possible Types: u64
    let v16: u32;  // [bp-0xc8]
    let v17: u32;  // [bp-0xc7]
    let v18: u32;  // [bp-0xc4]
    let v19: u64;  // [bp-0xc0]
    let v20: u32;  // [bp-0xb8]
    let v21: struct24;  // [bp-0x70]
    let v22: u64;  // [bp-0x68]
    let v23: u64;  // [bp-0x60]
    let v24: core::fmt::rt::Argument;  // [bp-0x50]
    let v25: u32;  // [bp-0x48]
    let v26: u128;  // [bp-0x40]
    let v27: i8;  // [bp-0x30]
    let v29: core::fmt::rt::Argument;  // rdx
    let v30: core::fmt::rt::Argument;  // r15
    let v31: u32;  // rcx
    let v32: u64;  // r8
    let v33: core::fmt::rt::Argument;  // rdx
    let v34: u32;  // eax
    let v35: u8;  // sil

    v21 = std::path::Path::join(a0, a1, "tasks");
    v10 = 0;
    v16 = 0;
    v20 = 0;
    v19 = 429496729601;
    heed::envs::env_open_options::EnvOpenOptions<T>::open(&v1, &v10 as u8, &v21);
    v30 = v29;
    if !(anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v1, v22, v23) & 1) {
        v7 = v29;
        v11 = heed::txn::RwTxn::new(&v7, v29.ty as u32, v31, v32);
        v1 = *(&v10.field_8 as &i128);
        v5 = v19;
        if v10.field_0 as i32 == 1 {
            v16 = v5;
            v11 = v1;
            v30 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v11);
        } else {
            v8 = v1;
            v11 = meilitool::try_opening_database(&v7, &v8);
            v30 = v15;
            if let Ok(_) = v11 {
                v12 = meilitool::try_opening_database(&v7, &v8);
                anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v1, &v12, v22, v23);
                v33 = v4;
                if !(v1 as i8 & 1) {
                    v24 = v33;
                    v25 = v5 as i32;
                    v13 = heed::databases::database::Database<KC,DC,C,CDUP>::len(v15, *((&v13 as &char + 16) as &i32) as u32 as u64, &v8);
                    if !(anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v13) as u8 & 1) {
                        v2 = heed::databases::database::Database<KC,DC,C,CDUP>::iter(v15, *((&v13 as &char + 16) as &i32) as u32 as u64, &v8);
                        v34 = v2 as i32;
                        if v34 == 5 {
                            core::iter::traits::iterator::Iterator::collect(&v26, v4, *((&v2 as &char + 16) as &i8) as u8 as u64);
                            v1 = <alloc::sync::Arc<T> as core::default::Default>::default();
                            v0 = 0;
                            v10 = struct96 {
                                field_0: *((&v2 as &char + 32) as &i128)
                                field_16: v9
                                field_24: v26
                                field_40: *(&v27 as &i64)
                                field_48: &v0
                                field_56: &v2
                                field_64: &vvar_155{reg 32}
                                field_72: a0
                                field_80: a1
                                field_88: &v24
                            };
                            v30 = std::thread::scoped::scope(&v10);
                            goto LABEL_75916f;
                        } else {
                            v35 = *((&v2 as &char + 16) as &i8);
                            v18 = v6;
                            v17 = *((&v2 as &char + 17) as &i32) as u32;
                            v10 = v34;
                            v14 = v3;
                            v15 = v4;
                            v16 = v35;
                            v33 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v10);
                        }
                    }
                }
                v30 = v33;
            }
        }
    }
LABEL_75916f:
    return v30;
}
