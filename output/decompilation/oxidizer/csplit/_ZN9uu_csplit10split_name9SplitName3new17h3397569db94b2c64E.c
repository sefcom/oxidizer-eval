fn uu_csplit::split_name::SplitName::new(a1: i64, a2: i64, a3: i64) -> : struct96 {
    let a0: u64;  // rdi
    let v0: struct40;  // [bp-0x148]
    let v1: void*;  // [bp-0x140]
    let v2: u64;  // [bp-0x138]
    let v3: struct24;  // [bp-0x128], Other Possible Types: u128
    let v4: struct72;  // [bp-0x128]
    let v5: Result<struct24, struct8>;  // [bp-0x128]
    let v6: u64;  // [bp-0x120]
    let v7: u64;  // [bp-0x118]
    let v8: u128;  // [bp-0x110]
    let v9: u128;  // [bp-0x110]
    let v11: u128;  // [bp-0x100]
    let v12: u128;  // [bp-0xf0]
    let v13: u64;  // [bp-0xe8]
    let v14: u128;  // [bp-0xe0]
    let v15: u64;  // [bp-0xd8]
    let v16: u64;  // [bp-0xd0]
    let v17: u64;  // [bp-0xc8]
    let v18: struct24;  // [bp-0xc0], Other Possible Types: u64
    let v19: u64;  // [bp-0xb8]
    let v20: u128;  // [bp-0xb0]
    let v21: u128;  // [bp-0xa0]
    let v22: u128;  // [bp-0x90]
    let v23: u64;  // [bp-0x80]
    let v24: u128;  // [bp-0x78]
    let v25: struct24;  // [bp-0x78]
    let v26: struct24;  // [bp-0x58]
    let v27: alloc::string::String;  // [bp-0x40], Other Possible Types: u8
    let v29: struct40;  // xmm0
    let v30: u64;  // rax
    let v31: u64;  // rax
    let v32: u8;  // bpl
    let v33: u128;  // xmm0
    let v34: u8;  // bpl
    let v35: i64;  // r15
    let v36: u128;  // xmm0

    if *(a1 as &i64) == 0x8000000000000000 {
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("xx");
        v2 = v7;
        v29 = *(&v3.field_0 as &i128);
    }
    v0 = v29;
    v30 = *(a3 as &i64);
    if v30 != 0x8000000000000000 {
        v18 = struct24 {
            field_0: v30
            field_8: *((a3 + 8) as &i128)
        };
        v32 = 1;
        v5 = uu_csplit::split_name::SplitName::new::{{closure}}(&v18);
        v33 = *((&v5 as &char + 8) as &i128);
        v24 = v8;
        if let Err(_) = v5 {
            goto LABEL_5ba823;
        }
        v34 = 1;
        return struct48 {
            field_0: 0x8000000000000000
            field_8: v5 as i64
            field_16: v33
            field_32: v24
        };
    } else {
LABEL_5ba823:
        v17 = v31;
        if *(a2 as &i64) == 0x8000000000000000 {
            v35 = &v27;
            v27 = format!("%0{}u", &v17);
        } else {
            v35 = a2;
        }
        vvar_356{stack -296} = struct72 OrderedDict({0: 𝜙@64b [((6006939, None), vvar_314{stack -296}), ((6006944, None), vvar_247{stack -296})], 16: 𝜙@64b [((6006939, None), vvar_317{stack -280}), ((6006944, None), vvar_249{stack -280})], 32: 𝜙@64b [((6006939, None), vvar_316{stack -264}), ((6006944, None), vvar_255{stack -264})]})
        v26 = struct24 {
            field_0: *(v35 as &i128)
            field_16: *((v35 + 16) as &i64)
        };
        uucore::features::format::Format<F>::parse(&v4, &v26);
        if v4.field_0 as i64 != 0x8000000000000000 {
            v22 = v4.field_48;
            v23 = v13;
            v20 = v4.field_16;
            v21 = *(&v4.field_32 as &i128);
            v18 = v4.field_0;
            v19 = v6;
            v25 = <T as alloc::slice::hack::ConvertVec>::to_vec(v1, v2);
            v16 = v23;
            v36 = *(&v18 as &i128);
            v14 = v22;
            v12 = v21;
            v11 = v20;
            v9 = v36;
            v7 = v25.field_16;
            v3 = *(&v25.field_0 as &i128);
            return struct96 {
                field_0: *(&v25.field_0 as &i128)
                field_16: v7
                field_24: v9
                field_32: *((&v9 as &char + 8) as &i128)
                field_48: *((&v11 as &char + 8) as &i128)
                field_64: *((&v12 as &char + 8) as &i128)
                field_80: v15
                field_88: v16
            };
        }
        return struct16 {
            field_0: 0x8000000000000000
            field_8: ((*((&v4.field_0 as &char + 8) as &i32) == 10) + 9) as u8 as u64
        };
    }
    return a0;
}
