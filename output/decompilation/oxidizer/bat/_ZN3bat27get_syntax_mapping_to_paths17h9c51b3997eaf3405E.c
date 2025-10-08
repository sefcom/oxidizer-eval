fn bat::get_syntax_mapping_to_paths(a0: i64, a1: u64) -> long long {
    let v0: i64;  // [bp-0xd0]
    let v1: struct24;  // [bp-0xc8], Other Possible Types: u64
    let v2: core::fmt::Arguments;  // [bp-0xc8]
    let v3: u128;  // [bp-0xc0]
    let v4: iNone;  // [bp-0xb8]
    let v5: struct24;  // [bp-0xa8]
    let v6: struct24;  // [bp-0xa8]
    let v7: core::fmt::Arguments;  // [bp-0xa8]
    let v8: core::fmt::Arguments;  // [bp-0xa0]
    let v9: Result<struct40, struct16>;  // [bp-0x98]
    let v10: u64;  // [bp-0x88]
    let v11: core::fmt::Arguments;  // [bp-0x78]
    let v12: core::fmt::rt::Argument;  // [bp-0x68]
    let v13: i64;  // [bp-0x60]
    let v14: struct32;  // [bp-0x50]
    let v16: u64;  // rax
    let v17: i64;  // rdx
    let v18: core::result::Result<alloc::string::String, std::env::VarError>;  // rbp
    let v19: u64;  // rax

    v16 = std::thread::local::LocalKey<T>::with();
    v10 = g_ac6f08.field_0;
    v11 = *(&g_ac6f18 as &i128);
    v12 = v16;
    v13 = v17;
    v14 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual<core::ops::control_flow::ControlFlow<B,core::convert::Infallible>>>::from_residual(a1);
    loop {
        do {
            if !<core::iter::adapters::chain::Chain<A,B> as core::iter::traits::iterator::Iterator>::next(&v14) {
                *((v0 + 32) as &core::fmt::rt::ArgumentType) = v12.ty;
                *((v0 + 16) as &core::fmt::Arguments) = v11;
                *(v0 as &u64) = v10;
                return v0;
            }
        } while (*(v17 as &i64));
        hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v7, &v10, *((v17 + 8) as &i64));
        if v7 {
            v4 = v9;
            *(&v1 as &i128) = *(&v7.pieces.ptr as &i128);
        } else {
            v3 = *(&v8.pieces.ptr as &i128);
            v2 = 0;
        }
        v19 = std::collections::hash::map::Entry<K,V>::or_insert_with(&v2);
        v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v18 + 8) as &i64), *((v18 + 16) as &i64));
        v1 = v6;
        alloc::vec::Vec<T,A>::push(v19, &v1);
    }
}
