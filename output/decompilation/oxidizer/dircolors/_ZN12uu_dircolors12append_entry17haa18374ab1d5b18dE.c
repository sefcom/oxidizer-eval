fn uu_dircolors::append_entry(a1: i64, a2: i64, a3: &[u8], a4: i64, a5: i64, a6: i32) -> : struct8 {
    let a0: i64;  // rdi
    let v0: struct640;  // [bp-0xf8], Other Possible Types: core::fmt::Arguments, u64
    let v1: struct640;  // [bp-0xf0], Other Possible Types: u64
    let v2: u64;  // [bp-0xe8]
    let v3: void*;  // [bp-0xd8], Other Possible Types: &str
    let v4: std::io::stdio::Stdin;  // [bp-0xc0], Other Possible Types: struct_0 *
    let v5: core::fmt::rt::Argument;  // [bp-0xc0]
    let v6: u64;  // [bp-0xb8]
    let v7: i64;  // [bp-0xb0], Other Possible Types: struct_2 *, u128
    let v8: core::fmt::rt::Argument;  // [bp-0xb0]
    let v9: u64;  // [bp-0xa8]
    let v10: u8;  // [bp-0xa0]
    let v11: u64;  // [bp-0x98]
    let v12: u64;  // [bp-0x90]
    let v13: struct16;  // [bp-0x88], Other Possible Types: struct24
    let v14: u64;  // [bp-0x68]
    let v15: u128;  // [bp-0x60]
    let v16: struct640;  // [bp-0x48]
    let v17: struct640;  // [bp-0x40]
    let v18: struct640;  // [bp-0x38]
    let v19: struct640;  // [bp-0x20]
    let v20: struct640;  // r13
    let v21: u64;  // r8
    let v23: u64;  // rax
    let v24: &mut [u8];  // rax:rdx
    let v25: u64;  // [bp-0xf8]

    v19 = v20;
    v16 = v21;
    v17 = a4;
    v18 = a5;
    v15 = vvar_6;
    if core::str::pattern::Pattern::is_prefix_of(a3) {
        v0 = 0;
        v24 = core::char::methods::encode_utf8_raw(46, &v0 as u64, a2);
        if core::slice::<impl [T]>::starts_with(a3, v21, v24.data_ptr) {
            format!("*{}", &a3);
            if *(a2 as &i8) == 2 {
                goto LABEL_4692df;
            }
LABEL_4691ed:
            format!("{}={}:", &v13, &v15);
        } else {
            v13 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a3);
            if *(a2 as &i8) != 2 {
                goto LABEL_4691ed;
            }
LABEL_4692df:
            v5 = core::fmt::rt::Argument {
                ty: &v15
            };
            v8 = core::fmt::rt::Argument {
                ty: &v13
            };
            v0 = core::fmt::Arguments {
                pieces: ["\x1b[", "m", "\t", "\x1b[0m\n"]
                args: [v4, v7]
                fmt: &g_41c128
            };
            core::option::Option<T>::map_or_else(&v10, &v0);
        }
        v0 = *(&v10 as &i128);
        v2 = v12;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a1, v1, v2 + v1);
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else {
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a4, a5, "options") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a4, a5, "color") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a4, a5, "eightbit") {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v13 = struct16 {
            field_0: _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17h3c0cf231055d2aeeE.field_0
            field_8: _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17h3c0cf231055d2aeeE.field_0 + 1184
        };
        v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v13, &v17);
        if !v23 {
            format!("unrecognized keyword {}", &a3);
            return;
        }
        v14 = v23 + 16;
        if *(a2 as &i8) == 2 {
            v4 = &v15;
            v6 = <&T as core::fmt::Display>::fmt;
            v7 = &v14;
            v9 = <&T as core::fmt::Display>::fmt;
            v0 = "\x1b[";
            v1 = 4;
            v3 = "\x02\x00\x00";
        } else {
            v4 = &v14;
            v6 = <&T as core::fmt::Display>::fmt;
            v7 = &v15;
            v9 = <&T as core::fmt::Display>::fmt;
            v25 = &g_4f5e90;
            v1 = 3;
            v3 = 0;
        }
        vvar_454{stack -248} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((4625407, None), vvar_410{stack -248}), ((4625592, None), vvar_418{stack -248})])])), (16, [vvar_452{stack -192}, vvar_453{stack -176}])])
        core::option::Option<T>::map_or_else(&v10, &v0);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a1, v11, v12 + v11);
        return struct8 {
            field_0: 0x8000000000000000
        };
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
