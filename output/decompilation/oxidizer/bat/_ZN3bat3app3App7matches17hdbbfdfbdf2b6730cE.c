fn bat::app::App::matches(a1: i32) -> Option<struct80> {
    let a0: void*;  // rdi
    let v0: Option<struct24>;  // [bp-0x368], Other Possible Types: struct24, u64
    let v1: u64;  // [bp-0x368]
    let v2: u64;  // [bp-0x360]
    let v3: u64;  // [bp-0x358]
    let v4: struct8;  // [bp-0x350], Other Possible Types: u64
    let v5: struct16;  // [bp-0x350]
    let v6: u128;  // [bp-0x348]
    let v8: struct32;  // [bp-0x338]
    let v9: struct24;  // [bp-0x338]
    let v10: u64;  // [bp-0x330]
    let v12: u8;  // [bp-0x318]
    let v14: struct712;  // [bp-0x2f8], Other Possible Types: <anon>, Option<struct24>, struct32
    let v15: struct24;  // [bp-0x2f8]
    let v16: u128;  // [bp-0x2f8]
    let v17: struct24;  // [bp-0x2f8]
    let v18: iNone;  // [bp-0x2e8]
    let v19: u128;  // [bp-0x2d8]
    let v20: u128;  // [bp-0x2c8]
    let v21: i8;  // [bp-0x2b8]
    let v23: core::result::Result<&str, core::str::error::Utf8Error>;  // ebp
    let v24: void*;  // rbx
    let v26: u64;  // rdx
    let v27: u64;  // rcx
    let v28: u64;  // r8
    let v30: i64;  // rdi
    let v31: u64;  // rax

    v24 = a0;
    v14 = wild::args_os();
    if !<alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::advance_by(&v14) {
        v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v14);
    }
    v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("cache");
    if v31 == 0x8000000000000000 {
        if v9.field_0 == 0x8000000000000000 {
LABEL_7a6071:
            v14 = wild::args_os();
            core::iter::traits::iterator::Iterator::collect(&v12, &v14);
            v14 = bat::clap_app::build_app(v23 as u64);
            clap_builder::builder::command::Command::get_matches_from(v24 + 8, &v14, &v12);
            *(v24 as &i8) = 13;
            return;
        }
    } else {
        if v9.field_0 != 0x8000000000000000 {
            v24 = a0;
            if alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v2, v3, v10, v9.field_16) {
                goto LABEL_7a6071;
            }
        }
    }
    v14 = wild::args_os();
    v30 = &v9;
    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::try_fold(&v14, a1, v26, v27, v28), a1) {
        wild::args_os(v30);
        bat::config::get_args_from_env_vars(&v4);
        v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9);
        v14 = core::option::unwrap(v14);
        v0 = v15;
        v5 = alloc::vec::Vec<T,A>::insert(&v0, "src/bin/bat/app.rs");
        v14 = v8;
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(&v14, &v5);
        v14 = bat::clap_app::build_app(v23 as u64);
        clap_builder::builder::command::Command::get_matches_from(v24 + 8, &v14, &v12);
        *(v24 as &i8) = 13;
        return;
    }
    wild::args_os(v30);
    v15 = bat::config::get_args_from_env_opts_var();
    if v15.field_0 == 9223372036854775809 {
        v0 = bat::config::get_args_from_config_file();
        v1 = v31;
        if let None = v0 {
            <bat::error::Error as core::convert::From<&str>>::from(&v16 as u8, "Could not parse configuration file");
            *(&v24[64] as &i128) = *(&v21 as &i128);
            *(&v24[48] as &u128) = v20;
            *(&v24[32] as &u128) = v19;
            v24[16] = v18;
            *(v24 as &u128) = v16;
            return;
        }
    } else {
        v3 = v15.field_16;
        v0 = *(&v15.field_0 as &i128);
        v1 = v31;
        if v1 == 0x8000000000000000 {
            <bat::error::Error as core::convert::From<&str>>::from(&v16, "Could not parse configuration file");
            *(&v24[64] as &i128) = *(&v21 as &i128);
            *(&v24[48] as &u128) = v20;
            *(&v24[32] as &u128) = v19;
            v24[16] = v18;
            *(v24 as &u128) = v16;
            return;
        }
    }
    v0 = v1;
    v4 = v31;
    v6 = *((&v0 as &char + 8) as &i128);
    bat::config::get_args_from_env_vars(&v0);
    v14 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    v4 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(&v14);
    v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9);
    v14 = core::option::unwrap(v14);
    v0 = v17;
    v5 = alloc::vec::Vec<T,A>::insert(&v0, "src/bin/bat/app.rs");
    v14 = v8;
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(&v14, &v5);
    v14 = bat::clap_app::build_app(v23 as u64);
    clap_builder::builder::command::Command::get_matches_from(v24 + 8, &v14, &v12);
    *(v24 as &i8) = 13;
    return;
}
