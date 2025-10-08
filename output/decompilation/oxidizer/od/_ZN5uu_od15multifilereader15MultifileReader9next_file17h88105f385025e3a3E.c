fn uu_od::multifilereader::MultifileReader::next_file() -> : struct16 {
    let a0: void*;  // rdi
    let v1: struct712;  // [bp-0xdc]
    let v3: void*;  // [bp-0xd0], Other Possible Types: u64
    let v4: u64;  // [bp-0xc8]
    let v5: u64;  // [bp-0xc0]
    let v6: u8;  // [bp-0xb8]
    let v7: struct24;  // [bp-0x60]
    let v8: u64;  // [bp-0x58]
    let v9: u64;  // [bp-0x50]
    let v10: iNone;  // [bp-0x48]
    let v12: u64;  // rdx
    let v13: core::fmt::rt::Argument;  // r15
    let v14: Result<struct4, struct8>;  // [bp-0xe0]

    if a0[16] as i64 {
        do {
            vvar_285{stack -96} = struct24 OrderedDict([(0, 𝜙@64b [((4624017, None), vvar_191{stack -96}), ((4623695, None), None)]), (16, 𝜙@64b [((4624017, None), vvar_194{stack -80}), ((4623695, None), None)])])
            alloc::vec::Vec<T,A>::remove(&v7, a0);
            if !v7.field_0 as i64 {
                v14 = std::fs::File::open(v8, v9);
                if let Ok(_) = v14 {
                    v13 = alloc::boxed::Box<T>::new(v1 as u64);
LABEL_468f1b:
                    *(&a0[24] as &core::fmt::rt::Argument) = v13;
                    *(&a0[32] as &&u8) = &g_5024a0;
                    return;
                }
            } else {
                if v7.field_0 as i32 != 1 {
                    v10 = *((&v7.field_0 as &char + 8) as &i128);
                    a0[24] = v10;
                    return;
                }
                std::io::stdio::stdin();
                v13 = alloc::boxed::Box<T>::new(0);
                goto LABEL_468f1b;
            }
            v3 = uucore::util_name();
            v4 = v12;
            eprint!("{}: ", &v3);
            v3 = 0;
            v4 = v8;
            v5 = v9;
            v6 = 0;
            eprintln!("{}: {}", &v3, &v0);
            *(&a0[40] as &i8) = 1;
        } while (a0[16] as i64);
    }
    *(&a0[24] as &i64) = 0;
    return;
}
