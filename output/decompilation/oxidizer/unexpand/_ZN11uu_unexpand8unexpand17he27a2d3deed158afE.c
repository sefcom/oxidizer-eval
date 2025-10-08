fn uu_unexpand::unexpand(a0: i64) -> long long {
    let v0: void*;  // [bp-0x170]
    let v1: u64;  // [bp-0x168]
    let v2: void*;  // [bp-0x160]
    let v3: struct16;  // [bp-0x158]
    let v4: i64;  // [bp-0x148]
    let v5: u64;  // [bp-0x140]
    let v6: u64;  // [bp-0x140]
    let v7: u64;  // [bp-0x130]
    let v8: u64;  // [bp-0x128]
    let v9: void*;  // [bp-0x120]
    let v10: iNone;  // [bp-0xf8]
    let v11: iNone;  // [bp-0xe8]
    let v12: iNone;  // [bp-0xd8]
    let v13: u64;  // [bp-0xc8]
    let v14: struct56;  // [bp-0xc0]
    let v15: u64;  // [bp-0xc0]
    let v16: u64;  // [bp-0xc0]
    let v17: struct16;  // [bp-0xb8], Other Possible Types: u64
    let v18: u64;  // [bp-0xb8]
    let v19: iNone;  // [bp-0xb0]
    let v20: iNone;  // [bp-0xb0]
    let v21: iNone;  // [bp-0xa0]
    let v22: iNone;  // [bp-0xa0]
    let v23: u64;  // [bp-0x90]
    let v24: u64;  // [bp-0x90]
    let v25: struct33;  // [bp-0x58]
    let v28: u64;  // rcx
    let v29: u64;  // rax
    let v30: i64;  // rbx
    let v31: i64;  // r12
    let v33: void*;  // rdx
    let v35: void*;  // rax
    let v38: void*;  // rdx, Other Possible Types: unsigned long

    v25 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::stdout());
    v28 = *((a0 + 40) as &i64);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if v28 > 1 {
        v4 = *((*((a0 + 32) as &i64) + v28 * 8 - 8) as &i64);
        v29 = *((a0 + 16) as &i64);
        if *((a0 + 16) as &i64) {
            goto LABEL_45d30e;
        }
    } else {
        v4 = 0;
        v29 = *((a0 + 16) as &i64);
        if *((a0 + 16) as &i64) {
LABEL_45d30e:
            v7 = v28;
            v30 = *((a0 + 8) as &i64);
            v31 = *((a0 + 8) as &i64) + v29 * 24;
            v6 = v31;
            do {
                vvar_433{stack -192} = struct56 OrderedDict([(0, 𝜙@64b [((4576498, None), vvar_359{stack -192}), ((4576014, None), None)]), (8, 𝜙@64b [((4576498, None), vvar_363{stack -184}), ((4576014, None), None)]), (16, 𝜙@128b [((4576498, None), vvar_364{stack -176}), ((4576014, None), None)]), (32, 𝜙@128b [((4576498, None), vvar_365{stack -160}), ((4576014, None), None)]), (48, 𝜙@64b [((4576498, None), vvar_362{stack -144}), ((4576014, None), None)])])
                uu_unexpand::open(&v14, *((v30 + 8) as &i64), *((v30 + 16) as &i64));
                if v14.field_0 {
                    v13 = v24;
                    v12 = v22;
                    v11 = v20;
                    v10 = *(&v14.field_0 as &i128);
                    do {
                        v33 = v38;
                        if (std::io::read_until(&v10, &v0) & 1) {
                            v33 = v2;
                        }
                        if !v33 {
                            v16 = v15;
                            v23 = v24;
                            v18 = v17;
                            v19 = v20;
                            v21 = v22;
                            v5 = v6;
                            goto LABEL_45d4f2;
                        }
                        v35 = uu_unexpand::unexpand_line(&v0, &v25, *((a0 + 48) as &i8), *((a0 + 49) as &i8), v4, *((a0 + 32) as &i64), v7);
                    } while (!v35);
                } else {
                    v3 = v17;
                    uucore::mods::error::set_exit_code(*((v14.field_16 as i64 + 88) as &i64)(v17) as u32);
                    v8 = uucore::util_name();
                    v9 = v38;
                    eprintln!("{}: {}", &v8, &v3);
                    v16 = v15;
                    v23 = v24;
                    v18 = v17;
                    v19 = v20;
                    v21 = v22;
                    v5 = v31;
                }
LABEL_45d4f2:
                v31 = v5;
                v30 += 24;
            } while (v30 != v31);
        }
    }
    return v35;
}
