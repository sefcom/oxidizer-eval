fn flealib::camera::save_camera_frames(a0: u64, a1: u32, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x1f4]
    let v1: u64;  // [bp-0x1e8]
    let v2: std::io::error::Error;  // [bp-0x1d8], Other Possible Types: struct20, u64
    let v3: u64;  // [bp-0x1d0]
    let v4: i64;  // [bp-0x1c8]
    let v5: u64;  // [bp-0x1c0]
    let v6: void*;  // [bp-0x1b8]
    let v7: u32;  // [bp-0x1a4]
    let v8: std::io::error::Error;  // [bp-0x1a0]
    let v9: u128;  // [bp-0x198]
    let v10: u64;  // [bp-0x188]
    let v11: u64;  // [bp-0x180]
    let v12: &mut [u8];  // [bp-0x178]
    let v13: Option<struct120>;  // [bp-0x170], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>, struct24, struct32, struct_0 *, u64
    let v14: std::fs::File;  // [bp-0x170]
    let v15: u64;  // [bp-0x170]
    let v16: void*;  // [bp-0x170], Other Possible Types: struct32
    let v17: u64;  // [bp-0x168]
    let v18: u64;  // [bp-0x160]
    let v19: u64;  // [bp-0x158]
    let v20: i64;  // [bp-0x150]
    let v21: u8;  // [bp-0x148]
    let v22: u64;  // [bp-0xb0]
    let v23: struct32;  // [bp-0xa8]
    let v24: struct120;  // [bp-0xa8]
    let v26: u32;  // ebx
    let v27: u64;  // rsi
    let v28: u32;  // r15d
    let v29: u64;  // r8
    let v31: u64;  // rbx
    let v32: u64;  // rbx
    let v33: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x1a8]
    let v34: alloc::string::String;  // [bp-0xc0]

    v11 = a2;
    v12 = a3;
    v13 = std::fs::metadata("/dev/video0");
    match v13 {
        Err(_) => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "Camera not found");
            return a0;
        },
        Ok(_) => {
            v16 = std::sync::mpmc::channel();
            v1 = *(&v16.field_16 as &i128);
            v2 = struct20 {
                field_0: *(&v16.field_0 as &i128)
                field_16: a1
            };
            v18 = 0x8000000000000000;
            v16 = 0;
            v21 = 0;
            v23 = std::thread::Builder::spawn_unchecked(&v16, &v2);
            v13 = core::result::Result<T,E>::expect(&v23);
            if a1 {
                do {
                    v28 = <u32 as core::iter::range::Step>::forward_unchecked(v26, v27);
                    v0 = v26;
                    v13 = std::sync::mpmc::Receiver<T>::recv(&v1, a2);
                    v24 = core::result::Result<T,E>::unwrap(&v13);
                    v13 = &v11;
                    v17 = <&T as core::fmt::Display>::fmt;
                    v18 = "frame-";
                    v19 = <&T as core::fmt::Display>::fmt;
                    v20 = &v0;
                    v21 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                    v2 = &g_b08418;
                    v3 = 4;
                    v6 = 0;
                    v4 = &v13;
                    v5 = 3;
                    v34 = core::option::Option<T>::map_or_else(&v2, a2, a3, v29);
                    v9 = *(&v34.vec.buf.inner.cap as &i128);
                    v10 = v22;
                    v33 = std::fs::File::create(&v9, a2);
                    if let Err(v2) = v33 {
                        v13 = <T as alloc::string::SpecToString>::spec_to_string(&v2);
                        v31 = a0;
                        return struct24 {
                            field_0: v13.field_0
                            field_16: "frame-"
                        };
                    }
                    v14 = v7;
                    core::result::Result<T,E>::unwrap(std::io::Write::write_all(&v14 as u64, *((v24.field_0 as i64 + 16) as &i64), *((&v24.field_96 as &char + 12) as &i32) as u32 as u64));
                    v26 = v28;
                    v13 = v15;
                } while (v28 < a1);
            }
            v32 = a0;
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
