fn uu_test::files(a0: &Option<struct1>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct12;  // [sp-0x258], Other Possible Types: i96, struct16, struct25, Result<struct16, struct10>
    let v1: i64;  // [sp-0x250]
    let v2: i8;  // [bp-0x248]
    let v3: i8;  // [bp-0x238]
    let v4: i8;  // [bp-0x230]
    let v5: i8;  // [bp-0x228]
    let v6: i8;  // [bp-0x218]
    let v7: i8;  // [bp-0x208]
    let v8: i8;  // [bp-0x1f8]
    let v9: i8;  // [bp-0x1e8]
    let v10: i8;  // [bp-0x1d8]
    let v11: i8;  // [bp-0x1c8]
    let v12: i8;  // [bp-0x1b8]
    let v13: i64;  // [sp-0x1a8]
    let v14: i64;  // [sp-0x1a0]
    let v15: struct16;  // [sp-0x198], Other Possible Types: i128
    let v16: i128;  // [sp-0x188]
    let v17: i64;  // [sp-0x178]
    let v18: i64;  // [sp-0x170]
    let v19: i128;  // [sp-0x168]
    let v20: i128;  // [sp-0x158]
    let v21: i128;  // [sp-0x148]
    let v22: i128;  // [sp-0x138]
    let v23: i128;  // [sp-0x128]
    let v24: i128;  // [sp-0x118]
    let v25: i128;  // [sp-0x108]
    let v26: i128;  // [sp-0xf8]
    let v27: struct16;  // [sp-0xe8], Other Possible Types: i128
    let v28: i128;  // [sp-0xd8]
    let v29: i64;  // [sp-0xc8]
    let v30: i64;  // [sp-0xc0]
    let v31: i128;  // [sp-0xb8]
    let v32: i128;  // [sp-0xa8]
    let v33: i128;  // [sp-0x98]
    let v34: i128;  // [sp-0x88]
    let v35: i128;  // [sp-0x78]
    let v36: i128;  // [sp-0x68]
    let v37: i128;  // [sp-0x58]
    let v38: i128;  // [sp-0x48]
    let v39: i64;  // [bp+0x8]
    let v40: i64;  // rax
    let v41: i64;  // r15
    let v42: i64;  // r12
    let v45: i8;  // cl

    v0 = std::fs::metadata(a1, a2);
    return Some(struct1 {
        field_0: 0
    });
    v16 = v2;
    v15 = v0;
    v19 = v5;
    v20 = v6;
    v21 = v7;
    v22 = v8;
    v23 = v9;
    v24 = v10;
    v25 = v11;
    v26 = v12;
    v17 = v3;
    v18 = v4;
    v0 = std::fs::metadata(a3, a4);
    return Some(struct1 {
        field_0: 0
    });
    v28 = v2;
    v27 = v0;
    v31 = v5;
    v32 = v6;
    v33 = v7;
    v34 = v8;
    v35 = v9;
    v36 = v10;
    v37 = v11;
    v38 = v12;
    v29 = v3;
    v30 = v4;
    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a5, v39);
    if v0 {
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
    v14 = v1;
    v13 = v2;
    v40 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v13, "-ef");
    if v40 {
        return Some(struct1 {
            field_0: (!(v17 ^ v29) && !(v18 ^ v30)) as u8 as u8
        });
    }
    v41 = v14;
    v42 = v13;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v41, v42, "-nt") as i8 {
        v0 = std::fs::Metadata::modified(&v15);
        v0 = std::fs::Metadata::modified(&v27);
        v45 = (core::result::Result<T,E>::unwrap(&v0, "src/uu/test/src/test.rs") < core::result::Result<T,E>::unwrap(&v0, "src/uu/test/src/test.rs") ? 255 : (-0x100 | core::result::Result<T,E>::unwrap(&v0, "src/uu/test/src/test.rs") != core::result::Result<T,E>::unwrap(&v0, "src/uu/test/src/test.rs")) & 4294967295 & 4294967295);
        return Some(struct1 {
            field_0: (!(v17 ^ v29) && !(v18 ^ v30)) as u8 as u8
        });
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v41, v42, "-ot") as i8 {
        v0 = std::fs::Metadata::modified(&v15);
        v0 = std::fs::Metadata::modified(&v27);
        v40 = core::result::Result<T,E>::unwrap(&v0, "src/uu/test/src/test.rs");
        if core::result::Result<T,E>::unwrap(&v0, "src/uu/test/src/test.rs") != v40 {
            return Some(struct1 {
                field_0: (!(v17 ^ v29) && !(v18 ^ v30)) as u8 as u8
            });
        }
        return Some(struct1 {
            field_0: (!(v17 ^ v29) && !(v18 ^ v30)) as u8 as u8
        });
    }
}
