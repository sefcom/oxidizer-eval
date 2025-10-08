fn zoxide::util::FzfChild::wait(a1: i64) -> Result<struct24, struct16> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x6c]
    let v1: Result<struct4, struct8>;  // [bp-0x68], Other Possible Types: struct40
    let v2: struct24;  // [bp-0x38]
    let v3: struct224;  // [bp-0x30]
    let v4: struct176;  // [bp-0x28]
    let v5: Result<struct4, struct8>;  // [bp-0x20]
    let v6: struct1;  // [bp-0x1c]
    let v8: struct24;  // eax
    let v9: u64;  // rcx
    let v10: u64;  // rdx
    let v11: struct24;  // rdx
    let v12: struct33;  // rax
    let v13: u64;  // rax

    *((a1 + 16) as &i32) = -1;
    v8 = *((a1 + 20) as &i32);
    *((a1 + 20) as &i32) = -1;
    core::option::unwrap(v8);
    v0 = v8;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    if (anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(std::io::append_to_string(&v2, &v0, 0, v9) as i8, v10) & 1) {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v11
        };
    }
    v1 = std::process::Child::wait(a1);
    v5 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v1);
    if let Ok(_) = v5 {
        v12 = v6 as u64;
        if !(v12 as u8 & 127) {
            v13 = (v12 as u32 >> 8) as u64;
            if !v13 as u8 {
                return Ok(struct24 {
                    field_0: *(&v2.field_0 as &i128)
                    field_16: 0
                });
            }
            match (v13 as u32) {
                1 => {
                    v1 = struct40 {
                        field_0: "no match found"
                        field_8: 1
                        field_16: 8
                        field_24: 0
                    };
                    v11 = anyhow::__private::format_err(&v1);
                    break;
                }
                2 => {
                    v1 = struct40 {
                        field_0: "fzf returned an error"
                        field_8: 1
                        field_16: 8
                        field_24: 0
                    };
                    v11 = anyhow::__private::format_err(&v1);
                    break;
                }
                130 => {
                    v11 = anyhow::kind::Adhoc::new(130);
                    break;
                }
                _ => {
                    if ((v13 as u32 != 255) as u8 as u8 & (127 < v13 as u32) as u8 as u8) {
                        goto LABEL_492cb8;
                    }
                    v1 = struct40 {
                        field_0: "fzf returned an unknown error"
                        field_8: 1
                        field_16: 8
                        field_24: 0
                    };
                    v11 = anyhow::__private::format_err(&v1);
                    break;
                }
            }
        } else {
LABEL_492cb8:
            v1 = struct40 {
                field_0: "fzf was terminated"
                field_8: 1
                field_16: 8
                field_24: 0
            };
            v11 = anyhow::__private::format_err(&v1);
        }
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v11
    };
}
