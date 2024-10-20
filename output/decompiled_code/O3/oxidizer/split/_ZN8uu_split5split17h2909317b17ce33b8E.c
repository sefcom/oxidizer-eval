fn uu_split::split(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: Enum;  // [sp-0x218], Other Possible Types: u64
    let v1: &u8;  // [sp-0x1b8]
    let v2: u64;  // [sp-0x190]
    let v3: u64;  // [sp-0x188]
    let v4: u128;  // [sp-0x180]
    let v5: void*;  // [sp-0x170]
    let v6: &u32;  // [sp-0x168]
    let v7: u64;  // [sp-0x160]
    let v8: u128;  // [bp-0x158], Other Possible Types: struct8, Enum
    let v9: u32;  // [bp-0x150]
    let v10: u16;  // [sp-0x14c]
    let v12: &u8;  // r12
    let v13: u64;  // r13
    let v14: &u32;  // rax
    let v15: u64;  // r15
    let v17: u64;  // r12
    let v18: u64;  // rcx
    let v19: u64;  // rcx

    v12 = a0->field_78;
    v13 = a0->field_80;
    if v13 != 1 || *(v12) != 45 {
        v8 = struct8 {
            field_0: 0x1b600000000
        };
        v9 = 0;
        v10 = 0;
        v9 = 1;
        v0 = std::fs::OpenOptions::_open(&v8, v12, v13);
        v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0, a0);
        if v8 {
            return v8;
        }
        v14 = __rust_alloc(4, 4);
        v1 = v12;
        *(v14) = *((&v8 as &char + 8) as &i32);
        v15 = &g_50b900;
    } else {
        v14 = __rust_alloc(8, 8);
        v1 = v12;
        *(&v14 as &long long) = std::io::stdio::stdin();
        v15 = &g_50b958;
    }
    v17 = 0x2000;
    if a0->field_0 {
        v17 = a0->field_8;
    }
    if !v17 {
        v2 = 1;
        v3 = v17;
        v4 = 0;
        v5 = 0;
        v6 = v14;
        v7 = v15;
        v18 = a0->field_10 - 6;
        if v18 >= 3 {
            v18 = 3;
        }
        goto *((4312580 + vvar_30{reg 32} * 4) as &i32) + 4312580;
    } else {
        v2 = __rust_alloc(v17, 1);
        v3 = v17;
        v4 = 0;
        v5 = 0;
        v6 = v14;
        v7 = v15;
        v19 = a0->field_10 - 6;
        if v19 >= 3 {
            v19 = 3;
        }
        goto *((4312580 + vvar_32{reg 32} * 4) as &i32) + 4312580;
    }
}
