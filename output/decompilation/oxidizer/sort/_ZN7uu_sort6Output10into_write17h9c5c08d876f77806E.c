fn uu_sort::Output::into_write(a0: u32, a1: void*) -> u64 {
    let v0: u32;  // [sp-0x34]
    let v1: u128;  // [sp-0x28]
    let v2: u64;  // [sp-0x18]
    let v4: u64;  // rcx
    let v5: &struct41;  // rdi
    let v6: u64;  // rdx

    if a1->field_0 == 0x8000000000000000 {
        v4 = &g_5ff6e8;
        v5 = a0;
        v6 = alloc::boxed::Box<T>::new(std::io::stdio::stdout());
    } else {
        v2 = a1->field_10;
        v1 = *(&a1->field_0 as &i128);
        v0 = a1->field_18;
        v4 = &g_5ff738;
        v5 = a0;
        v6 = alloc::boxed::Box<T>::new(v0);
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v5, 0x2000, v6, v4);
    return a0;
}
