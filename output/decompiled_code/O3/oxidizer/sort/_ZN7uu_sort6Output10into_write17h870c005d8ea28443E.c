fn uu_sort::Output::into_write(a0: &struct_0, a1: &struct_1) -> u64 {
    let v0: u32;  // [sp-0x3c]
    let v1: u64;  // [sp-0x38]
    let v3: &u32;  // rax
    let v4: u64;  // rax
    let v5: u64;  // rcx

    if a1->field_0 != 0x8000000000000000 {
        v0 = a1->field_18;
        v1 = std::fs::File::set_len(&v0, 0);
        v3 = __rust_alloc(4, 4);
        *(v3) = v0;
        v4 = __rust_alloc(0x2000, 1);
        v5 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.38.llvm.14646808445695166917;
    } else {
        v3 = __rust_alloc(8, 8);
        *(&v3 as &long long) = std::io::stdio::stdout();
        v4 = __rust_alloc(0x2000, 1);
        v5 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.37.llvm.14646808445695166917;
    }
    a0->field_0 = 0x2000;
    a0->field_8 = v4;
    a0->field_10 = 0;
    a0->field_18 = 0;
    a0->field_20 = v3;
    a0->field_28 = v5;
    return a0;
}
