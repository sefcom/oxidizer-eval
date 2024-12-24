fn uu_sort::Output::into_write(a0: u64, a1: &struct_0) -> u64 {
    let v0: u32;  // [sp-0x34]
    let v1: u64;  // [sp-0x30]
    let v2: u128;  // [sp-0x28]
    let v3: u64;  // [sp-0x18]
    let v5: u64;  // rax
    let v6: u64;  // rcx
    let v7: &struct41;  // 4096

    if a1->field_0 == 0x8000000000000000 {
        v5 = alloc::boxed::Box<T>::new(std::io::stdio::stdout());
        v6 = &g_5febc0;
    } else {
        v3 = a1->field_10;
        v2 = *(&a1->field_0 as &i128);
        v0 = a1->field_18;
        v1 = std::fs::File::set_len(&v0, 0);
        v5 = alloc::boxed::Box<T>::new(v0);
        v6 = &g_5fec10;
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v7, 0x2000, v5, v6);
    return a0;
}
