fn uu_tee::process_error() -> u32 {
    let v1: u64;  // [sp-0x40], Other Possible Types: void*
    let v2: u128;  // [bp-0x38], Other Possible Types: &struct_0
    let v3: u8;  // [sp-0x28]
    let v5: u64;  // rdi
    let v6: u32;  // rsi
    let v7: &struct_0;  // rdx
    let v8: &u64;  // rcx

    if v5 {
        goto *((4274940 + *(vvar_28{reg 72} as &i8) * 4) as &i32) + 4274940;
    } else {
        if std::io::error::Error::kind(v6) as i8 == 11 {
            return;
        }
        v1 = uucore::util_name();
        v2 = v7;
        eprint!("{:?}: ", &v1);
        v1 = 0;
        v2 = *(&(&v7->padding_0)[1] as &i128);
        v3 = 0;
        eprintln!("{:?}: {:?}", &v1, &v0);
        *(v8) = *(v8) + 1;
    }
}
