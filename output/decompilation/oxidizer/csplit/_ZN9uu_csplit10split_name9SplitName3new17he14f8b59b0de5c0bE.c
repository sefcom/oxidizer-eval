fn uu_csplit::split_name::SplitName::new(a0: i64, a1: void*, a2: i64, a3: i64) -> void {
    let v0: struct24;  // [bp-0x128], Other Possible Types: u128
    let v1: struct32;  // [bp-0x128]
    let v2: struct72;  // [bp-0x128]
    let v4: u64;  // [bp-0x120]
    let v5: u64;  // [bp-0x120]
    let v6: u64;  // [bp-0x120]
    let v7: u64;  // [bp-0x120]
    let v8: u64;  // [bp-0x118]
    let v9: u64;  // [bp-0x118]
    let v10: u64;  // [bp-0x118]
    let v11: iNone;  // [bp-0x110]
    let v12: iNone;  // [bp-0x110], Other Possible Types: u64
    let v15: u128;  // [bp-0x100]
    let v16: iNone;  // [bp-0xf0]
    let v17: u64;  // [bp-0xe8]
    let v18: iNone;  // [bp-0xe0]
    let v19: u64;  // [bp-0xd8]
    let v20: u64;  // [bp-0xd0]
    let v21: u64;  // [bp-0xc0]
    let v22: u64;  // [bp-0xb8]
    let v23: struct24;  // [bp-0xb0], Other Possible Types: u64
    let v24: u64;  // [bp-0xa8]
    let v25: u128;  // [bp-0xa0]
    let v26: iNone;  // [bp-0x90]
    let v27: iNone;  // [bp-0x80]
    let v28: u64;  // [bp-0x70]
    let v29: iNone;  // [bp-0x68]
    let v30: struct24;  // [bp-0x68]
    let v31: alloc::string::String;  // [bp-0x48]
    let v35: u64;  // rcx
    let v37: u64;  // rax
    let v38: iNone;  // xmm0
    let v40: iNone;  // xmm0

    if (((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("xx");
        v4 = v5;
        v10 = v9;
    }
    v7 = v4;
    v21 = v9;
    v35 = *(a3 as &i64);
    v4 = v7;
    v37 = 2;
    if v35 != 0x8000000000000000 {
        v23 = struct24 {
            field_0: v35
            field_8: *((a3 + 8) as &i128)
        };
        v1 = uu_csplit::split_name::SplitName::new::{{closure}}(&v23);
        v38 = *(&v1.field_8 as &i128);
        v29 = v11 as i128;
        v4 = v7;
        v37 = v7;
        if v1.field_0 != 13 {
            return struct48 {
                field_0: 0x8000000000000000
                field_8: v1.field_0
                field_16: v38
                field_32: v29
            };
        }
    }
    v22 = v37;
    if *(a2 as &i64) == 0x8000000000000000 {
        v31 = format!("%0{}u", &v22);
    }
    vvar_312{stack -296} = struct72 OrderedDict([(0, 𝜙@64b [((5378856, None), vvar_277{stack -296}), ((5378858, None), vvar_222{stack -296})]), (16, 𝜙@64b [((5378856, None), vvar_280{stack -280}), ((5378858, None), vvar_228{stack -280})]), (32, 𝜙@64b [((5378856, None), vvar_279{stack -264}), ((5378858, None), vvar_233{stack -264})])])
    uucore::features::format::Format<F,T>::parse(&v2, &v31);
    if v2.field_0 as i64 != 0x8000000000000000 {
        v28 = v17;
        v27 = v2.field_48;
        v25 = v2.field_16;
        v26 = *(&v2.field_32 as &i128);
        v23 = v2.field_0;
        v24 = v6;
        v30 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v5, v21);
        v20 = v28;
        v40 = *(&v23 as &i128);
        v18 = v27;
        v16 = v26;
        v15 = v25;
        v12 = v40;
        v8 = v30.field_16;
        v0 = *(&v30.field_0 as &i128);
        return struct96 {
            field_0: *(&v30.field_0 as &i128)
            field_16: v8
            field_24: v12
            field_32: (&v12)[8] as i128
            field_48: *((&v15 as &char + 8) as &i128)
            field_64: (&v16)[8] as i128
            field_80: v19
            field_88: v20
        };
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: ((v6 + 0x8000000000000000 == 15) + 9) as u8 as u64
    };
}
