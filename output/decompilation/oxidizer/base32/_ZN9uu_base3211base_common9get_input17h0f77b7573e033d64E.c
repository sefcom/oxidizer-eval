fn uu_base32::base_common::get_input(a0: &struct24, a1: &struct48) -> u64 {
    let v0: i128;  // [sp-0x38], Other Possible Types: Result<struct16, struct4>
    let v1: i64;  // [sp-0x28], Other Possible Types: Result<struct4, struct8>
    let v3: i32;  // edx

    if *((a1 + 16) as &i64) == 0x8000000000000000 {
        v1 = std::io::stdio::stdin();
        alloc::boxed::Box<T>::new(std::io::stdio::Stdin::lock(&v1), v3 & 1);
        goto LABEL_4c18d0;
    } else {
        v1 = std::fs::File::open(a1 + 16);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, a1 + 16);
        if !v0 {
            alloc::boxed::Box<T>::new(*((&v0 as &char + 8) as &i32));
LABEL_4c18d0:
        }
    }
    return struct24 {
        field_0: v6
        field_8: v4
        field_16: v5
    };
}
