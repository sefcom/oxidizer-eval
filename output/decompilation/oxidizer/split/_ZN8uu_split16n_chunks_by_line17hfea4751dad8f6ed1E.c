fn uu_split::n_chunks_by_line(a0: i128, a1: i32, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u8;  // [bp-0x111]
    let v1: std::io::stdio::StderrLock;  // [bp-0x108]
    let v2: struct16;  // [bp-0x100], Other Possible Types: u64
    let v3: u64;  // [bp-0xf8]
    let v4: void*;  // [bp-0xf0], Other Possible Types: u64
    let v5: &str;  // [bp-0xe8], Other Possible Types: u64
    let v6: void*;  // [bp-0xe0], Other Possible Types: u32
    let v7: u32;  // [bp-0xe0]
    let v8: u64;  // [bp-0xd8]
    let v9: u64;  // [bp-0xd0]
    let v10: u64;  // [bp-0xc0]
    let v11: u64;  // [bp-0xb8]
    let v12: u64;  // [bp-0xb0]
    let v13: u64;  // [bp-0xa8]
    let v14: struct24;  // [bp-0xa0]
    let v16: core::option::Option<usize>;  // [bp-0x80]
    let v17: std::io::stdio::Stdout;  // [bp-0x78], Other Possible Types: u64
    let v18: void*;  // [bp-0x70]
    let v19: u64;  // [bp-0x68]
    let v20: u8;  // [bp-0x60]
    let v21: u8;  // [bp-0x58]
    let v22: u64;  // [bp-0x50]
    let v23: struct24;  // [bp-0x48]
    let v24: u64;  // [bp-0x40]
    let v26: u64;  // rdx
    let v27: void*;  // rax
    let v28: u64;  // rdx
    let v32: core::fmt::Arguments;  // rbp
    let v33: Option<struct24>;  // r12
    let v34: void*;  // r13
    let v35: u64;  // r15
    let v36: u64;  // r15
    let v38: core::result::Result<(), std::io::error::Error>;  // rax
    let v39: u32;  // r9d
    let v41: u32;  // ecx

    v14 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    if uu_split::get_input_size(a0 + 112, a1, &v14, *(a0 as &i64), *((a0 + 8) as &i64)) {
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
    } else {
        v9 = 1;
        v6 = 0;
        if v28 || a3 != 1 && !*((a0 + 161) as &i8) {
            v17 = std::io::stdio::stdout();
            v1 = std::io::stdio::Stderr::lock(&v17);
            v2 = 0;
            v3 = 8;
            v4 = 0;
            v5 = a1;
            if (v28 | a2) >> 32 {
                v8 = ((0 CONCAT v28) % a2 CONCAT (0 CONCAT v28) / a2) >> 64;
                if !(a3 == 1) {
                    goto LABEL_4cd85d;
                }
LABEL_4cd831:
                v13 = v28;
                v0 = *((a0 + 161) as &i8);
            } else {
                v8 = ((0 CONCAT v28) % (a2 & 4294967295) CONCAT (0 CONCAT v28) / (a2 & 4294967295)) >> 32;
                if a3 == 1 {
                    goto LABEL_4cd831;
                }
LABEL_4cd85d:
                v0 = *((a0 + 161) as &i8);
                <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(a2, a0, *((a0 + 161) as &i8), a4);
                v27 = v18;
                if v17 == 0x8000000000000000 {
                    return v27;
                }
                v13 = v28;
                v2 = v17;
                v3 = v27;
                v4 = v19;
            }
            v17 = 1;
            v18 = 0;
            v19 = v5;
            v20 = 0;
            v21 = *((a0 + 162) as &i8);
            v5 = a0;
            v22 = *((a0 + 136) as &i64);
            v9 = 9223372036854775809;
            v6 = v21;
            loop {
                vvar_651{stack -72} = struct24 OrderedDict({0: 𝜙@64b [((5036384, None), vvar_498{stack -72}), ((5036239, None), None)]})
                <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v23, &v17);
                if v23.field_0 == 9223372036854775809 {
                    return 0;
                }
                v35 = v24;
                if v23.field_0 == 0x8000000000000000 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35);
                }
                v10 = v23.field_0;
                v11 = v35;
                v12 = v23.field_16;
                v36 = v35;
                if v12 + v34 < v13 {
                    alloc::vec::Vec<T,A>::push(&v10, v7);
                    v36 = v11;
                }
                if !a3 {
                    v2 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(v33 - 1, v5);
                    if v27 {
                        break;
                    }
                    uu_split::custom_write_all(v36, v12, v16, v22, v39);
                    if v27 as i8 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
                    }
                } else if v33 == a4 && (v38 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, v36, v12), v38) {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v38);
                }
                if v32 > v34 || !v0 || v41 >= 2147483647 {
                    if !(a3 == 1) {
                        continue;
                    }
                } else {
                    if !(a3 == 1) {
                        continue;
                    }
                }
                if !(v33 <= a4) {
                    break;
                }
            }
        }
    }
    return v27;
}
