fn uu_join::Repr<Sep>::print_fields(a0: u64, a1: u64, a2: &u64, a3: &struct_0, a4: u64) -> u64 {
    let v1: u64;  // r15
    let v2: void*;  // rbx
    let v3: u64;  // 4096
    let v4: u64;  // r13
    let v6: u64;  // rbp
    let v7: void*;  // rax
    let v8: u64;  // rax
    let v9: u64;  // r14
    let v10: u64;  // rdx

    v1 = a3->field_10;
    if !v1 {
        return 0;
    }
    v2 = 0;
    do {
        v4 = v3;
        if a4 != v2 {
            v6 = a2[2];
            if *(a2) - v6 > v4 {
                memcpy(a2[1] + v6, a0, v4);
                a2[2] = v6 + v4;
            } else {
                v7 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, a0, v4);
                if v7 {
                    return v7;
                }
            }
            v8 = uu_join::Line::get_field(a3, v2);
            if !v8 {
                core::option::unwrap_failed(); /* do not return */
            }
            v9 = a2[2];
            if *(a2) - v9 > v10 {
                memcpy(a2[1] + v9, v8, v10);
                a2[2] = v9 + v10;
            } else {
                v7 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v8, v10);
                if v7 {
                    return v7;
                }
            }
        }
    } while ((v2 += 1, v1 != v2));
}
