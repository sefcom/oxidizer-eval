fn uu_uniq::map_clap_errors(a0: i64) -> long long {
    let v0: i64;  // [bp-0xb0]
    let v1: u128;  // [bp-0xa8]
    let v2: u64;  // [bp-0x98]
    let v3: u32;  // [bp-0x90]
    let v4: u128;  // [bp-0x88]
    let v5: u64;  // [bp-0x78]
    let v6: alloc::string::String;  // [bp-0x70]
    let v7: u64;  // [bp-0x60]
    let v8: alloc::string::String;  // [bp-0x58]
    let v9: u64;  // [bp-0x48]
    let v10: alloc::string::String;  // [bp-0x40]
    let v12: void*;  // rcx
    let v13: u64;  // rdx
    let v14: u32;  // eax
    let v15: u64;  // rax
    let v16: u64;  // rax
    let v17: alloc::string::String;  // rax
    let v18: u64;  // rax
    let v19: u64;  // rax

    v0 = a0;
    <T as alloc::slice::hack::ConvertVec>::to_vec("--group is mutually exclusive with -c/-d/-D/-u\n", v12);
    v5 = v2;
    v4 = v1;
    v8 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v4, v13, v12);
    <T as alloc::slice::hack::ConvertVec>::to_vec("invalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\n", v12);
    v5 = v2;
    v4 = v1;
    v10 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v4, v13, v12);
    <T as alloc::slice::hack::ConvertVec>::to_vec("invalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - 'prepend'\n  - 'separate'\n", v12);
    v5 = v2;
    memcpy(&v4, &v1, 16);
    v6 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v4, v13, v12);
    match (v14) {
        0 => {
            v15 = clap_builder::error::Error<F>::get(&v0, 5);
            if v15 && uu_uniq::map_clap_errors::{{closure}}(v15) as i8 && !((v17 = clap_builder::error::Error<F>::get(&v0, 1), !v17 || !uu_uniq::map_clap_errors::{{closure}}(v17) as i8)) {
                v3 = 1;
                memcpy(stack_base + -168, stack_base + -64, 16);
                v2 = v10.vec.len;
                alloc::boxed::Box<T>::new(&v1);
            } else {
                v18 = clap_builder::error::Error<F>::get(&v0, 5);
                if !v18 {
                    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
                } else if uu_uniq::map_clap_errors::{{closure}}(v18) as i8 {
                    v19 = clap_builder::error::Error<F>::get(&v0, 1);
                    if !v19 {
                        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
                    } else if uu_uniq::map_clap_errors::{{closure}}(v19) as i8 {
                        v3 = 1;
                        memcpy(stack_base + -168, stack_base + -112, 16);
                        v2 = v7;
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
            v3 = 1;
            memcpy(stack_base + -168, stack_base + -88, 16);
            v2 = v9;
            alloc::boxed::Box<T>::new(&v1);
        }
        _ => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
        }
    }
    return v16;
}
