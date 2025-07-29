fn flealib::commandparser::CommandParser::get_command(a0: u64, a1: i64, a2: u32, a3: u32) -> long long {
    let v0: Option<struct24>;  // [bp-0x1c8], Other Possible Types: struct20, struct24, u128
    let v1: std::io::error::Error;  // [bp-0x1c0]
    let v2: u64;  // [bp-0x1b8]
    let v3: u64;  // [bp-0x1b0]
    let v4: std::io::error::Error;  // [bp-0x1a8]
    let v5: u64;  // [bp-0x1a0]
    let v6: u128;  // [bp-0x198]
    let v7: u64;  // [bp-0x188]
    let v8: struct40;  // [bp-0x180]
    let v9: struct24;  // [bp-0x158]
    let v10: u64;  // [bp-0x148]
    let v11: u8;  // [bp-0x140]
    let v12: struct136;  // [bp-0x140]
    let v13: u64;  // [bp-0x138]
    let v14: alloc::string::String;  // [bp-0x128]
    let v15: u128;  // [bp-0x118]
    let v16: struct120;  // [bp-0xb8], Other Possible Types: u8
    let v17: alloc::string::String;  // [bp-0xa8]
    let v18: struct32;  // [bp-0x98]
    let v19: u64;  // [bp-0x88]
    let v21: u64;  // r13
    let v22: std::io::error::Error;  // r14
    let v23: struct24;  // rax
    let v24: u64;  // rdx
    let v25: &str;  // rax
    let v26: u64;  // rdx

    roxmltree::parse::parse(&v16, a2, a3, -1, 0);
    if !((((0 ^ *(&v16 as &i64)) & (0 ^ -(*(&v16 as &i64)))) >> 63) as char) {
        memcpy(&v11, &v16, 136);
        v0 = struct20 {
            field_0: &v11
            field_8: v13
            field_16: 1
        };
        v8 = roxmltree::Descendants::new(&v0);
        v0 = core::iter::traits::iterator::Iterator::try_fold(&v8);
        v21 = v0 as i64;
        if v21 {
            v22 = v1;
            v23 = roxmltree::Node::attribute(v21, v22, "name");
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v23, v24);
            v7 = v2;
            v6 = *(&v0.field_0 as &i128);
            v25 = roxmltree::Node::attribute(v21, v22, "value");
            v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(v25, v26);
            v5 = v10;
            v3 = *(&v9.field_0 as &i128);
            v2 = v7;
            v0 = v6;
            return struct48 {
                field_0: v6
                field_16: v2
                field_24: v3
                field_32: v4
                field_40: v5
            };
            return a0;
        }
    }
    vvar_411{stack -320} = struct136 OrderedDict([(0, 𝜙@64b [((7810244, None), vvar_276{stack -320}), ((7810898, None), None)])])
    roxmltree::parse::parse(&v12, a2, a3, -1, 0);
    if v12.field_0 == 0x8000000000000000 {
        v19 = (&v12)[7].field_0;
        v18 = v15;
        v17 = v14;
        v16 = *(&(&v12)[1] as &i128);
        println!("{}", &v16);
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: &g_46a7ce
        field_16: 21
    };
}
