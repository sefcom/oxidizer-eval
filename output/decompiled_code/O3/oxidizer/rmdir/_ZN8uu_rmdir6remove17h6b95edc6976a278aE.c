fn uu_rmdir::remove(a0: &u64, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0xb0], Other Possible Types: Argument
    let v1: Argument;  // [bp-0xa8]
    let v2: u64;  // [sp-0xa0]
    let v3: u64;  // [sp-0x98]
    let v4: u64;  // [sp-0x90]
    let v5: u64;  // [sp-0x88]
    let v6: u64;  // [sp-0x80]
    let v7: u8;  // [sp-0x78]
    let v8: Arguments;  // [bp-0x70]
    let v9: u64;  // [sp-0x60]
    let v10: u128;  // [sp-0x40]
    let v12: u64;  // r14
    let v13: u64;  // r15
    let v14: u128;  // xmm0
    let v15: u256;  // ymm0
    let v16: u256;  // ymm0
    let v17: u64;  // rax
    let v18: u64;  // rdx
    let v19: u64;  // rcx
    let v20: u64;  // rax
    let v21: u64;  // rdx
    let v22: u64;  // rcx
    let v23: u64;  // rax
    let v24: u128;  // xmm0

    v12 = a2;
    v13 = a1;
    if (a3 & 0x10000) {
        if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
            once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
        }
        v14 = g_4e0a38;
        vvar_12{reg 224} = ((vvar_113{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_112{reg 224}))
        v10 = v14;
        v4 = 1;
        v5 = a1;
        v6 = a2;
        v7 = 1;
        v0 = &v10;
        v1 = Argument {
            value: <&T as core::fmt::Display>::fmt
            formatter: &v4
        };
        v2 = &v4;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v8 = Arguments {
            pieces: [&g_4dc078, ": removing directory, ", "\n"]
            args: [&v0, &v1]
            fmt: None
        };
        v9 = &v0;
        std::io::stdio::_print(&v8);
    }
    v17 = std::sys::pal::unix::fs::rmdir(a1, a2);
    if v17 {
        *(a0) = v17;
        a0[1] = v13;
        a0[2] = v12;
        return a0;
    }
    if (a3 & 0x100) {
        if (a3 & 0x10000) {
            loop {
                v23 = std::path::Path::parent(v13, v12, v21, v22);
                if !(v23) || !((v12 = v21, v21)) {
                    break;
                }
                v13 = v23;
                if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                    once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                }
                v24 = g_4e0a38;
                vvar_12{reg 224} = ((vvar_61{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_183{reg 224}))
                v10 = v24;
                v4 = 1;
                v5 = v13;
                v6 = v21;
                v7 = 1;
                v0 = Argument {
                    value: &v10
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v1 = Argument {
                    value: <&T as core::fmt::Display>::fmt
                    formatter: &v4
                };
                v3 = <os_display::Quoted as core::fmt::Display>::fmt;
                v8 = Arguments {
                    pieces: [&g_4dc078, ": removing directory, ", "\n"]
                    args: [&v0, &v1]
                    fmt: None
                };
                std::io::stdio::_print(&v8);
                v17 = std::sys::pal::unix::fs::rmdir(v13, v21);
                if v17 {
                    *(a0) = v17;
                    a0[1] = v13;
                    a0[2] = v12;
                    return a0;
                }
            }
        } else {
            loop {
                v20 = std::path::Path::parent(v13, v12, v18, v19);
                if !(v20) || !((v12 = v18, v18)) {
                    break;
                }
                v13 = v20;
                v17 = std::sys::pal::unix::fs::rmdir(v20, v18);
                if v17 {
                    *(a0) = v17;
                    a0[1] = v13;
                    a0[2] = v12;
                    return a0;
                }
            }
        }
    }
    *(a0) = 0;
    return a0;
}
