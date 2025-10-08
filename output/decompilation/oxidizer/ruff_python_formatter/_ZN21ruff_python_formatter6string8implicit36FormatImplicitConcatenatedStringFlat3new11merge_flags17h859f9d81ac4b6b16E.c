fn ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringFlat::new::merge_flags(a0: u64, a1: u64, a2: i64) -> long long {
    let v0: u64;  // [bp-0xe8]
    let v1: struct16;  // [bp-0xe8]
    let v2: struct16;  // [bp-0xe8]
    let v3: struct12;  // [bp-0xe0]
    let v4: u64;  // [bp-0xe0]
    let v5: u8;  // [bp-0xdc]
    let v6: struct21;  // [bp-0xdb]
    let v7: struct21;  // [bp-0xd9]
    let v8: struct16;  // [bp-0xd8], Other Possible Types: struct21
    let v9: u8;  // [bp-0xd8]
    let v10: struct16;  // [bp-0xd0]
    let v11: struct12;  // [bp-0xd0]
    let v12: i32;  // [bp-0xbc]
    let v13: struct11;  // [bp-0xb8], Other Possible Types: struct24
    let v14: u32;  // [bp-0xb0]
    let v15: u8;  // [bp-0xac]
    let v16: u16;  // [bp-0xab]
    let v17: u8;  // [bp-0xa9]
    let v18: struct24;  // [bp-0xa8]
    let v19: struct16;  // [bp-0x98], Other Possible Types: u64
    let v20: struct32;  // [bp-0x98]
    let v21: struct16;  // [bp-0x70]
    let v22: struct16;  // [bp-0x68]
    let v23: core::str::pattern::CharSearcher;  // [bp-0x60]
    let v24: struct24;  // [bp-0x58], Other Possible Types: u8
    let v25: u64;  // [bp-0x48]
    let v26: struct16;  // [bp-0x40]
    let v28: struct16;  // rax
    let v29: u64;  // rdx
    let v30: struct16;  // rax
    let v31: u8;  // bpl
    let v33: &mut [u8];  // rdx
    let v34: core::option::Option<&str>;  // r13
    let v35: struct25;  // al
    let v36: u8;  // cl
    let v37: struct21;  // al
    let v38: struct16;  // rax
    let v39: u64;  // rdx

    v10 = struct16 {
        field_0: a0
        field_8: a1
    };
    if <ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(&v10, a2) {
        return 0;
    }
    ruff_python_ast::expression::StringLike::parts(&v19, &v10);
    v28 = <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(&v19) as u64;
    if v28 != 4 {
        v21 = v28;
        v22 = v28;
        v23 = v29;
        ruff_python_ast::expression::StringLike::parts(&v24, &v10);
        v18 = v25;
        v13 = v24;
        <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(&v13 as u8);
        if v30 != 4 {
            v12 = (*((a2 + 44) as &i8) == 3 ? 12 <= *((a2 + 45) as &i8) : 3 <= *((a2 + 44) as &i8));
            v8 = *((a2 + 16) as &i64);
            do {
                v0 = v30;
                *(&v4 as &&mut [u8]) = v33;
                if (ruff_python_ast::expression::StringLikePart::flags(&v0) as u8 & 2) {
                    return 0;
                }
                if ruff_python_ast::expression::StringLikePart::flags(&v0) as u8 > 63 {
                    return 0;
                }
                v20 = ruff_python_formatter::comments::Comments::leading_trailing(v8, v0, v4);
                if core::option::Option<T>::or_else(core::iter::adapters::chain::and_then_or_clear(&v20), &v20 as u128) {
                    return 0;
                }
                if v0 < 2 {
                    continue;
                }
                if v0 == 2 {
                    if v11.field_0 as i32 == 3 {
                        return 0;
                    }
                    v34 = v4;
                    if v12 as i8 {
                        <ruff_python_ast::nodes::AnyStringFlags as core::convert::From<ruff_python_ast::nodes::FStringFlags>>::from(*((v34 + 36) as &i32));
                        goto LABEL_7273a2;
                    } else if !ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression(v34, a2) && !ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes(*((v34 + 8) as &i64), *((v34 + 16) as &i64), a2) {
LABEL_7273a6:
                        continue;
                    } else {
LABEL_7273e0:
                        if v31 != 2 && ((ruff_python_ast::expression::StringLikePart::flags(&v0) as u8 ^ v31) & 1) {
                            goto LABEL_0x7271d4;
                        }
                        v31 = ruff_python_ast::expression::StringLikePart::flags(&v0) as u32 & 1;
                    }
                } else {
                    <ruff_python_ast::nodes::AnyStringFlags as core::convert::From<ruff_python_ast::nodes::TStringFlags>>::from(*((v4 + 36) as &i32));
LABEL_7273a2:
                    if ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug(*((v34 + 8) as &i64), *((v34 + 16) as &i64), v35, a2) {
                        goto LABEL_7273e0;
                    }
                    goto LABEL_7273a6;
                }
                <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(&v13 as u8);
            } while (v30 != 4);
        }
        v5 = 2;
        v36 = v11.field_0 as i8 * 8;
        if v31 != 2 {
            return ruff_python_ast::nodes::AnyStringFlags::new(33619971 >> (v36 & 31), 2, v31 & 1, 1) & -0x100 | 1;
        }
        v37 = ruff_python_formatter::string::normalize::StringNormalizer::preferred_quote_style(a2, 3, v21, v29);
        if v37 == 2 {
            ruff_python_ast::expression::StringLikePart::flags(&v22);
            return ruff_python_ast::nodes::AnyStringFlags::new(33619971 >> (v36 & 31), 2, v31 & 1, 1) & -0x100 | 1;
        }
        v8 = v37;
        ruff_python_ast::expression::StringLike::parts(&v20, &v11);
        <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(&v20);
        if v38 != 4 {
            loop {
                v26 = ruff_python_formatter::string::normalize::QuoteMetadata::from_part(v38, v39, a2, v9);
                if v5 == 2 {
                    *(&v1.field_0 as &i128) = *(&v26.field_0 as &i128);
                    <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(&v20);
                    if v38 == 4 {
                        break;
                    }
                } else {
                    v13 = ruff_python_formatter::string::normalize::QuoteMetadata::merge(&v26, &v0);
                    if v15 == 2 {
                        return 0;
                    }
                    v3 = v14;
                    v0 = *(&v13.field_0 as &i64);
                    v7 = v17;
                    v6 = v16;
                    v5 = v15;
                    <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(&v20);
                    if v38 == 4 {
                        break;
                    }
                }
            }
        }
        if v5 != 2 {
            v19 = v2;
            ruff_python_formatter::string::normalize::QuoteMetadata::choose(&v19, v9);
            return ruff_python_ast::nodes::AnyStringFlags::new(33619971 >> (v36 & 31), 2, v31 & 1, 1) & -0x100 | 1;
        }
    }
    return 0;
}
