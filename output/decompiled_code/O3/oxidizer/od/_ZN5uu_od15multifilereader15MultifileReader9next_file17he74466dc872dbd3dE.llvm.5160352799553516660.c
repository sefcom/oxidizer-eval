fn uu_od::multifilereader::MultifileReader::next_file(a0: void*) -> u64 {
    let v0: &struct_1;  // [sp-0xc0]
    let v1: u64;  // [sp-0xb8]
    let v2: Arguments;  // [bp-0xb0], Other Possible Types: u64, struct8
    let v3: u64;  // [bp-0xa8]
    let v4: u128;  // [bp-0xa0]
    let v5: void*;  // [sp-0x90]
    let v6: u32;  // [sp-0x88]
    let v7: Enum;  // [sp-0x80], Other Possible Types: u64
    let v8: i8;  // [bp-0x78]
    let v9: Argument;  // [bp-0x70]
    let v10: Argument;  // [bp-0x68]
    let v11: u64;  // [sp-0x58]
    let v12: u128;  // [bp-0x50], Other Possible Types: void*
    let v13: u64;  // [sp-0x48]
    let v14: u64;  // [sp-0x40]
    let v15: u8;  // [sp-0x38]
    let v17: &struct_1;  // rbx
    let v18: u64;  // r12
    let v19: u256;  // ymm0
    let v20: &u64;  // rdi
    let v21: u64;  // rbp
    let v22: u64;  // r14
    let v23: u64;  // r15
    let v24: &&struct_0;  // rax
    let v25: u128;  // xmm0
    let v26: u32;  // ebp
    let v27: &struct_1;  // rbx
    let v28: &u64;  // rax
    let v29: &struct_1;  // rbx
    let v30: &struct_4;  // rax
    let v31: u128;  // xmm0
    let v32: u128;  // xmm1
    let v33: &&struct_0;  // rax
    let v34: &&struct_0;  // rax

    v17 = a0;
    v18 = a0->field_10;
    if v18 {
        v0 = a0;
        do {
            v20 = v17->field_8;
            v21 = *(v20);
            v22 = v20[1];
            v23 = v20[2];
            v24 = memmove(v20, v20 + 3, (v18 * 8 - 8) * 3);
            v17->field_10 = v18 - 1;
            if v21 {
                if v21 != 1 {
                    v27 = v0;
                    if v27->field_18 {
                        v24 = v27->field_20->field_0;
                        if v24 {
                            v24 = v24();
                        }
                    }
                    v27->field_18 = v22;
                    v27->field_20 = v23;
                    return v24;
                } else {
                    v29 = v0;
                    v30 = __rust_alloc(48, 8);
                    *(&v30->field_0 as &long long) = __rust_alloc(0x2000, 1);
                    v30->field_8 = 0x2000;
                    v30->field_10 = 0;
                    v30->field_20 = 0;
                    *(&v30->field_28 as &long long) = std::io::stdio::stdin();
                    if v29->field_18 {
                        v34 = v29->field_20->field_0;
                        if v34 {
                            v34();
                        }
                    }
                    v29->field_18 = v30;
                    v29->field_20 = &g_504b50;
                    return v24;
                }
            }
            v2 = struct8 {
                field_0: 0x1b600000000
            };
            v3 = 0;
            v3 = 1;
            v7 = std::fs::OpenOptions::_open(&v2, v22, v23);
            if !v7 as i32 {
                v26 = *((&v7 as &char + 4) as &i32);
                v2 = __rust_alloc(0x2000, 1);
                v3 = 0x2000;
                v4 = 0;
                v5 = 0;
                v6 = v26;
                v28 = __rust_alloc(48, 8);
                v29 = v0;
                v31 = *(&v2 as &i128);
                v32 = v4;
                *(&v28[4] as &i128) = *(&v2.fmt.discriminant as &i128);
                v28[2] = v32;
                *(v28) = v31;
                if v29->field_18 {
                    v33 = v29->field_20->field_0;
                    if v33 {
                        v33();
                    }
                }
                v29->field_18 = v28;
                v24 = &g_504aa8;
                v29->field_20 = v24;
                return v24;
            }
            v1 = v8;
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            }
            v25 = g_509808;
            vvar_44{reg 224} = ((vvar_44{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_188{reg 224}))
            v12 = v25;
            v9 = Argument {
                value: vvar_181{reg 56}
                formatter: <&T as core::fmt::Display>::fmt
            };
            v2 = Arguments {
                pieces: &[&str] {
                    ptr: &g_504b00
                    len: <UNKNOWN>
                }
                args: [&v9]
                fmt: None
            };
            v3 = 2;
            std::io::stdio::_eprint(&v2);
            v12 = 0;
            v13 = v22;
            v14 = v23;
            v15 = 0;
            v9 = Argument {
                value: vvar_181{reg 56}
                formatter: <os_display::Quoted as core::fmt::Display>::fmt
            };
            v10 = Argument {
                value: <os_display::Quoted as core::fmt::Display>::fmt
                formatter: &v1
            };
            v11 = <std::io::error::Error as core::fmt::Display>::fmt;
            v2 = Arguments {
                pieces: &[&str] {
                    ptr: &g_504b20
                    len: <UNKNOWN>
                }
                args: [&v9, &v10]
                fmt: None
            };
            v3 = 3;
            std::io::stdio::_eprint(&v2);
            v17 = v0;
            v17->field_28 = 1;
            v18 = v17->field_10;
        } while (v18);
    }
    if v17->field_18 {
        v24 = v17->field_20->field_0;
        if v24 {
            v24 = v24();
        }
    }
    v17->field_18 = 0;
    return v24;
}
