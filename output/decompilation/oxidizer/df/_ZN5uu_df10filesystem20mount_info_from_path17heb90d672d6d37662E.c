fn uu_df::filesystem::mount_info_from_path(a0: &u8, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x88], Other Possible Types: Result<struct24, struct8>
    let v2: i64;  // [sp-0x68]
    let v3: i64;  // [sp-0x60]
    let v4: i64;  // [sp-0x58]
    let v5: struct32;  // [sp-0x40]
    let v7: i64;  // rax

    v0 = std::fs::canonicalize(<&T as core::convert::AsRef<U>>::as_ref(a2), a2);
    if v4 == 0x8000000000000000 {
        return 0;
    }
    v2 = a0;
    v3 = a1 * 152 + a0;
    v0 = struct24 {
        field_0: &v4
        field_8: &v4
        field_16: &v4
    };
    v5 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::try_fold(&v2, &v0);
    v0 = struct24 {
        field_0: a0
        field_8: a1
        field_16: &v4
    };
    v7 = core::option::Option<T>::or_else(0, &v0);
    return v7;
}
