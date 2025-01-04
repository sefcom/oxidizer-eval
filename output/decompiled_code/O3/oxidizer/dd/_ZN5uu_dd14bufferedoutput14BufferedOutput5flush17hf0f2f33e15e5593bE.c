fn uu_dd::bufferedoutput::BufferedOutput::flush(a0: i64, a1: i64) -> u64 {
    let v0: Result<struct32, struct8>;  // [sp-0x78], Other Possible Types: struct40, i256
    let v1: i8;  // [bp-0x58]
    let v2: i128;  // [sp-0x48]
    let v4: i64;  // r13
    let v5: i64;  // r15
    let v6: i64;  // rbp

    v0 = uu_dd::Output::write_blocks(a1 + 24, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    match v0 {
        Err(_) => {
            *((a0 + 8) as &i64) = *((&v0 as &char + 8) as &i64);
            v4 = 1;
        },
        Ok(_) => {
            v5 = *((&v0 as &char + 16) as &i64);
            v6 = *((&v0 as &char + 24) as &i64);
            v2 = v1;
            if v6 {
                core::result::Result<T,E>::unwrap(1);
                [D] Unsupported jumpkind Ijk_SigTRAP at address 5172238()
            }
            v4 = 0;
            core::result::Result<T,E>::unwrap(0);
            v0 = alloc::vec::Vec<T,A>::drain(a1, None, v5);
            *((a0 + 24) as &i64) = v6;
            *((a0 + 16) as &i64) = v5;
            *((a0 + 32) as &i128) = v2;
        },
    }
    return struct8 {
        field_0: v4
    };
}
