fn uu_link::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i192;  // [bp-0x360], Other Possible Types: struct64, struct24
    let v4: struct56;  // [sp-0x320], Other Possible Types: i64
    let v5: i64;  // [sp-0x318]
    let v6: i448;  // [sp-0x2e8], Other Possible Types: struct56, struct712, struct64
    let v8: i64;  // rdx
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // rcx
    let v18: i64;  // rbx
    let v19: i64;  // r14
    let v20: i64;  // rax
    let v22: i64;  // r12

    v6 = uu_link::uu_app(a1, v8);
    clap_builder::builder::command::Command::try_get_matches_from(&v0, &v6, a0, a1);
    if v4 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
    }
    v4 = struct56 {
        field_0: v9
        field_8: v10
        field_16: v1
        field_32: v2
        field_48: v3
    };
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, _ZN7uu_link7options5FILES17h0bea30281c60cba1E, g_50d7a0);
    v0 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_link7options5FILES17h0bea30281c60cba1E, g_50d7a0, &v6);
    *(&v6.field_0 as &struct64) = struct64 {
        field_0: v9
        field_8: v11
        field_16: v12
        field_32: v13
        field_48: v14
        field_56: v8
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v6, v6.56);
    v15 = *((&v0 as &char + 16) as &i64);
    if v15 && v15 != 1 {
        v16 = *((&v0 as &char + 8) as &i64);
        v17 = *(v16 as &i64);
        v18 = *((v17 + 8) as &i64);
        v19 = *((v17 + 16) as &i64);
        v20 = *((v16 + 8) as &i64);
        v22 = *((v20 + 16) as &i64);
        v6 = *((v20 + 8) as &i64);
        v6.field_8 = vvar_130{reg 112};
        v6.field_16 = vvar_126{reg 40};
        v6.field_24 = vvar_127{reg 128};
        return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::hard_link(v6.field_16, v6.field_24, v6, v6.field_8), &v6);
    }
}
