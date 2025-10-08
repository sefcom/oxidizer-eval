fn firecracker::print_snapshot_data_format(a1: i64, a2: i64) -> : struct48 {
    let a0: i64;  // rdi
    let v0: struct4;  // [bp-0xcc]
    let v1: Result<struct4, struct8>;  // [bp-0xc8]
    let v2: Result<struct32, struct40>;  // [bp-0xc8]
    let v3: u32;  // [bp-0xc4]
    let v4: struct24;  // [bp-0xc0]
    let v5: core::fmt::Arguments;  // [bp-0xa0]
    let v6: struct32;  // [bp-0x98]
    let v7: Result<struct32, struct9>;  // [bp-0x88]
    let v8: struct40;  // [bp-0x78]
    let v9: struct24;  // [bp-0x68]
    let v10: Result<struct56, struct16>;  // [bp-0x58]
    let v11: struct56;  // [bp-0x48]
    let v12: core::fmt::Arguments;  // [bp-0x18]
    let v14: u64;  // rax

    v1 = std::fs::File::open(a1, a2);
    match v1 {
        Err(_) => {
            return struct16 {
                field_0: 6
                field_8: v4 as u32
                field_12: (v4 >> 32) as u32
            };
        },
        Ok(v0) => {
            v2 = vmm::snapshot::get_format_version(&v0);
            v14 = v2 as i64;
            v12 = v5;
            v6 = *((&v2 as &char + 8) as &i128);
            v7 = *((&v2 as &char + 24) as &i128);
            v8 = v12;
            if v14 != 6 {
                return struct48 {
                    field_0: v14
                    field_8: v6
                    field_24: v7
                    field_40: v8
                };
            }
            v11 = v8;
            v10 = v7;
            v9 = v6;
            println!("v{}", &v9);
            return struct8 {
                field_0: 7
            };
        },
    }
}
