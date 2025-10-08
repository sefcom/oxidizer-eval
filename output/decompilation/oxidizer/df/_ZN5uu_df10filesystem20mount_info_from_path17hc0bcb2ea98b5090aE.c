fn uu_df::filesystem::mount_info_from_path(a1: i64, a2: i64, a3: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x88], Other Possible Types: struct24
    let <0x460030[is_10]|Stack bp-0x40, 1 B>: i64;  // [bp-0x40]
    let v1: struct32;  // [bp-0x88], Other Possible Types: u64
    let v2: u64;  // [bp-0x78]
    let v3: u64;  // [bp-0x68]
    let v4: u8;  // [bp-0x60]
    let v5: u64;  // [bp-0x5f]
    let v6: u64;  // [bp-0x58]
    let v7: struct16;  // [bp-0x50]
    let v8: struct24;  // [bp-0x40]
    let v11: u8;  // cl
    let v12: u64;  // r12
    let v13: u64;  // rax
    let v14: u8;  // al
    let v15: u8;  // al

    v0 = std::fs::canonicalize(<&T as core::convert::AsRef<U>>::as_ref(a3), a2);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        return struct2 {
            field_0: 257
        };
    }
    v11 = *((&v0 as &char + 8) as &i8);
    v5 = *((&v0 as &char + 9) as &i64);
    v6 = v2;
    v3 = v0 as i64;
    v4 = v11;
    v7 = struct16 {
        field_0: a1
        field_8: a2 * 152 + a1
    };
    v8 = struct24 {
        field_0: &<0x460030[is_10]|Stack bp-0x40, 1 B>
        field_8: &v3
        field_16: &<0x460030[is_10]|Stack bp-0x40, 1 B> as u64
    };
    v1 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::try_fold(&v7, &v8);
    v0 = struct24 {
        field_0: a1
        field_8: a2
        field_16: &v3
    };
    v13 = core::option::Option<T>::or_else(v12, &v0);
    if !v13 {
        v14 = 1;
        return struct2 {
            field_0: v15
            field_1: 2
        };
    }
    *((a0 + 8) as &u64) = v13;
}
