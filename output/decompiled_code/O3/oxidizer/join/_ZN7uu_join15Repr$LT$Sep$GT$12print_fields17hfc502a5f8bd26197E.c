fn uu_join::Repr<Sep>::print_fields(a0: &u64, a1: &struct_0, a2: u64) -> u64 {
    let v0: &struct_0;  // [sp-0x38], Other Possible Types: u64
    let v2: u64;  // rax
    let v3: u64;  // rbx
    let v4: void*;  // r13
    let v5: void*;  // rax
    let v6: u64;  // rax
    let v7: u64;  // r15
    let v8: u64;  // rdx

    v0 = v2;
    v0 = a1;
    v3 = a1->field_10;
    if !v3 {
        return 0;
    }
    v4 = 0;
    do {
        if a2 != v4 {
            if *(a0) == a0[2] {
                v5 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, 1, 0);
                if v5 {
                    return v5;
                }
            }
            v6 = uu_join::Line::get_field(v0, v4);
            if !v6 {
                core::option::unwrap_failed(); /* do not return */
            }
            v7 = a0[2];
            if *(a0) - v7 > v8 {
                memcpy(a0[1] + v7, v6, v8);
                a0[2] = v7 + v8;
            } else {
                v5 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, v6, v8);
                if v5 {
                    return v5;
                }
            }
        }
    } while ((v4 += 1, v3 != v4));
}
