fn uu_df::filesystem::mount_info_from_path(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u192;  // [bp-0x88], Other Possible Types: core::result::Result<std::path::PathBuf, std::io::error::Error>
    let v1: u64;  // [bp-0x80]
    let v2: u192;  // [bp-0x68]
    let v3: u8;  // [bp-0x50]
    let v4: struct32;  // [bp-0x40]
    let v5: u64;  // [bp-0x38]
    let v8: u64;  // r15

    v0 = std::fs::canonicalize(<&T as core::convert::AsRef<U>>::as_ref(a2), a2);
    match v0 {
        Err(_) => {
            return 0;
        },
        Ok(_) => {
            memcpy(&v3, &v0, 16);
            v2 = struct24 {
                field_0: a0
                field_8: a1 * 152 + a0
                field_16: v0 as i64
            };
            v0 = struct24 {
                field_0: &v2 as u64
                field_8: &v2 as u64
                field_16: &v2 as u64
            };
            v4 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::try_fold(&v2, &v0);
            if v5 != 0x8000000000000000 {
                v8 = v4.field_0 as i64;
                memcpy(&v0, &v4, 16);
                v0 = v8;
                v1 = v5;
            }
            v0 = struct24 {
                field_0: a0
                field_8: a1
                field_16: &v2 as u64
            };
            return core::option::Option<T>::or_else(v8, &v0);
        },
    }
}
