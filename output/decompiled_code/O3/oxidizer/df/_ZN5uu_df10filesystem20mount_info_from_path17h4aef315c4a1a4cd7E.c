fn uu_df::filesystem::mount_info_from_path(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x88], Other Possible Types: i64, Result<struct24, struct16>
    let v1: i64;  // [sp-0x80]
    let v2: i128;  // [bp-0x78]
    let v3: struct40;  // [bp-0x68]
    let v4: i64;  // [sp-0x58]
    let v5: i256;  // [sp-0x40], Other Possible Types: struct32
    let v7: i64;  // rdx
    let v8: i64;  // rcx
    let v9: i64;  // r8
    let v10: i64;  // r9
    let v11: i64;  // rax
    let v12: i64;  // rax
    let v13: i64;  // r15

    v0 = std::fs::canonicalize(<&T as core::convert::AsRef<U>>::as_ref(a2), v7);
    if v4 == 0x8000000000000000 {
        return 0;
    }
    v3 = struct40 {
        field_0: a0
        field_8: a1 * 152 + a0
        field_16: v0
        field_24: *((&v0 as &char + 8) as &i128)
    };
    v0 = struct24 {
        field_0: &v3
        field_8: &v3
        field_16: &v3
    };
    v5 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::try_fold(&v3, &v0, v8, v9, v10);
    v12 = *((&v5 as &char + 8) as &i64);
    if v1 != 0x8000000000000000 {
        v13 = v5;
        v2 = *((&v5 as &char + 16) as &i128);
        v0 = v13;
        v1 = v12;
    } else {
        v13 = 0;
    }
    v0 = struct24 {
        field_0: a0
        field_8: a1
        field_16: &v3
    };
    v11 = core::option::Option<T>::or_else(v13, &v0);
    return v11;
}
