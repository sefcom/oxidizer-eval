fn uu_tee::process_error() -> u32 {
    let v1: Arguments;  // [bp-0x90]
    let v2: Argument;  // [bp-0x60]
    let v3: Argument;  // [bp-0x58]
    let v4: u64;  // [sp-0x48]
    let v5: void*;  // [bp-0x40], Other Possible Types: u128
    let v6: u128;  // [sp-0x38]
    let v7: u8;  // [sp-0x28]
    let v9: u64;  // rdi
    let v10: u64;  // rsi
    let v11: &struct_0;  // rdx
    let v12: &u64;  // rcx

    if v9 {
        goto *((4298048 + *(vvar_32{reg 72} as &i8) * 4) as &i32) + 4298048;
    } else {
        if std::io::error::Error::kind(v10) as i8 == 11 {
            return;
        }
        if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
            once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
        }
        v5 = g_4ec6b0;
        v2 = Argument {
            value: &v5
            formatter: <&T as core::fmt::Display>::fmt
        };
        v1 = Arguments {
            pieces: [&anon.53ff2aae8c1b62ba59dc209553c8e3d7.39.llvm.2604383847107207927, ": "]
            args: [&v2]
            fmt: None
        };
        std::io::stdio::_eprint(&v1);
        v5 = 0;
        v6 = *(&(&v11->padding_0)[1] as &i128);
        v7 = 0;
        v2 = Argument {
            value: &v5
            formatter: <os_display::Quoted as core::fmt::Display>::fmt
        };
        v3 = Argument {
            value: <os_display::Quoted as core::fmt::Display>::fmt
            formatter: &v0
        };
        v4 = <std::io::error::Error as core::fmt::Display>::fmt;
        v1 = Arguments {
            pieces: [&g_4e7a50, ": ", "\n"]
            args: [&v2, &v3]
            fmt: None
        };
        std::io::stdio::_eprint(&v1);
        *(v12) = *(v12) + 1;
    }
}
