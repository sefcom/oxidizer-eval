fn uu_uname::UNameOutput::new(a1: &struct9) -> Result<struct192, struct24> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x508]
    let v1: u64;  // [bp-0x500]
    let v2: u64;  // [bp-0x4f8]
    let v3: u64;  // [bp-0x4f0]
    let v4: u64;  // [bp-0x4e8]
    let v5: u64;  // [bp-0x4e0]
    let v6: u64;  // [bp-0x4d8]
    let v7: u64;  // [bp-0x4d0]
    let v8: u64;  // [bp-0x4c8]
    let v9: u64;  // [bp-0x4c0]
    let v10: u64;  // [bp-0x4b8]
    let v11: u64;  // [bp-0x4b0]
    let v12: u64;  // [bp-0x4a8]
    let v13: u64;  // [bp-0x4a0]
    let v14: u64;  // [bp-0x498]
    let v15: u64;  // [bp-0x490]
    let v16: u64;  // [bp-0x488]
    let v17: u64;  // [bp-0x480]
    let v18: iNone;  // [bp-0x478], Other Possible Types: u128
    let v19: Result<struct536, struct24>;  // [bp-0x460], Other Possible Types: struct24, u64
    let v20: u64;  // [bp-0x460]
    let v21: struct24;  // [bp-0x460]
    let v22: u64;  // [bp-0x458]
    let v23: u64;  // [bp-0x450]
    let v24: u64;  // [bp-0x450]
    let v25: u64;  // [bp-0x248]
    let v26: u64;  // [bp-0x240]
    let v27: u64;  // [bp-0x238]
    let v28: u8;  // [bp-0x230]
    let v29: u64;  // [bp-0x228]
    let v30: u8;  // [bp-0x220]
    let v31: u64;  // [bp-0x210]
    let v32: u8;  // [bp-0x208]
    let v33: u64;  // [bp-0x1f8]
    let v34: u8;  // [bp-0x1f0]
    let v35: u64;  // [bp-0x1e0]
    let v36: u8;  // [bp-0x1d8]
    let v37: u64;  // [bp-0x1c8]
    let v38: u8;  // [bp-0x1c0]
    let v40: u8;  // r13b
    let v41: u64;  // r14
    let v43: u64;  // r15
    let v45: u64;  // r13
    let v47: u64;  // r13
    let v48: u64;  // r14

    v19 = <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new();
    if (((0 ^ v19 as i64) & (0 ^ -(v20))) >> 63) as char {
        return struct24 {
            field_0: 9223372036854775809
            field_8: uu_uname::UNameOutput::new::{{closure}}(v22, v23)
            field_16: &g_4da138
        };
    }
    memcpy(&v28, &v19 as u8, 0x200);
    v25 = v19 as i64;
    v26 = v22;
    v27 = v23;
    v40 = *(a1 as &i8);
    if v40 || (*((a1 + 1) as &i8) & 1) || *((a1 + 2) as &i8) || *((a1 + 4) as &i8) || *((a1 + 3) as &i8) || *((a1 + 5) as &i8) || *((a1 + 8) as &i8) || *((a1 + 6) as &i8) {
        if ((*((a1 + 1) as &i8) | v40) & 1) {
            goto LABEL_451cb6;
        }
        v41 = 0x8000000000000000;
        if !*((a1 + 2) as &i8) && !v40 {
            goto LABEL_451d59;
        }
LABEL_451d09:
        v19 = uu_uname::UNameOutput::new::{{closure}}(v29, *(&v30 as &i64));
        v4 = v22;
        v12 = v23;
        v19 = v20;
    } else {
        if !*((a1 + 7) as &i8) {
LABEL_451cb6:
            v19 = uu_uname::UNameOutput::new::{{closure}}(v22, v23);
            v41 = v19.field_0;
            v10 = v22;
            v17 = v23;
            if *((a1 + 2) as &i8) || v40 {
                goto LABEL_451d09;
            }
        }
LABEL_451d59:
        v19 = 0x8000000000000000;
    }
    v43 = v19;
    v3 = v41;
    v11 = v43;
    if *((a1 + 4) as &i8) || v40 {
        v19 = uu_uname::UNameOutput::new::{{closure}}(v31, *(&v32 as &i64));
        v2 = v19.field_0;
        v9 = v22;
        v16 = v23;
        if *((a1 + 3) as &i8) || v40 {
            goto LABEL_451dda;
        }
    } else {
        v2 = 0x8000000000000000;
        v0 = 0x8000000000000000;
        if *((a1 + 3) as &i8) {
LABEL_451dda:
            v19 = uu_uname::UNameOutput::new::{{closure}}(v33, *(&v34 as &i64));
            v0 = v19.field_0;
            v8 = v22;
            v15 = v23;
        }
    }
    if *((a1 + 5) as &i8) || v40 {
        v19 = uu_uname::UNameOutput::new::{{closure}}(v35, *(&v36 as &i64));
        v1 = v19.field_0;
        v7 = v22;
        v14 = v23;
        if v40 || *((a1 + 8) as &i8) {
            goto LABEL_451e88;
        }
        v45 = 0x8000000000000000;
    } else {
        v1 = 0x8000000000000000;
        v45 = 0x8000000000000000;
        if *((a1 + 8) as &i8) {
LABEL_451e88:
            v19 = uu_uname::UNameOutput::new::{{closure}}(v37, *(&v38 as &i64));
            v6 = v22;
            v13 = v23;
            v45 = v20;
        }
    }
    v47 = v45;
    if *((a1 + 6) as &i8) {
        v19 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("unknown");
        v48 = v19.field_0;
        v5 = v22;
        v24 = v23;
        if !*((a1 + 7) as &i8) {
            return Ok(struct192 {
                field_0: v3
                field_8: v10
                field_16: v17
                field_24: v11
                field_32: v4
                field_40: v12
                field_48: v2
                field_56: v9
                field_64: v16
                field_72: v0
                field_80: v8
                field_88: v15
                field_96: v1
                field_104: v7
                field_112: v14
                field_120: v47
                field_128: v6
                field_136: v13
                field_144: v19.field_0
                field_152: v5
                field_160: v23
                field_168: 0x8000000000000000
                field_176: v18
            });
        }
    } else {
        v48 = 0x8000000000000000;
        v24 = v43;
        if !*((a1 + 7) as &i8) {
            return Ok(struct192 {
                field_0: v3
                field_8: v10
                field_16: v17
                field_24: v11
                field_32: v4
                field_40: v12
                field_48: v2
                field_56: v9
                field_64: v16
                field_72: v0
                field_80: v8
                field_88: v15
                field_96: v1
                field_104: v7
                field_112: v14
                field_120: v47
                field_128: v6
                field_136: v13
                field_144: 0x8000000000000000
                field_152: v5
                field_160: v43
                field_168: 0x8000000000000000
                field_176: v18
            });
        }
    }
    v21 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("unknown");
    v18 = *(&v21.field_8 as &i128);
    return Ok(struct192 {
        field_0: v3
        field_8: v10
        field_16: v17
        field_24: v11
        field_32: v4
        field_40: v12
        field_48: v2
        field_56: v9
        field_64: v16
        field_72: v0
        field_80: v8
        field_88: v15
        field_96: v1
        field_104: v7
        field_112: v14
        field_120: v47
        field_128: v6
        field_136: v13
        field_144: v48
        field_152: v5
        field_160: v24
        field_168: v20
        field_176: v18
    });
}
