fn uu_env::apply_specified_env_vars(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: Argument;  // [bp-0x90]
    let v1: Arguments;  // [bp-0x80]
    let v2: u128;  // [bp-0x50]
    let v3: u128;  // [sp-0x48]
    let v4: u8;  // [sp-0x38]
    let v5: u64;  // [sp-0x30]
    let v6: u64;  // [sp-0x28]
    let v7: u64;  // [sp-0x20]
    let v8: u64;  // [sp-0x18]
    let v9: u64;  // [sp-0x10]
    let v10: u64;  // [sp-0x8]
    let v11: u8;  // [bp+0x0]
    let v13: u64;  // rax
    let v14: u64;  // r15
    let v15: u64;  // r14
    let v16: u64;  // r13
    let v17: u64;  // r12
    let v18: u64;  // rbx
    let v19: &struct_0;  // rbx
    let v20: u64;  // r12
    let v22: u256;  // ymm0
    let v23: u128;  // xmm0
    let v24: u128;  // xmm0
    let v25: u64;  // r12

    v13 = a0[8];
    if !v13 {
        return v13;
    }
    v10 = &v11;
    v9 = v14;
    v8 = v15;
    v7 = v16;
    v6 = v17;
    v5 = v18;
    v19 = a0[7] + 24;
    v20 = v13 * 48;
    do {
        if v19->padding_0 {
            v13 = std::env::set_var((&v19->field_8 as &char + 8) as &struct_0, v19);
        } else {
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            }
            v23 = g_512018;
            v2 = v23;
            v0 = Argument {
                value: &v2
                formatter: <&T as core::fmt::Display>::fmt
            };
            v1 = Arguments {
                pieces: [&g_50c8a0, ": warning: "]
                args: [&v0]
                fmt: None
            };
            std::io::stdio::_eprint(&v1);
            v24 = *(&v19->padding_0 as &i128);
            vvar_95{reg 224} = ((((vvar_13{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_87{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_94{reg 224}))
            v2 = 1;
            v3 = v24;
            v4 = 1;
            v0 = Argument {
                value: &v2
                formatter: <os_display::Quoted as core::fmt::Display>::fmt
            };
            v1 = Arguments {
                pieces: ["no name specified for value ", "\n"]
                args: [&v0]
                fmt: None
            };
            v13 = std::io::stdio::_eprint(&v1);
        }
    } while ((v19 += 48, v25 = v20 - 48, v20 != 48));
    return v13;
}
