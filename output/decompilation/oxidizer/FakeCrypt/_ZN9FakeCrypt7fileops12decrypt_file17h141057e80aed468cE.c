fn FakeCrypt::fileops::decrypt_file(a0: u64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: struct4;  // [bp-0x808]
    let v2: Result<struct4, struct8>;  // [bp-0x800]
    let v3: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x7f0]
    let v4: u64;  // [bp-0x7d8]
    let v5: std::fs::File;  // [bp-0x7c8]
    let v6: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x7a8], Other Possible Types: struct24, struct960
    let v7: std::fs::File;  // [bp-0x7a4]
    let v8: struct960;  // [bp-0x3e8]
    let v11: u64;  // rax
    let v12: u64;  // rdx
    let v13: Result<(), &BOT>;  // rax
    let v14: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v4 = a0;
    v2 = std::fs::File::open(a0, a1);
    match v2 {
        Err(_) => {
            return;
        },
        Ok(v0) => {
            v3 = Vec::new();
            v14 = <std::fs::File as std::io::Read>::read_to_end(&v0, &v3);
            if let Err(_) = v14 {
                return;
            }
            v6 = <aes::autodetect::Aes256 as crypto_common::KeyInit>::new(a2);
            v8 = <cbc::decrypt::Decryptor<C> as crypto_common::InnerIvInit>::inner_iv_init(&v6, a3);
            v6 = struct24 {
                field_0: 1
                field_8: ""
            };
            v11 = cipher::block::BlockDecryptMut::decrypt_padded_inout_mut(&v8, &v6);
            if v11 {
                v6 = std::fs::File::create(v4, a1);
                if let Ok(v5) = v6 {
                    v13 = std::io::Write::write_all(&v5 as u64, v11, v12);
                }
            } else {
                eprintln!("[!] Decryption failed for {}: {}", &v4, &v1);
            }
            return;
        },
    }
}
