fn uu_link::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i192;  // [sp-0x360], Other Possible Types: struct24, Result<struct56, struct8>, struct64
    let v1: struct56;  // [sp-0x320], Other Possible Types: i64
    let v2: i64;  // [sp-0x318]
    let v3: i5696;  // [sp-0x2e8], Other Possible Types: struct64, struct712, struct56
    let v4: i64;  // [sp-0x2e0]
    let v5: i64;  // [sp-0x2d8]
    let v6: i64;  // [sp-0x2d0]
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // rcx
    let v20: i64;  // rax

    v3 = uu_link::uu_app();
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v3, a0, a1);
    if v1 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
    }
    v1 = struct56 {
        field_0: v8
        field_8: v9
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: *((&v0 as &char + 32) as &i128)
        field_48: *((&v0 as &char + 48) as &i64)
    };
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, _ZN7uu_link7options5FILES17haa8c3a37ec4fcbe2E, g_50c200);
    v0 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_link7options5FILES17haa8c3a37ec4fcbe2E, g_50c200, &v3);
    *(&v3.field_0 as &struct64) = struct64 {
        field_0: v8
        field_8: v10
        field_16: v11
        field_32: v12
        field_48: v13
        field_56: v14
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v3);
    v15 = *((&v0 as &char + 16) as &i64);
    if v15 && v15 != 1 {
        v16 = *((&v0 as &char + 8) as &i64);
        v17 = *(v16 as &i64);
        v20 = *((v16 + 8) as &i64);
        v3 = *((v20 + 8) as &i64);
        v4 = *((v20 + 16) as &i64);
        v5 = *((v17 + 8) as &i64);
        v6 = *((v17 + 16) as &i64);
        return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::hard_link(v5, v6, v3, v4), &v3);
    }
}
