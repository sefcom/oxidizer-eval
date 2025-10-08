fn firecracker::seccomp::filter_thread_categories(a1: &struct48) -> : struct48 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x128]
    let v1: u128;  // [bp-0x128]
    let v2: i64;  // [bp-0x118]
    let v3: struct8;  // [bp-0x108], Other Possible Types: struct24
    let v4: struct96;  // [bp-0x108]
    let v5: struct24;  // [bp-0x108], Other Possible Types: u192
    let v6: struct24;  // [bp-0x108]
    let v7: u128;  // [bp-0x101]
    let v8: Result<struct152, struct16>;  // [bp-0xf1], Other Possible Types: u64
    let v9: core::fmt::rt::Argument;  // [bp-0xf1]
    let v10: iNone;  // [bp-0xe8]
    let v11: iNone;  // [bp-0xd8]
    let v12: u128;  // [bp-0xc8]
    let v13: iNone;  // [bp-0xb8]
    let v14: u64;  // [bp-0xa8]
    let v15: iNone;  // [bp-0x98]
    let v16: iNone;  // [bp-0x88]
    let v17: struct40;  // [bp-0x78], Other Possible Types: u128
    let v18: u128;  // [bp-0x68]
    let v19: u64;  // [bp-0x60]
    let v20: iNone;  // [bp-0x58]
    let v21: struct8;  // [bp-0x38], Other Possible Types: u8
    let v22: i8;  // [bp-0x28]
    let v24: u64;  // rax

    v17 = <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v4 = core::iter::traits::iterator::Iterator::partition(&v17);
    v16 = v10;
    v15 = v4.field_16;
    v14 = v4.field_0;
    v20 = v13;
    v18 = v12;
    v17 = v11;
    if v19 {
        v3 = hashbrown::map::HashMap<K,V,S,A>::iter(&v17);
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(0x1, 0);
        <std::collections::hash::map::Keys<K,V> as core::iter::traits::iterator::Iterator>::fold(&v21, &v3, &v0);
        v21 = alloc::string::String::pop();
        v8 = *(&v22 as &i64);
        *(&v3 as u8 as &struct8) = v21;
        return struct48 {
            field_0: 0
            field_8: 18
            field_9: <UNKNOWN>
            field_24: v9
            field_32: <UNKNOWN>
        };
    }
    v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("vmm");
    v0 = v5;
    if hashbrown::map::HashMap<K,V,S,A>::get_inner(&v14, &v0) {
        v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("api");
        v0 = v6;
        if hashbrown::map::HashMap<K,V,S,A>::get_inner(&v14, &v0) {
            v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("vcpu");
            v0 = v6;
            if hashbrown::map::HashMap<K,V,S,A>::get_inner(&v14, &v0) {
                return struct48 {
                    field_0: v14
                    field_16: v15
                    field_32: v16
                };
            }
        }
    }
    v8 = v2;
    v7 = v1;
    *((a0 + 8) as &i8) = 19;
}
