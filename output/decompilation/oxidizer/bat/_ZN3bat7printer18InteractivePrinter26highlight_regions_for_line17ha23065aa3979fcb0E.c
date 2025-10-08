fn bat::printer::InteractivePrinter::highlight_regions_for_line(a0: i64, a1: i64, a2: i192, a3: i192) -> long long {
    let v0: Result<struct56, struct24>;  // [bp-0x78], Other Possible Types: struct16
    let v1: i64;  // [bp-0x68]
    let v2: i64;  // [bp-0x60]
    let v3: core::fmt::Arguments;  // [bp-0x58]
    let v4: &str;  // [bp-0x48]
    let v5: i8;  // [bp-0x38]
    let v7: i64;  // rax
    let v8: struct24;  // 4096
    let v10: u64;  // cc_ndep
    let v11: struct24;  // rdx
    let v12: struct24;  // 4096
    let v14: Result<struct80, struct9>;  // r12

    if (((0 ^ *((a1 + 296) as &i64)) & (0 ^ -(*((a1 + 296) as &i64)))) >> 63) as char {
        v7 = alloc::alloc::Global::alloc_impl(8, 32, 0);
        v0 = struct16 {
            field_0: -36170084271554689
            field_8: 0
        };
        *(v7 as &i128) = *(&v0.field_0 as &i128);
        *((v7 + 16) as &struct24) = a2;
        *((v7 + 24) as &struct24) = a3;
        return struct32 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: 1
            field_16: v7
            field_24: 1
        };
    }
    if a3 < 16385 {
        v8 = a2;
    } else {
        v8 = &g_591b49;
    }
    v11 = v8;
    if _ccall(2, 8, a3, 16385, v10) as char {
        v12 = a3;
    } else {
        v12 = 1;
    }
    v0 = syntect::easy::HighlightLines::highlight_line(a1 + 296, v11, v12, *((a1 + 504) as &i64));
    v14 = *((&v0 as &char + 8) as &i64);
    match v0 {
        Ok(_) => {
            return struct80 {
                field_0: 2
                padding_1: <UNKNOWN>
                field_8: v0 as i64
                field_16: v14
                field_24: v1
                field_32: v2
                field_40: v3
                field_56: v4
                field_72: *(&v5 as &i64)
            };
        },
        Err(_) => {
            if a3 <= 0x4000 {
                return struct32 {
                    field_0: 13
                    padding_1: <UNKNOWN>
                    field_8: v14
                    field_16: v1
                    field_24: v2
                };
            }
            *((v1 + 16) as &struct24) = a2;
            *((v1 + 24) as &struct24) = a3;
            return struct32 {
                field_0: 13
                padding_1: <UNKNOWN>
                field_8: v14
                field_16: v1
                field_24: v2
            };
        },
    }
}
