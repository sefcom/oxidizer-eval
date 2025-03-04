fn uu_unexpand::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x380]
    let v1: iNone;  // [sp-0x368], Other Possible Types: struct24
    let v2: i64;  // [sp-0x358]
    let v3: i8;  // [sp-0x348], Other Possible Types: unsigned long
    let v4: iNone;  // [sp-0x340]
    let v5: i64;  // [sp-0x330]
    let v6: iNone;  // [sp-0x328]
    let v7: i64;  // [sp-0x318]
    let v8: i64;  // [sp-0x310], Other Possible Types: int
    let v9: struct712;  // [sp-0x2d8], Other Possible Types: int, struct50
    let v10: i64;  // [sp-0x2c8]
    let v14: i64;  // rbx

    v0 = uucore::Args::collect_ignore(a0, a1);
    v9 = uu_unexpand::uu_app();
    v1 = uu_unexpand::expand_shortcuts(*((&v0.field_0 as &char + 8) as &i64), v0.field_16);
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v9, &v1);
    if v8 == 0x8000000000000000 {
        return v14;
    }
    v8 = *(&v3 as &i448);
    v9 = uu_unexpand::Options::new(&v8);
    v1 = *((&v9.field_0 as &char + 8) as &i128);
    v2 = v9.field_24;
    if v3 == 0x8000000000000000 {
        v10 = v2;
        v9 = v1;
        return v14;
    }
    v7 = *((&v9.field_0 as &char + 48) as &i64);
    v6 = *(&v9.field_32 as &i128);
    v4 = v1;
    v5 = v2;
    v3 = v9.field_0 as i64;
    return v14;
}
