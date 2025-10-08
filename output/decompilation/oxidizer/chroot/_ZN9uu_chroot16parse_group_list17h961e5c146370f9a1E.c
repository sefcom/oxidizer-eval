fn uu_chroot::parse_group_list(a0: i64, a1: u64, a2: u32) -> int {
    let v1: struct24;  // [bp-0x160]
    let v2: struct24;  // [bp-0x160], Other Possible Types: struct16
    let v3: struct24;  // [bp-0x160]
    let v4: struct24;  // [bp-0x160]
    let v5: struct24;  // [bp-0x160]
    let v6: struct24;  // [bp-0x160]
    let v7: struct24;  // [bp-0x160]
    let v8: u128;  // [bp-0x15c]
    let v9: core::str::pattern::CharSearcher;  // [bp-0x150]
    let v10: u64;  // [bp-0x14c]
    let v11: u16;  // [bp-0x120]
    let v12: struct24;  // [bp-0x118], Other Possible Types: u128
    let v13: u128;  // [bp-0x110]
    let v14: u64;  // [bp-0x108]
    let v15: u64;  // [bp-0x100]
    let v16: u64;  // [bp-0xe8]
    let v17: u64;  // [bp-0xe0]
    let v18: u64;  // [bp-0xd8]
    let v19: i64;  // [bp-0xd0], Other Possible Types: u64
    let v20: u64;  // [bp-0xc8]
    let v21: void*;  // [bp-0xc0]
    let v22: struct16;  // [bp-0xc0]
    let v23: u64;  // [bp-0xb8]
    let v24: void*;  // [bp-0xb0]
    let v25: struct32;  // [bp-0x88]
    let v29: i64;  // r12
    let v31: iNone;  // xmm0
    let v33: u64;  // rax
    let v34: u64;  // rax
    let v35: u64;  // rax
    let v36: u64;  // rcx
    let v37: struct24;  // rax
    let v38: struct24;  // r13
    let v39: u64;  // rdx
    let v41: u32;  // eax
    let v42: void*;  // rax
    let v44: u64;  // rax
    let v45: &str;  // rax:rdx
    let v46: &str;  // rax:rdx
    let v47: u32;  // [bp-0x118]

    v9 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a1, a2);
    v2 = struct16 {
        field_0: 0
        field_8: a2
    };
    v11 = 1;
    core::iter::traits::iterator::Iterator::collect(&v18, &v2);
    if v20 == 1 {
        v45 = core::str::<impl str>::trim_matches(*(v19 as &i64), *((v19 + 8) as &i64), a2);
        if !v45.length {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v45.data_ptr, 0);
            v33 = v1.field_16;
            v8 = *(&v1.field_0 as &i128);
            v10 = v33;
            return struct4 {
                field_0: 4
            };
        }
        v29 = alloc::alloc::Global::alloc_impl(8, 24);
        v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v45.data_ptr, v45.length);
        v14 = v7.field_16;
        v31 = *(&v7.field_0 as &i128);
        *(&v12 as void*) = v31;
        *((v29 + 16) as &u64) = v14;
        *(v29 as void*) = v31;
        return struct32 {
            field_0: 14
            padding_4: <UNKNOWN>
            field_8: 1
            field_16: v29
            field_24: 1
        };
    } else {
        v2 = struct16 {
            field_0: v19
            field_8: v20 * 16 + v19
        };
        if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v2) {
            v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
            v34 = v3.field_16;
            v8 = *(&v3.field_0 as &i128);
            v10 = v34;
            return struct40 {
                field_0: 5
                field_4: <UNKNOWN>
                field_16: v36
                field_24: <UNKNOWN>
            };
        }
        v21 = 0;
        v23 = 8;
        v24 = 0;
        v25 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v18);
        loop {
            v37 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v25);
            if !v37 {
                v44 = 14;
                return struct32 {
                    field_0: v42 as u32
                    padding_4: <UNKNOWN>
                    field_8: *(&v22.field_0 as &i128)
                    field_24: 0
                };
            }
            v38 = v37;
            v46 = core::str::<impl str>::trim_matches(v37, v39, a2);
            if !v46.length {
                if v39 {
                    v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v38, v39);
                    v15 = v4.field_16;
                    v13 = *(&v4.field_0 as &i128);
                    v47 = 4;
                    uucore::mods::error::set_exit_code(125);
                    v16 = uucore::util_name();
                    v17 = v39;
                    eprintln!("{}: {}", &v16, &v47);
                    v41 = v42 as u32;
                }
            } else {
                if !core::str::pattern::Pattern::is_prefix_of(v46.data_ptr, v46.length) || !core::str::pattern::Pattern::is_suffix_of(v46.data_ptr, v46.length) {
                    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v46.data_ptr, v46.length);
                    v12 = v6;
                    v22 = alloc::vec::Vec<T,A>::push(&v12);
                } else {
                    v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v38, v39);
                    v15 = v5.field_16;
                    v13 = *(&v5.field_0 as &i128);
                    v47 = 4;
                    uucore::mods::error::set_exit_code(125);
                    v16 = uucore::util_name();
                    v17 = v39;
                    eprintln!("{}: {}", &v16, &v47);
                }
            }
        }
    }
}
