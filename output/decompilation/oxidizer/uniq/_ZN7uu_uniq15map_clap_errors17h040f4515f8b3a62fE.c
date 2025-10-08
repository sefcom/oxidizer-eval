fn uu_uniq::map_clap_errors(a0: i64) -> u64 {
    let v0: struct64;  // [bp-0xb0]
    let v1: struct24;  // [bp-0xa8], Other Possible Types: struct32
    let v2: u64;  // [bp-0x98]
    let v3: u128;  // [bp-0x88]
    let v4: u64;  // [bp-0x78]
    let v5: alloc::string::String;  // [bp-0x68]
    let v6: u64;  // [bp-0x58]
    let v7: alloc::string::String;  // [bp-0x50]
    let v8: u64;  // [bp-0x40]
    let v9: alloc::string::String;  // [bp-0x38]
    let v11: u64;  // rdx
    let v12: u64;  // rcx
    let v13: u32;  // eax
    let v14: Result<struct24, struct24>;  // rax
    let v15: struct40;  // rax
    let v16: u64;  // rax
    let v17: struct24;  // rax
    let v18: u64;  // rax

    v0 = a0;
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("--group is mutually exclusive with -c/-d/-D/-u\n");
    v4 = v2;
    v3 = *(&v1.field_0 as &i128);
    v9 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v3, v11, v12);
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("invalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\n");
    v4 = v2;
    v3 = *(&v1.field_0 as &i128);
    v5 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v3, v11, v12);
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("invalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - 'prepend'\n  - 'separate'\n");
    v4 = v2;
    v3 = *(&v1.field_0 as &i128);
    v7 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v3, v11, v12);
    match (v13) {
        0 => {
            v15 = clap_builder::error::Error<F>::get(&v0, 5);
            if v15 && uu_uniq::map_clap_errors::{{closure}}(v15) {
                v16 = clap_builder::error::Error<F>::get(&v0, 1);
                if !v16 || !uu_uniq::map_clap_errors::{{closure}}(v16) {
                    break;
                }
                v1 = struct32 {
                    field_0: *(&v5.vec.buf.inner.cap as &i128)
                    field_16: v6
                    field_24: 1
                };
                alloc::boxed::Box<T>::new(&v1);
            } else {
                v17 = clap_builder::error::Error<F>::get(&v0, 5);
                if !v17 {
                    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
                } else if uu_uniq::map_clap_errors::{{closure}}(v17) {
                    v18 = clap_builder::error::Error<F>::get(&v0, 1);
                    if !v18 {
                        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
                    } else if uu_uniq::map_clap_errors::{{closure}}(v18) {
                        v1 = struct32 {
                            field_0: *(&v7.vec.buf.inner.cap as &i128)
                            field_16: v8
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
                field_0: *(&v9.vec.buf.inner.cap as &i128)
                field_16: v9.vec.len
                field_24: 1
            };
            alloc::boxed::Box<T>::new(&v1);
        }
        _ => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
        }
    }
    return v14;
}
