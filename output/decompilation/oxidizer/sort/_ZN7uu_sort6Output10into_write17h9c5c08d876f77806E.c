fn uu_sort::Output::into_write(a0: u32, a1: void*) -> u64 {
    let v0: u32;  // [sp-0x34]
    let v1: u128;  // [sp-0x28]
    let v2: u64;  // [sp-0x18]
    let v4: u64;  // rax
    let v5: u64;  // rcx
    let v6: &struct41;  // 4096

    if a1->field_0 == 0x8000000000000000 {
        v4 = alloc::boxed::Box<T>::new(std::io::stdio::stdout());
        v5 = &g_5ff6e8;
        v6 = a0;
    } else {
        v2 = a1->field_10;
        v1 = *(&a1->field_0 as &i128);
        v0 = a1->field_18;
        v4 = alloc::boxed::Box<T>::new(v0);
        v5 = &g_5ff738;
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v6, 0x2000, v4, v5);
    return a0;
}
