fn uu_mktemp::make_temp_dir(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i264, a7: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x148], Other Possible Types: struct_0 *, u128
    let v1: u128;  // [bp-0x148]
    let v2: u64;  // [bp-0x140]
    let v3: i64;  // [bp-0x138], Other Possible Types: u64
    let v4: u128;  // [bp-0x130]
    let v5: i64;  // [bp-0x128]
    let v6: u64;  // [bp-0x120]
    let v7: i8;  // [bp-0x118]
    let v8: u128;  // [bp-0x110]
    let v9: u64;  // [bp-0x108]
    let v10: alloc::string::String;  // [bp-0x100]
    let v11: u64;  // [bp-0xf0]
    let v12: u64;  // [bp-0xe8]
    let v13: u64;  // [bp-0xe0]
    let v14: u64;  // [bp-0xd8]
    let v15: u64;  // [bp-0xd0]
    let v16: struct24;  // [bp-0xc8], Other Possible Types: u64
    let v17: u64;  // [bp-0xc0]
    let v18: i64;  // [bp-0xb8]
    let v19: u64;  // [bp-0xb0]
    let v20: void*;  // [bp-0xa8]
    let v21: struct24;  // [bp-0x98]
    let v22: u32;  // [bp-0x80]
    let v23: core::fmt::Arguments;  // [bp-0x78]
    let v24: core::fmt::rt::Argument;  // [bp-0x70]
    let v25: core::fmt::Arguments;  // [bp-0x68]
    let v26: core::fmt::rt::Argument;  // [bp-0x60]
    let v27: u64;  // [bp-0x58]
    let v28: alloc::string::String;  // [bp-0x50]
    let v29: u128;  // [bp-0x48]
    let v30: u64;  // [bp-0x38]
    let v31: u64;  // rax
    let v32: u64;  // rdx
    let v33: u64;  // rdx

    v12 = a3;
    v13 = a4;
    v14 = a6;
    v15 = a7;
    v28 = 0;
    v22 = 0;
    v23 = a3;
    v24 = a4;
    v27 = a5;
    v25 = a6;
    v26 = a7;
    v21 = tempfile::Builder::tempdir_in(&v22, a1, a2);
    if v21.field_16 as i8 != 2 {
        v0 = tempfile::dir::TempDir::into_path(&v21);
        v31 = std::fs::set_permissions(&v0, 448);
        if !v31 {
            return Ok(struct24 {
                field_0: v0.field_0
                field_16: v3
            });
        }
        return struct24 {
            field_0: 0x8000000000000000
            field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v31)
            field_16: v33
        };
    } else if std::io::error::Error::kind(v21.field_0 as i64) {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21.field_0 as i64)
            field_16: v32
        };
    } else {
        v10 = alloc::str::<impl str>::repeat("X", a5);
        v0 = &v12;
        v2 = <&T as core::fmt::Display>::fmt;
        v3 = &v10;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v5 = &v14;
        v6 = <&T as core::fmt::Display>::fmt;
        v16 = &g_41f4d8;
        v17 = 3;
        v20 = 0;
        v18 = &v0;
        v19 = 3;
        v16 = core::option::Option<T>::map_or_else(a2);
        v29 = *(&v7 as &i128);
        v30 = v9;
        std::path::Path::join(a1);
        v0 = v8;
        v1 = <T as alloc::string::ToString>::to_string(a2);
        <T as alloc::slice::hack::ConvertVec>::to_vec("directory", a3);
        v3 = v18;
        v1 = v16.field_0;
        v4 = *(&v10.vec.buf.cap as &i128);
        v6 = v11;
        return struct24 {
            field_0: 0x8000000000000000
            field_8: alloc::boxed::Box<T>::new(&v1 as u192)
            field_16: &g_536af0
        };
    }
}
