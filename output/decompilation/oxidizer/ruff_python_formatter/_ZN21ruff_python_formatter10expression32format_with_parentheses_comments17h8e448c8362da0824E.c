fn ruff_python_formatter::expression::format_with_parentheses_comments(a0: u64, a1: &u32, a2: void*, a3: i64) -> long long {
    let v0: struct21;  // [bp-0x1c0]
    let v1: core::option::Option<&str>;  // [bp-0x1b8]
    let v2: struct21;  // [bp-0x1b0]
    let v3: i64;  // [bp-0x1a8]
    let v4: struct21;  // [bp-0x1a0], Other Possible Types: u32
    let v5: u32;  // [bp-0x1a0]
    let v6: core::option::Option<&str>;  // [bp-0x198]
    let v7: i64;  // [bp-0x190], Other Possible Types: u64
    let v8: u64;  // [bp-0x188]
    let v9: u64;  // [bp-0x180]
    let v10: u64;  // [bp-0x178]
    let v11: i64;  // [bp-0x170]
    let v12: &u32;  // [bp-0x160]
    let v13: i64;  // [bp-0x158]
    let v14: struct12;  // [bp-0x14c]
    let v15: struct26;  // [bp-0x148]
    let v16: u64;  // [bp-0x140]
    let v17: u64;  // [bp-0x138]
    let v18: struct160;  // [bp-0x130], Other Possible Types: struct24, struct26
    let v19: &str;  // [bp-0x130]
    let v20: u64;  // [bp-0x120]
    let v21: struct21;  // [bp-0x118]
    let v22: i64;  // [bp-0x110]
    let v23: u64;  // [bp-0x108]
    let v24: &str;  // [bp-0x100]
    let v25: u8;  // [bp-0xf0]
    let v26: struct32;  // [bp-0x90]
    let v27: struct32;  // [bp-0x70]
    let v28: i64;  // [bp-0x68]
    let v29: u64;  // [bp-0x60]
    let v31: struct32;  // [bp-0x50]
    let v32: u64;  // [bp-0x48]
    let v33: u64;  // [bp-0x40]
    let v35: u64;  // rax
    let v36: struct24;  // rax
    let v37: i64;  // rax
    let v38: u64;  // rdx
    let v39: u64;  // r8
    let v40: struct21;  // r12
    let v41: core::option::Option<&str>;  // r13
    let v42: struct9;  // r14
    let v43: struct16;  // rbp
    let v44: struct16;  // rax
    let v45: struct16;  // rbp
    let v46: u64;  // r12

    v12 = a1;
    v35 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a1);
    v36 = *((*((a3 + 8) as &i64) + 48) as &i64)(*(a3 as &i64)) as i64;
    v37 = *((*((a3 + 8) as &i64) + 48) as &i64)(*(a3 as &i64)) as i64;
    v18 = ruff_python_ast::parenthesize::parentheses_iterator(v35, v38, 94, v39, *((*((v36 + 16) as &i64) + 96) as &i64), *(v37 as &i128), *(v37 as &i128));
    v5 = 0;
    v14 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::SpecFold>::spec_fold(&v18, &v5);
    if (v14.field_0 as i8 & 1) {
        v18 = v15;
        v40 = *(a2 as &i64);
        v41 = a2[8] as i64;
        v42 = core::slice::<impl [T]>::partition_point(*(a2 as &i64), v41, &v18);
        v43 = a2[40] as i64;
        v44 = core::slice::<impl [T]>::partition_point(a2[32] as i64, a2[40] as i64, &v18);
        if v42 > v41 {
            panic!("mid > len");
        }
    } else {
        v44 = a2[40] as i64;
        v40 = *(a2 as &i64);
        v41 = a2[8] as i64;
        v42 = 0;
    }
    v45 = v44;
    v27 = core::slice::<impl [T]>::split_at_unchecked(v40, v41, v42);
    if v44 > v45 {
        panic!("mid > len");
    }
    v1 = v41;
    v2 = v40;
    v11 = v28;
    v46 = v29;
    v31 = core::slice::<impl [T]>::split_at_unchecked(a2[32] as i64, v45, v44);
    v10 = v31.field_24;
    v13 = &v12;
    v18 = struct24 {
        field_0: 1
        field_8: v27.field_0
        field_16: v11
    };
    <ruff_python_formatter::comments::format::FormatLeadingComments as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(&v5, &v18, a3);
    if v4 != 4 {
        *((v3 + 16) as &u64) = v7;
        *(v3 as &i128) = *(&v4.field_0 as &i128);
        return v7;
    }
    v4 = v2;
    v6 = v1;
    v7 = &v13;
    v8 = v31.field_0;
    v9 = v32;
    v19 = "(";
    v20 = v46;
    v21 = v0;
    v25 = 0;
    v22 = &v4;
    v23 = &g_97ded0;
    v24 = ")";
    v16 = v33;
    v17 = v10;
    v26 = struct32 {
        field_0: &v19 as u64
        field_8: &g_97d978
        field_16: &v16
        field_24: &g_97d5a8
    };
    return <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(a0, a3, &v26, 2);
}
