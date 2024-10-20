fn uu_dd::Output::new_file_from_stdout(a0: void*, a1: &u64, a2: u32) -> u64 {
    let v0: u32;  // [sp-0x40], Other Possible Types: Enum
    let v1: u32;  // [sp-0x3c]
    let v2: u8;  // [bp-0x38]
    let v3: u8;  // [bp-0x30]
    let v4: u64;  // [sp-0x28]
    let v5: struct4;  // [bp-0x1c]
    let v7: u64;  // rax
    let v8: &u64;  // rax
    let v9: u32;  // eax
    let v10: u128;  // xmm0
    let v11: u32;  // ebp
    let v12: u64;  // rdx
    let v13: &u64;  // rax
    let v14: u128;  // xmm0

    std::io::stdio::stdout();
    v5 = struct4 {
        field_0: 1
    };
    v0 = std::os::fd::owned::BorrowedFd::try_clone_to_owned(&v5);
    if v0 {
        v7 = *(&v2 as &i64);
        v0 = 0x8000000000000000;
        v4 = v7;
        v8 = __rust_alloc(32, 8);
        v10 = *(&v0 as &i128);
        *(&v8[2] as &i128) = *(&v3 as &i128);
        *(v8) = v10;
        a0->field_16 = v8;
        a0[1].field_0 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
        a0->field_0 = 4;
        return a0;
    }
    v9 = *((&a1[18] as &char + 6) as &i8) * 0x400;
    if a1[19] as i8 {
        v9 |= 0x4000;
    }
    if *((&a1[19] as &char + 1) as &i8) {
        v9 |= 0x10000;
    }
    if *((&a1[19] as &char + 2) as &i8) {
        v9 |= 0x1000;
    }
    if *((&a1[19] as &char + 6) as &i8) {
        v9 |= 0x40000;
    }
    if *((&a1[19] as &char + 7) as &i8) {
        v9 |= 0x100;
    }
    if a1[20] as i8 {
        v9 |= 0x20000;
    }
    if *((&a1[19] as &char + 5) as &i8) {
        v9 |= 0x800;
    }
    v11 = v1;
    if *((&a1[19] as &char + 3) as &i8) {
        v9 |= 0x101000;
    }
    if v1 {
        v1 = v9;
        v0 = 5;
        if nix::fcntl::fcntl(v11, &v0) as i32 {
            v0 = 0x8000000000000000;
            v4 = v12 * 0x100000000 | 2;
            v13 = __rust_alloc(32, 8);
            v14 = *(&v0 as &i128);
            *(&v13[2] as &i128) = *(&v3 as &i128);
            *(v13) = v14;
            a0->field_16 = v13;
            a0[1].field_0 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
            a0->field_0 = 4;
            return a0;
        }
    }
    uu_dd::Output::prepare_file(a0, v11, a1);
    return a0;
}
