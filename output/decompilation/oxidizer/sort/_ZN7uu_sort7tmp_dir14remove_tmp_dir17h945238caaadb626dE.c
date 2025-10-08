fn uu_sort::tmp_dir::remove_tmp_dir(a0: u64, a1: u64) -> long long {
    let v0: struct9;  // [bp-0x130]
    let v1: core::fmt::rt::Argument;  // [bp-0x110]
    let v2: struct40;  // [bp-0x108]
    let v3: u320;  // [bp-0xe0]
    let v4: core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#10}::fmt::write_str_escaped::{closure_env#0}>, core::char::EscapeDebug>;  // [bp-0xe0]
    let v9: struct24;  // [bp-0x48]

    v0 = std::fs::read_dir(a0, a1);
    if v0.field_8 != 2 {
        loop {
            vvar_207{stack -224} = core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#10}::fmt::write_str_escaped::{closure_env#0}>, core::char::EscapeDebug> OrderedDict([(0, core::iter::adapters::fuse::Fuse<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#10}::fmt::write_str_escaped::{closure_env#0}>> OrderedDict([(0, 𝜙@128b [((5046631, None), vvar_175{stack -224}), ((5046452, None), None)])]))])
            <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v4);
            if !v4.iter.iter as i64 {
                break;
            }
            v2 = v3;
            v9 = std::fs::DirEntry::path(&v2);
            v1 = std::fs::remove_file(&v9);
        }
    }
    return std::fs::remove_dir(a0, a1);
}
