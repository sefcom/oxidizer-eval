fn uu_tac::try_mmap_stdin() -> Result<(), Error> {
    let a0: i64;  // rsi
    let v0: std::io::stdio::Stdin;  // [bp-0x48]
    let v1: Result<struct16, struct8>;  // [bp-0x40]
    let v2: u128;  // [bp-0x38]
    let v3: void*;  // [bp-0x28]
    let v4: void*;  // [bp-0x18]
    let v5: u8;  // [bp-0x10]
    let v6: u16;  // [bp-0xe]
    let v8: i64;  // rdi
    let v9: i64;  // rdi

    v0 = std::io::stdio::stdin();
    v4 = 0;
    v3 = 0;
    v5 = 0;
    v6 = 0;
    v1 = memmap2::MmapOptions::map(&v3, &v0);
    match v1 {
        Ok(_) => {
            *((v9 + 8) as &u128) = v2;
            *(v9 as &i64) = 1;
            return;
        },
        Err(_) => {
            *(v8 as &i64) = 0;
            return;
        },
    }
}
