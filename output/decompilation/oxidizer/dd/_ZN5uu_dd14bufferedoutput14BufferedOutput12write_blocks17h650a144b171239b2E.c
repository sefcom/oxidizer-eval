fn uu_dd::bufferedoutput::BufferedOutput::write_blocks(a1: i64, a2: i64, a3: i64) -> Result<struct32, struct8> {
    let a0: i64;  // rsi
    let v0: struct32;  // [bp-0x98]
    let v1: u64;  // [bp-0x88]
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x78]
    let v3: u8;  // [bp-0x68]
    let v4: u64;  // [bp-0x58]
    let v5: u64;  // [bp-0x50]
    let v6: u128;  // [bp-0x48]
    let v7: u8;  // [bp-0x38]
    let v9: u64;  // rsi
    let v12: void*;  // rsi
    let v14: u64;  // rax
    let v15: i64;  // rdi
    let v16: &[u8];  // rax:rdx
    let v17: &[u8];  // rax:rdx

    v9 = *((*((a0 + 40) as &i64) + 120) as &i64);
    v0 = core::slice::<impl [T]>::split_at_unchecked(a1, a2, v12);
    v16 = core::slice::iter::Iter<T>::make_slice(v0.field_0);
    alloc::vec::Vec<T,A>::append_elements(a0, v16.ptr, a1);
    uu_dd::Output::write_blocks(a0 + 24, *((a0 + 8) as &i64), *((a0 + 16) as &i64), a3);
    if v4 {
        *((v15 + 8) as &u64) = v5;
        v14 = 1;
    } else {
        memcpy(&v3, &v7, 16);
        v2 = v6;
        *((a0 + 16) as &i64) = 0;
        v17 = core::slice::iter::Iter<T>::make_slice(v1);
        alloc::vec::Vec<T,A>::append_elements(a0, v17.ptr, a1);
        *((v15 + 32) as &u128) = v3;
        *((v15 + 16) as &core::result::Result<std::fs::Metadata, std::io::error::Error>) = v2;
        v14 = 0;
    }
    *(v15 as &u64) = v14;
    return;
}
