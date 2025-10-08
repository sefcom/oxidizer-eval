fn uu_cat::write_new_line(a0: &struct24, a1: &struct24, a2: i64, a3: i64, a4: i8) -> u64 {
    let v0: Option<struct8>;  // [bp-0x48], Other Possible Types: u64
    let v2: u128;  // [bp-0x40]
    let v3: i8;  // [bp-0x38]
    let v5: core::result::Result<(), std::io::error::Error>;  // rax
    let v6: struct8;  // rax, Other Possible Types: u64

    if *((a3 + 57) as &i8) {
        if *((a2 + 2) as &i8) {
            <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, "^M");
            match v5 {
                Err(_) => {
                    return struct16 {
                        field_0: 0x8000000000000000
                        field_8: v5
                    };
                },
                Ok(_) => {
                    *((a3 + 57) as &i8) = 0;
                    uu_cat::write_end_of_line(a1, "$\n", a4);
                    if v0 != 9223372036854775814 {
                        return struct24 {
                            field_0: *(&v0 as &i128)
                            field_16: *(&v3 as &i64)
                        };
                    }
                },
            }
        } else {
            <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, "\r");
            match v5 {
                Err(_) => {
                    return struct16 {
                        field_0: 0x8000000000000000
                        field_8: v5
                    };
                },
                Ok(_) => {
                    *((a3 + 57) as &i8) = 0;
                    uu_cat::write_end_of_line(a1, "\n", a4);
                    if v0 != 9223372036854775814 {
                        return struct24 {
                            field_0: *(&v0 as &i128)
                            field_16: *(&v3 as &i64)
                        };
                    }
                },
            }
        }
    } else {
        if !*((a3 + 56) as &i8) {
            *((a3 + 58) as &i8) = 1;
            if *((a2 + 2) as &i8) {
                goto LABEL_45fc90;
            }
LABEL_45fcee:
            v0 = uu_cat::write_end_of_line(a1, "\n", a4);
            if v6 != 9223372036854775814 {
                return struct24 {
                    field_0: v6
                    field_8: v2
                };
            }
        } else if *(a2 as &i8) != 1 || *((a3 + 58) as &i8) != 1 {
            *((a3 + 58) as &i8) = 1;
            if *((a2 + 4) as &i8) == 2 {
                uu_cat::LineNumber::write(a3, a1);
                match v5 {
                    Err(_) => {
                        return struct16 {
                            field_0: 0x8000000000000000
                            field_8: v5
                        };
                    },
                    Ok(_) => {
                        uu_cat::LineNumber::increment(a3);
                    },
                }
            }
            if !*((a2 + 2) as &i8) {
                goto LABEL_45fcee;
            }
LABEL_45fc90:
            v0 = uu_cat::write_end_of_line(a1, "$\n", a4);
            if v6 != 9223372036854775814 {
                return struct24 {
                    field_0: v6
                    field_8: v2
                };
            }
        }
    }
    return struct8 {
        field_0: 9223372036854775814
    };
}
