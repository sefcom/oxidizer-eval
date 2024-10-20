fn uu_ls::display_grid(a0: &u64, a1: u32, a2: u8, a3: u32, a4: u8) -> u64 {
    let v0: i64;  // [sp-0x158]
    let v1: i64;  // [bp-0x150]
    let v2: i64;  // [sp-0x148]
    let v3: i64;  // [bp-0x138], Other Possible Types: struct40
    let v4: i64;  // [sp-0x130]
    let v5: i64;  // [bp-0x128]
    let v6: i64;  // [sp-0x120]
    let v7: i8;  // [bp-0x118]
    let v8: i64;  // [sp-0x100], Other Possible Types: struct24
    let v9: i64;  // [sp-0xf8]
    let v10: i128;  // [sp-0xe8]
    let v11: struct40;  // [bp-0xd8], Other Possible Types: i64
    let v12: i64;  // [bp-0xc0]
    let v13: i128;  // [sp-0x58]
    let v14: i128;  // [sp-0x48]
    let v16: i64;  // r14
    let v17: i128;  // xmm0
    let v18: i64;  // r12
    let v19: i64;  // r15
    let v21: i128;  // xmm0
    let v22: i128;  // xmm0
    let v23: i256;  // ymm0
    let v24: i256;  // ymm0
    let v25: i64;  // rax
    let v26: i64;  // rdx
    let v27: i64;  // rax
    let v28: i64;  // r15
    let v29: i64;  // rcx
    let v30: i64;  // rsi
    let v31: i64;  // rdi
    let v33: i64;  // rbp
    let v35: i128;  // xmm0
    let v36: i128;  // xmm0
    let v37: i64;  // rax
    let v39: i64;  // rax
    let v40: i64;  // rax
    let v41: i64;  // rax
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0

    v16 = a1;
    if v16 {
        if !a4 {
            v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,alloc::vec::into_iter::IntoIter<T>>>::from_iter(a0);
        } else {
            v14 = *((a0 + 16) as &i128);
            v13 = *(a0 as &i128);
            v8 = alloc::vec::in_place_collect::from_iter_in_place(&v13);
        }
        v26 = *((&v8 as &char + 16) as &i64);
        v27 = 2;
        v28 = 0x8000000000000000;
        if v26 {
            v29 = v9;
            v30 = 0;
            do {
                v31 = *((v29 + v30 + 16) as &i64);
                if v31 && *((*((v29 + v30 + 8) as &i64) + v31 - 1) as &i8) == 47 {
                    v28 = 1;
                    v27 = __rust_alloc(1, 1);
                    *(v27 as &i8) = 9;
                    break;
                }
            } while ((v30 += 24, (v26 << 3) + (v26 << 4) != v30));
        }
        v2 = *((&v8 as &char + 16) as &i64);
        v0 = v8;
        v7 = a2;
        v3 = v28;
        v4 = v27;
        v5 = 1;
        v6 = v16 & 4294967295;
        term_grid::Grid<T>::new();
        v0 = &v11;
        v1 = <term_grid::Grid<T> as core::fmt::Display>::fmt;
        v3 = struct40 {
            field_0: &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654
            field_8: 1
            field_16: &v0
            field_24: 1
            field_32: <UNKNOWN>
        };
        v7 = 0;
        v40 = std::io::Write::write_fmt(a3, &v3);
        if v40 {
            v3 = 0x8000000000000000;
            v6 = v40;
            v39 = __rust_alloc(32, 8);
            v43 = *(&v3.field_0 as &i128);
            *((v39 + 16) as &i128) = *(&v3.field_16 as &i128);
            *(v39 as &i128) = v43;
            return v39;
        }
        goto LABEL_4d69e2;
    }
    v17 = *(a0 as &i128);
    v5 = *((a0 + 16) as &i128);
    v3 = v17;
    v18 = v6;
    v19 = v4;
    if v19 == v18 {
LABEL_4d69b1:
        if v5 {
            goto LABEL_4d69e2;
        }
    }
    v4 = v19 + 24;
    v21 = *((v19 + 8) as &i128);
    v10 = v21;
    if v0 == 0x8000000000000000 {
        goto LABEL_4d69b1;
    }
    v0 = *(v19 as &i64);
    v22 = v10;
    vvar_131{reg 224} = ((((((vvar_238{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_237{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_264{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_278{reg 224}))
    v1 = v22;
    v8 = &v0;
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    v11 = struct40 {
        field_0: &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654
        field_8: 1
        field_16: &v8
        field_24: 1
        field_32: 0
    };
    v25 = std::io::Write::write_fmt(a3, &v11);
    if v25 {
LABEL_4d6a74:
        v11 = 0x8000000000000000;
        v12 = v25;
        v39 = __rust_alloc(32, 8);
        v42 = v11;
        *((v39 + 16) as &i128) = *((&v11 as &char + 16) as &i128);
        *(v39 as &i128) = v42;
        goto LABEL_4d6ac8;
    }
    if v4 != v18 {
        do {
            v33 = v19 + 48;
            v35 = *((v33 - 16) as &i128);
            v10 = v35;
            if v0 == 0x8000000000000000 {
                v4 = v33;
                goto LABEL_4d6cdc;
            }
            v0 = *((v33 - 24) as &i64);
            v36 = v10;
            v1 = v36;
            v11 = struct40 {
                field_0: "  "
                field_8: 1
                field_16: 8
                field_24: 1
                field_32: 0
            };
            vvar_131{reg 224} = (((((vvar_131{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_384{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_389{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>)
            v12 = 0;
            v37 = std::io::Write::write_fmt(a3, &v11);
            if v37 {
                v4 = v33;
                v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v37);
LABEL_4d6ac8:
                return v39;
            }
            v8 = &v0;
            v9 = <alloc::string::String as core::fmt::Display>::fmt;
            v11 = struct40 {
                field_0: &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654
                field_8: 1
                field_16: &v8
                field_24: 1
                field_32: 0
            };
            v25 = std::io::Write::write_fmt(a3, &v11);
            if v25 {
                v4 = v33;
                goto LABEL_4d6a74;
            }
        } while (v33 != v18);
    }
LABEL_4d6cdc:
    v11 = struct40 {
        field_0: "\n"
        field_8: 1
        field_16: 8
        field_24: 1
        field_32: 0
    };
    v12 = 0;
    v41 = std::io::Write::write_fmt(a3, &v11);
    if v41 {
        v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v41);
        return v39;
    }
LABEL_4d69e2:
    return 0;
}
