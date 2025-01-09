fn uu_numfmt::format_and_handle_validation(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: Option<struct24>;  // [sp-0x80]
    let v1: Option<struct24>;  // [sp-0x48]
    let v2: i64;  // [sp-0x30]
    let v3: i64;  // [sp-0x28]

    v2 = a0;
    v3 = a1;
    v0 = uu_numfmt::format::format_and_print(a0, a1, a2);
    match v0 {
        None => {
            return 0;
        },
        Some(_) => {
            v1 = v0;
            goto (*((4334484 + *((vvar_2 + 200) as &i8) as u8 as u64 * 4) as &i32) + 4334484) as i64;
        },
    }
}
