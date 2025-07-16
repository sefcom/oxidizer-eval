fn uu_sort::tmp_dir::remove_tmp_dir(a0: i64, a1: i64) -> long long {
    let v0: struct9;  // [bp-0x130]
    let v1: core::result::Result<(), std::io::error::Error>;  // [bp-0x110]
    let v2: u320;  // [bp-0x108]
    let v4: u384;  // [bp-0xe0]
    let v5: u128;  // [bp-0xd0]
    let v6: u64;  // [bp-0xc0]
    let v11: std::path::PathBuf;  // [bp-0x48]

    v0 = std::fs::read_dir(a0, a1);
    if v0.field_8 != 2 {
        loop {
            vvar_207{stack -224} = core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#9}::fmt::write_str_escaped::{closure_env#0}>, core::char::EscapeDebug> OrderedDict({0: core::iter::adapters::fuse::Fuse<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#9}::fmt::write_str_escaped::{closure_env#0}>> OrderedDict({0: 𝜙@128b [((5541207, None), vvar_175{stack -224}), ((5541028, None), None)]})})
            <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v4);
            if !v4 as i64 {
                break;
            }
            v2 = std::fs::DirEntry {
                __0: std::sys::pal::unix::fs::DirEntry {
                    dir: alloc::sync::Arc<std::sys::pal::unix::fs::InnerReadDir, alloc::alloc::Global> {
                        ptr: core::ptr::non_null::NonNull<alloc::sync::ArcInner<std::sys::pal::unix::fs::InnerReadDir>> {
                            pointer: v4 as i128
                        }
                        alloc: alloc::alloc::Global { }
                    }
                    entry: std::sys::pal::unix::fs::dirent64_min {
                        d_ino: <UNKNOWN>
                        d_type: v5
                    }
                    name: alloc::ffi::c_str::CString {
                        inner: alloc::boxed::Box<[u8], alloc::alloc::Global> {
                            data_ptr: <UNKNOWN>
                            length: v6
                        }
                    }
                }
            };
            v11 = std::fs::DirEntry::path(&v2);
            v1 = std::fs::remove_file(&v11, a1);
        }
    }
    return std::fs::remove_dir(a0, a1);
}
