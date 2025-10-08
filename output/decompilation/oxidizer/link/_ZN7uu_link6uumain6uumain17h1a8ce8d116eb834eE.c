fn uu_link::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x370]
    let v1: struct56;  // [bp-0x370], Other Possible Types: struct64, u64
    let v2: i64;  // [bp-0x368]
    let v3: u128;  // [bp-0x360]
    let v4: u128;  // [bp-0x350]
    let v5: u128;  // [bp-0x340]
    let v6: struct56;  // [bp-0x330]
    let v7: u64;  // [bp-0x328]
    let v8: struct32;  // [bp-0x2f8], Other Possible Types: struct712, u128
    let v12: u128;  // [bp-0x2e8]
    let v14: u128;  // [bp-0x2d8]
    let v16: u128;  // [bp-0x2c8]
    let v19: u128;  // xmm0
    let v20: i64;  // rbx
    let v21: u64;  // rax
    let v22: u64;  // rax

    v8 = uu_link::uu_app();
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v8, a0, a1);
    if (((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
    }
    v6 = v1;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, _ZN7uu_link7options5FILES17hf2424eaf39b3eae1E.field_0, g_4dc938.field_0);
    v1 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_link7options5FILES17hf2424eaf39b3eae1E.field_0, g_4dc938.field_0, &v8);
    if v1.field_0 as i64 {
        v19 = v1.field_0;
        v16 = v5;
        v14 = v4;
        v12 = v3;
        v8 = v19;
    }
    core::iter::traits::iterator::Iterator::collect(&v1, &v8);
    v20 = v2;
    v21 = std::fs::hard_link(*((*(v20 as &i64) + 8) as &i64), *((*(v20 as &i64) + 16) as &i64), *((*((v20 + 8) as &i64) + 8) as &i64), *((*((v20 + 8) as &i64) + 16) as &i64));
    v8 = struct32 {
        field_0: *((*((v20 + 8) as &i64) + 8) as &i64)
        field_8: *((*((v20 + 8) as &i64) + 16) as &i64)
        field_16: *((*(v20 as &i64) + 8) as &i64)
        field_24: *((*(v20 as &i64) + 16) as &i64)
    };
    v22 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v21, &v8);
    return v22;
}
