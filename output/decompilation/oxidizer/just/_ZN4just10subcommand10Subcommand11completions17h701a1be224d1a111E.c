fn just::subcommand::Subcommand::completions(a0: i8) -> u64 {
    let v0: u64;  // [bp-0x40]
    let v1: &mut [u8];  // [bp-0x38]
    let v3: u64;  // rcx

    v3 = a0;
    v0 = (&g_49fa30.field_0)[v3] + &g_49fa30.field_0;
    v1 = (&g_49fa48.field_0)[v3];
    return print!("{}", &v0);
}
