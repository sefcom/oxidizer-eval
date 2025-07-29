fn backdoorautomater::modifyservice::get_service(a0: i64, a1: i64, a2: u32, a3: i64, a4: i64) -> long long {
    let v0: i64;  // [bp-0x1b8]
    let v1: i64;  // [bp-0x1b0]
    let v2: i64;  // [bp-0x1a8]
    let v3: i64;  // [bp-0x1a0]
    let v4: core::str::iter::Chars;  // [bp-0x198]
    let v5: u128;  // [bp-0x198]
    let v6: u128;  // [bp-0x198]
    let v7: u32;  // [bp-0x194]
    let v8: u64;  // [bp-0x190]
    let v9: u128;  // [bp-0x188]
    let v10: u128;  // [bp-0x180]
    let v11: u128;  // [bp-0x178]
    let v12: u64;  // [bp-0x170]
    let v13: u32;  // [bp-0x15c]
    let v14: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x158], Other Possible Types: struct24
    let v15: struct24;  // [bp-0x158], Other Possible Types: u128
    let v16: u64;  // [bp-0x150]
    let v17: u64;  // [bp-0x148]
    let v18: void*;  // [bp-0x140]
    let v19: struct16;  // [bp-0x140]
    let v20: u64;  // [bp-0x138]
    let v21: void*;  // [bp-0x130]
    let v22: struct24;  // [bp-0x128]
    let v23: alloc::string::String;  // [bp-0x108]
    let v24: u64;  // [bp-0xf8]
    let v25: struct24;  // [bp-0xf0]
    let v26: struct24;  // [bp-0xd8]
    let v27: u128;  // [bp-0xb8]
    let v28: u64;  // [bp-0xa8]
    let v29: struct16;  // [bp-0x98]
    let v30: void*;  // [bp-0x88]
    let v31: alloc::string::String;  // [bp-0x78]
    let v32: u64;  // [bp-0x68]
    let v33: struct44;  // [bp-0x60]
    let v34: u128;  // [bp-0x50]
    let v36: u64;  // rax
    let v37: u64;  // rcx
    let v38: core::option::Option<char>;  // eax
    let v39: u64;  // r13
    let v40: u64;  // rax
    let v41: i64;  // r14
    let v42: i64;  // r15

    v36 = *((a1 + 8) as &i64);
    v37 = *((a1 + 16) as &i64);
    v4 = core::str::iter::Chars {
        iter: core::slice::iter::Iter<u8> {
            ptr: core::ptr::non_null::NonNull<u8> {
                pointer: *((a1 + 8) as &i64)
            }
            end_or_len: v37 + v36
            _marker: core::marker::PhantomData<&u8> { }
        }
    };
    v38 = <core::str::iter::Chars as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v4) as u32;
    if let None = v38 {
        if let Some(_) = v38 {
            alloc::string::String::push(a1, a1 as u8);
        }
    }
    v23 = <alloc::string::String as core::clone::Clone>::clone(a0);
    v31 = <alloc::string::String as core::clone::Clone>::clone(a1);
    v12 = v24;
    v10 = *(&v23.vec.buf.cap as &i128);
    v5 = *(&v31.vec.buf.cap as &i128);
    v9 = v32;
    v14 = alloc::str::join_generic_copy(&v4, 2, 1, 0);
    v22 = v15;
    v6 = std::fs::File::open(&v22);
    match v6 {
        Err(v39) => {
        },
        Ok(_) => {
            v33 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v7 as u64);
            v13 = a2;
            v3 = a4;
            v2 = a3;
            v1 = a1;
            v0 = a0;
            v18 = 0;
            v20 = 8;
            v21 = 0;
            v11 = *(&v33.field_32 as &i128) as u128;
            v9 = v34;
            v5 = *(&v33.field_0 as &i128) as u128;
            loop {
                v15 as u192 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v6);
                v40 = v14.field_0 as i64;
                if v40 == 9223372036854775809 {
                    v41 = v0;
                    v26 = struct24 {
                        field_0: *(v41 as &i128)
                        field_16: *((v41 + 16) as &i64)
                    };
                    v42 = v1;
                    v28 = *((v42 + 16) as &i64);
                    v27 = *(v42 as &i128);
                    v30 = 0;
                    v29 = *(&v19.field_0 as &i128);
                    v17 = *((v2 + 16) as &i64);
                    v15 = *(v2 as &i128) as u128;
                    v9 = *((v3 + 16) as &i64);
                    v6 = *(v3 as &i128) as u128;
                    backdoorautomater::modifyservice::modify_service(&v26, &v27, v13 as i8 as u8 as u64, &v29, &v15 as u192, &v6);
                    return 0;
                }
                v39 = v16;
                if v40 == 0x8000000000000000 {
                    break;
                }
                v25 = struct24 {
                    field_0: v40
                    field_8: v39
                    field_16: v17
                };
                v19 = alloc::vec::Vec<T,A>::push(&v25);
            }
        },
    }
    return v39;
}
