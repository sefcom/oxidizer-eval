fn flealib::fileencrypter::FileEncrypter::encrypt_file(a0: u64, a1: u64, a2: u32) -> long long {
    let v0: std::os::fd::owned::OwnedFd;  // [bp-0x9c]
    let v1: struct24;  // [bp-0x98], Other Possible Types: Result<struct4, struct8>
    let v2: struct24;  // [bp-0x98]
    let v3: u32;  // [bp-0x94]
    let v4: u64;  // [bp-0x90]
    let v5: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x80]
    let v6: alloc::borrow::Cow<str>;  // [bp-0x68], Other Possible Types: std::fs::File
    let v7: void*;  // [bp-0x60]
    let v8: u32;  // [bp-0x58]
    let v9: struct24;  // [bp-0x50]
    let v10: u64;  // [bp-0x48]
    let v11: u64;  // [bp-0x40]
    let v12: struct24;  // [bp-0x38]
    let v15: Result<(), &BOT>;  // r12
    let v16: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v1 = std::fs::File::open(a1, a2);
    match v1 {
        Err(_) => {
            return v4;
        },
        Ok(v0) => {
            v5 = Vec::new();
            v16 = <std::fs::File as std::io::Read>::read_to_end(&v0, &v5);
            if let Err(_) = v16 {
                return v15;
            }
            v6 = alloc::string::String::from_utf8_lossy(0x1, None);
            v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(v7, v8);
            v12 = v2;
            v9 = flealib::fileencrypter::FileEncrypter::encrypt(a0, &v12);
            v1 = std::fs::File::create(a1, a2);
            if let Ok(v6) = v1 {
                v15 = std::io::Write::write_all(&v6, v10, v11);
                return 0;
            }
            return v15;
        },
    }
}
