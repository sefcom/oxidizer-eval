fn uu_csplit::split_name::SplitName::new(a1: i64, a2: i64, a3: i64) -> : struct96 {
    let a0: u64;  // rdi
    let v0: struct40;  // [bp-0x148]
    let v1: void*;  // [bp-0x140]
    let v2: u64;  // [bp-0x138]
    let v3: struct24;  // [bp-0x128], Other Possible Types: u128
    let v4: u576;  // [bp-0x128]
    let v5: Result<struct24, struct8>;  // [bp-0x128]
    let v6: u64;  // [bp-0x120]
    let v7: u64;  // [bp-0x118]
    let v8: u64;  // [bp-0x110]
    let v10: u128;  // [bp-0x100]
    let v11: u128;  // [bp-0xf0]
    let v12: u128;  // [bp-0xe8]
    let v13: u8;  // [bp-0xe0]
    let v14: u64;  // [bp-0xd8]
    let v15: u64;  // [bp-0xd0]
    let v16: u64;  // [bp-0xc8]
    let v17: u192;  // [bp-0xc0]
    let v18: u64;  // [bp-0xb8]
    let v19: u128;  // [bp-0xb0]
    let v20: u128;  // [bp-0xa0]
    let v21: u8;  // [bp-0x90]
    let v22: u64;  // [bp-0x80]
    let v23: u128;  // [bp-0x78]
    let v24: struct24;  // [bp-0x78]
    let v25: u192;  // [bp-0x58]
    let v26: alloc::string::String;  // [bp-0x40], Other Possible Types: u8
    let v28: struct40;  // xmm0
    let v29: u64;  // rax
    let v30: u64;  // rax
    let v31: u8;  // bpl
    let v32: u128;  // xmm0
    let v33: u8;  // bpl
    let v34: i64;  // r15
    let v35: u128;  // xmm0

    if *(a1 as &i64) == 0x8000000000000000 {
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("xx");
        v2 = v7;
        v28 = *(&v3.field_0 as &i128);
    }
    v0 = v28;
    v29 = *(a3 as &i64);
    if v29 != 0x8000000000000000 {
        v17 = struct24 {
            field_0: v29
            field_8: *((a3 + 8) as &i128)
        };
        v31 = 1;
        v5 = uu_csplit::split_name::SplitName::new::{{closure}}(&v17);
        v32 = *((&v5 as &char + 8) as &i128);
        memcpy(&v23, &v5, 16);
        if let Err(_) = v5 {
            goto LABEL_5ba823;
        }
        v33 = 1;
        return struct48 {
            field_0: 0x8000000000000000
            field_8: v5 as i64
            field_16: v32
            field_32: v23
        };
    } else {
LABEL_5ba823:
        v16 = v30;
        if *(a2 as &i64) == 0x8000000000000000 {
            v34 = &v26;
            v26 = format!("%0{}u", &v16);
        } else {
            v34 = a2;
        }
        vvar_359{stack -296} = struct72 OrderedDict({0: 𝜙@64b [((6006939, None), vvar_314{stack -296}), ((6006944, None), vvar_247{stack -296})], 32: 𝜙@64b [((6006939, None), vvar_316{stack -264}), ((6006944, None), vvar_255{stack -264})]})
        v25 = struct24 {
            field_0: *(v34 as &i128)
            field_16: *((v34 + 16) as &i64)
        };
        uucore::features::format::Format<F>::parse(&v4, &v25);
        if v4 as i64 != 0x8000000000000000 {
            memcpy(&v21, &v4, 16);
            v22 = *((&v4 as &char + 64) as &i64);
            memcpy(&v17, &v4, 16);
            memcpy(&v20, &v4, 16);
            v17 = v4;
            v18 = v6;
            v24 = <T as alloc::slice::hack::ConvertVec>::to_vec(v1, v2);
            v15 = v22;
            v35 = *(&v17 as &i128);
            memcpy(&v13, &v21, 16);
            v11 = v20;
            v10 = v19;
            v8 = v35;
            v7 = v24.field_16;
            v3 = *(&v24.field_0 as &i128);
            return struct96 {
                field_0: *(&v24.field_0 as &i128)
                field_16: v7
                field_24: v8
                field_32: *((&v8 as &char + 8) as &i128)
                field_48: *((&v10 as &char + 8) as &i128)
                field_64: v12
                field_80: v14
                field_88: v15
            };
        }
        return struct16 {
            field_0: 0x8000000000000000
            field_8: ((*((&v4 as &char + 8) as &i32) == 10) + 9) as u8 as u64
        };
    }
    return a0;
}
