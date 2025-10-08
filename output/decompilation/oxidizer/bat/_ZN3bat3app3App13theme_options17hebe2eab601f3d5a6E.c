fn bat::app::App::theme_options(a0: i64, a1: u64) -> int {
    let v0: u64;  // [bp-0xa8]
    let v1: u128;  // [bp-0xa0]
    let v2: u64;  // [bp-0x98]
    let v3: struct24;  // [bp-0x90], Other Possible Types: Option<struct24>, Result<struct40, struct16>
    let v4: Result<struct40, struct16>;  // [bp-0x90]
    let v5: struct24;  // [bp-0x68]
    let v6: iNone;  // [bp-0x60]
    let v7: struct24;  // [bp-0x50]
    let v8: u64;  // [bp-0x40]
    let v9: iNone;  // [bp-0x38]
    let v11: i64;  // rax
    let v12: u64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rax
    let v15: u64;  // rax

    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "theme");
    v11 = clap_builder::parser::error::MatchesError::unwrap("theme", &v3);
    if v11 {
        v3 = <bat::theme::ThemePreference as core::str::traits::FromStr>::from_str(*((v11 + 8) as &i64), *((v11 + 16) as &i64));
        v5 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual<core::ops::control_flow::ControlFlow<B,core::convert::Infallible>>>::from_residual(&v3);
        v12 = v5.field_0;
        *(&v1 as void*) = v6;
    }
    v0 = v12;
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "theme-dark");
    v13 = clap_builder::parser::error::MatchesError::unwrap("theme-dark", &v3);
    if v13 {
        v3 = <bat::theme::ThemeName as core::str::traits::FromStr>::from_str(*((v13 + 8) as &i64), *((v13 + 16) as &i64));
        v7 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual<core::ops::control_flow::ControlFlow<B,core::convert::Infallible>>>::from_residual(&v3);
    }
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "theme-light");
    v14 = clap_builder::parser::error::MatchesError::unwrap("theme-light", &v4);
    if v14 {
        v3 = <bat::theme::ThemeName as core::str::traits::FromStr>::from_str(*((v14 + 8) as &i64), *((v14 + 16) as &i64));
        v5 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual<core::ops::control_flow::ControlFlow<B,core::convert::Infallible>>>::from_residual(&v3);
        v15 = v5.field_0;
        v9 = v6;
    }
    return struct72 {
        field_0: *((&v4 as &char + 64) as &i128)
        field_16: v8
        field_24: v15
        field_32: v9
        field_48: *(&v0 as &i128)
        field_64: v2
    };
}
