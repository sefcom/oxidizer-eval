fn metal_crusher::fun::put_random_shit_on_desktop() -> int {
    let v0: u64;  // [bp-0x114]
    let v1: u64;  // [bp-0x110]
    let v2: alloc::string::String;  // [bp-0x108], Other Possible Types: u32
    let v3: u64;  // [bp-0xf8]
    let v4: u64;  // [bp-0xf0]
    let v5: u128;  // [bp-0xe8]
    let v6: u64;  // [bp-0xe0]
    let v7: i64;  // [bp-0xd8]
    let v8: u64;  // [bp-0xd0]
    let v9: Result<struct24, struct24>;  // [bp-0xc8]
    let v10: struct24;  // [bp-0xb0]
    let v11: u128;  // [bp-0xa8]
    let v12: u128;  // [bp-0x98]
    let v13: u64;  // [bp-0x88]
    let v14: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x78], Other Possible Types: u64
    let v15: u64;  // [bp-0x70]
    let v16: i64;  // [bp-0x68]
    let v17: u64;  // [bp-0x60]
    let v18: void*;  // [bp-0x58]
    let v19: std::path::PathBuf;  // [bp-0x48]
    let v21: u32;  // r15d
    let v22: u32;  // r15d
    let v23: u64;  // rdx
    let v24: u64;  // rcx
    let v25: u64;  // r8
    let v27: &str;  // r15d

    v9 = xdg_user::desktop();
    match v9 {
        Err(_) => {
            return;
        },
        Ok(_) => {
            v10 = core::result::Result<T,E>::unwrap(&v9);
            if v10.field_0 as i64 == 0x8000000000000000 {
                return;
            }
            v5 = v11;
            v4 = v10.field_0 as i64;
            v21 = 12;
            do {
                v22 = v21;
                v1 = rand::rngs::thread::rng();
                v0 = <rand_core::block::BlockRng<R> as rand_core::RngCore>::next_u32(v1 + 16) as u32;
                v7 = &v0;
                v8 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                v14 = "CRUSHER_";
                v15 = 1;
                v18 = 0;
                v16 = &v7;
                v17 = 1;
                v2 = core::option::Option<T>::map_or_else(&v14, v23, v24, v25);
                v12 = *(&v2.vec.buf.inner.cap as &i128);
                v13 = v3;
                v19 = std::path::Path::join(v5 as i64, v6, &v12, v25);
                v14 = std::fs::File::create(&v19, v23);
                v2 = core::result::Result<T,E>::unwrap(&v14) as u32;
                core::result::Result<T,E>::unwrap(std::io::Write::write_all(&v2, "METAL CRUSHER"));
                std::thread::sleep(None, 0x1dcd6500);
                v27 = v22 - 1;
                v21 = v27;
            } while (v22 != 1);
            return;
        },
    }
}
