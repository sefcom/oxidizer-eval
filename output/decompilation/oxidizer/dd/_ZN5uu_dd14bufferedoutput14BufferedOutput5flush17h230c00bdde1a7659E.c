fn uu_dd::bufferedoutput::BufferedOutput::flush(a0: i64, a1: i64) -> int {
    let v0: Result<struct32, struct8>;  // [bp-0x78], Other Possible Types: struct40
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: iNone;  // [bp-0x58]
    let v5: iNone;  // [bp-0x48]
    let v7: u64;  // r13
    let v8: u64;  // r13
    let v9: void*;  // r13

    v0 = uu_dd::Output::write_blocks(a1 + 24, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    match v0 {
        Err(_) => {
            v7 = 1;
            return struct16 {
                field_0: v8
                field_8: v1
            };
        },
        Ok(_) => {
            v5 = v4;
            if v3 {
                core::result::Result<T,E>::unwrap(1);
                [D] Unsupported jumpkind Ijk_NoDecode at address 4768858()
            }
            v9 = 0;
            core::result::Result<T,E>::unwrap(0);
            v0 = alloc::vec::Vec<T,A>::drain(a1, 0, v2);
            *((a0 + 24) as &i64) = 0;
            *((a0 + 16) as &u64) = v2;
            *((a0 + 32) as void*) = v5;
        },
    }
}
