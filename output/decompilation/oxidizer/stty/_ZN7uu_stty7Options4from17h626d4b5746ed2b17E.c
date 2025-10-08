fn uu_stty::Options::from(a1: &struct56) -> Result<struct42, struct16> {
    let a0: i64;  // rdi
    let v0: struct4;  // [bp-0xe4]
    let v1: Result<struct4, struct8>;  // [bp-0xe0]
    let v2: struct4;  // [bp-0xdc]
    let v3: u64;  // [bp-0xd8]
    let v4: Result<struct40, struct16>;  // [bp-0xd0], Other Possible Types: struct9
    let v5: u64;  // [bp-0xd0]
    let v6: struct56;  // [bp-0xd0]
    let v7: u32;  // [bp-0xc8]
    let v8: iNone;  // [bp-0x88], Other Possible Types: u128
    let v9: struct64;  // [bp-0x70]
    let v11: u8;  // al
    let v12: u8;  // al
    let v13: u64;  // rax
    let v14: u32;  // r12d
    let v15: std::io::stdio::Stdout;  // rax

    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "all");
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "save");
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
    v13 = clap_builder::parser::error::MatchesError::unwrap(&v4);
    if v13 {
        v7 = 0;
        v4 = struct9 {
            field_0: 0x1b600000800
            field_8: 1
        };
        v1 = std::fs::OpenOptions::open(&v4, v13);
        match v1 {
            Err(_) => {
                return struct16 {
                    field_0: 9223372036854775809
                    field_8: v3
                };
            },
            Ok(v0) => {
                v14 = 0;
            },
        }
    } else {
        v14 = 1;
        v15 = std::io::stdio::stdout();
    }
    vvar_196{stack -208} = struct56 OrderedDict([(0, 𝜙@64b [((4556202, None), None), ((4556207, None), vvar_178{stack -208})]), (8, 𝜙@8b [((4556202, None), None), ((4556207, None), None)])])
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, a1);
    v9 = clap_builder::parser::error::MatchesError::unwrap(&v6);
    if !v9.field_0 as i64 {
        return Ok(struct48 {
            field_0: 0x8000000000000000
            field_8: v8
            field_24: v14
            field_28: v0
            field_32: v15
            field_40: v11
            field_41: v12
        });
    }
    core::iter::traits::iterator::Iterator::collect(&v6, &v9);
    v8 = *(&v6.field_8 as &i128);
    return Ok(struct48 {
        field_0: v5
        field_8: v8
        field_24: v14
        field_28: v0
        field_32: v15
        field_40: v11
        field_41: v12
    });
}
