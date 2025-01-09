fn uu_tee::process_error(a0: u32, a1: u32, a2: void*, a3: &struct8) -> u64 {
    let v0: u64;  // [sp-0x98]
    let v1: void*;  // [sp-0x40], Other Possible Types: u64
    let v2: u64;  // [bp-0x38]
    let v3: u8;  // [sp-0x28]
    let v5: u64;  // rdx

    v0 = a1;
    if a0 {
        goto *((4274940 + *(a0 as &i8) * 4) as &i32) + 4274940;
    } else if std::io::error::Error::kind(a1) as i8 != 11 {
        v1 = uucore::util_name();
        v2 = v5;
        eprint!("{:?}: ", &v1);
        v1 = 0;
        v2 = *(&(&a2->padding_0)[1] as &i128);
        v3 = 0;
        eprintln!("{:?}: {:?}", &v1, &v0);
        *(a3) = *(a3) + 1;
        return 0;
    } else {
        return 0;
    }
}
