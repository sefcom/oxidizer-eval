fn uu_sort::exec(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x100]
    let v1: i64;  // [sp-0xf8]
    let v2: i64;  // [sp-0xf0]
    let v3: i128;  // [sp-0xe8]
    let v4: i8;  // [bp-0xe0]
    let v5: i128;  // [sp-0xd8]
    let v6: i8;  // [bp-0xd0]
    let v7: i8;  // [bp-0xc0]
    let v8: i8;  // [bp-0xb0]
    let v9: i8;  // [bp-0xa0]
    let v10: i8;  // [bp-0x90]
    let v11: i64;  // [sp-0x88]
    let v12: i64;  // [sp-0x80]
    let v13: i64;  // [sp-0x78]
    let v14: i128;  // [sp-0x70]
    let v15: i128;  // [sp-0x60]
    let v16: i128;  // [sp-0x50]
    let v17: i128;  // [sp-0x40]
    let v18: i64;  // [sp-0x30]
    let v20: i64;  // r15
    let v21: i64;  // r12
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v27: i64;  // r8
    let v28: i64;  // r9

    if *((a2 + 129) as &i8) {
        v20 = *(a3 as &i64);
        v21 = *((a3 + 8) as &i64);
        if v20 == 0x8000000000000000 {
            v21 = 0;
        }
        uu_sort::merge::merge(&v3, a0, a1, a2, v21, *((a3 + 16) as &i64), a4);
        v23 = v4;
        if v11 != 3 {
            v18 = v10;
            v17 = v9;
            v16 = v8;
            v15 = v7;
            v14 = v6;
            v11 = v3;
            v12 = v23;
            v13 = v5;
            v5 = *((a3 + 16) as &i128);
            v3 = *(a3 as &i128);
            v23 = uu_sort::merge::FileMerger::write_all(&v11, a2, &v3, v11, v27, v28, a4, v0);
            return v23;
        }
        if v20 == 0x8000000000000000 {
            return v23;
        }
    } else if !*((a2 + 133) as &i8) {
        v1 = a0;
        v2 = a0 + a1 * 24;
        v5 = *((a3 + 16) as &i128);
        v3 = *(a3 as &i128);
        v23 = uu_sort::ext_sort::ext_sort() as i64;
        return v23;
    } else {
        if a1 > 1 {
            v24 = __rust_alloc(29, 1);
            *((v24 + 13) as &i128) = 131827882254204717907182602921970524448;
            *(v24 as &i128) = 144060933412752323898481051892865330799;
            v23 = __rust_alloc(32, 8);
            *(v23 as &i64) = 29;
            *((v23 + 8) as &i64) = v24;
            *((v23 + 16) as &i64) = 29;
            *((v23 + 24) as &i32) = 2;
        } else {
            if a1 != 1 {
                core::option::unwrap_failed(); /* do not return */
            }
            v23 = uu_sort::check::check(*((a0 + 8) as &i64), *((a0 + 16) as &i64), a2, a3);
        }
        if *(a3 as &i64) == 0x8000000000000000 {
            return v23;
        }
    }
    return v23;
}
