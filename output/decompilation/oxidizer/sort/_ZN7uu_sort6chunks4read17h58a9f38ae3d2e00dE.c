fn uu_sort::chunks::read(a0: i64, a1: u64, a2: u64, a3: i64, a4: u64, a5: u64, a6: void*, a7: void*, a8: u64, a9: u32, a10: u64) -> int {
    let v0: u64;  // [bp-0x198]
    let v1: u64;  // [bp-0x190]
    let v2: struct24;  // [bp-0x188], Other Possible Types: u128
    let v3: u32;  // [bp-0x180]
    let v4: u64;  // [bp-0x178]
    let v5: u128;  // [bp-0x168]
    let v6: u64;  // [bp-0x158]
    let v7: u128;  // [bp-0x148]
    let v8: u64;  // [bp-0x138]
    let v9: u128;  // [bp-0x128]
    let v10: u64;  // [bp-0x118]
    let v11: u64;  // [bp-0xf8]
    let v12: u64;  // [bp-0xf0]
    let v13: struct16;  // [bp-0xe8]
    let v14: u64;  // [bp-0xe0]
    let v15: struct144;  // [bp-0xd8], Other Possible Types: u64
    let v16: i8;  // [bp-0xd0], Other Possible Types: u64
    let v17: struct8;  // [bp-0xc8]
    let v18: struct24;  // [bp-0x48]
    let v19: u64;  // rdx
    let v20: u64;  // r13
    let v21: void*;  // rax
    let v22: u32;  // rdx
    let v23: struct8;  // bpl
    let v24: u64;  // rax

    v6 = *((a3 + 40) as &i64);
    v5 = *((a3 + 24) as &i128);
    v8 = *((a3 + 64) as &i64);
    v7 = *((a3 + 48) as &i128);
    v10 = *((a3 + 88) as &i64);
    v9 = *((a3 + 72) as &i128);
    v0 = *((a3 + 96) as &i64);
    v1 = *((a3 + 104) as &i64);
    v11 = *((a3 + 112) as &i64);
    v19 = *((a3 + 136) as &i64);
    v4 = v19;
    v2 = *((a3 + 120) as &i128);
    v20 = a6[16] as i64;
    if v4 < v20 {
        alloc::vec::Vec<T,A>::resize(&v2, v20 + 0x2800);
        v19 = v4;
    }
    v21 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v20, v3, v19);
    core::slice::<impl [T]>::copy_from_slice(v21, v22, a6[8] as i64, v20);
    uu_sort::chunks::read_to_buffer(&v15, a7, a8, &v2, a4, a5, a6[16] as i64, a9);
    if v15 as i32 == 1 {
        return struct16 {
            field_0: *(&v16 as &i128)
        };
    }
    v23 = v17.field_0 as i8;
    v12 = v16;
    *(&a6[16] as &i64) = 0;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a6, v3 + v16, v4 + v3);
    if !v16 {
        return struct16 {
            field_0: 0
            field_8: v23
        };
    }
    v18 = v2;
    v15 = struct144 {
        field_0: v5
        field_16: v6
        field_24: *(a3 as &i128)
        field_40: *((a3 + 16) as &i64)
        field_48: v7
        field_64: v8
        field_72: v9
        field_88: v10
        field_96: v0
        field_104: v1
        field_112: v11
        field_120: &v12
        field_128: &vvar_9
        field_136: a10
    };
    v13 = uu_sort::chunks::Chunk::try_new(&v18, &v15);
    if !v13.field_0 as i64 {
        v24 = core::result::Result<T,E>::unwrap(std::sync::mpmc::Sender<T>::send(a1, a2, v14)) as u64;
        return struct16 {
            field_0: 0
            field_8: v23
        };
    }
    return struct16 {
        field_0: v13.field_0 as i64
        field_8: v14
    };
}
