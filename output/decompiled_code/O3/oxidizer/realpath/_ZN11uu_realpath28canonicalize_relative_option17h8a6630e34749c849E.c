fn uu_realpath::canonicalize_relative_option(a0: &u64, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x70]
    let v2: i8;  // [bp-0x60], Other Possible Types: struct9
    let v3: i8;  // [bp-0x58]
    let v4: i8;  // [bp-0x50]
    let v5: i64;  // [sp-0x48]
    let v6: i64;  // [sp-0x40]
    let v7: i8;  // [sp-0x38]
    let v9: i64;  // r13
    let v10: i64;  // r15
    let v11: i64;  // 4096
    let v12: i64;  // rax
    let v13: i64;  // rdi
    let v14: i64;  // rdi
    let v15: i64;  // r12
    let v16: i64;  // rdi
    let v18: i64;  // rax

    v10 = *(a1 as &i64);
    if v10 == 0x8000000000000000 {
LABEL_487ae0:
        *(a0 as &i64) = 0x8000000000000000;
        *((a0 + 8) as &i64) = v11;
        *((a0 + 16) as &i64) = v15;
        return v18;
    }
    v5 = *((a1 + 8) as &i64);
    uucore::features::fs::canonicalize();
    v12 = v2;
    v13 = v3;
    v9 = v12;
    if v9 == 0x8000000000000000 {
LABEL_4879f2:
        *((a0 + 8) as &double) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v14, a1);
        *((a0 + 16) as &&i64) = &anon.74f624fe0f3003fa77e35a7822b62d30.8.llvm.17351024934342531244;
        *(a0 as &i64) = 9223372036854775809;
        if !v10 {
            return &anon.74f624fe0f3003fa77e35a7822b62d30.8.llvm.17351024934342531244;
        }
    }
    v15 = v4;
    if a2 != 1 {
LABEL_487abe:
        goto LABEL_487ae0;
    }
    v0 = v13;
    v12 = std::path::Path::is_dir(v13, v15);
    if v12 {
        v16 = v0;
        goto LABEL_487abe;
    }
    v2 = std::sys::pal::unix::fs::readdir(v0, v15);
    v12 = *((&v2 as &char + 8) as &i8);
    if v12 == 2 {
        v14 = v6;
        goto LABEL_4879f2;
    }
    v6 = v2;
    v7 = (v12 & 255 & 255);
    *(v6 as &i32) = vvar_253 - 1;
    if BinaryOp CasCmpNE {
        goto LABEL_0x487aa5;
    }
    if !vvar_253 - 1 {
        goto LABEL_0x487aac;
    }
}
