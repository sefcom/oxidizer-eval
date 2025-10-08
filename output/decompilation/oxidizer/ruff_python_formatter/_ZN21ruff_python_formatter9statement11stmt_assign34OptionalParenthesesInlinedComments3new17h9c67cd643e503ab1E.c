fn ruff_python_formatter::statement::stmt_assign::OptionalParenthesesInlinedComments::new(a0: i64, a1: void*, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: struct16;  // [bp-0xa0]
    let v1: struct32;  // [bp-0x70]
    let v2: i8;  // [bp-0x50]
    let v4: u64;  // r14
    let v5: core::fmt::Arguments;  // r15
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rdx
    let v9: struct24;  // rax
    let v10: struct16;  // r13
    let v11: struct16;  // rax
    let v12: struct32;  // rax

    if a1[8] as i64 {
        return struct8 {
            field_0: 0
        };
    }
    v4 = a1[32] as i64;
    v5 = a1[40] as i64;
    v0 = struct16 {
        field_0: v4
        field_8: v4 + v5 * 12
    };
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0);
    if !v6 {
        v0 = struct16 {
            field_0: a2
            field_8: a3
        };
        v7 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(a4 + 16, &v0);
        v9 = core::slice::<impl [T]>::partition_point(v7, v8);
        if v9 > v8 {
            panic!("mid > len");
        }
        v1 = core::slice::<impl [T]>::split_at_unchecked(v7, v8, v9);
        v10 = v1.field_8;
        v11 = core::slice::<impl [T]>::partition_point(v4, v5);
        if v11 > v5 {
            panic!("mid > len");
        }
        v12 = core::slice::<impl [T]>::split_at_unchecked(v4, v5, v11);
        return struct32 {
            field_0: *(&v2 as &i128)
            field_16: v1.field_0
            field_24: v10
        };
    }
    return struct8 {
        field_0: 0
    };
}
