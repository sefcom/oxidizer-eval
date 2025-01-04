fn uu_df::filesystem::mount_info_from_path(a0: &u8, a1: u32, a2: u64, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x88], Other Possible Types: struct24, Result<struct24, struct16>
    let v1: i64;  // [sp-0x80]
    let v2: i128;  // [bp-0x78]
    let v3: i64;  // [sp-0x68]
    let v4: i64;  // [sp-0x60]
    let v5: i64;  // [sp-0x58]
    let v6: struct32;  // [sp-0x40], Other Possible Types: i256
    let v8: i64;  // rdx
    let v9: i64;  // rcx
    let v10: i64;  // r8
    let v11: i64;  // r9
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // r15

    v0 = std::fs::canonicalize(<&T as core::convert::AsRef<U>>::as_ref(a2), v8);
    if v5 == 0x8000000000000000 {
        return 0;
    }
    v5 = v0;
    v3 = a0;
    v4 = a1 * 152 + a0;
    v0 = &v5;
    v1 = &v5;
    v2 = &v5;
    v6 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::try_fold(&v3, &v0, v9, v10, v11);
    v13 = *((&v6 as &char + 8) as &i64);
    if v1 != 0x8000000000000000 {
        v14 = v6;
        v2 = *((&v6 as &char + 16) as &i128);
        v0 = v14;
        v1 = v13;
    } else {
        v14 = 0;
    }
    v0 = struct24 {
        field_0: a0
        field_8: a1
        field_16: &v5
    };
    v12 = core::option::Option<T>::or_else(v14, &v0);
    return v12;
}
