fn uu_kill::print_signal(a0: u64, a1: u64) -> long long {
    let v0: u8;  // [bp-0xe1]
    let v1: core::fmt::Arguments;  // [bp-0xe0], Other Possible Types: struct24, u8
    let v2: u64;  // [bp-0xe0]
    let v4: u64;  // [bp-0xd8]
    let v5: i64;  // [bp-0xd0], Other Possible Types: u32
    let v6: void*;  // [bp-0xc0]
    let v7: i64;  // [bp-0xb0], Other Possible Types: alloc::string::String
    let v8: u64;  // [bp-0xa8]
    let v10: u64;  // [bp-0x90]
    let v11: void*;  // [bp-0x70], Other Possible Types: struct24
    let v12: u64;  // [bp-0x68]
    let v13: u8;  // [bp-0x58]
    let v14: u64;  // [bp-0x50]
    let v15: core::fmt::Arguments;  // [bp-0x48]
    let v16: u64;  // [bp-0x40]
    let v17: u64;  // [bp-0x38]
    let v19: u64;  // rbx
    let v20: core::fmt::Arguments;  // rax
    let v21: i64;  // rdx
    let v23: u64;  // 4096
    let v24: i64;  // rdx
    let v25: i64;  // rdx
    let v26: u64;  // rbp
    let v30: core::result::Result<(), core::fmt::Error>;  // rax
    let v31: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v31 = core::num::<impl usize>::from_ascii_radix(&v1, a0, a1);
    v0 = v1;
    v10 = v4;
    v11 = struct24 {
        field_0: "EXIT"
        field_8: ""
    };
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11);
    if v21 {
        v14 = v10;
        v23 = a1;
        do {
            v25 = v21;
            v26 = a1;
            v15 = v20;
            v16 = *(v25 as &i64);
            v17 = *((v25 + 8) as &i64);
            if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(*(v25 as &i64), *((v25 + 8) as &i64), v19, v26) {
                vvar_409{stack -224} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((4576339, None), vvar_368{stack -224}), ((4576129, None), vvar_362{stack -224})])])), (16, &[core::fmt::rt::Argument] OrderedDict([(8, 0x1<64>)]))])
                std::io::stdio::_print(&v1);
                return 0;
            }
            v7 = format!("SIG{}", &v16);
            if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v7, v19, v26) {
                vvar_412{stack -224} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((4576339, None), vvar_368{stack -224}), ((4576129, None), vvar_362{stack -224})])])), (16, &[core::fmt::rt::Argument] OrderedDict([(8, 0x1<64>)]))])
                std::io::stdio::_print(&v1);
                return 0;
            }
            v30 = core::fmt::num::imp::<impl u64>::_fmt(v20, &v7) as u64;
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v30 as &i64), v21);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, a1, 1, v5) || !v0 && (v14 == v20 || v10 == v20 + 128) {
                v7 = &v16;
                v8 = <&T as core::fmt::Display>::fmt;
                v2 = &g_4e7650;
                v4 = 2;
                v6 = 0;
                v5 = &v7;
                vvar_415{stack -224} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((4576339, None), vvar_368{stack -224}), ((4576129, None), vvar_362{stack -224})])])), (16, &[core::fmt::rt::Argument] OrderedDict([(8, 0x1<64>)]))])
                std::io::stdio::_print(&v1);
                return 0;
            }
            <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11);
        } while (v24);
    }
    v11 = 0;
    v12 = a0;
    v13 = 1;
    v7 = format!("{}: invalid signal", &v11);
    return alloc::boxed::Box<T>::new(&v7) as u64;
}
