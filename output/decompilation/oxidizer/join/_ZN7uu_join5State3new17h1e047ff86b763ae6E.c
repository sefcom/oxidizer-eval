fn uu_join::State::new(a0: &Result<struct77, struct16>, a1: u8, a2: u32, a3: u32, a4: &struct8, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x70], Other Possible Types: Result<struct16, struct4>
    let v1: i96;  // [sp-0x60], Other Possible Types: Result<struct4, struct8>, struct44
    let v4: i32;  // edx

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, "-") as i8 {
        alloc::boxed::Box<T>::new(std::io::stdio::Stdin::lock(a4), v4 & 1);
    } else {
        v1 = std::fs::File::open(a2, a3);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, a2, a3);
        match v0 {
            Ok(_) => {
                return Err(struct16 {
                    field_0: v7
                    field_8: v8
                });
            },
            Err(_) => {
                v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 8) as &i32) as u32 as u64);
                alloc::boxed::Box<T>::new(&v1);
            },
        }
    }
    return Ok(struct77 {
        field_0: 8
        field_8: 0
        field_16: a2
        field_24: a3
        field_32: v5
        field_40: v6
        field_48: v10
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
        field_72: <UNKNOWN>
        field_80: <UNKNOWN>
        field_81: <UNKNOWN>
        field_82: <UNKNOWN>
    });
}
