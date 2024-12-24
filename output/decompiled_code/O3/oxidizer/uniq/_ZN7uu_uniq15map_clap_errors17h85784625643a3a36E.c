fn uu_uniq::map_clap_errors(a0: void*) -> u64 {
    let v0: i8;  // [bp-0xb0]
    let v1: i192;  // [sp-0xa8], Other Possible Types: struct24
    let v2: i192;  // [bp-0x88]
    let v3: i192;  // [sp-0x70], Other Possible Types: struct24
    let v4: struct24;  // [sp-0x58], Other Possible Types: i192
    let v5: i192;  // [sp-0x40], Other Possible Types: struct24
    let v7: i32;  // eax
    let v8: i64;  // rdx
    let v9: i64;  // rax
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rax

    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_41f22f, 47);
    v2 = v1;
    v4 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v2);
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_41f25e, 117);
    v2 = v1;
    v5 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v2);
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_41f2d3, 111);
    v2 = v1;
    v3 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v2);
    switch (v7) {
    case 0:
        v9 = clap_builder::error::Error<F>::get(&v0, 5, v8);
        if v9 && uu_uniq::map_clap_errors::{{closure}}(v9) as i8 {
            v11 = clap_builder::error::Error<F>::get(&v0, 1, v8);
            if v11 && uu_uniq::map_clap_errors::{{closure}}(v11) as i8 {
                v1 = v5;
                alloc::boxed::Box<T>::new(&v1);
                break;
            }
        }
        v13 = clap_builder::error::Error<F>::get(&v0, 5, v8);
        if v13 && uu_uniq::map_clap_errors::{{closure}}(v13) as i8 {
            v14 = clap_builder::error::Error<F>::get(&v0, 1, v8);
            if v14 && uu_uniq::map_clap_errors::{{closure}}(v14) as i8 {
                v1 = v3;
                v10 = alloc::boxed::Box<T>::new(&v1);
                return v10;
            }
        }
    case 8:
        v1 = v4;
        v10 = alloc::boxed::Box<T>::new(&v1);
        return v10;
    default:
        v10 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(a0);
        return v10;
    }
}
