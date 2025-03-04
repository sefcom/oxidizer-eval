fn uu_tee::process_error(a0: u32, a1: u32, a2: void*, a3: &struct8) -> u64 {
    let v1: void*;  // [sp-0x40]
    let v2: u128;  // [bp-0x38]
    let v3: u8;  // [sp-0x28]
    let v5: u64;  // rdx

    if a0 {
        goto *((4274940 + *(vvar_0 as &i8) * 4) as &i32) + 4274940;
    } else if std::io::error::Error::kind(a1) as i8 != 11 {
        v2 = v5;
        v1 = 0;
        v2 = *(&(&a2->padding_0)[1] as &i128);
        v3 = 0;
        show_error!("{}: {}", &v1, &v0);
        *(a3) = *(a3) + 1;
        return 0;
    } else {
        return 0;
    }
}
