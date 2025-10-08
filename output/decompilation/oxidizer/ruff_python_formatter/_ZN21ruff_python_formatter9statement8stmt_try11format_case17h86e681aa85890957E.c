fn ruff_python_formatter::statement::stmt_try::format_case(a0: i128, a1: i832, a2: u8, a3: core::option::Option<&str>, a4: i128, a5: u64, a6: i192, a7: u64) -> long long {
    let v0: &u64;  // [bp-0x150]
    let v1: struct32;  // [bp-0x148]
    let v2: struct160;  // [bp-0x140]
    let v3: core::fmt::Arguments;  // [bp-0x138]
    let v4: core::fmt::Arguments;  // [bp-0x130]
    let v5: struct24;  // [bp-0x128]
    let v6: struct32;  // [bp-0x120]
    let v7: &str;  // [bp-0x118]
    let v8: &str;  // [bp-0x110]
    let v9: struct20;  // [bp-0x108]
    let v10: struct16;  // [bp-0x100]
    let v11: struct16;  // [bp-0xd8]
    let v12: u8;  // [bp-0xc8]
    let v13: u64;  // [bp-0xb8]
    let v14: struct32;  // [bp-0xb0]
    let v15: struct16;  // [bp-0x90]
    let v16: struct16;  // [bp-0x88]
    let v17: core::option::Option<(usize, char)>;  // [bp-0x80]
    let v18: struct20;  // [bp-0x78]
    let v19: struct32;  // [bp-0x70]
    let v20: u64;  // [bp-0x68]
    let v21: struct16;  // [bp-0x60]
    let v22: u64;  // [bp-0x58]
    let v23: struct32;  // [bp-0x50]
    let v24: struct16;  // [bp-0x50]
    let v25: u64;  // [bp-0x48]
    let v26: struct16;  // [bp-0x40]
    let v27: u64;  // r14
    let v28: struct16;  // 4096
    let v30: struct16;  // r13
    let v31: struct9;  // rax
    let v32: u64;  // rax
    let v33: struct16;  // rax
    let v34: struct16;  // rbp
    let v35: struct12;  // r11
    let v36: i64;  // r14
    let v37: u64;  // rax
    let v39: struct32;  // rdx
    let v40: u64;  // rax

    v27 = a2;
    v28 = a1;
    if v27 {
        if v27 == 1 {
            v28 = a1 + 48;
        } else {
            if !*((v30 + 16) as &i64) {
                *((a0 + 8) as &core::option::Option<&str>) = a3;
                *((a0 + 16) as &struct16) = a4;
                *((a0 + 24) as &u64) = a5;
                *(a0 as &u64) = v40;
                return v40;
            }
LABEL_71fce4:
            v0 = a3;
            a3 = *((v30 + 8) as &i64) + v31 * 128 - 128;
            v32 = core::slice::<impl [T]>::partition_point(a4, a5, *((v30 + 8) as &i64) + v31 * 128 - 128);
            if v32 > a5 {
                panic!("mid > len");
            }
            v19 = core::slice::<impl [T]>::split_at_unchecked(a4, a5, v32);
            a4 = v21;
            a5 = v22;
            v33 = core::slice::<impl [T]>::partition_point(v19.field_0, v20);
            if v33 > v20 {
                panic!("mid > len");
            }
            v23 = core::slice::<impl [T]>::split_at_unchecked(v19.field_0, v20, v33);
            v34 = v26;
            v36 = v27 * 8;
            v11 = struct16 {
                field_0: ((&g_48d610.field_0)[v27] + &g_48d610.field_0) as i64 as i64
                field_8: *(&(&g_48d638)[v36] as &i64)
            };
            if v0 {
                <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(v0);
            }
            v1 = *(&(&g_48d620)[v36] as &i64);
            v2 = a1;
            v3 = v24;
            v4 = v25;
            v5 = v37;
            v6 = v39;
            v7 = &v11;
            v8 = &g_97c890.ptr;
            v9 = v34;
            v10 = v35;
            v15 = v30;
            v18 = a6;
            v16 = v34;
            v17 = v35;
            v14 = struct32 {
                field_0: &v1
                field_8: &g_97e140
                field_16: &v15
                field_24: &g_97e160
            };
            <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v12, a7, &v14, 2);
            if *(&v12 as &i32) != 4 {
                *((a0 + 24) as &u64) = v13;
                *((a0 + 8) as &u128) = v12;
                *(a0 as &u64) = v40;
                return v40;
            }
            *((a0 + 8) as &core::option::Option<&str>) = a3;
            *((a0 + 16) as &struct16) = a4;
            *((a0 + 24) as &u64) = a5;
            *(a0 as &u64) = v40;
            return v40;
        }
    }
    v30 = v28;
    if !*((v30 + 16) as &i64) {
        *((a0 + 8) as &core::option::Option<&str>) = a3;
        *((a0 + 16) as &struct16) = a4;
        *((a0 + 24) as &u64) = a5;
        *(a0 as &u64) = v40;
        return v40;
    }
    goto LABEL_71fce4;
}
