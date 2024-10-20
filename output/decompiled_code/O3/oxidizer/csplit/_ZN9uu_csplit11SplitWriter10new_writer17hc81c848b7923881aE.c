fn uu_csplit::SplitWriter::new_writer(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct8;  // [bp-0x58]
    let v1: i32;  // [bp-0x50]
    let v2: i8;  // [sp-0x4f]
    let v3: i8;  // [sp-0x4d]
    let v4: i8;  // [bp-0x4c]
    let v5: i64;  // [sp-0x48], Other Possible Types: Enum
    let v6: i8;  // [bp-0x40]
    let v7: i192;  // [sp-0x38], Other Possible Types: struct24
    let v9: i64;  // r15
    let v11: i32;  // ebp
    let v13: i64;  // rsi
    let v14: i64;  // rdx
    let v15: i64;  // rcx
    let v16: i64;  // r8
    let v17: i64;  // r9

    v9 = *((a0 + 40) as &i64);
    v7 = uu_csplit::split_name::SplitName::get(*((a0 + 32) as &i64), v9);
    v0 = struct8 {
        field_0: 0x1b600000000
    };
    v1 = 0;
    v4 = 0;
    v2 = 1;
    v4 = 1;
    v3 = 1;
    v5 = std::fs::OpenOptions::_open(&v0, *((&v7 as &char + 8) as &i64), *((&v7 as &char + 16) as &i64));
    if v5 {
        return v6;
    }
    v11 = *((&v5 as &char + 4) as &i32);
    if *(a0 as &i64) != 0x8000000000000000 {
        if !*((a0 + 24) as &i8) {
            std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a0, v13, v14, v15, v16, v17);
        }
        v9 = *((a0 + 40) as &i64);
    }
    *(a0 as &i64) = 0x2000;
    *((a0 + 8) as &long long) = __rust_alloc(0x2000, 1);
    *((a0 + 16) as &i64) = 0;
    *((a0 + 24) as &i8) = 0;
    *((a0 + 28) as &i32) = v11;
    *((a0 + 40) as &i64) = v9 + 1;
    *((a0 + 48) as &i64) = 0;
    *((a0 + 56) as &i8) = 0;
    return 0;
}
