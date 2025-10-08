fn uu_nice::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u32;  // [bp-0x404]
    let v1: u64;  // [bp-0x400]
    let v2: i64;  // [bp-0x3f8]
    let v3: i8;  // [bp-0x3f0], Other Possible Types: u64
    let v4: u64;  // [bp-0x3e8]
    let v5: u64;  // [bp-0x3e0]
    let v6: core::fmt::rt::Argument;  // [bp-0x3d8], Other Possible Types: struct16
    let v7: struct24;  // [bp-0x3d8], Other Possible Types: u128
    let v8: struct64;  // [bp-0x3d8]
    let v9: i64;  // [bp-0x3d0]
    let v10: core::fmt::rt::Argument;  // [bp-0x3c8], Other Possible Types: char
    let v11: u128;  // [bp-0x3c8]
    let v12: i8;  // [bp-0x3c4]
    let v13: i8;  // [bp-0x3b4]
    let v14: i8;  // [bp-0x3a4]
    let v15: u64;  // [bp-0x398]
    let v16: i64;  // [bp-0x388]
    let v17: u64;  // [bp-0x380]
    let v18: i64;  // [bp-0x378]
    let v19: u32;  // [bp-0x370]
    let v20: iNone;  // [bp-0x36c]
    let v21: iNone;  // [bp-0x35c]
    let v22: u32;  // [bp-0x34c]
    let v23: alloc::string::String;  // [bp-0x348]
    let v24: u64;  // [bp-0x338]
    let v25: alloc::string::String;  // [bp-0x330]
    let v26: u64;  // [bp-0x320]
    let v27: u8;  // [bp-0x318]
    let v28: Result<struct40, struct16>;  // [bp-0x2f8], Other Possible Types: core::fmt::Arguments, struct56, struct64, struct712, struct28, struct9
    let v29: u128;  // [bp-0x2f8]
    let v30: u32;  // [bp-0x2f4]
    let v31: u64;  // [bp-0x2e8]
    let v32: u32;  // [bp-0x2e0]
    let v34: u32;  // eax
    let v35: i64;  // rbx
    let v36: void*;  // rax
    let v37: core::fmt::rt::Argument;  // r15
    let v38: u32;  // edx
    let v40: void*;  // r14
    let v41: u32;  // eax
    let v42: u64;  // rdx
    let v44: iNone;  // xmm0
    let v45: core::result::Result<i32, core::num::error::ParseIntError>;  // rax:rax

    uu_nice::standardize_nice_args(&v27, a0, a1);
    v28 = uu_nice::uu_app();
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v28, &v27);
    if (((0 ^ v6.field_0) & (0 ^ -(v7))) >> 63) as char {
        return alloc::boxed::Box<T>::new(v18, 125);
    }
    v20 = *(&v12 as &i128);
    v21 = *(&v13 as &i128);
    v22 = *(&v14 as &i32);
    v17 = v6.field_0;
    v18 = v9;
    v19 = *(&v10 as &i32);
    nix::errno::<impl nix::errno::consts::Errno>::clear();
    v34 = getpriority(0, 0);
    v35 = __errno_location();
    v28 = std::io::error::repr_bitpacked::decode_repr(*(v35 as &i32) * 0x100000000 | 2);
    core::option::unwrap(v28);
    if v30 {
        v3 = *(v35 as &i32) * 0x100000000 | 2;
        v23 = format!("getpriority: {}", &v3);
        v28 = struct28 {
            field_0: *(&v23.vec.buf.inner.cap as &i128)
            field_16: v24
            field_24: 125
        };
        v36 = alloc::boxed::Box<T>::new(&v28) as u64;
        goto LABEL_4528ea;
    } else {
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17, _ZN7uu_nice7options10ADJUSTMENT17h1e587a7ee185f87dE.field_0, g_4dba68.field_0);
        v37 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_nice7options10ADJUSTMENT17h1e587a7ee185f87dE.field_0, g_4dba68.field_0, &v28);
        if v37 {
            v16 = v37;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v17, _ZN7uu_nice7options7COMMAND17h4229ca6852529be8E.field_0, g_4dba78.field_0) {
                v45 = core::num::<impl i32>::from_ascii_radix(*((v16 + 8) as &i64), *((v16 + 16) as &i64), v38) as u128;
                if !(v45 as u8 & 1) {
                    goto LABEL_452b52;
                }
                v3 = (v45 >> 8) as u8;
                v25 = format!("\"{}\" is not a valid number: {}", &v16, &v3 as u64);
                v28 = struct28 {
                    field_0: *(&v25.vec.buf.inner.cap as &i128)
                    field_16: v26
                    field_24: 125
                };
                v36 = alloc::boxed::Box<T>::new(&v28) as u64;
LABEL_4528ea:
                v40 = v36;
            } else {
                v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("A command must be given with an adjustment.");
                v31 = v7.field_16;
                v29 = *(&v7.field_0 as &i128);
                v32 = 125;
                v40 = alloc::boxed::Box<T>::new(&v28) as u64;
            }
        } else {
            v41 = 10;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v17, _ZN7uu_nice7options7COMMAND17h4229ca6852529be8E.field_0, g_4dba78.field_0) {
                println!("{}", &v0);
            } else {
LABEL_452b52:
                v0 = v34 + v41;
                if setpriority(0, 0, v0) != -1 {
LABEL_452b6d:
                    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v17, _ZN7uu_nice7options7COMMAND17h4229ca6852529be8E.field_0, g_4dba78.field_0);
                    v8 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_nice7options7COMMAND17h4229ca6852529be8E.field_0, g_4dba78.field_0, &v28);
                    core::option::unwrap(v8);
                    v44 = v8.field_0;
                    v28 = struct64 {
                        field_0: v44
                        field_16: v8.field_16
                        field_32: v8.field_32
                        field_48: v8.field_48
                    };
                    core::iter::traits::iterator::Iterator::collect(&v3, &v28);
                    core::iter::traits::iterator::Iterator::collect(&v8, v4, v5 * 16 + v4);
                    v6 = alloc::vec::Vec<T,A>::push();
                    execvp(*(v9 as &i64), v9);
                    v1 = uucore::util_name();
                    v2 = v42;
                    eprint!("{}: ", &v1);
                    v15 = *(v35 as &i32) * 0x100000000 | 2;
                    eprintln!("execvp: {}", &v15);
                    v28 = std::io::error::repr_bitpacked::decode_repr(*(v35 as &i32) * 0x100000000 | 2);
                    core::option::unwrap(v28);
                    uucore::mods::error::set_exit_code(v30 == 2 | 126);
                    return 0;
                }
                v15 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
                v3 = uucore::util_name();
                v4 = v42;
                v1 = *(v35 as &i32) * 0x100000000 | 2;
                v6 = core::fmt::rt::Argument {
                    ty: &v3
                };
                v10 = core::fmt::rt::Argument {
                    ty: &v1
                };
                v28 = core::fmt::Arguments {
                    pieces: [&g_4daf00, ": warning: setpriority: "]
                    args: [v7, v11]
                    fmt: 0
                };
                if !<std::io::stdio::Stderr as std::io::Write>::write_fmt(&v15, &v28) {
                    goto LABEL_452b6d;
                }
                uucore::mods::error::set_exit_code(125);
            }
        }
        return v40;
    }
}
