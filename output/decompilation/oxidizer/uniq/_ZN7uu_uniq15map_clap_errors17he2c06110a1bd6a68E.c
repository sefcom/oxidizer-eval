fn uu_uniq::map_clap_errors(a0: void*) -> u64 {
    let v0: i8;  // [bp-0xb0]
    let v1: struct24;  // [sp-0xa8]
    let v2: i32;  // [sp-0x90]
    let v3: struct24;  // [sp-0x88]
    let v4: struct24;  // [sp-0x70]
    let v5: struct24;  // [sp-0x58]
    let v6: struct24;  // [sp-0x40]
    let v9: i64;  // rax
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v12: i64;  // rax
    let v13: i64;  // rbx
    let v14: i64;  // rbx

    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("--group is mutually exclusive with -c/-d/-D/-u
");
    v3 = v1;
    v5 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v3);
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid argument 'badoption' for '--group'
Valid arguments are:
  - 'prepend'
  - 'append'
  - 'separate'
  - 'both'
");
    v3 = v1;
    v6 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v3);
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid argument 'badoption' for '--all-repeated'
Valid arguments are:
  - 'none'
  - 'prepend'
  - 'separate'
");
    v3 = v1;
    v4 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v3);
    match (*((a0 + 213) as &i8)) {
        0 => {
            v9 = clap_builder::error::Error<F>::get(&v0, 5);
            if v9 && uu_uniq::map_clap_errors::{{closure}}(v9) as i8 {
                v10 = clap_builder::error::Error<F>::get(&v0, 1);
                if v10 && uu_uniq::map_clap_errors::{{closure}}(v10) as i8 {
                    v2 = 1;
                    v1 = v6;
                    break;
                }
            }
            v11 = clap_builder::error::Error<F>::get(&v0, 5);
            if v11 && uu_uniq::map_clap_errors::{{closure}}(v11) as i8 {
                v12 = clap_builder::error::Error<F>::get(&v0, 1);
                if v12 && uu_uniq::map_clap_errors::{{closure}}(v12) as i8 {
                    v2 = 1;
                    v1 = v4;
                    v13 = alloc::boxed::Box<T>::new(&v1);
                    return v14;
                }
            }
        }
        8 => {
            v2 = 1;
            v1 = v5;
            break;
        }
        _ => {
            return v14;
        }
    }
}
