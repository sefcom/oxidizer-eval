fn just::argument_parser::ArgumentParser::parse_arguments(a0: i64, a1: u64, a2: u64) -> int {
    let v0: i64;  // [bp-0x148]
    let v1: void*;  // [bp-0x140], Other Possible Types: struct16
    let v2: u64;  // [bp-0x138]
    let v3: void*;  // [bp-0x130]
    let v4: u64;  // [bp-0x128]
    let v5: u64;  // [bp-0x120]
    let v6: u64;  // [bp-0x118]
    let v7: void*;  // [bp-0x110]
    let v8: iNone;  // [bp-0x108]
    let v9: struct48;  // [bp-0x101], Other Possible Types: u128
    let v10: iNone;  // [bp-0xf8]
    let v11: u128;  // [bp-0xf1]
    let v12: u128;  // [bp-0xe8]
    let v13: u128;  // [bp-0xe1]
    let v14: u64;  // [bp-0xd9]
    let v15: struct105;  // [bp-0xd0]
    let v19: u64;  // [bp-0xa0]
    let v20: u128;  // [bp-0x98]
    let v21: u128;  // [bp-0x88]
    let v22: u128;  // [bp-0x78]
    let v23: struct48;  // [bp-0x68]
    let v25: u64;  // rcx
    let v26: iNone;  // xmm0
    let v27: u128;  // xmm1
    let v28: iNone;  // xmm0
    let v29: iNone;  // xmm1
    let v30: iNone;  // xmm0
    let v31: iNone;  // xmm1

    v1 = 0;
    v2 = 8;
    v3 = 0;
    v4 = a2;
    v5 = v25;
    v7 = 0;
    v6 = a1;
    loop {
        vvar_191{stack -208} = struct105 OrderedDict([(0, 𝜙@8b [((6644176, None), vvar_147{stack -208}), ((6643968, None), None)]), (17, 𝜙@56b [((6644176, None), vvar_150{stack -191}), ((6643968, None), None)]), (33, 𝜙@56b [((6644176, None), vvar_152{stack -175}), ((6643968, None), None)])])
        just::argument_parser::ArgumentParser::parse_group(&v15, &v4);
        if &v15 != "8" {
            v14 = v19;
            v28 = *(&(&v15.field_0)[1] as &i128);
            v29 = *((&v15.field_1 as &char + 9) as &i128);
            v12 = *((&v15.field_16 as &char + 9) as &i128);
            v10 = v29;
            v8 = v28;
            *((v0 + 88) as &u128) = v22;
            *((v0 + 72) as &u128) = v21;
            *((v0 + 56) as &u128) = v20;
            *((v0 + 48) as &u64) = v14;
            v30 = v8 as i128;
            v31 = v10 as i128;
            *((v0 + 33) as &u128) = v12;
            *((v0 + 17) as void*) = v31;
            *((v0 + 1) as void*) = v30;
            *(v0 as &u8) = v15.field_0;
            return;
        }
        v26 = v15.field_1;
        v27 = v15.field_16;
        v13 = v15.field_32;
        v11 = v27;
        *(&v9 as void*) = v26;
        v23 = v9;
        v1 = alloc::vec::Vec<T,A>::push(&v23);
        if !v25 {
            *((v0 + 24) as &i64) = 0;
            *((v0 + 8) as &i128) = *(&v1.field_0 as &i128);
            *(v0 as &i8) = 56;
            return;
        }
    }
}
