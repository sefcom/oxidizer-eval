fn compat_core::esxi::vm::EsxiVM::kill_ensure(a0: &struct16, a1: &u64) -> u64 {
    let v0: u32;  // [sp-0xbc]
    let v1: &struct_1;  // [sp-0xb8]
    let v2: u64;  // [sp-0xa0]
    let v3: u64;  // [bp-0x98], Other Possible Types: struct24, Option<struct16>, Result<struct32, struct16>
    let v4: &struct_1;  // [sp-0x90]
    let v5: u64;  // [sp-0x88]
    let v6: &&struct_0;  // [sp-0x78]
    let v7: u64;  // [sp-0x70]
    let v8: u64;  // [sp-0x68]
    let v9: u64;  // [sp-0x60]
    let v10: u64;  // [sp-0x58]
    let v11: &u8;  // [sp-0x50]
    let v12: u64;  // [sp-0x48]
    let v13: &u8;  // [sp-0x40]
    let v14: u64;  // [sp-0x38]
    let v16: &u64;  // rbx
    let v19: &struct_1;  // rbp
    let v20: u32;  // eax
    let v21: u64;  // r12
    let v22: void*;  // rbx
    let v23: u64;  // r15
    let v24: u64;  // r15
    let v25: u64;  // r13

    v16 = a1;
    v0 = 1;
    v8 = a1 + 1;
    do {
        v21 = *(v16);
        v3 = compat_core::esxi::vm::EsxiVM::get_running();
        v1 = v4;
        if v3 == 1 {
            return struct16 {
                field_0: v1
                field_8: v2
            };
        }
        v9 = *((&v3 as &char + 24) as &i64);
        v2 = v5;
        if !v9 {
            v19 = v1;
        } else {
            v19 = v1 + 2;
            v22 = 0;
            v23 = v9 * 32;
        }
        loop {
            v24 = v23;
            v25 = v19[2].field_-20;
            if v25 == v21 {
                break;
            }
            v19 += 2;
            v22 += 32;
            v23 = v24 - 32;
        }
        v16 = a1;
        if _ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE >= 3 {
            v10 = v8;
            v11 = &v10;
            v12 = <&T as core::fmt::Display>::fmt;
            v13 = &v0;
            v14 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
            v3 = struct24 {
                field_0: "Killing VM: "
                field_8: 2
                field_16: 0
            };
            v6 = &v11;
            v7 = 2;
            log::__private_api_log(&v3, 3, "compat_core::esxi::vm", 0);
        }
        v3 = compat_core::esxi::vm::EsxiVM::kill(a1);
        v20 = v0;
        if v20 > 1 {
            std::thread::sleep(1, 0);
            v20 = v0;
        }
        v0 = v20 + 1;
    } while (v0 < 10);
}
