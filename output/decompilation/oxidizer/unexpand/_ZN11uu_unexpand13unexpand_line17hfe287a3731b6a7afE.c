fn uu_unexpand::unexpand_line(a1: i64, a2: i32, a3: i32, a4: i64, a5: i64, a6: i64) -> : struct8 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x98]
    let v1: u8;  // [bp-0x91]
    let v2: u32;  // [bp-0x90]
    let v4: struct437;  // [bp-0x88], Other Possible Types: void*
    let v5: u64;  // [bp-0x78]
    let v6: u32;  // [bp-0x6c]
    let v7: u64;  // [bp-0x60]
    let v8: u32;  // [bp-0x54]
    let v9: u64;  // [bp-0x50]
    let v10: u8;  // [bp-0x48]
    let v12: u64;  // [bp-0x20]
    let v13: u64;  // r13
    let v14: i64;  // r13
    let v15: u32;  // eax
    let v17: u64;  // r15
    let v18: u64;  // r13
    let v19: struct8;  // rax
    let v21: core::result::Result<(), std::io::error::Error>;  // rax

    v12 = v13;
    v8 = a3;
    v6 = a2;
    v14 = a0;
    if *((a0 + 16) as &i64) {
        v2 = v15 & -0x100 | 1;
        v4 = 0;
        v14 = a0;
        v7 = *((a0 + 16) as &i64);
        v9 = a4 - 1;
        v1 = 3;
        if v9 >= 0 {
            uu_unexpand::next_char_info(&v10, v8 as i8, *((a0 + 8) as &i64), v7, 0);
        }
        uu_unexpand::write_tabs(a5, a6, 0, 0, 0, v2 & 1, 1, v0);
        v17 = v7 - 0;
        v18 = *((a1 + 16) as &i64);
        if v17 < *(a1 as &i64) - v18 {
            memcpy(*((a1 + 8) as &i64) + v18, 0 + *((a0 + 8) as &i64), v17);
            *((a1 + 16) as &u64) = v18 + v17;
            v4 = 0;
        } else {
            v19 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1);
            v4 = 0;
            if v19 {
                return v19;
            }
        }
    }
    uu_unexpand::write_tabs(a5, a6, 0, 0, 0, v2 & 1, 1, v0);
    v21 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v5);
    match v21 {
        Err(_) => {
            return v21;
        },
        Ok(_) => {
            alloc::vec::Vec<T,A>::truncate(v14, 0);
            return 0;
        },
    }
}
