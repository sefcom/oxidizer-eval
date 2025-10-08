fn forc_fmt::get_sway_dirs(a0: i64, a1: i64) -> void {
    let v0: struct9;  // [bp-0x1c8]
    let v1: struct16;  // [bp-0x1c8]
    let v2: u128;  // [bp-0x1b8]
    let v3: struct24;  // [bp-0x1b8]
    let v4: u64;  // [bp-0x1b0]
    let v5: u64;  // [bp-0x1a8]
    let v6: struct24;  // [bp-0x1a0]
    let v7: struct16;  // [bp-0x1a0]
    let v8: struct16;  // [bp-0x188], Other Possible Types: u64
    let v9: i64;  // [bp-0x180]
    let v10: u64;  // [bp-0x178]
    let v11: struct16;  // [bp-0x170]
    let v12: i64;  // [bp-0x160]
    let v13: u128;  // [bp-0x158]
    let v14: u64;  // [bp-0x158]
    let v15: u64;  // [bp-0x148]
    let v16: struct24;  // [bp-0x140]
    let v17: u64;  // [bp-0x138]
    let v18: u64;  // [bp-0x130]
    let v19: struct24;  // [bp-0x128]
    let v20: struct40;  // [bp-0x108]
    let v21: struct24;  // [bp-0xe0], Other Possible Types: u64
    let v22: struct40;  // [bp-0xe0]
    let v23: struct40;  // [bp-0xe0], Other Possible Types: u64
    let v24: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: u64
    let v25: u64;  // [bp-0xd8]
    let v26: u64;  // [bp-0xd8]
    let v27: u64;  // [bp-0xd8]
    let v28: u64;  // [bp-0xd0]
    let v29: u64;  // [bp-0xd0]
    let v30: u64;  // [bp-0xd0]
    let v32: i64;  // rax
    let v33: u64;  // rax
    let v34: i64;  // rcx
    let v35: u64;  // rax
    let v36: i64;  // rax
    let v38: u64;  // [bp-0x1c0]

    v6 = struct24 {
        field_0: 0
        field_8: ""
    };
    v32 = alloc::alloc::Global::alloc_impl(8, 24);
    *((v32 + 16) as &i64) = *((a1 + 16) as &i64);
    *(v32 as &i128) = *(a1 as &i128);
    v8 = 1;
    v9 = v32;
    v33 = 1;
    loop {
        v10 -= 1;
        v34 = v9;
        v35 = v10 * 3;
        v13 = *((v34 + v35 * 8) as &i128);
        v15 = *((v34 + v35 * 8 + 16) as &i64);
        if v14 == 0x8000000000000000 {
            break;
        }
        v36 = v34 + v35 * 8;
        v19 = struct24 {
            field_0: *(v36 as &i128)
            field_16: *((v36 + 16) as &i64)
        };
        v0 = std::fs::read_dir(&v19);
        v21 = v21;
        v25 = v25;
        v28 = v28;
        if v38 as i8 != 2 {
            v11 = v1;
            loop {
                vvar_443{stack -224} = struct40 OrderedDict([(0, 𝜙@64b [((8205658, None), vvar_379{stack -224}), ((8205688, None), vvar_363{stack -224})]), (16, 𝜙@64b [((8205658, None), vvar_381{stack -208}), ((8205688, None), vvar_365{stack -208})])])
                core::iter::traits::iterator::Iterator::try_fold(&v22, &v11);
                if !v22.field_0 as i64 {
                    break;
                }
                v20 = v23;
                v16 = std::fs::DirEntry::path(&v20);
                v21 = v23;
                v25 = v26;
                v28 = v29;
                if std::path::Path::is_dir(v17, v18) {
                    v21 = <&str as alloc::string::SpecToString>::spec_to_string(v17, v18);
                    v5 = v29;
                    v2 = *(&v21.field_0 as &i128);
                    v8 = alloc::vec::Vec<T,A>::push(&v3, "forc-plugins/forc-fmt/src/main.rs");
                    v3 = std::path::Path::join(v17, v18, "Forc.toml");
                    v24 = std::fs::metadata(v4, v5);
                    v21 = v23;
                    v25 = v26;
                    v28 = v29;
                    if v21 != 2 {
                        v7 = alloc::vec::Vec<T,A>::push(&v16, "forc-plugins/forc-fmt/src/main.rs");
                        v21 = v23;
                        v25 = v26;
                        v28 = v29;
                    }
                }
                v28 = v28;
                v25 = v25;
                v21 = v21;
            }
            v21 = v23;
            v25 = v26;
            v28 = v29;
            v24 = v23;
            v27 = v26;
            v30 = v29;
            if v38 as i8 != 2 {
                goto LABEL_7d34d8;
            }
        }
        v24 = v21;
        v27 = v25;
        v30 = v28;
LABEL_7d34d8:
        v28 = v30;
        v25 = v27;
        v21 = v24;
        if !v10 {
            break;
        }
    }
    *((v12 + 16) as &i64) = 0;
    *(v12 as &i128) = *(&v6.field_0 as &i128);
    return;
}
