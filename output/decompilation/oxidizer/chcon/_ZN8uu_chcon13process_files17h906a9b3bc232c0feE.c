fn uu_chcon::process_files(a0: i64, a1: i64, a2: i64, a3: &struct24) -> u64 {
    let v0: void*;  // [bp-0x138]
    let v1: struct16;  // [bp-0x130]
    let v2: struct16;  // [bp-0x130]
    let v3: void*;  // [bp-0x130]
    let v4: u64;  // [bp-0x128]
    let v5: alloc::string::String;  // [bp-0x120]
    let v6: u128;  // [bp-0x118]
    let v7: struct76;  // [bp-0x108]
    let v8: core::fmt::rt::Argument;  // [bp-0xf8]
    let v9: u128;  // [bp-0xe8]
    let v10: core::fmt::Arguments;  // [bp-0xd8]
    let v11: core::fmt::rt::Argument;  // [bp-0xc8]
    let v13: struct72;  // [bp-0xc0]
    let v15: struct72;  // [bp-0x78]
    let v17: i64;  // rax
    let v18: core::fmt::Arguments;  // xmm0

    v7 = uu_chcon::fts::FTS::new(*((a1 + 8) as &i64), *((a1 + 8) as &i64) + *((a1 + 16) as &i64) * 24, *((&g_419bd0.field_0 as &u8 + 4 * *((a1 + 123) as &i8)) as &i32));
    if v7.field_0 != 18 {
        v17 = alloc::alloc::Global::alloc_impl(8, 72);
        v18 = *(&v7.field_0 as &i128);
        *((v17 + 64) as &core::fmt::rt::Argument) = v11;
        *((v17 + 48) as &core::fmt::Arguments) = v10;
        *((v17 + 32) as &u128) = v9;
        *((v17 + 16) as &core::fmt::rt::Argument) = v8;
        *(v17 as &core::fmt::Arguments) = v18;
        *(v0 as &i64) = 1;
        *(&v0[8] as &struct_1 *) = v17;
        *(&v0[16] as &i64) = 1;
        return v0;
    }
    v6 = v7.field_4;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    loop {
        vvar_216{stack -192} = struct72 OrderedDict([(0, 𝜙@32b [((4604843, None), vvar_183{stack -192}), ((4604752, None), vvar_183{stack -192}), ((4604690, None), None)]), (4, 𝜙@544b [((4604843, None), vvar_184{stack -188}), ((4604752, None), vvar_184{stack -188}), ((4604690, None), None)])])
        uu_chcon::fts::FTS::read_next_entry(&v13, &v6);
        if v13.field_0 == 18 {
            if !(&v13.field_0)[1] as i8 {
                break;
            }
            v15 = uu_chcon::process_file(a1, a2, &v6, a3);
            if v15.field_0 != 18 {
                v1 = alloc::vec::Vec<T,A>::push(&v15, "src/uu/chcon/src/chcon.rs");
            }
        } else {
            v2 = alloc::vec::Vec<T,A>::push(&v13, "src/uu/chcon/src/chcon.rs");
            break;
        }
    }
    *(&v0[16] as &i64) = 0;
    *(v0 as &i128) = *(&v2.field_0 as &i128);
    return v0;
}
