fn uu_sort::chunks::RecycledChunk::new(a1: i8) -> : struct144 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x80]
    let v1: u64;  // [bp-0x78]
    let v2: void*;  // [bp-0x70]
    let v3: void*;  // [bp-0x68]
    let v4: u64;  // [bp-0x60]
    let v5: void*;  // [bp-0x58]
    let v6: void*;  // [bp-0x50]
    let v7: u64;  // [bp-0x48]
    let v8: void*;  // [bp-0x40]
    let v9: void*;  // [bp-0x38]
    let v10: u64;  // [bp-0x30]
    let v11: void*;  // [bp-0x28]
    let v12: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x20]
    let v14: u64;  // rdx

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v6 = 0;
    v7 = 8;
    v8 = 0;
    v9 = 0;
    v10 = 8;
    v11 = 0;
    v12 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(a1, v14);
    return struct144 {
        field_0: *(&v0 as &i128)
        field_16: 0
        field_24: *(&v3 as &i128)
        field_40: 0
        field_48: *(&v6 as &i128)
        field_64: 0
        field_72: *(&v9 as &i128)
        field_88: 0
        field_96: 0
        field_104: 8
        field_112: 0
        field_120: *(&v12.buf.inner.cap as &i128)
        field_136: v12.len
    };
}
