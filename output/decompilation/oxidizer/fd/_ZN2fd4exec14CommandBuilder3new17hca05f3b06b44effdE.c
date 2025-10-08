fn fd::exec::CommandBuilder::new(a0: void*, a1: i64, a2: u64, a3: i64) -> int {
    let v0: void*;  // [bp-0x268]
    let v1: struct16;  // [bp-0x268]
    let v2: u64;  // [bp-0x260]
    let v3: void*;  // [bp-0x258]
    let v4: struct16;  // [bp-0x250]
    let v5: void*;  // [bp-0x250]
    let v6: u64;  // [bp-0x248]
    let v7: void*;  // [bp-0x240]
    let v8: u64;  // [bp-0x230]
    let v9: void*;  // [bp-0x228], Other Possible Types: u64
    let v10: iNone;  // [bp-0x220]
    let v11: u64;  // [bp-0x210]
    let v12: struct16;  // [bp-0x208], Other Possible Types: struct24
    let v13: struct24;  // [bp-0x208]
    let v14: Result<struct232, struct16>;  // [bp-0x208]
    let v15: u64;  // [bp-0x200]
    let v16: void*;  // [bp-0x1f8], Other Possible Types: u64
    let v17: u128;  // [bp-0x118]
    let v18: u64;  // [bp-0x110]
    let v19: u64;  // [bp-0x108]
    let v21: i64;  // r12
    let v22: u64;  // r15
    let v23: u64;  // r14
    let v24: u64;  // rbx
    let v25: u64;  // r15
    let v26: alloc::string::String;  // r15
    let v27: u64;  // [bp-0x118]

    v0 = 0;
    v2 = 8;
    v3 = 0;
    v9 = 2;
    v5 = 0;
    v6 = 8;
    v7 = 0;
    if a2 {
        v21 = a1;
        v22 = a2 * 32;
        v23 = 2;
        v24 = 2;
        do {
            v25 = v22;
            if !*(v21 as &i64) {
                <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v12, *((v21 + 16) as &i64), *((v21 + 24) as &i64));
                v19 = v16;
                v17 = *(&v13.field_0 as &i128);
                v9 = 0;
                v11 = v19;
                v10 = v17;
                v23 = 0;
                v24 = 0;
            } else if v24 == 2 {
                v12 = fd::fmt::FormatTemplate::generate(v21);
                v1 = alloc::vec::Vec<T,A>::push(&v12, "src/exec/mod.rs");
            } else {
                v13 = fd::fmt::FormatTemplate::generate(v21);
                v4 = alloc::vec::Vec<T,A>::push(&v13, "src/exec/mod.rs");
            }
            v21 += 32;
            v26 = v25 - 32;
            v22 = v26;
        } while (v25 != 32);
    }
    v14 = fd::exec::CommandBuilder::new_command(0x8, 0);
    if !((((0 ^ v14 as i64) & (0 ^ -(v14 as i64))) >> 63) as char) {
        memcpy(&v19, &v16, 216);
        v27 = v14 as i64;
        v18 = v15;
        v16 = 0;
        *(&v12.field_0 as &i128) = *(&v1.field_0 as &i128);
        core::option::unwrap(v23);
        *(&a0[24] as &u64) = v11;
        a0[8] = v10;
        *(&a0[56] as &i128) = *(&v4.field_0 as &i128);
        *(&a0[72] as &i64) = 0;
        memcpy(a0 + 80, &v27, 232);
        *(&a0[32] as &i128) = *(&v1.field_0 as &i128);
        *(&a0[48] as &i64) = 0;
        *(a0 as &u64) = v23;
        *(&a0[312] as &i64) = 0;
        *(&a0[320] as &u64) = v8;
        *(&a0[328] as &i8) = 2;
        return;
    }
    *(&a0[8] as &u64) = v15;
    *(a0 as &i64) = 2;
    return;
}
