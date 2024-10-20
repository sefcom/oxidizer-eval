fn uu_join::State::finalize(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i128;  // [sp-0xc8]
    let v1: i64;  // [sp-0xb8]
    let v2: i384;  // [sp-0xa8], Other Possible Types: Enum, struct16
    let v3: i128;  // [bp-0x98]
    let v4: i128;  // [sp-0x88]
    let v5: i64;  // [sp-0x70]
    let v6: i128;  // [sp-0x68]
    let v7: i64;  // [sp-0x58]
    let v8: i128;  // [sp-0x50]
    let v9: i64;  // [sp-0x38]
    let v11: i64;  // rax
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i128;  // xmm0
    let v15: i128;  // xmm0
    let v16: i128;  // xmm0
    let v17: i256;  // ymm0
    let v18: i256;  // ymm0
    let v19: i256;  // ymm1
    let v20: i256;  // ymm2
    let v21: i64;  // rax
    let v22: i128;  // xmm0
    let v23: i128;  // xmm1
    let v24: i128;  // xmm2
    let v25: i64;  // rax
    let v26: i128;  // xmm0
    let v27: i128;  // xmm0
    let v28: i128;  // xmm0

    if !*((a0 + &g_10 as &u8) as &i64) {
        return 0;
    }
    if *((a0 + 89) as &i8) {
        v11 = uu_join::State::print_line(*((a0 + 64) as &i64), *((a0 + 88) as &i32), a1, *((a0 + 8) as &i64), a3);
        if v11 {
            v12 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
            return v12;
        }
    }
    v2 = uu_join::State::next_line(a0, a2);
    v13 = v2;
    v14 = *((&v2 as &char + 8) as &i128);
    v0 = v14;
    v1 = *((&v2 as &char + 24) as &i64);
    if v5 == 9223372036854775809 {
        v3 = v1;
        v2 = v0;
        v12 = __rust_alloc(24, 8);
        *((v12 + &g_10 as &u8) as &i64) = v1;
        *(v12 as &i128) = v0;
        return v12;
    }
    v15 = v4;
    v8 = v15;
    v16 = v0;
    vvar_46{reg 224} = ((((((vvar_146{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_145{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_161{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_163{reg 224}))
    v6 = v16;
    v7 = v1;
    v5 = v13;
    if v5 == 0x8000000000000000 {
        return 0;
    }
    v9 = 9223372036854775809;
    v5 = v5;
    do {
        v5 = v5;
        if *((a0 + 89) as &i8) {
            v21 = uu_join::State::print_line(*((a0 + 64) as &i64), *((a0 + 88) as &i32), a1, &v5, a3);
            if v21 {
                v12 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
                if v5 != 0x8000000000000000 {
                    return v12;
                }
                return v12;
            }
        }
        v22 = v5;
        v23 = *((&v6 as &char + 8) as &i128);
        vvar_47{reg 256} = ((vvar_47{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_203{reg 256}))
        v24 = v8;
        vvar_48{reg 288} = ((vvar_48{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_205{reg 288}))
        v4 = v24;
        v3 = v23;
        v2 = struct16 {
            field_0: v22
        };
        uu_join::State::reset(a0, &v2);
        v2 = uu_join::State::next_line(a0, a2);
        v25 = v2;
        v26 = *((&v2 as &char + 8) as &i128);
        v0 = v26;
        v1 = *((&v2 as &char + 24) as &i64);
        if v5 == v9 {
            v3 = v1;
            v2 = v0;
            v12 = __rust_alloc(24, 8);
            *((v12 + &g_10 as &u8) as &i64) = v3;
            *(v12 as &i128) = v0;
            return v12;
        }
        v27 = v4;
        v8 = v27;
        v7 = v1;
        v28 = v0;
        vvar_46{reg 224} = ((((((((vvar_46{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_201{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_218{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_224{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_227{reg 224}))
        v6 = v28;
        v5 = v25;
        v5 = v5;
    } while (v5 != 0x8000000000000000);
}
