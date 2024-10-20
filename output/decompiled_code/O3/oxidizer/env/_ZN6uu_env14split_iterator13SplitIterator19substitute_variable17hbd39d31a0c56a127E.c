fn uu_env::split_iterator::SplitIterator::substitute_variable(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: Enum;  // [sp-0x60], Other Possible Types: i128
    let v1: struct8;  // [bp-0x38]
    let v3: i64;  // rax
    let v4: i64;  // r13
    let v5: i64;  // r12
    let v6: i32;  // ecx
    let v7: i128;  // xmm0
    let v8: i128;  // xmm1
    let v10: i64;  // r13
    let v11: i64;  // rbp
    let v12: i64;  // r15

    v1 = struct8 {
        field_0: a1 + 24
    };
    v0 = uu_env::variable_parser::VariableParser::parse_variable(&v1, a2);
    v3 = v0;
    if v3 != 8 {
        v6 = *((&v0 as &char + 4) as &i32);
        v7 = *((&v0 as &char + 8) as &i128);
        v8 = *((&v0 as &char + 24) as &i128);
        *(a0 as &i32) = v3;
        *((a0 + 4) as &i32) = v6;
        *((a0 + 8) as &i128) = v7;
        *((a0 + 24) as &i128) = v8;
        return v3;
    }
    v4 = *((&v0 as &char + 24) as &i64);
    v5 = *((&v0 as &char + 32) as &i64);
    v0 = std::env::_var_os(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    v3 = 0x8000000000000000;
    if v0 != 0x8000000000000000 {
        v10 = *((&v0 as &char + 16) as &i64);
        v11 = *((a1 + 16) as &i64);
        if *(a1 as &i64) - v11 < v10 {
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, v11, v10);
            v11 = *((a1 + 16) as &i64);
        }
        v3 = memcpy(*((a1 + 8) as &i64) + v11, *((&v0 as &char + 8) as &i64), v10);
        *((a1 + 16) as &i64) = v11 + v10;
        *(a0 as &i32) = 8;
        return v3;
    } else {
        if v4 {
            v12 = *((a1 + 16) as &i64);
            if *(a1 as &i64) - v12 < v5 {
                alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, v12, v5);
                v12 = *((a1 + 16) as &i64);
            }
            v3 = memcpy(*((a1 + 8) as &i64) + v12, v4, v5);
            *((a1 + 16) as &i64) = v12 + v5;
        }
        *(a0 as &i32) = 8;
        return v3;
    }
}
