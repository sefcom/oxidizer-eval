fn uu_join::Repr<Sep>::print_fields(a0: &u64, a1: &struct_0, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x38], Other Possible Types: &struct_0
    let v2: u64;  // rax
    let v3: u64;  // rbx
    let v4: void*;  // rbp
    let v5: &u8;  // rax
    let v6: void*;  // rax
    let v7: u64;  // rax
    let v8: &u8;  // r15
    let v9: u64;  // rdx

    v0 = v2;
    v0 = a1;
    v3 = a1->field_10;
    if !v3 {
        return 0;
    }
    v4 = 0;
    do {
        if a2 != v4 {
            v5 = a0[2];
            if *(a0) - v5 >= 2 {
                v5[a0[1]] = 32;
                a0[2] = v5 + 1;
            } else {
                v6 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, &g_4122cd, 1);
                if v6 {
                    return v6;
                }
            }
            v7 = uu_join::Line::get_field(v0, v4);
            if !v7 {
                core::option::unwrap_failed(); /* do not return */
            }
            v8 = a0[2];
            if *(a0) - v8 > v9 {
                memcpy(&v8[a0[1]], v7, v9);
                a0[2] = &v8[v9];
            } else {
                v6 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, v7, v9);
                if v6 {
                    return v6;
                }
            }
        }
    } while ((v4 += 1, v3 != v4));
}
