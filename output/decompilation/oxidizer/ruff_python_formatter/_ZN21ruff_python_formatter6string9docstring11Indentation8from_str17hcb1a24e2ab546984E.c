fn ruff_python_formatter::string::docstring::Indentation::from_str(a1: i64, a2: i64) -> Result<struct8, struct12> {
    let a0: i64;  // rdi
    let v0: struct20;  // [bp-0x60]
    let v1: struct24;  // [bp-0x60]
    let v2: struct4;  // [bp-0x50]
    let v3: struct24;  // [bp-0x48]
    let v4: struct16;  // [bp-0x38]
    let v5: struct12;  // [bp-0x38]
    let v7: struct12;  // r15
    let v8: u64;  // rax
    let v9: i64;  // r12
    let v10: core::fmt::Arguments;  // r14
    let v11: struct25;  // rax
    let v14: struct16;  // r13
    let v15: struct80;  // r14
    let v17: struct16;  // edx
    let v18: struct16;  // r12d
    let v21: u32;  // ecx
    let v23: core::option::Option<u32>;  // rax:rax

    v0 = struct20 {
        field_0: a1
        field_8: a2 + a1
        field_16: 1114113
    };
    v7 = core::iter::traits::iterator::Iterator::fold(&v0);
    v8 = core::iter::traits::iterator::Iterator::fold(&v0);
    if !v8 {
        *((a0 + 8) as &struct12) = v7;
    }
    v10 = v8;
    core::iter::traits::iterator::Iterator::fold(&v0);
    if !v7 {
        if !v11 {
            *((a0 + v9) as &core::fmt::Arguments) = v10;
        }
        v2 = core::option::Option<T>::get_or_insert_with(&v0);
        if v2 == 9 {
LABEL_72658e:
            core::result::Result<T,E>::unwrap(v10 + v7 + v11 >> 32, "crates/ruff_python_formatter/src/string/docstring.rs");
            v3 = v1;
            loop {
                v5 = 1114113;
                if v4 == 1114113 {
                    v23 = core::str::validations::next_code_point(&v3) as u128;
                    if let None = v23 {
                        break;
                    }
                }
                v18 = v17;
                switch (vvar_67{reg 112}): 4 cases
                if v18 - 9 >= 5 && (v18 < 128 || !core::unicode::unicode_data::white_space::lookup(v18 as u8)) {
                    break;
                }
                continue;
                if !core::unicode::unicode_data::white_space::lookup(v18 as u8) {
                    break;
                }
            }
            return struct16 {
                field_0: v21
                field_4: v15 as u32
                field_8: v14
            };
        } else {
            v10 = v11;
        }
    } else if !(!v11) {
        goto LABEL_72658e;
    }
    *((a0 + 8) as &core::fmt::Arguments) = v10;
    *((a0 + v9) as &core::fmt::Arguments) = v10;
}
