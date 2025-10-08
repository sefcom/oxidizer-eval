fn uu_pathchk::check_portable_chars(a0: &str) -> u8 {
    let v0: std::io::stdio::Stderr;  // [bp-0xb8]
    let v1: core::fmt::Arguments;  // [bp-0xb0], Other Possible Types: core::slice::iter::Iter<u8>
    let v2: u64;  // [bp-0x78]
    let v3: void*;  // [bp-0x70]
    let v4: u128;  // [bp-0x68]
    let v5: core::fmt::rt::Argument;  // [bp-0x68]
    let v6: core::fmt::rt::Argument;  // [bp-0x58]
    let v7: u128;  // [bp-0x58]
    let v8: void*;  // [bp-0x48]
    let v9: u64;  // [bp-0x40]
    let v10: u64;  // [bp-0x38]
    let v11: u8;  // [bp-0x30]
    let v13: u64;  // rdi
    let v14: u64;  // rsi
    let v15: u64;  // rax
    let v16: i64;  // rdx
    let v17: u64;  // r12
    let v19: core::option::Option<&str>;  // rax
    let v20: core::result::Result<(), std::io::error::Error>;  // rax
    let v21: core::option::Option<usize>;  // rax:rdx
    let v22: core::option::Option<u32>;  // rax:rax

    v2 = v13 + v14;
    v3 = 0;
    loop {
        v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&vvar_39{reg 72});
        if !v16 {
            break;
        }
        v17 = v15;
        v21 = core::slice::memchr::memchr(*(v16 as &i8), v14, v16);
        if let None = v21 {
            v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v17, a0) as u64;
            v1 = core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: v19
                }
                end_or_len: v16 + v19
                _marker: core::marker::PhantomData<&u8> { }
            };
            v22 = core::str::validations::next_code_point(&v1) as u128;
            match v22 {
                None => {
                    core::option::unwrap_failed(); /* do not return */
                },
                Some(_) => {
                    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
                    v8 = 0;
                    v9 = v13;
                    v10 = v14;
                    v11 = 1;
                    v5 = core::fmt::rt::Argument {
                        ty: &vvar_80{reg 32}
                    };
                    v6 = core::fmt::rt::Argument {
                        ty: &v8
                    };
                    v1 = core::fmt::Arguments {
                        pieces: ["nonportable character '", "' in file name component ", "\n"]
                        args: [v4, v7]
                        fmt: 0
                    };
                    v20 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v0, &v1);
                },
            }
        }
    }
    return !v16;
}
