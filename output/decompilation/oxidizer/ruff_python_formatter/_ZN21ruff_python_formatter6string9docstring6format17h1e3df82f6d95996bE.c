fn ruff_python_formatter::string::docstring::format(a0: i64, a1: i64, a2: i64) -> int {
    let v0: u64;  // [bp-0x20e]
    let v1: u8;  // [bp-0x20d]
    let v2: struct21;  // [bp-0x20c]
    let v3: struct21;  // [bp-0x20c]
    let v4: u8;  // [bp-0x208]
    let v5: u32;  // [bp-0x1fc]
    let v6: u64;  // [bp-0x1f8]
    let v7: struct16;  // [bp-0x1f0]
    let v8: u64;  // [bp-0x1e8]
    let v9: struct32;  // [bp-0x1e0], Other Possible Types: struct40, struct96, u8
    let v10: i64;  // [bp-0x1e0], Other Possible Types: u32
    let v11: struct4;  // [bp-0x1e0], Other Possible Types: u8
    let v12: u8;  // [bp-0x1e0]
    let v13: u16;  // [bp-0x1e0]
    let v14: u8;  // [bp-0x1e0]
    let v15: u64;  // [bp-0x1d8]
    let v16: u32;  // [bp-0x1cc]
    let v17: struct12;  // [bp-0x170]
    let v18: u32;  // [bp-0x16c]
    let v19: iNone;  // [bp-0x168]
    let v20: &mut [u8];  // [bp-0x158]
    let v21: u32;  // [bp-0x150]
    let v22: i8;  // [bp-0x14c]
    let v23: u8;  // [bp-0x14b]
    let v24: i64;  // [bp-0x140]
    let v25: u64;  // [bp-0x138]
    let v26: struct12;  // [bp-0x130]
    let v27: struct96;  // [bp-0x128], Other Possible Types: u64
    let v28: u64;  // [bp-0x128]
    let v29: u8;  // [bp-0x127]
    let v30: u32;  // [bp-0x124]
    let v31: u32;  // [bp-0x120]
    let v32: u32;  // [bp-0x11c]
    let v33: struct12;  // [bp-0x118]
    let v34: void*;  // [bp-0xc0]
    let v35: struct96;  // [bp-0xc0]
    let v36: void*;  // [bp-0xc0]
    let v37: struct16;  // [bp-0xb0]
    let v38: void*;  // [bp-0xa8]
    let v39: struct24;  // [bp-0xa0]
    let v40: core::str::pattern::CharSearcher;  // [bp-0x98]
    let v41: u16;  // [bp-0x68]
    let v42: u8;  // [bp-0x60]
    let v43: iNone;  // [bp-0x5c]
    let v44: u32;  // [bp-0x4c]
    let v45: struct4;  // [bp-0x48]
    let v46: iNone;  // [bp-0x44]
    let v47: i8;  // [bp-0x34]
    let v49: &mut [u8];  // r14
    let v50: struct12;  // r13
    let v51: struct16;  // r12
    let v52: struct24;  // r15
    let v53: struct16;  // rax
    let v54: struct21;  // ebp
    let v55: u8;  // dl
    let v56: struct16;  // rax
    let v57: struct32;  // rax
    let v58: u64;  // rdx
    let v59: struct12;  // rbp
    let v61: u8;  // r13b
    let v62: struct16;  // eax
    let v63: u32;  // edx
    let v64: u32;  // eax
    let v65: u32;  // ecx
    let v69: u32;  // cc_dep1
    let v73: std::io::stdio::Stdout;  // rax
    let v74: struct32;  // r14
    let v76: core::result::Result<usize, std::io::error::Error>;  // xmm0
    let v77: &mut [u8];  // rax:rdx
    let v78: &str;  // rax:rdx

    v49 = a2;
    v50 = a0;
    v51 = *((a1 + 8) as &i64);
    v52 = *((a1 + 16) as &i64);
    if ruff_python_formatter::string::docstring::contains_unescaped_newline(v51, v52) {
        <ruff_python_formatter::string::normalize::NormalizedString as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(a0, a1, a2);
        return;
    }
    v8 = *(a1 as &i64);
    v40 = <char as core::str::pattern::Pattern>::into_searcher(0xa, v51, v52);
    v38 = 0;
    v39 = v52;
    v41 = 1;
    v36 = 0;
    v53 = *((a1 + 32) as &i8);
    v54 = v53 as u32 & 255;
    v0 = ((v53 & 255) >> 1) as u8 & 1;
    v1 = v53 as u8 & 1;
    v28 = <ruff_python_ast::nodes::AnyStringFlags as ruff_python_ast::nodes::StringFlags>::prefix(v54 as u8);
    v29 = v55;
    v9 = struct32 {
        field_0: &v28
        field_8: &g_97e180
        field_16: &v0
        field_24: &g_97e1a0
    };
    <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v42, a2, &v9, 2);
    if v56 as u32 != 4 {
        *((a0 + 20) as &u32) = v44;
        v76 = v43;
        *((v50 + 4) as &core::result::Result<usize, std::io::error::Error>) = v76;
        *(v50 as &u32) = v56 as u32;
        return;
    }
    v2 = v54;
    v6 = *((a1 + 24) as &i32);
    v34 = 0;
    if !(v34 as i8 & 1) {
        core::str::iter::SplitInternal<P>::next(&v38);
    }
    v7 = v37;
    v25 = core::str::<impl str>::trim_end_matches((v57 ? v57 : 1), v37);
    v59 = core::str::<impl str>::trim_start_matches(v25, v58);
    v5 = v1;
    v10 = 0;
    v77 = core::char::methods::encode_utf8_raw((v5 ^ 1) * 5 + 34, &v10, a2);
    v26 = v59;
    if core::slice::<impl [T]>::starts_with(v26, v58, v77.data_ptr, v77.length) {
        v11 = 0;
        *((*((a2 + 8) as &i64) + 24) as &i64)(*(a2 as &i64), &v11);
    }
    v3 = v2;
    if v58 {
        v49 = a2;
        v24 = a0;
        v61 = v58 >> 32;
        core::result::Result<T,E>::unwrap(v61, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
        core::result::Result<T,E>::unwrap(v58 >> 32, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
        core::result::Result<T,E>::unwrap(v61, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
        v62 = v58;
        v63 = v6;
        v64 = v62 + v63;
        if __CFADD__(v62, v63) as char {
            core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
        }
        v65 = (v58 & 4294967295) - v58 + v63;
        if v65 > v64 {
            core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
        }
        v50 = v24;
        if v8 == 0x8000000000000000 {
            v27 = v65;
            v30 = v64;
            v11 = <ruff_formatter::builders::SourceTextSliceBuilder as ruff_formatter::Format<Context>>::fmt(&v28, v49);
            v3 = v2;
            if v56 as u32 != 4 {
                *((v50 + 20) as &u32) = v16;
                *((v50 + 4) as &core::result::Result<usize, std::io::error::Error>) = v76;
                *(v50 as &u32) = v56 as u32;
                return;
            }
        } else {
            v11 = <ruff_formatter::builders::Text as ruff_formatter::Format<Context>>::fmt(v26, v58, *(v49 as &i64), *((v49 + 8) as &i64));
            v3 = v2;
            if v56 as u32 != 4 {
                *((v50 + 20) as &u32) = v16;
                *((v50 + 4) as &core::result::Result<usize, std::io::error::Error>) = v76;
                *(v50 as &u32) = v56 as u32;
                return;
            }
        }
    }
    core::result::Result<T,E>::unwrap(v7 >> 32, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
    v78 = core::str::<impl str>::trim_matches(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v7, v51, v52) as u64, v58, a2);
    if v78.data_ptr {
        v13 = 513;
        *((*((v49 + 8) as &i64) + 24) as &i64)(*(v49 as &i64), &v13);
        core::result::Result<T,E>::unwrap(0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
        v9 = <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(&v34);
        v27 = core::iter::traits::iterator::Iterator::reduce(&v9);
        v69 = v31;
        if v69 != 5 {
            if !(0) {
                goto LABEL_72292b;
            }
        } else {
            if v69 != 5 {
LABEL_72292b:
            }
        }
        v20 = v49;
        v21 = v6 + v7 as u32 + 1;
        v17 = 0;
        v18 = v32;
        v19 = v33;
        v22 = v8 == 0x8000000000000000;
        v23 = v5;
        v9 = struct40 {
            field_0: 0
            field_8: 8
            field_16: 0
            field_32: 9223372036854775811
        };
        v27 = v35;
        v45 = ruff_python_formatter::string::docstring::DocstringLinePrinter::add_iter(&v9, &v27);
        if v45 != 4 {
            *((v50 + 20) as &i32) = *(&v47 as &i32);
            *((v50 + 4) as void*) = v46;
            *(v50 as &struct4) = v45;
            return;
        }
        v73 = core::str::<impl str>::trim_end_matches(v51, v52);
        if ruff_python_formatter::string::docstring::needs_chaperone_space(v2 as u64, v73, v58, *((*((*((v49 + 8) as &i64) + 48) as &i64)(*(v49 as &i64)) as i64 + 58) as &i8)) {
            v14 = 0;
            *((*((v49 + 8) as &i64) + 24) as &i64)(*(v49 as &i64), &v14);
        }
        *(&v10 as &&u64) = &v0;
        v15 = &g_97e1a0;
        <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(v50, v49, &v9, 1);
        return;
    } else {
        v74 = v49;
        if (!v4 & v52) || ruff_python_formatter::string::docstring::needs_chaperone_space(v3 as u64, v25, v4, *((*((*((v74 + 8) as &i64) + 48) as &i64)(*(v74 as &i64)) as i64 + 58) as &i8)) {
            v13 = 0;
            *((*((v74 + 8) as &i64) + 24) as &i64)(*(v74 as &i64), &v13);
        }
        <ruff_python_formatter::string::StringQuotes as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(&v12, &v0, v74);
        if v56 as u32 != 4 {
            *((v50 + 20) as &u32) = v16;
            *((v50 + 4) as &core::result::Result<usize, std::io::error::Error>) = v76;
            *(v50 as &u32) = v56 as u32;
            return;
        }
        *(v50 as &i32) = 4;
        return;
    }
}
