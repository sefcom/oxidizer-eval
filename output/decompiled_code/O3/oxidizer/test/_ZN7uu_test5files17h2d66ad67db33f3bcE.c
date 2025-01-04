fn uu_test::files(a0: &Option<struct1>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i1408;  // [sp-0x258], Other Possible Types: struct12, Result<struct176, struct16>, struct25
    let v1: i64;  // [sp-0x250]
    let v2: i64;  // [sp-0x248]
    let v3: i64;  // [sp-0x1a8]
    let v4: i64;  // [sp-0x1a0]
    let v5: i128;  // [sp-0x198]
    let v6: i128;  // [sp-0x188]
    let v7: i64;  // [sp-0x178]
    let v8: i64;  // [sp-0x170]
    let v9: i128;  // [sp-0x168]
    let v10: i128;  // [sp-0x158]
    let v11: i128;  // [sp-0x148]
    let v12: i128;  // [sp-0x138]
    let v13: i128;  // [sp-0x128]
    let v14: i128;  // [sp-0x118]
    let v15: i128;  // [sp-0x108]
    let v16: i128;  // [sp-0xf8]
    let v17: i128;  // [sp-0xe8]
    let v18: i128;  // [sp-0xd8]
    let v19: i64;  // [sp-0xc8]
    let v20: i64;  // [sp-0xc0]
    let v21: i128;  // [sp-0xb8]
    let v22: i128;  // [sp-0xa8]
    let v23: i128;  // [sp-0x98]
    let v24: i128;  // [sp-0x88]
    let v25: i128;  // [sp-0x78]
    let v26: i128;  // [sp-0x68]
    let v27: i128;  // [sp-0x58]
    let v28: i128;  // [sp-0x48]
    let v29: i64;  // [bp+0x8]
    let v30: i64;  // rax
    let v31: i64;  // r15
    let v32: i64;  // r12
    let v35: i8;  // cl

    v0 = std::fs::metadata(a1, a2);
    match v0 {
        Ok(_) => {
            v6 = *((&v0 as &char + 16) as &i128);
            v5 = v0;
            v9 = *((&v0 as &char + 48) as &i128);
            v10 = *((&v0 as &char + 64) as &i128);
            v11 = *((&v0 as &char + 80) as &i128);
            v12 = *((&v0 as &char + 96) as &i128);
            v13 = *((&v0 as &char + 112) as &i128);
            v14 = *((&v0 as &char + 128) as &i128);
            v15 = *((&v0 as &char + 144) as &i128);
            v16 = *((&v0 as &char + 160) as &i128);
            v7 = *((&v0 as &char + 32) as &i64);
            v8 = *((&v0 as &char + 40) as &i64);
            v0 = std::fs::metadata(a3, a4);
            if v0 != 2 {
                v18 = *((&v0 as &char + 16) as &i128);
                v17 = v0;
                v21 = *((&v0 as &char + 48) as &i128);
                v22 = *((&v0 as &char + 64) as &i128);
                v23 = *((&v0 as &char + 80) as &i128);
                v24 = *((&v0 as &char + 96) as &i128);
                v25 = *((&v0 as &char + 112) as &i128);
                v26 = *((&v0 as &char + 128) as &i128);
                v27 = *((&v0 as &char + 144) as &i128);
                v28 = *((&v0 as &char + 160) as &i128);
                v19 = *((&v0 as &char + 32) as &i64);
                v20 = *((&v0 as &char + 40) as &i64);
                v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a5, v29);
                if v0 {
                    v0 = struct25 {
                        field_0: 1
                        field_8: a5
                        field_24: 1
                    };
                    v30 = <T as alloc::string::ToString>::to_string(a0 + 8, &v0);
                    *(a0 as &i64) = 4;
                    return v30;
                }
                v4 = v1;
                v3 = v2;
                v30 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v3, "-ef");
                if v30 as i8 {
                    return struct9 {
                        field_0: 7
                        field_8: (!(v7 ^ v19) && !(v8 ^ v20)) as u8 as u8
                    };
                }
                v31 = v4;
                v32 = v3;
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v31, v32, "-nt") as i8 {
                    v0 = std::fs::Metadata::modified(&v5);
                    v0 = std::fs::Metadata::modified(&v17);
                    v30 = 255;
                    v35 = (core::result::Result<T,E>::unwrap(&v0, "src/uu/test/src/test.rs") < core::result::Result<T,E>::unwrap(&v0, "src/uu/test/src/test.rs") ? 255 : ((-0x100 | (core::result::Result<T,E>::unwrap(&v0, "src/uu/test/src/test.rs") != core::result::Result<T,E>::unwrap(&v0, "src/uu/test/src/test.rs")) as u8 as u64) & 4294967295 & 4294967295) as u8);
                } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v31, v32, "-ot") as i8 {
                    v0 = std::fs::Metadata::modified(&v5);
                    v0 = std::fs::Metadata::modified(&v17);
                    v30 = core::result::Result<T,E>::unwrap(&v0, "src/uu/test/src/test.rs");
                } else {
                    v0 = struct25 {
                        field_0: 1
                        field_8: a5
                        field_24: 1
                    };
                    <T as alloc::string::ToString>::to_string(a0 + 8, &v0);
                    return struct8 {
                        field_0: 4
                    };
                }
                return struct9 {
                    field_0: 7
                    field_8: (!(v7 ^ v19) && !(v8 ^ v20)) as u8 as u8
                };
            }
        },
        Err(_) => {
            *((a0 + 8) as &i8) = 0;
            *(a0 as &i64) = 7;
        },
    }
    return v30;
}
