fn uu_link::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x360], Other Possible Types: struct64, char
    let v1: i8;  // [bp-0x358]
    let v5: struct56;  // [sp-0x320], Other Possible Types: unsigned long
    let v6: i64;  // [sp-0x318]
    let v7: struct64;  // [sp-0x2e8], Other Possible Types: struct56, struct712, unsigned long
    let v8: i64;  // [sp-0x2e0]
    let v9: i64;  // [sp-0x2d8]
    let v10: i64;  // [sp-0x2d0]
    let v12: i64;  // rax
    let v13: i64;  // rdi
    let v14: i64;  // rax
    let v15: i64;  // rcx
    let v16: iNone;  // xmm1
    let v17: iNone;  // xmm0
    let v18: i64;  // rsi
    let v19: i64;  // rdx
    let v20: i64;  // rax
    let v21: i64;  // rax
    let v22: i64;  // rcx
    let v25: i64;  // rax

    v7 = uu_link::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v0, &v7, a0, a1);
    v12 = *(&v0 as &i64);
    v13 = *(&v1 as &i64);
    if v5 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    }
    v5 = struct56 {
        field_0: v12
        field_8: v13
        field_16: *(&v2 as &i128)
        field_32: *(&v3 as &i128)
        field_48: *(&v4 as &i64)
    };
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, _ZN7uu_link7options5FILES17haa8c3a37ec4fcbe2E, g_50c200);
    v0 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_link7options5FILES17haa8c3a37ec4fcbe2E, g_50c200, &v7);
    v14 = v0.field_0 as i64;
    if v14 {
        v15 = *((&v0.field_0 as &char + 8) as &i64);
        v16 = v0.field_16;
        v17 = v0.field_32;
        v18 = v0.field_48 as i64;
        v19 = *((&v0.field_48 as &char + 8) as &i64);
    } else {
        v15 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v14 = core::ops::function::FnOnce::call_once;
        v19 = 0;
    }
    *(&v7.field_0 as &struct64) = struct64 {
        field_0: v14
        field_8: v15
        field_16: v16
        field_32: v17
        field_48: v18
        field_56: v19
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v7);
    v20 = v0.field_16;
    if v20 && v20 != 1 {
        v21 = v0.field_8;
        v22 = *(v21 as &i64);
        v25 = *((v21 + 8) as &i64);
        v7 = *((v25 + 8) as &i64);
        v8 = *((v25 + 16) as &i64);
        v9 = *((v22 + 8) as &i64);
        v10 = *((v22 + 16) as &i64);
        return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::hard_link(v9, v10, v7, v8), &v7);
    }
}
