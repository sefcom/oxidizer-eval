fn uu_dd::Input::new_stdin(a0: &u64, a1: void*, a2: u32) -> u64 {
    let v0: u64;  // [sp-0xe8]
    let v1: Argument;  // [bp-0xe0]
    let v2: u128;  // [sp-0xd0]
    let v3: Arguments;  // [sp-0xc0], Other Possible Types: u64, struct16
    let v4: u64;  // [sp-0xb8]
    let v5: u8;  // [bp-0xb0]
    let v6: u128;  // [bp-0xa8]
    let v7: i8;  // [bp-0x88]
    let v9: u64;  // rsi
    let v10: u256;  // ymm0
    let v11: u256;  // ymm0
    let v12: &struct_0;  // rax
    let v13: u256;  // ymm0
    let v14: u128;  // xmm0
    let v15: u64;  // rcx

    std::io::stdio::stdin();
    v0 = 1;
    v3 = std::fs::File::metadata(&v0);
    if v3 as i32 == 2 {
        goto LABEL_4994ba;
    } else {
        if !((0xf000 & v7) != 0x8000) && !(!a1->field_42) {
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            }
            v2 = g_51be68;
            v1 = Argument {
                value: &v2
                formatter: <&T as core::fmt::Display>::fmt
            };
            v3 = Arguments {
                pieces: [&g_515c08, ": "]
                args: [&v1]
                fmt: None
            };
            std::io::stdio::_eprint(&v3);
            v3 = Arguments {
                pieces: ["standard input: not a directory\n"]
                args: [8]
                fmt: None
            };
            v6 = 0;
            std::io::stdio::_eprint(&v3);
            v12 = __rust_alloc(4, 4);
            v12->field_0 = 1;
            v15 = &anon.9b9ba72dabd212696498d24b7f543cb0.76.llvm.3928628070634382108;
        } else {
            v9 = a1->field_80;
            if !a1->field_80 {
                v11 = v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 1;
                a0[1] = v11;
                a0[2] = a1;
                *(a0) = 0;
                return a0;
            } else if !uu_dd::Source::skip(&v0, v9) {
                vvar_25{reg 224} = (((vvar_125{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, vvar_193{stack -232}))
                a0[1] = v11;
                a0[2] = a1;
                *(a0) = 0;
                return a0;
            }
LABEL_4994ba:
            v3 = 0x8000000000000000;
            v6 = v4;
            v12 = __rust_alloc(32, 8);
            v14 = v3;
            v12->field_10 = *(&v5 as &i128);
            v12->field_0 = v14;
            v15 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
        }
        a0[1] = v12;
        a0[2] = v15;
        *(a0) = 1;
        return a0;
    }
}
