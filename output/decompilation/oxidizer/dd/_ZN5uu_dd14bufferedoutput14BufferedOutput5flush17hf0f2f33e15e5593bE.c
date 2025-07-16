fn uu_dd::bufferedoutput::BufferedOutput::flush(a1: i64) -> Result<struct40, struct16> {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x78], Other Possible Types: u64
    let v1: struct437;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: u8;  // [bp-0x58]
    let v5: u8;  // [bp-0x48]
    let v7: u64;  // r8
    let v8: core::iter::adapters::step_by::StepBy<core::ops::range::Range<usize>>;  // r13
    let v9: u64;  // r13
    let v10: struct24;  // r13

    uu_dd::Output::write_blocks(a1 + 24, *((a1 + 8) as &i64), *((a1 + 16) as &i64), v7);
    if v0 {
        v8 = 1;
        return struct16 {
            field_0: v9
            field_8: v1
        };
    }
    memcpy(&v5, &v4, 16);
    if v3 {
        core::result::Result<T,E>::unwrap(1);
        [D] Unsupported jumpkind Ijk_SigTRAP at address 5172238()
    }
    v10 = 0;
    core::result::Result<T,E>::unwrap(0);
    v0 = alloc::vec::Vec<T,A>::drain(a1, 0, v2);
    *((a0 + 24) as &i64) = 0;
    *((a0 + 16) as &u64) = v2;
    *((a0 + 32) as &i128) = *(&v5 as &i128);
}
