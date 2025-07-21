fn uu_link::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: Result<struct24, struct24>;  // [bp-0x360], Other Possible Types: struct56
    let v1: Result<struct56, struct16>;  // [bp-0x360], Other Possible Types: struct64
    let v2: i64;  // [bp-0x358]
    let v3: i64;  // [bp-0x358]
    let v4: u128;  // [bp-0x350]
    let v5: u128;  // [bp-0x350]
    let v6: u64;  // [bp-0x330]
    let v7: struct56;  // [bp-0x320]
    let v8: u64;  // [bp-0x318]
    let v9: struct56;  // [bp-0x2e8], Other Possible Types: struct64, struct32, u8
    let v11: i64;  // rdi
    let v12: u128;  // xmm0
    let v14: u64;  // rax
    let v15: void*;  // rdx
    let v17: i64;  // rax
    let v18: u64;  // rax
    let v20: u64;  // rax

    uu_link::uu_app(&v9);
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v9, a0, a1);
    v11 = v2;
    match v1 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
        },
        Ok(v7) => {
            v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7, _ZN7uu_link7options5FILES17haa8c3a37ec4fcbe2E.field_0, g_50c200.field_0);
            v1 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_link7options5FILES17haa8c3a37ec4fcbe2E.field_0, g_50c200.field_0, &v9);
            if v1.field_0 as i64 {
                v3 = v2;
                v5 = v4;
            } else {
                v12 = 0;
                v14 = core::ops::function::FnOnce::call_once;
                v15 = 0;
                v3 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E.field_0;
            }
            v9 = struct64 {
                field_0: v14
                field_8: v3
                field_16: v5
                field_32: v12
                field_48: v6
                field_56: v15
            };
            v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9);
            v17 = v2;
            v18 = std::fs::hard_link(*((*(v17 as &i64) + 8) as &i64), *((*(v17 as &i64) + 16) as &i64), *((*((v17 + 8) as &i64) + 8) as &i64), *((*((v17 + 8) as &i64) + 16) as &i64));
            v9 = struct32 {
                field_0: *((*((v17 + 8) as &i64) + 8) as &i64)
                field_8: *((*((v17 + 8) as &i64) + 16) as &i64)
                field_16: *((*(v17 as &i64) + 8) as &i64)
                field_24: *((*(v17 as &i64) + 16) as &i64)
            };
            v9 = struct32 {
                field_0: *((*((v17 + 8) as &i64) + 8) as &i64)
                field_8: *((*((v17 + 8) as &i64) + 16) as &i64)
                field_16: *((*(v17 as &i64) + 8) as &i64)
                field_24: *((*(v17 as &i64) + 16) as &i64)
            };
            v20 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v18, &v9);
            return v20;
        },
    }
}
