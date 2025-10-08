fn zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::deserialize(a0: i64, a1: u32, a2: u64) -> long long {
    let v0: u64;  // [bp-0xc0]
    let v1: u32;  // [bp-0xb4]
    let v2: Result<struct24, struct16>;  // [bp-0xb0], Other Possible Types: u64
    let v3: struct12;  // [bp-0xb0]
    let v4: u32;  // [bp-0xac]
    let v5: u64;  // [bp-0xa8]
    let v6: i64;  // [bp-0xa0], Other Possible Types: u64
    let v7: u128;  // [bp-0x98]
    let v8: void*;  // [bp-0x90]
    let v9: Result<struct24, struct16>;  // [bp-0x80], Other Possible Types: struct_0 *
    let v10: u64;  // [bp-0x78]
    let v11: u64;  // [bp-0x70]
    let v12: u64;  // [bp-0x68]
    let v13: struct32;  // [bp-0x60]
    let v14: u64;  // [bp-0x58]
    let v15: u64;  // [bp-0x50]
    let v16: u64;  // [bp-0x48]
    let v17: struct24;  // [bp-0x40]
    let v19: u64;  // rdx
    let v20: u64;  // rax
    let v21: u64;  // rax
    let v22: u64;  // rax

    v0 = 0x2000000;
    v20 = core::result::Result<T,E>::unwrap(bincode::internal::serialized_size(&v0), v19);
    if a2 >= v20 {
        v13 = core::slice::<impl [T]>::split_at_unchecked(a1, a2, v20);
        v3 = bincode::internal::deserialize_seed(v13.field_0, v14, &v0);
        if v3.field_0 != 1 {
            if v4 == 3 {
                v2 = bincode::internal::deserialize_seed(v15, v16);
                v9 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v2);
                v21 = v10;
                if let Ok(_) = v9 {
                    return struct24 {
                        field_0: v9 as i64
                        field_8: v10
                        field_16: v11
                    };
                }
            } else {
                v1 = v4;
                v9 = &v1;
                v10 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                v11 = &g_418e14;
                v12 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                *(&v2 as &&str) = "unsupported version (got ";
                v5 = 3;
                v8 = 0;
                v6 = &v9;
                v7 = 2;
                v17 = core::option::Option<T>::map_or_else(None, a2, &v3);
                v21 = anyhow::error::<impl anyhow::Error>::msg(&v17);
            }
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v21
            };
        } else {
            v22 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v5);
        }
    } else {
        *(&v2 as &&str) = "could not deserialize database: corrupted data";
        v5 = 1;
        v6 = 8;
        v7 = 0;
        v22 = anyhow::__private::format_err(&v2);
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v22
    };
}
