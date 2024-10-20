fn uu_od::prn_char::format_item_c(a0: &String, a1: &u8, a2: u64) -> u64 {
    let v0: u8;  // [sp-0xa9]
    let v1: u64;  // [sp-0xa8]
    let v2: u64;  // [sp-0xa0]
    let v3: Arguments;  // [bp-0x98], Other Possible Types: u64
    let v4: u64;  // [sp-0x90]
    let v5: u64;  // [sp-0x78]
    let v6: u64;  // [sp-0x70]
    let v7: u64;  // [sp-0x68]
    let v8: void*;  // [sp-0x58]
    let v9: u64;  // [sp-0x50]
    let v10: void*;  // [sp-0x48]
    let v11: u64;  // [sp-0x40]
    let v12: u8;  // [sp-0x38]
    let v13: u64;  // [sp-0x30], Other Possible Types: Enum
    let v14: u64;  // [sp-0x28]
    let v15: u128;  // [sp-0x18]
    let v17: &u32;  // rax
    let v18: u64;  // rdx
    let v20: u64;  // rax

    if !a2 {
        core::panicking::panic_bounds_check(); /* do not return */
    }
    v0 = *(a1);
    if v0 >= 0 {
        v1 = "\\0" + v0 * 16;
        v13 = &v1;
        v14 = <&T as core::fmt::Display>::fmt;
        v7 = 2;
        v8 = 0;
        v9 = 4;
        v10 = 0;
        v11 = 32;
        v12 = 1;
        goto LABEL_49fc8d;
    }
    if (v0 & 192) == 128 {
        v17 = __rust_alloc(4, 1);
        *(v17) = 707403808;
        a0->ptr = 4;
        a0->cap = v17;
        a0->len = 4;
        return a0;
    }
    if a2 != 1 && (v0 & 224) == 192 {
        v18 = 2;
        goto LABEL_49fd65;
    }
    if a2 >= 3 && (v0 & 240) == 224 {
        v18 = 3;
        goto LABEL_49fd65;
    } else {
        if a2 < 4 || (v0 & 248) != 240 {
            v13 = &v0;
            v14 = core::fmt::num::<impl core::fmt::Octal for i8>::fmt;
            v7 = 2;
            v8 = 0;
            v9 = 3;
            v10 = 0;
            v11 = 34359738400;
            v12 = 3;
LABEL_49fc8d:
            v3 = Arguments {
                pieces: &[&str] {
                    ptr: v19
                    len: 1
                }
                args: &[&Argument] {
                    ptr: v19
                    len: 1
                }
                fmt: 
            };
            v4 = 1;
            v5 = &v7;
            v6 = 1;
        } else {
            v18 = 4;
LABEL_49fd65:
            v13 = core::str::converts::from_utf8(a1, v18);
            if v13 {
                v1 = &v0;
                v2 = core::fmt::num::<impl core::fmt::Octal for i8>::fmt;
                v7 = 2;
                v8 = 0;
                v9 = 3;
                v10 = 0;
                v11 = 34359738400;
                v12 = 3;
                v20 = " ";
            } else {
                v15 = *(&v14 as &i128);
                v1 = &v15;
                v2 = <&T as core::fmt::Display>::fmt;
                v7 = 2;
                v8 = 0;
                v9 = 4;
                v10 = 0;
                v11 = 32;
                v12 = 1;
                v20 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            }
            v3 = v20;
        }
        alloc::fmt::format::format_inner(a0, &v3);
        return a0;
    }
}
