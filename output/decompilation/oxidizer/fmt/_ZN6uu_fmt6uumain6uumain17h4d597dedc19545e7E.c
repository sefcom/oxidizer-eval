fn uu_fmt::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3d8]
    let v1: i64;  // [sp-0x3d0]
    let v2: i64;  // [sp-0x3c8]
    let v3: struct24;  // [sp-0x3c0], Other Possible Types: unsigned long, int
    let v4: i64;  // [sp-0x3b8]
    let v5: i8;  // [bp-0x388]
    let v6: i8;  // [bp-0x380]
    let v7: i8;  // [bp-0x378]
    let v8: i64;  // [bp-0x370], Other Possible Types: char
    let v9: i64;  // [sp-0x368]
    let v10: i64;  // [sp-0x360]
    let v11: iNone;  // [bp-0x358], Other Possible Types: char
    let v12: iNone;  // [sp-0x348]
    let v13: iNone;  // [sp-0x338]
    let v14: i64;  // [sp-0x328]
    let v15: i64;  // [sp-0x320]
    let v16: i64;  // [sp-0x318]
    let v17: String;  // [sp-0x310]
    let v18: i64;  // [bp-0x2f8], Other Possible Types: unsigned int, struct80, struct33, struct24, struct712
    let v19: i64;  // [sp-0x2f0]
    let v20: i64;  // [sp-0x2e8]
    let v21: i32;  // [bp-0x2e0]
    let v23: i64;  // rax
    let v24: i64;  // r14
    let v25: i64;  // rdx
    let v26: i64;  // rax
    let v27: i64;  // rcx
    let v28: i64;  // rax
    let v29: i64;  // rcx
    let v30: i64;  // r14
    let v31: i64;  // rax
    let v32: i64;  // rbx
    let v34: i64;  // rax
    let v35: struct8;  // rax

    core::iter::traits::iterator::Iterator::collect(&v5, a0, a1);
    if *(&v7 as &i64) >= 2 {
        v23 = *(&v6 as &i64);
        v3 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v23 + 32) as &i64), *((v23 + 40) as &i64));
        v24 = v3.field_16;
        *(&v18 as &i32) = 0;
        if core::slice::<impl [T]>::starts_with(v4, v24, core::char::methods::encode_utf8_raw(&v18), v25) as i8 {
            v26 = v4;
            v27 = v3.field_16;
            v18 = v26;
            v19 = v27 + v26;
            if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(0x1) && core::str::validations::next_code_point(&v18) as i32 && v25 as u32 - 48 < 10 {
                v28 = v4;
                v29 = v3.field_16;
                v18 = v28;
                v19 = v29 + v28;
                v20 = 2;
                if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v18) as i32) {
                    v30 = v3.field_16;
                    *(&v18 as &i32) = 0;
                    v31 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(&v18), v25, v4, v30);
                    if v31 {
                        v8 = 0;
                        v9 = v31;
                        v10 = v25;
                        *(&v11 as &i8) = 1;
                        v17 = format!("invalid width: {}", &v8);
                        *(&v21 as &i32) = 1;
                        return v32;
                    }
                    core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/fmt/src/fmt.rs"); /* do not return */
                }
            }
        }
    }
    v18 = uu_fmt::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v8, &v18, &v5);
    if v3 == 0x8000000000000000 {
        v32 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        return v32;
    }
    v3 = *(&v8 as &i448);
    v18 = uu_fmt::extract_files(&v3);
    v32 = v19;
    if v0 == 0x8000000000000000 {
        return v32;
    }
    v0 = v18.field_0 as i64;
    v1 = v32;
    v2 = v20;
    v18 = uu_fmt::FmtOptions::from_matches(&v3);
    v34 = v18.field_0 as i64;
    v32 = v19;
    if v8 == 9223372036854775809 {
        return v32;
    }
    v14 = v18.field_72;
    v13 = *(&v18.field_56 as &i128);
    v12 = *((&v18.field_32 as &char + 8) as &i128);
    *(&v11 as &i128) = *((&v18.field_16 as &char + 8) as &i128);
    v8 = v34;
    v9 = v32;
    v10 = v20;
    v18 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
    v15 = v1;
    v16 = v15 + v2 * 24;
    loop {
        v35 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v35 {
            return 0;
        }
        v32 = uu_fmt::process_file(*((v35 + 8) as &i64), *((v35 + 16) as &i64), &v8, &v18);
        if v32 {
            return v32;
        }
    }
}
