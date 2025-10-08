fn just::subcommand::Subcommand::variables(a0: u64) -> long long {
    let v0: Result<struct4, struct8>;  // [bp-0xd8], Other Possible Types: struct24
    let v1: struct24;  // [bp-0xd0]
    let v3: core::fmt::Arguments;  // [bp-0xc0], Other Possible Types: u64
    let v4: core::fmt::rt::Argument;  // [bp-0xb8]
    let v5: core::fmt::Arguments;  // [bp-0xb0]
    let v6: struct24;  // [bp-0xa8]
    let v7: u64;  // [bp-0xa0]
    let v8: struct32;  // [bp-0x98]
    let v9: core::fmt::Arguments;  // [bp-0x90]
    let v10: struct24;  // [bp-0x88]
    let v11: core::fmt::Arguments;  // [bp-0x80]
    let v12: struct24;  // [bp-0x78]
    let v13: core::fmt::rt::Argument;  // [bp-0x58]
    let v14: u64;  // [bp-0x58]
    let v15: u64;  // [bp-0x30]
    let v16: u64;  // [bp-0x28]
    let v17: u64;  // [bp-0x20]
    let v18: struct64;  // [bp-0x18]
    let v19: core::option::Option<std::path::Component>;  // [bp-0x10]
    let v21: core::fmt::Arguments;  // rax
    let v22: i64;  // rdx
    let v23: core::fmt::Arguments;  // rax
    let v25: i64;  // r15
    let v26: struct64;  // r14
    let v27: u64;  // r13
    let v28: u64;  // r12
    let v29: u64;  // rbx

    v21 = *((a0 + 640) as &i64);
    v22 = v21;
    v23 = v21;
    if v23 {
        v23 = *((a0 + 656) as &i64);
    }
    v19 = v25;
    v18 = v26;
    v17 = v27;
    v16 = v28;
    v15 = v29;
    v3 = v21;
    v4 = 0;
    v5 = v21;
    v6 = *((a0 + 648) as &i64);
    v7 = v3;
    v8 = 0;
    v9 = v21;
    v10 = *((a0 + 648) as &i64);
    v11 = v23;
    v12 = 0;
    v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v1 {
        do {
            if let Err(_) = v0 {
                print!(" ");
            }
            print!("{}", v2 + 128);
            v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v3);
            v13 = v14;
        } while (v1);
    }
    v3 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    return std::io::stdio::_print(&v3);
}
