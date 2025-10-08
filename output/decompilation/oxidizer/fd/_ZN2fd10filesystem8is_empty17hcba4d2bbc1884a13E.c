fn fd::filesystem::is_empty(a0: void*) -> long long {
    let v0: struct9;  // [bp-0x58]
    let v1: std::fs::ReadDir;  // [bp-0x58]
    let v2: std::fs::ReadDir;  // [bp-0x48]
    let v3: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0x38]
    let v5: u32;  // edx
    let v6: u32;  // edx
    let v7: u64;  // cc_ndep
    let v9: u64;  // rdx
    let v10: core::result::Result<core::num::nonzero::NonZero<usize>, std::io::error::Error>;  // ebx
    let v11: u8;  // bl
    let v12: i64;  // rax

    if (fd::dir_entry::DirEntry::file_type(a0) as u8 & 1) {
        v6 = v5 & 0xf000;
        if _ccall(0, 6, 0, (v6 & 65535) as u64, v7) as char {
            v12 = fd::dir_entry::DirEntry::metadata(a0);
        } else if v6 == 0x4000 {
            v0 = std::fs::read_dir(fd::dir_entry::DirEntry::path(a0), v9);
            if v0.field_8 != 2 {
                v2 = v1;
                v3 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v2);
            }
        }
    }
    return (v10 & -0x100 | v11 & 1) as u64;
}
