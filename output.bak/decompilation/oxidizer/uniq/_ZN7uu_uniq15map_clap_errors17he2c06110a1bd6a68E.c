fn uu_uniq::map_clap_errors(a0: void*) -> u64 {
    let v0: i8;  // [bp-0xb0]
    let v1: struct24;  // [sp-0xa8], Other Possible Types: struct28
    let v3: struct24;  // [bp-0x88]
    let v4: struct24;  // [sp-0x70]
    let v5: struct24;  // [sp-0x58]
    let v6: struct24;  // [sp-0x40]
    let v8: i32;  // eax
    let v9: i64;  // rax
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rax

    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_41f108, 47);
    *(&v3.field_0 as &struct24) = struct24 {
        field_0: v1
        field_16: v2
    };
    v5 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v3);
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_41f137, 117);
    *(&v3.field_0 as &struct24) = struct24 {
        field_0: v1
        field_16: v2
    };
    v6 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v3);
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_41f1ac, 111);
    *(&v3.field_0 as &struct24) = struct24 {
        field_0: v1
        field_16: v2
    };
    v4 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v3);
    switch (v8) {
    case 0:
        v9 = clap_builder::error::Error<F>::get(&v0, 5);
        if v9 && uu_uniq::map_clap_errors::{{closure}}(v9) as i8 {
            v11 = clap_builder::error::Error<F>::get(&v0, 1);
            if v11 && uu_uniq::map_clap_errors::{{closure}}(v11) as i8 {
                v1 = struct28 {
                    field_0: v6
                    field_16: *((&v6 as &char + 16) as &i64)
                    field_24: 1
                };
                alloc::boxed::Box<T>::new(&v1);
                break;
            }
        }
        v13 = clap_builder::error::Error<F>::get(&v0, 5);
        if v13 && uu_uniq::map_clap_errors::{{closure}}(v13) as i8 {
            v14 = clap_builder::error::Error<F>::get(&v0, 1);
            if v14 && uu_uniq::map_clap_errors::{{closure}}(v14) as i8 {
                v1 = struct28 {
                    field_0: v4
                    field_16: *((&v4 as &char + 16) as &i64)
                    field_24: 1
                };
                v10 = alloc::boxed::Box<T>::new(&v1);
                return v10;
            }
        }
    case 8:
        v1 = struct28 {
            field_0: v5
            field_16: *((&v5 as &char + 16) as &i64)
            field_24: 1
        };
        v10 = alloc::boxed::Box<T>::new(&v1);
        return v10;
    default:
        v10 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(a0);
        return v10;
    }
}
