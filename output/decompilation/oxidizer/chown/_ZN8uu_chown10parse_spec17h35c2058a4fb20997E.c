fn uu_chown::parse_spec(a1: &[u8], a2: i32) -> : struct20 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x134]
    let v1: core::slice::iter::Iter<u8>;  // [bp-0x128], Other Possible Types: Result<struct16, struct16>
    let v2: u64;  // [bp-0x120]
    let v3: void*;  // [bp-0xe8]
    let v4: u64;  // [bp-0xe0]
    let v5: i64;  // [bp-0xd8]
    let v6: u8;  // [bp-0xd0]
    let v7: u128;  // [bp-0xc8]
    let v8: u128;  // [bp-0xb8]
    let v9: void*;  // [bp-0xa0], Other Possible Types: u64
    let v10: struct16;  // [bp-0x98]
    let v11: core::str::pattern::CharSearcher;  // [bp-0x88]
    let v12: u16;  // [bp-0x58]
    let v13: alloc::string::String;  // [bp-0x50]
    let v14: u32;  // [bp-0x38]
    let v16: u64;  // rsi
    let v17: i64;  // rdx
    let v18: i64;  // rax
    let v19: u64;  // r13
    let v20: i64;  // rax
    let v21: Result<struct32, struct16>;  // rax
    let v23: i64;  // rbp
    let v25: u64;  // rax
    let v26: i64;  // rdx
    let v27: u32;  // eax
    let v28: core::option::Option<u32>;  // rax:rax

    v0 = a2;
    if !<char as core::slice::cmp::SliceContains>::slice_contains(&v0, v16, v17) {
        core::panicking::panic("assertion failed: ['.', ':'].contains(&sep)"); /* do not return */
    }
    v11 = <char as core::str::pattern::Pattern>::into_searcher(a2, a1);
    v10 = struct16 {
        field_0: 0
        field_8: v17
    };
    v12 = 1;
    v9 = 1;
    v18 = core::str::iter::SplitInternal<P>::next(&v10);
    if v18 {
        v19 = v18;
        if v18 {
            goto LABEL_4617f3;
        }
LABEL_4617f2:
        v20 = v18;
    } else {
        if !v18 {
            goto LABEL_4617f2;
        }
LABEL_4617f3:
        v20 = v17;
    }
    v9 = 0;
    v21 = core::str::iter::SplitInternal<P>::get_end(&v10);
    v23 = v17;
    v1 = uu_chown::parse_uid(v19, v20, a1, v17);
    match v1 {
        Err(_) => {
            v8 = v2 as u128;
            v1 = uu_chown::parse_gid(v21, v23, a1);
            if let Ok(_) = v1 {
                goto LABEL_4618a8;
            }
            v7 = v2 as u128;
            v1 = core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: v19
                }
                end_or_len: v20 + v19
                _marker: core::marker::PhantomData<&u8> { }
            };
            v28 = core::str::validations::next_code_point(&v1) as u128;
            if ((v17 as u32 != 0x110000) as u8 as u8 & v28 as i8) == 1 && (v17 as u32 - 48 < 10 || v17 as u32 >= 128 && core::unicode::unicode_data::n::lookup(v17 as u32 as u8) as u8) && !v23 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, v17, v19) as u8 {
                v3 = 0;
                v4 = v16;
                v5 = v17;
                v6 = 1;
                v13 = format!("invalid spec: {}", &v3);
                v14 = 1;
                v25 = alloc::boxed::Box<T>::new(&v13) as u64;
                goto LABEL_4618a8;
            } else {
                v26 = a0;
                *((a0 + 4) as &u64) = v7 as u64 CONCAT v8 as u64;
                v27 = 0;
            }
        },
        Ok(_) => {
LABEL_4618a8:
            v26 = a0;
            *((a0 + 8) as &u64) = v25;
            *((a0 + 16) as &u64) = v2;
            v27 = 1;
        },
    }
    *(v26 as &u32) = v27;
    return;
}
