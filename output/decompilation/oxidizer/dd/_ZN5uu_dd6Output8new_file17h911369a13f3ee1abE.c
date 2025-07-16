fn uu_dd::Output::new_file(a1: i64, a2: i64, a3: i64) -> Result<struct24, struct17> {
    let a0: u64;  // rsi
    let v0: u32;  // [bp-0x54]
    let v1: Result<struct16, struct12>;  // [bp-0x50]
    let v2: u64;  // [bp-0x48]
    let v3: core::result::Result<(), std::io::error::Error>;  // [bp-0x40]
    let v5: i64;  // rdi
    let v6: u64;  // rdi

    v3 = uu_dd::Output::new_file::open_dst(a0, a1, *((a2 + 145) as &i8), *((a2 + 146) as &i8), a2 + 150);
    v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, a0, a1);
    match v1 {
        Ok(_) => {
            *((v5 + 8) as &i64) = v1 as i64;
            *((v5 + 16) as &u64) = v2;
            *(v5 as &i8) = 4;
            return;
        },
        Err(_) => {
            v0 = *((&v1 as &char + 8) as &i32);
            if !*((a2 + 147) as &i8) {
                v3 = std::fs::File::set_len(&v0, *((a2 + 136) as &i64));
            }
            uu_dd::Output::prepare_file(v6, v0, a2);
            return;
        },
    }
}
