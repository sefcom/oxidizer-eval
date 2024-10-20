fn uu_fmt::linebreak::write_with_spaces(a0: u32, a1: u32, a2: u32, a3: void*, a4: u32, a5: u32) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: &struct_0;  // 4096
    let v4: &struct_0;  // rax
    let v5: u64;  // rcx
    let v6: &struct_0;  // rax
    let v7: &struct_0;  // rcx
    let v8: u64;  // rax
    let v9: u64;  // rsi
    let v10: u64;  // rdx
    let v11: void*;  // rax
    let v13: &struct_0;  // r12

    v0 = v2;
    if a2 != 1 {
        if !(a2 == 2) {
            goto LABEL_48cf0c;
        }
        v6 = a3[2];
        v5 = *(a3) - v6 as &u8;
        if v5 <= 2 {
            v9 = &g_419e05;
            v10 = 2;
            goto LABEL_48cf76;
        } else {
            v7 = a3[1];
            *((v7 + v6) as &i16) = 8224;
            v8 = &v6->padding_1[1];
        }
    } else {
        v4 = a3[2];
        v5 = *(a3) - v4 as &u8;
        if v5 > 1 {
            v7 = a3[1];
            *((v7 + v4) as &i8) = 32;
            v8 = &v4->padding_1 as &struct_0;
        } else {
            v9 = &g_419e07;
            v10 = 1;
LABEL_48cf76:
            v11 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v9, v10, v5, a4, a5);
            if v11 {
                return v11;
            }
LABEL_48cf0c:
            v13 = a3[2];
            if (*(a3) - v13 as &u8) as &struct_0 > a1 {
                memcpy(&(&v13->field_0)[a3[1]] as &struct_0, a0, a1);
                a3[2] = &(&v13->field_0)[a1];
                return 0;
            }
            return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, a0, a1, v3, a4, a5);
        }
    }
    a3[2] = v8;
    goto LABEL_48cf0c;
}
