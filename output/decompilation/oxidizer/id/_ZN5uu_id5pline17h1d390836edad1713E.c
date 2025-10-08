fn uu_id::pline(a0: i8, a1: i32) -> int {
    let v0: struct24;  // [bp-0x1a8]
    let v1: u128;  // [bp-0x1a0]
    let v2: void*;  // [bp-0x190]
    let v3: u64;  // [bp-0x188]
    let v4: void*;  // [bp-0x180]
    let v5: void*;  // [bp-0x178]
    let v6: u128;  // [bp-0x170]
    let v8: void*;  // [bp-0x160]
    let v9: u128;  // [bp-0x158]
    let v11: struct128;  // [bp-0x118]
    let v12: void*;  // [bp-0x100]
    let v13: u128;  // [bp-0xf8]
    let v14: void*;  // [bp-0xe8]
    let v15: u128;  // [bp-0xe0]
    let v16: void*;  // [bp-0xd0]
    let v17: u128;  // [bp-0xc8]
    let v18: u64;  // [bp-0xb8]
    let v19: u128;  // [bp-0xb0]
    let v20: Result<struct128, struct16>;  // [bp-0x98]
    let v22: u32;  // esi
    let v23: void*;  // rdx
    let v24: void*;  // rdx
    let v25: u64;  // [bp-0x1a8]

    if !(a0 & 1) {
        v22 = uucore::features::process::getuid();
    }
    v20 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v22);
    v11 = core::result::Result<T,E>::unwrap(&v20);
    if (((0 ^ v18) & (0 ^ -(v18))) >> 63) as char {
        v0 = struct24 {
            field_0: 0
            field_8: ""
        };
        if v12 == 0x8000000000000000 {
            goto LABEL_45dc29;
        }
LABEL_45dbdd:
        v3 = v13;
        v2 = v12;
        v23 = v16;
        if v16 != 0x8000000000000000 {
            goto LABEL_45dbfc;
        }
    } else {
        v1 = v19;
        v25 = v18;
        if v12 != 0x8000000000000000 {
            goto LABEL_45dbdd;
        }
LABEL_45dc29:
        v3 = 1;
        v4 = 0;
        v2 = 0;
        v23 = v16;
        if v16 != 0x8000000000000000 {
LABEL_45dbfc:
            v6 = v17;
        }
    }
    v5 = v23;
    v24 = v14;
    if v14 != 0x8000000000000000 {
        v9 = v15;
    }
    v8 = v24;
    println!("{}:{}:{}:{}:{}:{}:{}", &v11, &v25, &v11 as u8, &v11 as u8, &v2, &v5, &v8);
    return;
}
