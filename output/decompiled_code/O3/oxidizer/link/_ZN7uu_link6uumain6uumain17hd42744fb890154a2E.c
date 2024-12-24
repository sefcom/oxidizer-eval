fn uu_link::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct64;  // [sp-0x360], Other Possible Types: Result<struct56, struct16>, struct24, i192
    let v1: i64;  // [sp-0x320], Other Possible Types: struct56
    let v2: i64;  // [sp-0x318]
    let v3: i64;  // [sp-0x2e8], Other Possible Types: struct56, struct712, struct64
    let v5: i64;  // rdx
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rcx
    let v15: i64;  // rbx
    let v16: i64;  // r14
    let v17: i64;  // rax
    let v19: i64;  // r12

    v3 = uu_link::uu_app(a1, v5);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v3, a0, a1);
    if v1 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
    }
    v1 = struct56 {
        field_0: v6
        field_8: v7
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: *((&v0 as &char + 32) as &i128)
        field_48: *((&v0 as &char + 48) as &i64)
    };
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, _ZN7uu_link7options5FILES17h0bea30281c60cba1E, g_50d7a0);
    v0 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_link7options5FILES17h0bea30281c60cba1E, g_50d7a0, &v3);
    *(&v3.field_0 as &struct64) = struct64 {
        field_0: v6
        field_8: v8
        field_16: v9
        field_32: v10
        field_48: v11
        field_56: v5
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v3, v3.56);
    v12 = *((&v0 as &char + 16) as &i64);
    if v12 && v12 != 1 {
        v13 = *((&v0 as &char + 8) as &i64);
        v14 = *(v13 as &i64);
        v15 = *((v14 + 8) as &i64);
        v16 = *((v14 + 16) as &i64);
        v17 = *((v13 + 8) as &i64);
        v19 = *((v17 + 16) as &i64);
        v3 = *((v17 + 8) as &i64);
        v3.field_8 = vvar_130{reg 112};
        v3.field_16 = vvar_126{reg 40};
        v3.field_24 = vvar_127{reg 128};
        return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::hard_link(v3.field_16, v3.field_24, v3, v3.field_8), &v3);
    }
}
