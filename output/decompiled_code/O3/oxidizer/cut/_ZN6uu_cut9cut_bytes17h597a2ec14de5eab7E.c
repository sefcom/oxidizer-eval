fn uu_cut::cut_bytes(a0: u64, a1: u64, a2: u64, a3: &struct_2) -> u64 {
    let v0: u8;  // [sp-0xe2]
    let v1: u64;  // [sp-0xe0]
    let v2: u64;  // [sp-0xd0]
    let v3: void*;  // [sp-0xc8]
    let v4: u64;  // [sp-0xc0]
    let v5: void*;  // [sp-0xb8]
    let v6: u64;  // [sp-0xb0]
    let v7: u64;  // [sp-0xa8]
    let v8: u128;  // [sp-0xa0]
    let v9: void*;  // [sp-0x90]
    let v10: u64;  // [sp-0x88]
    let v11: void*;  // [bp-0x80], Other Possible Types: struct48
    let v12: void*;  // [sp-0x70]
    let v13: u64;  // [sp-0x60]
    let v14: u64;  // [sp-0x58]
    let v15: u64;  // [sp-0x50]
    let v16: u8;  // [sp-0x48]
    let v17: u64;  // [sp-0x40]
    let v18: u64;  // [sp-0x38]
    let v20: u64;  // rax
    let v21: u64;  // rcx
    let v22: u64;  // rax
    let v23: &&struct_0;  // rdx
    let v24: &&struct_0;  // rax
    let v25: &struct_1;  // rax
    let v26: &&struct_0;  // rdx
    let v27: &&struct_0;  // rax

    v17 = a1;
    v18 = a2;
    v0 = a3->field_28;
    v6 = __rust_alloc(0x2000, 1);
    v7 = 0x2000;
    v8 = 0;
    v9 = 0;
    v10 = a0;
    v1 = uu_cut::stdout_writer();
    v20 = a3->field_0;
    v21 = (v20 ? 1 : a3->field_8);
    if !v20 {
        v20 = &g_419d36;
    }
    v11 = struct48 {
        field_0: &v17
        field_8: &v1
        field_16: v20
        field_24: v21
        field_32: a3
        field_40: &v0
    };
    v22 = bstr::io::BufReadExt::for_byte_record(&v6, v0, &v11);
    if !v22 {
        if !*(v23) {
            return 0;
        }
        v24();
    } else {
        v2 = v22;
        v3 = 0;
        v4 = 1;
        v5 = 0;
        v15 = 32;
        v16 = 3;
        v11 = 0;
        v12 = 0;
        v13 = &v3;
        v14 = &g_4f0df0;
        if <std::io::error::Error as core::fmt::Display>::fmt(&v2, &v11) as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
        v25 = __rust_alloc(32, 8);
        v25->field_0 = v3;
        v25->field_8 = v4;
        v25->field_10 = v5;
        v25->field_18 = 1;
        if *(v26) {
            v27();
        }
        if v7 {
            return v25;
        }
        return v25;
    }
}
