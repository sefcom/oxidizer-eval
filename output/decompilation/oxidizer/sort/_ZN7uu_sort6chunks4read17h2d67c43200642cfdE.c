fn uu_sort::chunks::read(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64, a8: i32, a9: i64) -> Result<struct16, struct9> {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x178]
    let v1: u32;  // [bp-0x170]
    let v2: u64;  // [bp-0x168]
    let v3: u128;  // [bp-0x158]
    let v4: u64;  // [bp-0x148]
    let v5: u192;  // [bp-0x138]
    let v6: u128;  // [bp-0x138]
    let v7: u64;  // [bp-0x128]
    let v8: u128;  // [bp-0x118]
    let v9: u64;  // [bp-0x108]
    let v10: u128;  // [bp-0xf8]
    let v11: u64;  // [bp-0xe8]
    let v12: u64;  // [bp-0xe0]
    let v13: struct16;  // [bp-0xd8]
    let v14: u64;  // [bp-0xd0]
    let v15: struct8;  // [bp-0xc8], Other Possible Types: u192
    let v16: u64;  // [bp-0xc0], Other Possible Types: char
    let v17: u8;  // [bp-0xb8]
    let v18: u8;  // [bp-0xb0]
    let v19: u64;  // [bp-0xa0]
    let v20: u128;  // [bp-0x98]
    let v21: u64;  // [bp-0x88]
    let v22: u8;  // [bp-0x80]
    let v23: u64;  // [bp-0x70]
    let v24: i64;  // [bp-0x68]
    let v25: i64;  // [bp-0x60]
    let v26: u64;  // [bp-0x58]
    let v27: u8;  // [bp-0x48]
    let v28: u64;  // [bp-0x38]
    let v29: u64;  // rdx
    let v30: void*;  // rbp
    let v31: core::option::Option<u32>;  // rax
    let v32: u32;  // rdx
    let v33: u8;  // bpl
    let v36: &[u8];  // rax:rdx

    v4 = *((a2 + 16) as &i64);
    v3 = *(a2 as &i128);
    v7 = *((a2 + 40) as &i64);
    v6 = *((a2 + 24) as &i128);
    v9 = *((a2 + 64) as &i64);
    v8 = *((a2 + 48) as &i128);
    v11 = *((a2 + 88) as &i64);
    v10 = *((a2 + 72) as &i128);
    v29 = *((a2 + 112) as &i64);
    v2 = v29;
    v0 = *((a2 + 96) as &i128);
    v30 = *((a5 + 16) as &i64);
    if v2 < v30 {
        alloc::vec::Vec<T,A>::resize(&v0, v30 + 0x2800, 0);
        v29 = v2;
    }
    v31 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v30, v1, v29, "src/uu/sort/src/chunks.rs");
    core::slice::<impl [T]>::copy_from_slice(v31, v32, *((a5 + 8) as &i64), v30, "src/uu/sort/src/chunks.rs");
    v15 = uu_sort::chunks::read_to_buffer(a6, *(a7 as &i64), &v0, a3, a4, *((a5 + 16) as &i64), a8);
    if v15.field_0 {
        return Ok(*(&v16 as &i128));
    }
    v33 = v17;
    v12 = v16;
    *((a5 + 16) as &i64) = 0;
    v36 = core::slice::iter::Iter<T>::make_slice(v1 + v12);
    alloc::vec::Vec<T,A>::append_elements(a5, v36.ptr, a2);
    if !v12 {
        return struct9 {
            field_0: 0
            field_8: v33
        };
    }
    v28 = v2;
    memcpy(&v27, &v0, 16);
    v15 = v5;
    memcpy(&v18, &v3, 16);
    v19 = v4;
    v24 = &v12;
    v20 = v8;
    v21 = v9;
    memcpy(&v22, &v10, 16);
    v23 = v11;
    v25 = &vvar_8;
    v26 = a9;
    v13 = uu_sort::chunks::Chunk::try_new(&v27, &v15);
    if !v13.field_0 as i64 {
        core::result::Result<T,E>::unwrap(std::sync::mpmc::Sender<T>::send(a1, v14, a2));
        return struct9 {
            field_0: 0
            field_8: v33
        };
    }
    return Ok(struct16 {
        field_0: v13.field_0 as i64
        field_8: v14
    });
}
