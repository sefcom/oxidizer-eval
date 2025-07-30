fn FakeCrypt::fileops::encrypt_directory(a0: i64, a1: i64, a2: i64, a3: i64) {
    let v0: std::sys::fs::unix::dirent64_min;  // [bp-0x120]
    let v1: std::path::PathBuf;  // [bp-0x110]
    let v2: u64;  // [bp-0x108]
    let v3: u64;  // [bp-0x100]
    let v4: std::fs::DirEntry;  // [bp-0xf8]
    let v5: std::fs::DirEntry;  // [bp-0xc8]
    let v6: core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#10}::fmt::write_str_escaped::{closure_env#0}>, core::char::EscapeDebug>;  // [bp-0xc8]

    v0 = std::fs::read_dir(a0, a1);
    if v0.d_type == 2 {
        return;
    }
    loop {
        vvar_223{stack -200} = core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#10}::fmt::write_str_escaped::{closure_env#0}>, core::char::EscapeDebug> OrderedDict([(0, core::iter::adapters::fuse::Fuse<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#10}::fmt::write_str_escaped::{closure_env#0}>> OrderedDict([(0, 𝜙@128b [((4543467, None), vvar_187{stack -200}), ((4543252, None), None)])]))])
        <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v6);
        if !v6.iter.iter as i64 {
            break;
        }
        v4 = v5;
        v1 = std::fs::DirEntry::path(&v4);
        if std::path::Path::is_dir(v2, v3) {
            FakeCrypt::fileops::encrypt_directory(v2, v3, a2, a3);
        } else {
            FakeCrypt::fileops::encrypt_file(v2, v3, a2, a3);
        }
    }
    return;
}
