fn fuel_core_version::get_version_file_path(a0: u64, a1: u64) -> long long {
    let v1: u64;  // rdx
    let v2: u64;  // rax

    v2 = std::path::Path::parent(<&T as core::convert::AsRef<U>>::as_ref(a1), v1);
    if v2 {
        return std::path::Path::join(a0, v2, v1);
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: eyre::error::<impl eyre::Report>::from_display()
    };
}
