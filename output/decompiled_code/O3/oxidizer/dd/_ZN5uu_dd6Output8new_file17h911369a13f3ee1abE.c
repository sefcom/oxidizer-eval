fn uu_dd::Output::new_file(a0: &Result<struct24, struct17>, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: u32;  // [sp-0x54]
    let v1: Result<struct16, struct12>;  // [sp-0x50], Other Possible Types: u128
    let v2: u64;  // [sp-0x40], Other Possible Types: Result<struct4, struct8>
    let v4: u64;  // rax
    let v5: u64;  // rcx

    v2 = uu_dd::Output::new_file::open_dst(a1, a2, a3->field_91, a3->field_92, &a3[1].padding_0[2] as &struct_1);
    v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2, a1, a2);
    v4 = v1;
    match v1 {
        Ok(_) => {
            v5 = *((&v1 as &char + 8) as &i64);
            return struct17 {
                field_0: 4
                field_8: <UNKNOWN>
                field_16: <UNKNOWN>
            };
        },
        Err(_) => {
            v0 = *((&v1 as &char + 8) as &i32);
            if !a3->field_93 {
                v2 = std::fs::File::set_len(&v0, *(&a3->field_88 as &i64));
            }
            uu_dd::Output::prepare_file(a0, v0 as u64, a3);
            return struct17 {
                field_0: 4
                field_8: <UNKNOWN>
                field_16: <UNKNOWN>
            };
        },
    }
}
