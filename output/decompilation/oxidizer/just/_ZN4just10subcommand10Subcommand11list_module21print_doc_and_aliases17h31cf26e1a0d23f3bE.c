fn just::subcommand::Subcommand::list_module::print_doc_and_aliases(a0: u64, a1: u64, a2: u64, a3: u64, a4: i704, a5: u64, a6: u64, a7: u64, a8: u64, a9: u64) -> long long {
    let v0: struct128;  // [bp-0x1b9]
    let v1: struct40;  // [bp-0x1b8], Other Possible Types: struct82, u64
    let v2: struct82;  // [bp-0x1b0], Other Possible Types: u64
    let v3: struct128;  // [bp-0x1a8], Other Possible Types: u64
    let v4: void*;  // [bp-0x1a0]
    let v5: struct128;  // [bp-0x198], Other Possible Types: u32
    let v6: struct82;  // [bp-0x194], Other Possible Types: u32
    let v7: i64;  // [bp-0x188]
    let v8: core::fmt::Arguments;  // [bp-0x180], Other Possible Types: u64
    let v9: struct32;  // [bp-0x180]
    let v10: struct81;  // [bp-0x178], Other Possible Types: u64
    let v11: struct25;  // [bp-0x170], Other Possible Types: u64
    let v12: void*;  // [bp-0x168]
    let v13: u32;  // [bp-0x160]
    let v14: u32;  // [bp-0x15c]
    let v15: struct18;  // [bp-0x14a]
    let v16: struct81;  // [bp-0x139]
    let v17: core::fmt::Arguments;  // [bp-0x128], Other Possible Types: u128
    let v18: core::fmt::rt::Argument;  // [bp-0x128]
    let v19: core::fmt::rt::Argument;  // [bp-0x118], Other Possible Types: u128
    let v20: u128;  // [bp-0x118]
    let v21: u128;  // [bp-0x108]
    let v22: u128;  // [bp-0x108]
    let v24: iNone;  // [bp-0xf8]
    let v25: iNone;  // [bp-0xe8]
    let v26: iNone;  // [bp-0xd8]
    let v27: u64;  // [bp-0xc8]
    let v28: u64;  // [bp-0xc0]
    let v29: i64;  // [bp-0xb8]
    let v30: struct24;  // [bp-0xb0]
    let v31: struct25;  // [bp-0x98]
    let v32: u128;  // [bp-0x88]
    let v33: u128;  // [bp-0x78]
    let v34: iNone;  // [bp-0x68]
    let v35: iNone;  // [bp-0x58]
    let v36: iNone;  // [bp-0x48]
    let v37: i8;  // [bp-0x38]
    let v38: struct128;  // dl
    let v39: core::fmt::rt::Argument;  // ecx
    let v40: struct65;  // eax
    let v41: i64;  // rax
    let v44: struct40;  // rbx
    let v45: struct16;  // r15
    let v46: Option<struct256>;  // r14
    let v47: struct81;  // r13
    let v48: struct25;  // rbp
    let v49: core::option::Option<&str>;  // rax
    let v50: u64;  // rdx
    let v52: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // ecx
    let v53: core::option::Option<&str>;  // rax
    let v55: u32;  // ecx
    let v56: core::option::Option<&str>;  // rax
    let v58: Result<struct105, struct17>;  // ecx

    v15 = just::color::Color::stdout(a0 + 388);
    v38 = *((a0 + 422) as &i8);
    if a3 || (a6 & *((a0 + 422) as &i8) != 2) {
        v39 = v16 as u32;
        v40 = 4;
        v0 = *((a0 + 422) as &i8);
        v1 = struct40 {
            field_0: 0x8000000000000000
            field_8: "#"
            field_24: 0
            field_32: v40
            field_36: 10
        };
        v41 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(a8, a9, a1, a2);
        if !v41 {
            core::option::expect_failed("no entry found for key"); /* do not return */
        } else if (*(v41 as &i64) <= a7 ? a7 - *(v41 as &i64) : 0) + 1 <= 65535 {
            v18 = core::fmt::rt::Argument {
                ty: &g_465db0
            };
            v19 = core::fmt::rt::Argument {
                ty: &v1
            };
            v22 = core::fmt::rt::Argument {
                ty: 0
            };
            v8 = core::fmt::Arguments {
                pieces: [&g_46ca80, &g_46ca90]
                args: [v17, v20, v21]
                fmt: &g_471130
            };
            std::io::stdio::_print(&v8);
            v30 = struct24 {
                field_0: &v15
                field_8: a5
                field_16: a6
            };
            if (!v0 & a6) {
                just::subcommand::Subcommand::list_module::print_doc_and_aliases::{{closure}}(&v30);
            }
            if a3 {
                print!(" ");
                v31 = regex_automata::meta::regex::Regex::find_iter(just::subcommand::backtick_re(), a3, v7);
                v27 = *(&v37 as &i64);
                v26 = v36;
                v25 = v35;
                v24 = v34;
                v22 = v33;
                v19 = v32;
                v17 = *(&v31.field_0 as &i128);
                v28 = a3;
                v29 = v7;
                v44 = 0;
                loop {
                    vvar_732{stack -384} = struct32 OrderedDict([(0, 𝜙@64b [((6883132, None), vvar_682{stack -384}), ((6882489, None), vvar_624{stack -384})]), (16, 𝜙@64b [((6883132, None), vvar_684{stack -368}), ((6882489, None), vvar_628{stack -368})])])
                    regex_automata::util::iter::Searcher::advance(&v9, &v22, v27, &v17);
                    if v9.field_0 as i32 != 1 {
                        break;
                    }
                    v45 = v28;
                    v46 = v29;
                    v47 = v10;
                    v48 = v11;
                    v49 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v48, v47, a3, a4) as u64;
                    if v50 {
                        v4 = 0;
                        v5 = v52;
                        v6 = 10;
                        v1 = 0x8000000000000000;
                        v2 = v49;
                        v3 = v50;
                        print!("{}", &v1);
                    }
                    v53 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v47, v48, v45, v46) as u64;
                    v4 = 0;
                    v5 = v55;
                    v6 = 10;
                    v1 = 0x8000000000000000;
                    v2 = v53;
                    v3 = v50;
                    print!("{}", &v1);
                }
                v56 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v44, a3, v7) as u64;
                if v50 {
                    v12 = 0;
                    v13 = v58;
                    v14 = 10;
                    v8 = 0x8000000000000000;
                    v10 = v56;
                    v11 = v50;
                    print!("{}", &v8);
                }
            }
            if (v0 == 1 & a6) {
                just::subcommand::Subcommand::list_module::print_doc_and_aliases::{{closure}}(&v30);
            }
        } else {
            panic!("Formatting argument out of range");
        }
    }
    v17 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    return std::io::stdio::_print(&v17);
}
