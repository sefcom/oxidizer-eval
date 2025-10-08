fn uu_chgrp::get_dest_gid(a0: i64, a1: i64) -> double {
    let v0: void*;  // [bp-0x118], Other Possible Types: u128
    let v1: u64;  // [bp-0x110]
    let v2: void*;  // [bp-0x108]
    let v3: Result<struct24, struct12>;  // [bp-0x100], Other Possible Types: u32
    let v4: core::fmt::rt::Argument;  // [bp-0xfc]
    let v5: struct16;  // [bp-0xf8], Other Possible Types: u32
    let v6: u64;  // [bp-0xf0]
    let v7: struct16;  // [bp-0xe8]
    let v8: u32;  // [bp-0xe0]
    let v10: struct24;  // [bp-0xd8], Other Possible Types: Result<struct40, struct16>
    let v11: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd8], Other Possible Types: u128
    let v13: void*;  // [bp-0xc8], Other Possible Types: u64
    let v14: u32;  // [bp-0xc0]
    let v16: i64;  // r14
    let v17: u64;  // rdx
    let v18: u32;  // eax
    let v19: u64;  // rcx
    let v23: u64;  // r14
    let v24: void*;  // r15
    let v25: i64;  // xmm0lq

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "reference");
    v16 = clap_builder::parser::error::MatchesError::unwrap("reference", &v10);
    if v16 {
        v11 = std::fs::metadata(v16, v17);
        if let Ok(_) = v11 {
            v4 = 1;
            v5 = uu_chgrp::get_dest_gid::{{closure}}(&v0, *((&v11 as &char + 64) as &i32) as u32 as u64) as u32;
        }
        v3 = v18;
        v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, *((v16 + 8) as &i64), *((v16 + 16) as &i64));
        if v7.field_0 {
            v19 = v7.field_8;
            *((a0 + 16) as &u64) = v7.field_0;
            *((a0 + 24) as &u64) = v19;
            *((a0 + 8) as &i64) = 0x8000000000000000;
            return v25;
        }
    } else {
        v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "GROUP");
        clap_builder::parser::error::MatchesError::unwrap("GROUP", &v10);
        v11 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v23, v24);
        v2 = v13;
        v0 = *(&v10.field_0 as &i128);
        if v24 {
            v3 = uu_chgrp::parse_gid_from_str(v23, v24);
            if !((((0 ^ v3 as i64) & (0 ^ -(v3 as i64))) >> 63) as char) {
                v13 = v6;
                v11 = v3 as i128;
                v14 = 1;
                *((a0 + 16) as &u64) = alloc::boxed::Box<T>::new(&v11) as u64;
                *((a0 + 24) as &&u64) = &g_4f4898;
                *((a0 + 8) as &i64) = 0x8000000000000000;
                return v25;
            }
        }
    }
    return struct32 {
        field_0: v8
        field_4: v5
        field_8: v0
        field_24: v2
    };
}
