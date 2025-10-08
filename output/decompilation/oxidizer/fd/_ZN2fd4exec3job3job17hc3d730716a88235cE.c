fn fd::exec::job::job(a0: u64, a1: u64, a2: u64, a3: u64, a4: i64) -> long long {
    let v0: void*;  // [bp-0x380]
    let v1: u32;  // [bp-0x374]
    let v2: u64;  // [bp-0x370]
    let v3: u64;  // [bp-0x368]
    let v4: struct56;  // [bp-0x348]
    let v8: struct80;  // [bp-0x308]
    let v9: struct24;  // [bp-0x2b8]
    let v10: struct64;  // [bp-0x2a0]
    let v11: iNone;  // [bp-0x260]
    let v12: struct312;  // [bp-0x168], Other Possible Types: struct64
    let v13: struct312;  // [bp-0x168], Other Possible Types: struct64
    let v14: struct56;  // [bp-0x160]
    let v19: u32;  // ebp
    let v20: u64;  // rax
    let v21: u64;  // rdx
    let v22: u64;  // rax
    let v23: u64;  // rdx

    v3 = *((a4 + 416) as &i64);
    v8 = <I as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v2 = *((a4 + 376) as &i64);
    v19 = vvar_70{reg 56} & -0x100 | 2;
    if (*((a4 + 486) as &i8) & 1) {
        v1 = *((a4 + 487) as &i8);
        loop {
            vvar_394{stack -360} = struct312 OrderedDict([(0, 𝜙@64b [((6236535, None), vvar_320{stack -360}), ((6236720, None), vvar_320{stack -360}), ((6236397, None), None)])])
            <core::iter::adapters::flatten::Flatten<I> as core::iter::traits::iterator::Iterator>::next(&v13, &v8);
            if v13.field_0 == 5 {
                break;
            }
            if v13.field_0 == 4 {
                v4 = v14;
                v9 = <T as alloc::string::SpecToString>::spec_to_string(&v4);
                fd::error::print_error(&v9);
            } else {
                v10 = v12;
                memcpy(&v11, &v13 as u8, 248);
                v20 = fd::dir_entry::DirEntry::stripped_path(&v10, v1);
                v19 = fd::exit_codes::merge_exitcodes(2 | fd::exec::CommandSet::execute(a1, a2, v20, v21, v0, v2, a3, 2 <= v3) * 0x100);
            }
        }
    } else {
        loop {
            vvar_393{stack -360} = struct312 OrderedDict([(0, 𝜙@64b [((6236820, None), vvar_302{stack -360}), ((6237004, None), vvar_302{stack -360}), ((6236725, None), None)])])
            <core::iter::adapters::flatten::Flatten<I> as core::iter::traits::iterator::Iterator>::next(&v12, &v8);
            if v12.field_0 == 5 {
                break;
            }
            if v12.field_0 == 4 {
                continue;
            }
            v10 = v13;
            memcpy(&v11, &v12 as u8, 248);
            v22 = fd::dir_entry::DirEntry::stripped_path(&v10, v1);
            v19 = fd::exit_codes::merge_exitcodes(2 | fd::exec::CommandSet::execute(a1, a2, v22, v23, v0, v2, a3, 2 <= v3) * 0x100);
        }
    }
    return v19;
}
