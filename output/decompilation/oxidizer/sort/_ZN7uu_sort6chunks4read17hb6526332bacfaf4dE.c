fn uu_sort::chunks::read(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64, a8: i32, a9: i64) -> : struct16 {
    let a0: &u64;  // rsi
    let v0: u64;  // [bp-0x178]
    let v1: u64;  // [bp-0x170]
    let v2: u64;  // [bp-0x168]
    let v3: u128;  // [bp-0x158]
    let v4: u64;  // [bp-0x148]
    let v5: u128;  // [bp-0x138]
    let v6: u64;  // [bp-0x128]
    let v7: u128;  // [bp-0x118]
    let v8: u64;  // [bp-0x108]
    let v9: u128;  // [bp-0xf8]
    let v10: u64;  // [bp-0xe8]
    let v11: u64;  // [bp-0xe0]
    let v12: struct16;  // [bp-0xd8]
    let v13: u64;  // [bp-0xd0]
    let v14: alloc::raw_vec::Cap;  // [bp-0xc8], Other Possible Types: struct120
    let v15: u64;  // [bp-0xc0]
    let v16: u8;  // [bp-0xb8]
    let v17: struct24;  // [bp-0x48]
    let v18: u64;  // rdx
    let v19: u64;  // rbp
    let v20: void*;  // rax
    let v21: u32;  // rdx
    let v22: i64;  // rdi
    let v23: u8;  // bpl
    let v26: i64;  // rdi
    let v27: i64;  // rdi
    let v30: i64;  // rdi
    let v31: &[u8];  // rax:rdx

    v4 = *((a1 + 16) as &i64);
    v3 = *(a1 as &i128);
    v6 = *((a1 + 40) as &i64);
    v5 = *((a1 + 24) as &i128);
    v8 = *((a1 + 64) as &i64);
    v7 = *((a1 + 48) as &i128);
    v10 = *((a1 + 88) as &i64);
    v9 = *((a1 + 72) as &i128);
    v18 = *((a1 + 112) as &i64);
    v2 = v18;
    *(&v0 as &i128) = *((a1 + 96) as &i128);
    v19 = *((a4 + 16) as &i64);
    if v2 < v19 {
        alloc::vec::Vec<T,A>::resize(&v0, v19 + 0x2800, 0);
        v18 = v2;
    }
    v20 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v19, v1, v18, "src/uu/sort/src/chunks.rs");
    core::slice::<impl [T]>::copy_from_slice(v20, v21, *((a4 + 8) as &i64), v19, "src/uu/sort/src/chunks.rs");
    v14 = uu_sort::chunks::read_to_buffer(a5, &v0, a2, a3, *((a4 + 16) as &i64), vvar_7);
    if v14.__0 {
        *(v22 as &i128) = *(&v15 as &i128);
    } else {
        v23 = v16;
        v11 = v15;
        *((a4 + 16) as &i64) = 0;
        v31 = core::slice::iter::Iter<T>::make_slice(v1 + v11);
        alloc::vec::Vec<T,A>::append_elements(a4, v31.ptr, a1);
        if v11 {
            v17 = v0;
            v14 = struct120 {
                field_0: v5
                field_16: v6
                field_24: v3
                field_40: v4
                field_48: v7
                field_64: v8
                field_72: v9
                field_88: v10
                field_96: &v11
                field_104: &vvar_7
                field_112: vvar_8
            };
            v12 = uu_sort::chunks::Chunk::try_new(&v17, &v14);
            if !v12.field_0 as i64 {
                core::result::Result<T,E>::unwrap(std::sync::mpmc::Sender<T>::send(a0, v13, a1));
                *((v30 + 8) as &u8) = v23;
                *(v30 as &i64) = 0;
                return;
            }
            *(v27 as &i64) = v12.field_0;
            *((v27 + 8) as &u64) = v13;
            return;
        } else {
            *((v26 + 8) as &u8) = v23;
            *(v26 as &i64) = 0;
        }
    }
    return;
}
