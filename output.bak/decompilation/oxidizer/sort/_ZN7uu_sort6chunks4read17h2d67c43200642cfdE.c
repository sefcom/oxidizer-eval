fn uu_sort::chunks::read(a0: &struct16, a1: u32, a2: u32, a3: u32, a4: u32, a5: &struct8) -> u64 {
    let v0: i64;  // [sp-0x180]
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
    let v13: i136;  // [sp-0xc8], Other Possible Types: struct120, Result<struct9, struct16>
    let v14: struct24;  // [bp-0x48]
    let v15: i64;  // [bp+0x8]
    let v16: i8;  // [bp+0x10]
    let v17: i8;  // [bp+0x18]
    let v19: i64;  // rbp
    let v21: i64;  // rdx
    let v22: i8;  // bpl
    let v23: i64;  // rsi
    let v24: i64;  // rax

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
    v19 = *((a5 + 16) as &i64);
    v2 = v2;
    if v2 < v19 {
        v1 = alloc::vec::Vec<T,A>::resize(v19 + 0x2800, 0);
        v2 = v2;
    }
    core::slice::<impl [T]>::copy_from_slice(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v19, *((&v1 as &char + 8) as &i64), v2, "src/uu/sort/src/chunks.rs"), v21, *((a5 + 8) as &i64), v19, "src/uu/sort/src/chunks.rs");
    v0 = v17;
    v13 = uu_sort::chunks::read_to_buffer(v15, *(v16 as &i64), &v1, a3, a4, *((a5 + 16) as &i64));
    return struct16 {
        field_0: v13
    };
    v22 = *((&v13 as &char + 16) as &i8);
    v11 = *((&v13 as &char + 8) as &i64);
    *((a5 + 16) as &i64) = 0;
    v23 = v2;
    if v11 > v23 {
        core::slice::index::slice_start_index_len_fail(v11, v23, "src/uu/sort/src/chunks.rs"); /* do not return */
    }
    v24 = *((&v1 as &char + 8) as &i64);
    alloc::vec::Vec<T,A>::append_elements(a5, core::slice::iter::Iter<T>::make_slice(v24 + v11, v23 + v24), v21);
    return struct9 {
        field_0: 0
        field_8: v22
    };
    v14 = struct24 {
        field_0: v1
        field_16: v2
    };
    v13 = struct120 {
        field_0: v5
        field_16: v6
        field_24: v3
        field_40: v4
        field_48: v7
        field_64: v8
        field_72: v9
        field_88: v10
        field_96: &v11
        field_104: &v17
        field_112: v18
    };
    v12 = uu_sort::chunks::Chunk::try_new(&v14, &v13);
    if !v12 {
        core::result::Result<T,E>::unwrap(std::sync::mpmc::Sender<T>::send(a1, *((&v12 as &char + 8) as &i64), v21));
        return struct9 {
            field_0: 0
            field_8: v22
        };
    }
    return struct16 {
        field_0: v25
        field_8: v26
    };
}
