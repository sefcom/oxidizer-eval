fn uu_sort::chunks::read(a0: &Result<struct16, struct1>, a1: u32, a2: u32, a3: u32, a4: u32, a5: &struct8) -> u64 {
    let v0: i32;  // [sp-0x188]
    let v1: i128;  // [sp-0x178], Other Possible Types: struct8
    let v2: i64;  // [sp-0x168]
    let v3: i128;  // [sp-0x158]
    let v4: i64;  // [sp-0x148]
    let v5: i128;  // [sp-0x138]
    let v6: i64;  // [sp-0x128]
    let v7: i128;  // [sp-0x118]
    let v8: i64;  // [sp-0x108]
    let v9: i128;  // [sp-0xf8]
    let v10: i64;  // [sp-0xe8]
    let v11: i64;  // [sp-0xe0]
    let v12: i128;  // [sp-0xd8], Other Possible Types: struct16
    let v13: i960;  // [sp-0xc8], Other Possible Types: Result<struct24, struct9>
    let v14: i192;  // [sp-0x48]
    let v15: i64;  // [bp+0x8]
    let v16: i8;  // [bp+0x18]
    let v17: i64;  // rbp
    let v19: i64;  // rdx
    let v20: i8;  // bpl
    let v21: i64;  // rax

    v4 = *((a2 + 16) as &i64);
    v3 = *(a2 as &i128);
    v6 = *((a2 + 40) as &i64);
    v5 = *((a2 + 24) as &i128);
    v8 = *((a2 + 64) as &i64);
    v7 = *((a2 + 48) as &i128);
    v10 = *((a2 + 88) as &i64);
    v9 = *((a2 + 72) as &i128);
    v2 = *((a2 + 112) as &i64);
    v1 = *((a2 + 96) as &i128);
    v17 = *((a5 + 16) as &i64);
    v2 = v2;
    if v2 < v17 {
        v1 = alloc::vec::Vec<T,A>::resize(v17 + 0x2800, 0);
        v2 = v2;
    }
    core::slice::<impl [T]>::copy_from_slice(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v17, *((&v1 as &char + 8) as &i64), v2, "src/uu/sort/src/chunks.rs"), v19, *((a5 + 8) as &i64), v17, "src/uu/sort/src/chunks.rs");
    v0 = v16;
    v13 = uu_sort::chunks::read_to_buffer(v15, &v1, a3, a4, *((a5 + 16) as &i64));
    v20 = *((&v13 as &char + 16) as &i8);
    v11 = *((&v13 as &char + 8) as &i64);
    *((a5 + 16) as &i64) = 0;
    v21 = *((&v1 as &char + 8) as &i64);
    alloc::vec::Vec<T,A>::append_elements(a5, core::slice::iter::Iter<T>::make_slice(v21 + v11, v2 + v21), v19);
    if v11 {
        v14 = v1;
        v13 = v5;
        v12 = uu_sort::chunks::Chunk::try_new(&v14, &v13);
        if !v12 {
            core::result::Result<T,E>::unwrap(std::sync::mpmc::Sender<T>::send(a1, *((&v12 as &char + 8) as &i64), v19));
            return Err(struct1 {
                field_0: v20
            });
        }
        return Ok(struct16 {
            field_0: v22
            field_8: v23
        });
    }
}
