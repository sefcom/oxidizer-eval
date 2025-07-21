fn uu_uniq::map_clap_errors(a0: i64) -> long long {
    let v0: i64;  // [bp-0xb0]
    let v1: struct32;  // [bp-0xa8], Other Possible Types: u128
    let v2: u64;  // [bp-0x98]
    let v3: u128;  // [bp-0x88]
    let v4: u64;  // [bp-0x78]
    let v5: alloc::string::String;  // [bp-0x70]
    let v6: u64;  // [bp-0x60]
    let v7: alloc::string::String;  // [bp-0x58]
    let v8: u64;  // [bp-0x48]
    let v9: alloc::string::String;  // [bp-0x40]
    let v11: void*;  // rcx
    let v12: u64;  // rdx
    let v13: u32;  // eax
    let v14: u64;  // rax
    let v15: u64;  // rax
    let v16: alloc::string::String;  // rax
    let v17: u64;  // rax
    let v18: u64;  // rax

    v0 = a0;
    <T as alloc::slice::hack::ConvertVec>::to_vec("--group is mutually exclusive with -c/-d/-D/-u\n", v11);
    v4 = v2;
    v3 = v1;
    v7 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v3, v12, v11);
    <T as alloc::slice::hack::ConvertVec>::to_vec("invalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\n", v11);
    v4 = v2;
    v3 = v1;
    v9 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v3, v12, v11);
    <T as alloc::slice::hack::ConvertVec>::to_vec("invalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - 'prepend'\n  - 'separate'\n", v11);
    v4 = v2;
    v3 = v1;
    v5 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v3, v12, v11);
    match (v13) {
        0 => {
            v14 = clap_builder::error::Error<F>::get(&v0, 5);
            if v14 && uu_uniq::map_clap_errors::{{closure}}(v14) as i8 && !((v16 = clap_builder::error::Error<F>::get(&v0, 1), !v16 || !uu_uniq::map_clap_errors::{{closure}}(v16) as i8)) {
                v1 = struct32 {
                    field_0: *(&v9.vec.buf.cap as &i128)
                    field_16: v9.vec.len
                    field_24: 1
                };
                alloc::boxed::Box<T>::new(&v1);
            } else {
                v17 = clap_builder::error::Error<F>::get(&v0, 5);
                if !v17 {
                    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
                } else if uu_uniq::map_clap_errors::{{closure}}(v17) as i8 {
                    v18 = clap_builder::error::Error<F>::get(&v0, 1);
                    if !v18 {
                        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
                    } else if uu_uniq::map_clap_errors::{{closure}}(v18) as i8 {
                        v1 = struct32 {
                            field_0: *(&v5.vec.buf.cap as &i128)
                            field_16: v6
                            field_24: 1
                        };
                        alloc::boxed::Box<T>::new(&v1);
                    } else {
                        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
                    }
                } else {
                    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
                }
            }
        }
        8 => {
            v1 = struct32 {
                field_0: *(&v7.vec.buf.cap as &i128)
                field_16: v8
                field_24: 1
            };
            alloc::boxed::Box<T>::new(&v1);
        }
        _ => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
        }
    }
    return v15;
}
