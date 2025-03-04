fn uu_dd::progress::ProgUpdate::write_io_lines(a0: void*, a1: u32) -> u64 {
    let v0: u32;  // [sp-0x54]
    let v1: u64;  // [sp-0x50]
    let v2: u64;  // [sp-0x48]
    let v3: u64;  // [sp-0x40], Other Possible Types: &&struct_1
    let v4: u128;  // [sp-0x38]
    let v5: void*;  // [sp-0x30]
    let v6: &u8;  // [sp-0x20]
    let v7: u64;  // [sp-0x18]
    let v9: void*;  // rax
    let v10: u32;  // eax

    v9 = uu_dd::progress::ReadStat::report(&a0->padding_0[16] as &struct_0, a1);
    if v9 {
        return v9;
    }
    v9 = uu_dd::progress::WriteStat::report(&a0[1].padding_0[4] as &struct_0, a1);
    if v9 {
        return v9;
    }
    v10 = a0->field_28;
    if !v10 {
        return 0;
    }
    if v10 != 1 {
        v0 = v10;
        v6 = &v0;
        v7 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v1 = &g_5622e8;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
    } else {
        v1 = "1 truncated record\n";
        v2 = 1;
        v3 = 8;
        v4 = 0;
    }
    v9 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v1);
    return v9;
}
