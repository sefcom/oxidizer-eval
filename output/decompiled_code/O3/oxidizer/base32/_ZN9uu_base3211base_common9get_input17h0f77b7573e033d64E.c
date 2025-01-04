fn uu_base32::base_common::get_input(a0: &struct24, a1: &struct48, a2: u32) -> u64 {
    let v0: u128;  // [sp-0x38], Other Possible Types: Result<struct16, struct12>
    let v1: u64;  // [sp-0x28], Other Possible Types: Result<struct4, struct8>
    let v3: u32;  // edx
    let v4: u64;  // rax
    let v5: u64;  // rcx
    let v6: u64;  // rdx

    if a1->field_10 == 0x8000000000000000 {
        v1 = std::io::stdio::stdin();
        v4 = alloc::boxed::Box<T>::new(std::io::stdio::Stdin::lock(&v1), v3 & 1);
        v5 = &g_549738;
        goto LABEL_4c18d0;
    } else {
        v1 = std::fs::File::open(&a1->field_10 as &struct_0, a2);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, &a1->field_10 as &struct_0);
        v4 = v0;
        match v0 {
            Ok(_) => {
                v5 = *((&v0 as &char + 8) as &i64);
                v6 = 1;
            },
            Err(_) => {
                v4 = alloc::boxed::Box<T>::new(*((&v0 as &char + 8) as &i32) as u32 as u64);
                v5 = &g_549790;
LABEL_4c18d0:
                v6 = 0;
            },
        }
    }
    return struct24 {
        field_0: v6
        field_8: v4
        field_16: v5
    };
}
