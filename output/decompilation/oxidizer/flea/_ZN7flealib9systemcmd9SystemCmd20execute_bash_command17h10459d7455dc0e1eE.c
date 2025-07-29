fn flealib::systemcmd::SystemCmd::execute_bash_command(a0: u64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: Option<struct120>;  // [bp-0x318], Other Possible Types: core::fmt::rt::Argument, struct24, struct_0 *, u64
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x310], Other Possible Types: u64
    let v2: i64;  // [bp-0x308]
    let v3: u64;  // [bp-0x300]
    let v4: struct20;  // [bp-0x2f8], Other Possible Types: struct_0 *, void*
    let v5: u64;  // [bp-0x2f0]
    let v6: struct136;  // [bp-0x2e8], Other Possible Types: u128
    let v7: struct20;  // [bp-0x2d8], Other Possible Types: struct_0 *, u64
    let v8: u64;  // [bp-0x2c8]
    let v9: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x2b8], Other Possible Types: alloc::borrow::Cow<str>
    let v10: &str;  // [bp-0x2b8]
    let v11: struct32;  // [bp-0x2b0]
    let v12: i64;  // [bp-0x2a8], Other Possible Types: u64
    let v13: u64;  // [bp-0x2a0]
    let v14: void*;  // [bp-0x298]
    let v15: struct24;  // [bp-0x288], Other Possible Types: struct40
    let v16: u64;  // [bp-0x280]
    let v17: struct120;  // [bp-0x278], Other Possible Types: u64
    let v18: struct24;  // [bp-0x268], Other Possible Types: u64
    let v19: u64;  // [bp-0x260]
    let v20: alloc::string::String;  // [bp-0x258]
    let v21: alloc::string::String;  // [bp-0x250]
    let v22: u64;  // [bp-0x240]
    let v24: u128;  // [bp-0x238]
    let v25: core::fmt::Arguments;  // [bp-0x230]
    let v26: u64;  // [bp-0x228]
    let v27: Result<struct24, struct24>;  // [bp-0x220]
    let v28: u64;  // [bp-0x210]
    let v29: u128;  // [bp-0x208]
    let v30: u64;  // [bp-0x1f8]
    let v31: i64;  // [bp-0x1f0]
    let v32: u64;  // [bp-0x1e8]
    let v33: core::result::Result<std::process::Output, std::io::error::Error>;  // [bp-0x1e0]
    let v34: Result<struct24, struct24>;  // [bp-0x1e0]
    let v35: struct24;  // [bp-0x1d8]
    let v36: struct120;  // [bp-0x1d0]
    let v37: struct24;  // [bp-0x1c0]
    let v38: u64;  // [bp-0x1b0]
    let v39: alloc::string::String;  // [bp-0x1a8]
    let v40: u64;  // [bp-0x198]
    let v41: alloc::string::String;  // [bp-0x190]
    let v42: u64;  // [bp-0x180]
    let v43: core::str::pattern::CharSearcher;  // [bp-0x178], Other Possible Types: struct149, struct24
    let v44: u64;  // [bp-0x170]
    let v45: i64;  // [bp-0x168]
    let v46: u64;  // [bp-0x160]
    let v47: void*;  // [bp-0x158]
    let v48: core::str::pattern::StrSearcher;  // [bp-0xa8]
    let v49: void*;  // [bp-0x40]
    let v50: u64;  // [bp-0x38]
    let v51: u16;  // [bp-0x30]
    let v53: u64;  // 4096
    let v54: u64;  // 4096
    let v56: u64;  // r14
    let v57: struct40;  // xmm0
    let v58: u64;  // r8

    v8 = a2;
    v53 = a2;
    v54 = a3;
    if core::sync::atomic::atomic_load() >= 4 {
        v0 = &v8;
        v34 = &v0;
        v35 = <&T as core::fmt::Display>::fmt;
        v43 = "Executing bash command:";
        v44 = 1;
        v47 = 0;
        v45 = &v34;
        v46 = 1;
        v15 = struct40 {
            field_0: "flealib::systemcmd"
            field_16: "flealib::systemcmd"
            field_32: log::__private_api::loc("flealib/src/systemcmd.rs")
        };
        log::__private_api::log(&v43, 4, &v15);
        v53 = v8;
        v54 = a3;
    }
    v56 = v54;
    v48 = core::str::pattern::StrSearcher::new(v53, v56, "cd ");
    v49 = 0;
    v50 = v56;
    v51 = 1;
    v27 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v48, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs");
    if v28 > 1 {
        v43 = <T as alloc::slice::hack::ConvertVec>::to_vec("Use 'cd' command to change a directory");
        return struct24 {
            field_0: *(&v43.field_0 as &i128)
            field_16: v45
        };
    }
    v43 = std::process::Command::new(v8, a3);
    v33 = std::process::Command::output(&v43);
    if !((((0 ^ v33 as i64) & (0 ^ -(v34))) >> 63) as char) {
        v20 = v38;
        v57 = v33 as i128;
        v18 = v37;
        v17 = v36;
        v15 = v57;
        v9 = &v20;
        v11 = <std::process::ExitStatus as core::fmt::Display>::fmt;
        v0 = "status: ";
        v1 = 2;
        v4 = 0;
        v2 = &v9;
        v3 = 1;
        v39 = core::option::Option<T>::map_or_else(&v0, a2, a3, v58);
        v29 = *(&v39.vec.buf.inner.cap as &i128);
        v30 = v40;
        v9 = alloc::string::String::from_utf8_lossy(v18, v19);
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v11, v12);
        v7 = v2;
        v6 = *(&v0.field_0 as &i128);
        v24 = &v6;
        v25 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = "stderr: ";
        v1 = 2;
        v4 = 0;
        v2 = &v24;
        v3 = 1;
        v21 = core::option::Option<T>::map_or_else(&v0, a2, a3, v58);
        v24 = *(&v21.vec.buf.inner.cap as &i128);
        v26 = v22;
        v9 = alloc::string::String::from_utf8_lossy(v16, v17);
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v11, v12);
        v7 = v2;
        v6 = *(&v0.field_0 as &i128);
        v31 = &v6;
        v32 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = "stdout:\n";
        v1 = 1;
        v4 = 0;
        v2 = &v31;
        v3 = 1;
        v21 = core::option::Option<T>::map_or_else(&v0, a2, a3, v58);
        v6 = *(&v21.vec.buf.inner.cap as &i128);
        v7 = v22;
        v0 = &v29;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &v24;
        v3 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = &v6;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v10 = "\x01\x00\x00";
        v14 = 0;
        v12 = &v0;
        v13 = 3;
        v41 = core::option::Option<T>::map_or_else(&v10 as u64, a2, a3, v58);
        return struct24 {
            field_0: *(&v41.vec.buf.inner.cap as &i128)
            field_16: v42
        };
    }
    v15 = v35;
    <T as alloc::string::SpecToString>::spec_to_string(a0, &v15);
}
