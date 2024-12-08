fn uu_sort::chunks::read(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u8;  // [bp-0x188]
    let v1: u128;  // [sp-0x178], Other Possible Types: struct8
    let v2: u64;  // [sp-0x168]
    let v3: u128;  // [sp-0x158]
    let v4: u64;  // [sp-0x148]
    let v5: u128;  // [sp-0x138]
    let v6: u64;  // [sp-0x128]
    let v7: u128;  // [sp-0x118]
    let v8: u64;  // [sp-0x108]
    let v9: u128;  // [sp-0xf8]
    let v10: u64;  // [sp-0xe8]
    let v11: u64;  // [sp-0xe0]
    let v12: struct16;  // [sp-0xd8], Other Possible Types: u128
    let v13: u128;  // [sp-0xc8], Other Possible Types: struct120, Result<struct9, struct16>
    let v14: u8;  // [bp-0xb8]
    let v15: u128;  // [sp-0xb0]
    let v16: u64;  // [sp-0xa0]
    let v17: u128;  // [sp-0x98]
    let v18: u64;  // [sp-0x88]
    let v19: u128;  // [sp-0x80]
    let v20: u64;  // [sp-0x70]
    let v21: u64;  // [sp-0x68]
    let v22: u64;  // [sp-0x60]
    let v23: u64;  // [sp-0x58]
    let v24: struct24;  // [bp-0x48]
    let v25: u64;  // [bp+0x8]
    let v26: u8;  // [bp+0x18]
    let v27: i8;  // [bp+0x20]
    let v28: u64;  // rbp
    let v30: u64;  // rdx
    let v31: u8;  // bpl
    let v32: u64;  // rsi
    let v33: u64;  // rax
    let v34: u64;  // rax
    let v35: u64;  // rsi

    v4 = a2->field_10;
    v3 = a2->field_0;
    v6 = *((&a2->field_18 as &char + 8) as &i64);
    v5 = *(&(&a2->field_10)[1] as &i128);
    v8 = a2->field_30;
    v7 = *(&a2->field_28 as &i128);
    v10 = (&a2->field_40)[1];
    v9 = *((&a2->field_30 as &char + 8) as &i128);
    v2 = a2->field_58;
    v1 = a2->field_48;
    v28 = a5[2];
    v2 = v2;
    if v2 < v28 {
        v1 = alloc::vec::Vec<T,A>::resize(v28 + 0x2800, 0);
        v2 = v2;
    }
    core::slice::<impl [T]>::copy_from_slice(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v28, *((&v1 as &char + 8) as &i64), v2, "src/uu/sort/src/chunks.rs"), v30, a5[1], v28, "src/uu/sort/src/chunks.rs");
    v13 = uu_sort::chunks::read_to_buffer(v25, &v1, a3, a4, a5[2], v0);
    match v13 {
        Err(_) => {
            *(a0) = v13;
        },
        Ok(_) => {
            v31 = v14;
            v11 = *((&v13 as &char + 8) as &i64);
            a5[2] = 0 as u64;
            v32 = v2;
            if v11 > v32 {
                core::slice::index::slice_start_index_len_fail(); /* do not return */
            }
            v33 = *((&v1 as &char + 8) as &i64);
            alloc::vec::Vec<T,A>::append_elements(a5, core::slice::iter::Iter<T>::make_slice(v33 + v11, v32 + v33), v30);
            if !v11 {
                a0[1] = v31;
                *(a0) = 0 as u64;
            } else {
                *(&v24 as &struct24) = struct24 {
                    field_0: v1
                    field_16: v2
                };
                v14 = v6;
                v13 = v5;
                v15 = v3;
                v16 = v4;
                v21 = &v11;
                v17 = v7;
                v18 = v8;
                v19 = v9;
                v20 = v10;
                v22 = &v26;
                v23 = v27;
                v12 = uu_sort::chunks::Chunk::try_new(&v24, &v13);
                v34 = v12 as i64;
                v35 = *((&v12 as &char + 8) as &i64);
                if v34 {
                    return struct16 {
                        field_0: v34
                        field_8: v35
                    };
                }
                core::result::Result<T,E>::unwrap(std::sync::mpmc::Sender<T>::send(a1, v35, v30));
                a0[1] = v31;
                *(a0) = 0 as u64;
                return struct16 {
                    field_0: v34
                    field_8: v35
                };
            }
        },
    }
    return struct16 {
        field_0: v34
        field_8: v35
    };
}
