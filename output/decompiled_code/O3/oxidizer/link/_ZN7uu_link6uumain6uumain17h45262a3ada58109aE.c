fn uu_link::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: Result<struct56, struct16>;  // [sp-0x360], Other Possible Types: struct64, struct24, i192
    let v1: i64;  // [sp-0x320], Other Possible Types: struct56
    let v2: i64;  // [sp-0x318]
    let v3: i64;  // [sp-0x2e8], Other Possible Types: struct56, struct712, struct64
    let v4: i64;  // [sp-0x2e0]
    let v5: i64;  // [sp-0x2d8]
    let v6: i64;  // [sp-0x2d0]
    let v7: i64;  // [sp-0x2b0]
    let v9: i64;  // r8
    let v10: i64;  // r9
    let v18: i64;  // rax
    let v19: i64;  // rax
    let v20: i64;  // rcx
    let v23: i64;  // rax

    v3 = uu_link::uu_app(a1, a2);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v3, a0, a1, v9, v10);
    if v1 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
    }
    v1 = struct56 {
        field_0: v11
        field_8: v12
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: *((&v0 as &char + 32) as &i128)
        field_48: *((&v0 as &char + 48) as &i64)
    };
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, _ZN7uu_link7options5FILES17haa8c3a37ec4fcbe2E, g_50c200);
    v0 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_link7options5FILES17haa8c3a37ec4fcbe2E, g_50c200, &v3);
    *(&v3.field_0 as &struct64) = struct64 {
        field_0: v11
        field_8: v13
        field_16: v14
        field_32: v15
        field_48: v16
        field_56: v17
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v3, v7);
    v18 = *((&v0 as &char + 16) as &i64);
    if v18 && v18 != 1 {
        v19 = *((&v0 as &char + 8) as &i64);
        v20 = *(v19 as &i64);
        v23 = *((v19 + 8) as &i64);
        v3 = *((v23 + 8) as &i64);
        v4 = *((v23 + 16) as &i64);
        v5 = *((v20 + 8) as &i64);
        v6 = *((v20 + 16) as &i64);
        return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::hard_link(v5, v6, v3, v4), &v3);
    }
}
