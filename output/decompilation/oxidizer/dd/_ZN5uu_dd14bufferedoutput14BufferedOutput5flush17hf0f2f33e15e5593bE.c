fn uu_dd::bufferedoutput::BufferedOutput::flush(a0: &Result<struct32, struct8>, a1: u32) -> u64 {
    let v0: Result<struct32, struct8>;  // [sp-0x78], Other Possible Types: struct40
    let v1: iNone;  // [sp-0x48]
    let v3: i64;  // r13

    v0 = uu_dd::Output::write_blocks(a1 + 24, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    match v0 {
        Err(_) => {
            *((a0 + 8) as &i64) = *((&v0 as &char + 8) as &i64);
            v3 = 1;
        },
        Ok(_) => {
            v1 = v0 as i128;
            if !*((&v0 as &char + 24) as &i64) {
                v3 = 0;
                core::result::Result<T,E>::unwrap(0);
                v0 = alloc::vec::Vec<T,A>::drain(a1, None, *((&v0 as &char + 16) as &i64));
                return struct40 {
                    field_0: v3
                    field_16: <UNKNOWN>
                    field_24: v4
                    field_32: v5
                };
            }
            core::result::Result<T,E>::unwrap(1);
            [D] Unsupported jumpkind Ijk_SigTRAP at address 5172238()
        },
    }
}
