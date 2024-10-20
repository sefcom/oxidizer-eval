fn uu_join::Repr<Sep>::print_fields(a0: &struct_1, a1: &u64, a2: &struct_0, a3: u64) -> u64 {
    let v0: u8;  // [sp-0x41]
    let v1: u64;  // [sp-0x40]
    let v3: u64;  // r13
    let v4: void*;  // rbp
    let v5: &u8;  // rax
    let v6: void*;  // rax
    let v7: u64;  // rax
    let v8: &u8;  // r15
    let v9: u64;  // rdx

    v3 = a2->field_10;
    if !v3 {
        return 0;
    }
    v0 = a0->field_29;
    v1 = &a0->field_29;
    v4 = 0;
    do {
        if a3 != v4 {
            v5 = a1[2];
            if *(a1) - v5 >= 2 {
                v5[a1[1]] = v0;
                a1[2] = v5 + 1;
            } else {
                v6 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v1, 1);
                if v6 {
                    return v6;
                }
            }
            v7 = uu_join::Line::get_field(a2, v4);
            if !v7 {
                core::option::unwrap_failed(); /* do not return */
            }
            v8 = a1[2];
            if *(a1) - v8 > v9 {
                memcpy(&v8[a1[1]], v7, v9);
                a1[2] = &v8[v9];
            } else {
                v6 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v7, v9);
                if v6 {
                    return v6;
                }
            }
        }
    } while ((v4 += 1, v3 != v4));
}
