fn uu_df::filesystem::mount_info_from_path(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x88], Other Possible Types: struct24
    let v3: struct40;  // [bp-0x68]
    let v4: struct32;  // [bp-0x40]
    let v8: u64;  // r15

    v0 = std::fs::canonicalize(<&T as core::convert::AsRef<U>>::as_ref(a2), a2);
    match v0 {
        Err(_) => {
            return 0;
        },
        Ok(_) => {
            v3 = struct40 {
                field_0: a0
                field_8: a1 * 152 + a0
                field_16: v0 as i64
                field_24: *((&v0 as &char + 8) as &i128)
            };
            v0 = struct24 {
                field_0: &v3 as u64
                field_8: &v3 as u64
                field_16: &v3 as u64
            };
            v4 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::try_fold(&v3, &v0);
            v0 = struct24 {
                field_0: a0
                field_8: a1
                field_16: &v3 as u64
            };
            v0 = struct24 {
                field_0: a0
                field_8: a1
                field_16: &v3 as u64
            };
            return core::option::Option<T>::or_else(v8, &v0);
        },
    }
}
