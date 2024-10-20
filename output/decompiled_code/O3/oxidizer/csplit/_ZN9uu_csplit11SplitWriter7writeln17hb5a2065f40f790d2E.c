fn uu_csplit::SplitWriter::writeln(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x48], Other Possible Types: i64
    let v1: i64;  // [sp-0x40]
    let v2: i64;  // [sp-0x38]
    let v3: i128;  // [sp-0x30]
    let v5: i64;  // rax
    let v6: i64;  // r15
    let v7: i64;  // rax
    let v8: i64;  // r15
    let v9: i64;  // rcx
    let v10: i64;  // r8
    let v11: i64;  // r9

    if *((a0 + 56) as &i8) {
        return 0;
    }
    v5 = *(a0 as &i64);
    if v5 == 0x8000000000000000 {
        v0 = "trying to write to a split that was not created";
        v1 = 1;
        v2 = 8;
        v3 = 0;
        v0 = core::panicking::panic_fmt();
    }
    v6 = *((a0 + 16) as &i64);
    if v5 - v6 > a2 {
        memcpy(*((a0 + 8) as &i64) + v6, a1, a2);
        v8 = v6 + a2;
        *((a0 + 16) as &i64) = v8;
    } else {
        v7 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, a1, a2, 0x8000000000000000, a4, a5);
        if v7 {
            return v7;
        }
        v8 = *((a0 + 16) as &i64);
    }
    if *(a0 as &i64) - v8 > 1 {
        *((*((a0 + 8) as &i64) + v8) as &i8) = 10;
        *((a0 + 16) as &i64) = v8 + 1;
    } else {
        v7 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, &g_467bdf, 1, v9, v10, v11);
        if v7 {
            return v7;
        }
    }
    *((a0 + 48) as &i64) = *((a0 + 48) as &i64) + a2 + 1;
}
