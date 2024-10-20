fn uu_tee::open(a0: i64, a1: i64, a2: i64, a3: i32, a4: i64) -> u64 {
    let v0: i64;  // [sp-0xe0]
    let v1: i64;  // [sp-0xd8]
    let v2: i32;  // [bp-0xd0]
    let v3: i8;  // [sp-0xcf]
    let v4: i8;  // [sp-0xce]
    let v5: i8;  // [sp-0xcd]
    let v6: i16;  // [bp-0xcc]
    let v7: i192;  // [sp-0xc8], Other Possible Types: struct24
    let v8: Enum;  // [sp-0xb0], Other Possible Types: i64
    let v9: i8;  // [bp-0xa8]
    let v10: Arguments;  // [bp-0xa0]
    let v11: Argument;  // [bp-0x70]
    let v12: Argument;  // [bp-0x68]
    let v13: i64;  // [sp-0x58]
    let v14: i64;  // [bp-0x50]
    let v15: i64;  // [sp-0x48]
    let v16: i64;  // [sp-0x40]
    let v17: i8;  // [sp-0x38]
    let v20: i64;  // rax
    let v22: i64;  // r13

    v7 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
    v1 = 0x1b600000000;
    v2 = 0;
    v6 = 0;
    if a3 {
        v4 = 1;
    } else {
        v5 = 1;
    }
    v3 = 1;
    v6 = 1;
    v8 = std::fs::OpenOptions::_open(&v1, *((&v7 as &char + 8) as &i64), *((&v7 as &char + 16) as &i64));
    if !v8 {
        v20 = __rust_alloc(4, 4);
        *(v20 as &i32) = *((&v8 as &char + 4) as &i32);
        memcpy(v22, a1, a2);
        *(a0 as &i64) = a2;
        *((a0 + 8) as &i64) = v22;
        *((a0 + 16) as &i64) = a2;
        *((a0 + 24) as &i64) = v20;
        *((a0 + 32) as &&i64) = &g_4e79e0;
        return a0;
    }
    v0 = v9;
    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v14 = g_4ec6b0;
    v11 = Argument {
        value: &v14
        formatter: <&T as core::fmt::Display>::fmt
    };
    v10 = Arguments {
        pieces: [&anon.53ff2aae8c1b62ba59dc209553c8e3d7.39.llvm.2604383847107207927, ": "]
        args: [&v11]
        fmt: None
    };
    std::io::stdio::_eprint(&v10);
    v14 = 0;
    v15 = a1;
    v16 = a2;
    v17 = 0;
    v11 = Argument {
        value: &v14
        formatter: <os_display::Quoted as core::fmt::Display>::fmt
    };
    v12 = Argument {
        value: <os_display::Quoted as core::fmt::Display>::fmt
        formatter: &v0
    };
    v13 = <std::io::error::Error as core::fmt::Display>::fmt;
    v10 = Arguments {
        pieces: [&g_4e7a50, ": ", "\n"]
        args: [&v11, &v12]
        fmt: None
    };
    std::io::stdio::_eprint(&v10);
    if a4 && *(a4 as &i8) > 1 {
        *(a0 as &i64) = 0x8000000000000000;
        *((a0 + 8) as &i64) = v0;
        return a0;
    }
    *(a0 as &i64) = 9223372036854775809;
    return a0;
}
