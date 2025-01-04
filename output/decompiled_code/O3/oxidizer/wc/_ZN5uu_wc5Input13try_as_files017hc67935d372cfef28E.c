fn uu_wc::Input::try_as_files0(a0: &Option<struct24>, a1: void*, a2: u32) -> u64 {
    let v0: i192;  // [sp-0x1e0], Other Possible Types: struct24
    let v1: i584;  // [sp-0x1c8], Other Possible Types: Result<struct73, struct24>
    let v2: struct80;  // [sp-0x178], Other Possible Types: i64
    let v3: i1408;  // [sp-0x128], Other Possible Types: struct24, Result<struct176, struct16>
    let v4: struct81;  // [sp-0x78], Other Possible Types: i648
    let v6: i64;  // rax
    let v7: i64;  // rsi
    let v8: i64;  // rdx
    let v9: i64;  // rdx
    let v10: i64;  // rcx
    let v11: i64;  // rax
    let v12: i64;  // rcx
    let v14: i64;  // rdx

    if *(a1 as &i64) != 9223372036854775809 {
        v3 = std::fs::metadata(a1, a2);
        if v3 == 2 || (0xf000 & *((&v3 as &char + 56) as &i32)) != 0x8000 || *((&v3 as &char + 80) as &i64) >= 10485761 {
            *(a0 as &i64) = 0x8000000000000000;
            goto LABEL_4b9296;
        } else {
            v1 = uu_wc::files0_iter_file(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
            v11 = *((&v1 as &char + 8) as &i64);
            v12 = *((&v1 as &char + 16) as &i64);
            if v2 == 9223372036854775809 || (v2 = struct80 {
    field_0: v13
    field_8: v11
    field_16: v12
    field_24: *((&v1 as &char + 24) as &i128)
    field_40: *((&v1 as &char + 40) as &i128)
    field_56: *((&v1 as &char + 56) as &i128)
    field_72: v1
}, v0 = core::iter::adapters::try_process(&v2), v14 = v0, v11 = *((&v0 as &char + 8) as &i64), v12 = *((&v0 as &char + 16) as &i64), v14 == 0x8000000000000000) {
                *((a0 + 8) as &i64) = v11;
                *((a0 + 16) as &i64) = v12;
                *(a0 as &i64) = 9223372036854775809;
            } else {
                *(a0 as &i64) = v14;
                *((a0 + 8) as &i64) = v11;
                *((a0 + 16) as &i64) = v12;
LABEL_4b9296:
            }
        }
        return v6;
    } else {
        v6 = uu_wc::is_stdin_small_file();
        if !v6 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v4 = uu_wc::files0_iter_stdin(v7, v8);
        v3 = core::iter::adapters::try_process(&v4);
        v9 = v3;
        v6 = *((&v3 as &char + 8) as &i64);
        v10 = *((&v3 as &char + 16) as &i64);
        if v9 == 0x8000000000000000 {
            return struct24 {
                field_0: 9223372036854775809
                field_8: v6
                field_16: v10
            };
        }
        return struct24 {
            field_0: v9
            field_8: v6
            field_16: v10
        };
    }
}
