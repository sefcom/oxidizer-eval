fn just::argument_parser::ArgumentParser::parse_group(a0: &struct105, a1: i64) {
    let v0: struct17;  // [bp-0x128], Other Possible Types: struct32, u128
    let v1: u128;  // [bp-0x121]
    let v2: u128;  // [bp-0x120]
    let v3: u128;  // [bp-0x119]
    let v4: u64;  // [bp-0x111]
    let v5: u64;  // [bp-0x110]
    let v6: Option<struct1>;  // [bp-0x108], Other Possible Types: u128
    let v7: Option<struct25>;  // [bp-0x108]
    let v8: Option<struct1>;  // [bp-0x108]
    let v9: void*;  // [bp-0x108]
    let v10: struct32;  // [bp-0x108]
    let v11: u64;  // [bp-0xf8]
    let v12: u128;  // [bp-0xf0]
    let v13: u64;  // [bp-0xe8]
    let v14: u64;  // [bp-0xe0]
    let v15: u128;  // [bp-0xd8]
    let v16: u128;  // [bp-0xc8]
    let v17: u128;  // [bp-0xb8]
    let v18: u64;  // [bp-0xa8]
    let v19: u64;  // [bp-0xa0]
    let v20: iNone;  // [bp-0x98]
    let v21: u64;  // [bp-0x88]
    let v22: struct16;  // [bp-0x78], Other Possible Types: u128
    let v23: u128;  // [bp-0x78]
    let v24: u128;  // [bp-0x69]
    let v25: u64;  // [bp-0x68]
    let v26: u64;  // [bp-0x50]
    let v27: struct24;  // [bp-0x48]
    let v29: u64;  // rbp
    let v30: u64;  // rcx
    let v31: u64;  // r15
    let v32: struct192;  // r12
    let v33: struct32;  // rax
    let v35: u8;  // al
    let v36: struct48;  // r12
    let v37: u128;  // xmm0
    let v38: iNone;  // xmm2
    let v39: u64;  // rax
    let v40: u64;  // rax
    let v41: u64;  // rax
    let v42: iNone;  // xmm0
    let v43: u64;  // rcx
    let v44: u64;  // rdx
    let v45: u64;  // r13
    let v47: u64;  // r13
    let v48: u64;  // rax
    let v49: u64;  // rax
    let v50: iNone;  // xmm0
    let v51: iNone;  // xmm2

    v29 = *((a1 + 24) as &i64);
    if v29 < *((a1 + 8) as &i64) {
        v30 = v29 * 16;
        v31 = *((*(a1 as &i64) + v30) as &i64);
        v32 = *((*(a1 as &i64) + v30 + 8) as &i64);
        if <char as core::str::pattern::Pattern>::is_contained_in(58, v31, v32) {
            v22 = struct16 {
                field_0: v31
                field_8: v32
            };
            v7 = <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from(&v22, 0x1);
            v33 = v7 as i64;
            if (((0 ^ v33) & (0 ^ -(v33))) >> 63) as char {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 40, v31, v32);
                return struct16 {
                    field_0: 52
                    padding_1: <UNKNOWN>
                    field_8: 0
                };
            }
            v5 = *((&v7 as &char + 24) as &i64);
            v2 = *((&v7 as &char + 8) as &i128);
            v0 = v33;
            v10 = just::argument_parser::ArgumentParser::resolve_recipe(*((a1 + 16) as &i64), v2 as i64);
            v35 = v10.field_0;
            if v35 != 56 {
                v37 = *((&v10.field_0 as &char + 1) as &i128);
                v38 = *(&v13 as &i128);
                v24 = *(&v10.field_16 as &i128);
                v23 = v37;
                return struct112 {
                    field_0: v35
                    field_1: <UNKNOWN>
                    field_16: <UNKNOWN>
                    field_32: <UNKNOWN>
                    field_48: <UNKNOWN>
                    field_64: <UNKNOWN>
                    field_80: <UNKNOWN>
                    field_96: <UNKNOWN>
                };
            }
            v36 = v13;
            v20 = *(&v10.field_8 as &i128);
            v21 = v10.field_24;
            *((a1 + 24) as &u64) = v29;
        } else {
            v39 = just::argument_parser::ArgumentParser::rest(a1);
            v6 = just::argument_parser::ArgumentParser::resolve_recipe(*((a1 + 16) as &i64), v39);
            if v40 != 56 {
                v50 = *(&v10.field_0 as &i128);
                v51 = v12;
                v3 = *(&v11 as &i128);
                *(&v0 as void*) = v50;
                return struct112 {
                    field_0: v40 as u8
                    field_1: <UNKNOWN>
                    field_16: <UNKNOWN>
                    field_32: <UNKNOWN>
                    field_48: <UNKNOWN>
                    field_64: <UNKNOWN>
                    field_80: <UNKNOWN>
                    field_96: <UNKNOWN>
                };
            }
            v36 = v13;
            v20 = *(&v10.field_0 as &i128);
            v21 = v10.field_0;
            *((a1 + 24) as &u64) = v29;
        }
    } else {
        v41 = just::argument_parser::ArgumentParser::rest(a1);
        v8 = just::argument_parser::ArgumentParser::resolve_recipe(*((a1 + 16) as &i64), v41);
        if v40 != 56 {
            v50 = *(&v10.field_0 as &i128);
            v51 = v12;
            v3 = *(&v11 as &i128);
            *(&v0 as void*) = v50;
            return struct112 {
                field_0: v40 as u8
                field_1: <UNKNOWN>
                field_16: <UNKNOWN>
                field_32: <UNKNOWN>
                field_48: <UNKNOWN>
                field_64: <UNKNOWN>
                field_80: <UNKNOWN>
                field_96: <UNKNOWN>
            };
        }
        v36 = v13;
        v42 = *(&v10.field_0 as &i128);
        *(&v1 as void*) = v42;
        v43 = v10.field_0;
        v4 = v43;
        v25 = v43;
        *(&v22 as void*) = v42;
        v26 = v14;
        if v14 {
            v9 = 0;
            core::panicking::assert_failed(0, &v26, &g_4692d0, &v8, "src/argument_parser.rs"); /* do not return */
        }
        v21 = v25;
        v20 = v22;
    }
    v19 = just::argument_parser::ArgumentParser::rest(a1);
    v0 = just::recipe::Recipe<D>::argument_range(*((v36 + 80) as &i64), *((v36 + 88) as &i64));
    v45 = core::cmp::Ord::min(v44, just::recipe::Recipe<D>::max_arguments(*((v36 + 80) as &i64), *((v36 + 88) as &i64)));
    if !<core::ops::range::RangeInclusive<T> as just::range_ext::RangeExt<T>>::range_contains(v0.field_0, v0.field_8, v45) {
        v19 = just::token::Token::lexeme(v36 + 144);
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v6, *((v36 + 80) as &i64), *((v36 + 88) as &i64));
        v47 = *((v36 + 80) as &i64);
        v48 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v47, *((v36 + 88) as &i64) * 208 + v47);
        v49 = just::recipe::Recipe<D>::max_arguments(v47, *((v36 + 88) as &i64));
        return struct72 {
            field_0: 1
            padding_1: <UNKNOWN>
            field_8: v44
            field_16: v48
            field_24: v49
            field_32: v19
            field_40: v44
            field_48: *(&v10.field_0 as &i128)
            field_64: v11
        };
    }
    v27 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v45, v19, v44), v44);
    *((a1 + 24) as &u64) = v29 + v45;
    v14 = v21;
    *(&v12 as void*) = v20;
    v11 = v27.field_16;
    v6 = *(&v27.field_0 as &i128);
    return struct56 {
        field_0: 56
        padding_1: <UNKNOWN>
        field_8: *(&v27.field_0 as &i128)
        field_24: v11
        field_32: v12 as i64
        field_40: v13
        field_48: v14
    };
}
