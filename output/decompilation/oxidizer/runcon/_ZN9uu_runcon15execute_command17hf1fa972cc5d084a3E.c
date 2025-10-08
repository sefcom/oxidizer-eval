fn uu_runcon::execute_command(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: struct28;  // [bp-0x170], Other Possible Types: u64
    let v1: struct16;  // [bp-0x170]
    let v2: struct640;  // [bp-0x16c]
    let v3: u64;  // [bp-0x168]
    let v4: u32;  // [bp-0x168]
    let v5: void*;  // [bp-0x160]
    let v6: u64;  // [bp-0x158]
    let v7: i8;  // [bp-0x150]
    let v8: i8;  // [bp-0x148]
    let v9: i8;  // [bp-0x140]
    let v10: i8;  // [bp-0x138]
    let v11: u64;  // [bp-0x130]
    let v12: u128;  // [bp-0x128]
    let v13: u128;  // [bp-0x124]
    let v14: struct640;  // [bp-0x124]
    let v15: u128;  // [bp-0x120]
    let v16: u128;  // [bp-0x118]
    let v17: u128;  // [bp-0x110]
    let v18: struct32;  // [bp-0x108], Other Possible Types: u128
    let v19: u128;  // [bp-0x100]
    let v20: core::fmt::Arguments;  // [bp-0xf8], Other Possible Types: u128
    let v21: u128;  // [bp-0xf0]
    let v22: u64;  // [bp-0xe8]
    let v23: struct640;  // [bp-0xe0], Other Possible Types: u32
    let v24: u128;  // [bp-0xd8]
    let v25: u64;  // [bp-0xd0]
    let v26: u64;  // [bp-0xc8]
    let v27: u128;  // [bp-0xb8]
    let v28: iNone;  // [bp-0xac]
    let v29: u128;  // [bp-0x98]
    let v30: iNone;  // [bp-0x8c]
    let v31: struct52;  // [bp-0x78]
    let v32: u128;  // [bp-0x68]
    let v33: u128;  // [bp-0x58]
    let v34: u128;  // [bp-0x48]
    let v35: i8;  // [bp-0x38]
    let v37: u32;  // eax
    let v38: u32;  // eax
    let v39: u64;  // cc_ndep
    let v40: u64;  // rdx
    let v41: u64;  // r13
    let v42: u8;  // al
    let v43: u64;  // r15
    let v44: struct32;  // xmm2
    let v45: core::fmt::Arguments;  // xmm3
    let v46: iNone;  // xmm0

    v0 = uu_runcon::os_str_to_c_string(a0, a1);
    v37 = v0.field_0;
    if v37 != 17 {
        v46 = *(&v0.field_8 as &i128);
        v21 = *(&v10 as &i128);
        v19 = *(&v8 as &i128);
        v17 = *(&v6 as &i128);
        v12 = v37;
        v14 = v2;
        *(&v15 as void*) = v46;
        v23 = 1;
        return alloc::boxed::Box<T>::new(&v12) as u64;
    }
    core::iter::traits::iterator::Iterator::collect(&v0, a2, a2 + a3 * 24);
    v38 = v0.field_0;
    if v38 == 17 {
        v24 = *(&v0.field_8 as &i128);
        v26 = v6;
        v0 = alloc::raw_vec::RawVecInner<A>::with_capacity_in((_ccall(3, 4, a3, 2, v39) as char ? a3 + 2 : -1), 8, 8, "src/uu/runcon/src/runcon.rs");
        v3 = v40;
        v5 = 0;
        v1 = alloc::vec::Vec<T,A>::push(v4, "src/uu/runcon/src/runcon.rs");
        alloc::vec::Vec<T,A>::extend_trusted(&v1, v25, v26 * 16 + v25);
        v1 = alloc::vec::Vec<T,A>::push(None, "src/uu/runcon/src/runcon.rs");
        execvp(v4, v3);
        v41 = *(__errno_location() as &i32) * 0x100000000 | 2;
        v42 = std::io::error::Error::kind(v41) as u32;
        v31 = uu_runcon::errors::Error::from_io1("Executing command", a0, a1, v41);
        v22 = *(&v35 as &i64);
        v20 = v34;
        v18 = v33;
        v16 = v32;
        v12 = *(&v31.field_0 as &i128);
        v23 = 126 + (v42 < 1);
        v43 = alloc::boxed::Box<T>::new(&v12) as u64;
    } else {
        v44 = *(&v7 as &i128);
        v45 = *(&v9 as &i128);
        v30 = *(&v0.field_16 as &i128);
        v29 = *(&(&v0.field_0)[1] as &i128);
        v22 = v11;
        v20 = v45;
        v18 = v44;
        v27 = v29;
        v28 = v30;
        v13 = v27;
        *(&v16 as void*) = v28;
        v12 = v38;
        v23 = 1;
        v43 = alloc::boxed::Box<T>::new(&v12) as u64;
    }
    return v43;
}
