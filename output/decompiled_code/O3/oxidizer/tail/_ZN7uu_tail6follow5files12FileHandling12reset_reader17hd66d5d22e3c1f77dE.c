fn uu_tail::follow::files::FileHandling::reset_reader(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: &struct_0;  // rax
    let v4: &struct_0;  // rbx

    v0 = v2;
    v3 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2, a3, a4, a5);
    v4 = v3;
    if v4->field_c8 {
        v3 = v4->field_d0->field_0;
        if v3 {
            v3 = v3();
        }
    }
    v4->field_c8 = 0;
    return v3;
}
