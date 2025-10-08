fn uu_chgrp::parse_gid_and_uid(a0: i64, a1: u64) -> long long {
    let v0: struct32;  // [bp-0xc8]
    let v1: u128;  // [bp-0xc8]
    let v2: Result<struct40, struct16>;  // [bp-0xc8]
    let v3: u64;  // [bp-0xc0]
    let v4: u64;  // [bp-0xb8]
    let v5: u32;  // [bp-0xb0]
    let v6: i64;  // [bp-0x98]
    let v7: Result<struct24, struct12>;  // [bp-0x90]
    let v8: iNone;  // [bp-0x68]
    let v9: u128;  // [bp-0x58]
    let v10: alloc::string::String;  // [bp-0x48]
    let v12: i64;  // rax
    let v13: u32;  // ebp
    let v14: u32;  // eax

    v0 = uu_chgrp::get_dest_gid(a1);
    if (((0 ^ v3) & (0 ^ -(v3))) >> 63) as char {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: *((&v0.field_8 as &char + 8) as &i128)
        };
    }
    v9 = *(&v0.field_0 as &i64);
    v8 = *((&v0.field_8 as &char + 8) as &i128);
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from");
    v12 = clap_builder::parser::error::MatchesError::unwrap("from", &v2);
    if !v12 {
        return struct48 {
            field_0: v3
            field_8: v8
            field_24: v9 as u64
            field_32: 0
            field_40: <UNKNOWN>
            field_44: v14
        };
    }
    v6 = v12;
    v7 = uu_chgrp::parse_gid_from_str(*((v12 + 8) as &i64), *((v12 + 16) as &i64));
    if let Ok(_) = v7 {
        v10 = format!("invalid user: '{}'", &v6);
        v5 = 1;
        v1 = *(&v10.vec.buf.inner.cap as &i128) as u128;
        v4 = v10.vec.len;
        return struct24 {
            field_0: 0x8000000000000000
            field_8: alloc::boxed::Box<T>::new(&v1 as u384) as u64
            field_16: &g_4f4898
        };
    }
    return struct48 {
        field_0: v3
        field_8: v8
        field_24: v9 as u64
        field_32: 0
        field_40: <UNKNOWN>
        field_44: v14
    };
}
