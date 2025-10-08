fn uu_split::n_chunks_by_line(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: alloc::string::String;  // [bp-0x119]
    let v1: u64;  // [bp-0x118]
    let v2: alloc::string::String;  // [bp-0x110], Other Possible Types: u64
    let v3: alloc::string::String;  // [bp-0x108]
    let v4: struct24;  // [bp-0x108]
    let v5: u64;  // [bp-0x100]
    let v6: u64;  // [bp-0xf8]
    let v7: void*;  // [bp-0xf0], Other Possible Types: u64
    let v8: void*;  // [bp-0xe8], Other Possible Types: u64
    let v9: u64;  // [bp-0xe0]
    let v10: void*;  // [bp-0xd8], Other Possible Types: alloc::string::String
    let v11: Result<struct40, struct16>;  // [bp-0xd0]
    let v12: u64;  // [bp-0xd0]
    let v13: struct56;  // [bp-0xc8]
    let v14: Option<struct40>;  // [bp-0xc0]
    let v15: struct42;  // [bp-0xb8]
    let v16: struct24;  // [bp-0xb0]
    let v17: u64;  // [bp-0x98]
    let v18: struct16;  // [bp-0x88], Other Possible Types: struct9
    let v19: u64;  // [bp-0x80]
    let v20: std::io::stdio::Stdout;  // [bp-0x78], Other Possible Types: struct24, u64
    let v21: void*;  // [bp-0x70]
    let v22: u64;  // [bp-0x68]
    let v23: u8;  // [bp-0x60]
    let v24: struct32;  // [bp-0x58]
    let v25: struct24;  // [bp-0x50]
    let v26: struct24;  // [bp-0x48]
    let v27: i64;  // [bp-0x40]
    let v29: u64;  // rdx
    let v30: void*;  // rax
    let v31: u64;  // rdx
    let v35: u8;  // dl
    let v36: u64;  // rbx
    let v37: u64;  // r14
    let v38: void*;  // rbp
    let v39: i64;  // r15
    let v40: i64;  // r15
    let v42: core::result::Result<(), std::io::error::Error>;  // rax

    v16 = struct24 {
        field_0: 0
        field_8: ""
    };
    v16 = struct24 {
        field_0: 0
        field_8: ""
    };
    if (uu_split::get_input_size(a0 + 112, a1, &v16, *(a0 as &i64), *((a0 + 8) as &i64)) & 1) {
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
    } else {
        v1 = 1;
        if v31 || !a3 && !*((a0 + 161) as &i8) {
            v20 = std::io::stdio::stdout();
            v10 = 0;
            v5 = std::io::stdio::Stderr::lock(&v20);
            v6 = 0;
            v7 = 8;
            v8 = 0;
            if (v31 | a2) >> 32 {
                v9 = ((0 CONCAT v31) % a2 CONCAT (0 CONCAT v31) / a2) >> 64;
                if !a3 {
                    goto LABEL_47113e;
                }
LABEL_4710fb:
                v17 = v31;
            } else {
                v9 = ((0 CONCAT v31) % (a2 & 4294967295) CONCAT (0 CONCAT v31) / (a2 & 4294967295)) >> 32;
                if a3 {
                    goto LABEL_4710fb;
                }
LABEL_47113e:
                v35 = *((a0 + 161) as &i8);
                v20 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(a2, a0, *((a0 + 161) as &i8));
                v30 = v21;
                v2 = v22;
                if v20.field_0 == 0x8000000000000000 {
                    return v30;
                }
                v17 = v31;
                v6 = v20.field_0;
                v7 = v30;
                v8 = v2;
            }
            v20 = 1;
            v21 = 0;
            v22 = a1;
            v23 = 0;
            v24 = *((a0 + 162) as &i8);
            v2 = a0;
            v25 = *((a0 + 136) as &i64);
            v0 = v35 ^ 1;
            v10 = 9223372036854775809;
            v3 = v24 as u32;
            v11 = a3;
            loop {
                vvar_714{stack -72} = struct24 OrderedDict([(0, 𝜙@64b [((4657824, None), vvar_587{stack -72}), ((4657616, None), None)])])
                <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v26, &v20);
                if v26.field_0 == 9223372036854775809 {
                    break;
                }
                v39 = v27;
                if v26.field_0 != 0x8000000000000000 {
                    v13 = v26.field_0;
                    v14 = v39;
                    v15 = v26.field_16;
                    v40 = v39;
                    if v15 + v38 < v17 {
                        alloc::vec::Vec<T,A>::push(&v13, v4 as u64, "src/uu/split/src/split.rs");
                        v40 = v14;
                    }
                    if !(v11 as i8 & 1) {
                        v18 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v6, v37 - 1, v2);
                        if v18.field_0 {
                            break;
                        }
                        v18 = uu_split::custom_write_all(v40, v15, v19, v25);
                        if v18.field_0 == 1 {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
                        }
                    } else if v37 == a4 {
                        v42 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v5, v40, v15);
                        if let Err(_) = v42 {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v42);
                        }
                    }
                    if v36 > v38 {
                        v12 = v11;
                    } else {
                        do {
                            v12 = v11;
                        } while (v36 <= v38);
                    }
                    if (v37 > a4 & v12) {
                        break;
                    }
                } else {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v39);
                }
            }
        }
    }
    return v30;
}
