fn uu_runcon::get_custom_context(a1: i32, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64, a8: i64, a9: i64, a10: i64, a11: i64) -> : struct72 {
    let a0: i64;  // rdi
    let v0: struct640;  // [bp-0x80]
    let v1: Result<struct72, struct12>;  // [bp-0x78]
    let v2: Option<struct24>;  // [bp-0x78], Other Possible Types: u256
    let v3: struct28;  // [bp-0x78], Other Possible Types: u256
    let v4: u32;  // [bp-0x78]
    let v5: struct640;  // [bp-0x74], Other Possible Types: u32
    let v6: u64;  // [bp-0x70]
    let v7: struct640;  // [bp-0x44]
    let v8: core::fmt::Arguments;  // rcx
    let v9: struct32;  // rdx

    if !uucore::features::selinux::is_selinux_enabled() {
        return struct4 {
            field_0: 11
        };
    }
    v1 = uu_runcon::get_initial_custom_opaque_context(a1, a10, a11);
    match v1 {
        Ok(_) => {
            return struct72 {
                field_0: v1 as i32
                field_4: v5
                field_8: v6
                field_16: *((&v1 as &char + 16) as &i128)
                field_32: *((&v1 as &char + 32) as &i128)
                field_48: *((&v1 as &char + 48) as &i128)
                field_64: *((&v1 as &char + 64) as &i64)
            };
        },
        Err(_) => {
            v0 = v6;
            if a2 {
                v3 = uu_runcon::os_str_to_c_string(a2, a3);
                if v3.field_0 != 17 {
                    return struct72 {
                        field_0: v4
                        field_4: v5
                        field_8: *((&v3 as &char + 8) as &i128)
                        field_24: *((&v3 as &char + 24) as &i128)
                        field_40: *((&v1 as &char + 40) as &i128)
                        field_56: *((&v1 as &char + 56) as &i128)
                    };
                }
                v2 = selinux::OpaqueSecurityContext::set_user(&v0, v6);
                if let Some(_) = v2 {
                    return struct80 {
                        field_0: v4
                        field_4: <UNKNOWN>
                        field_20: <UNKNOWN>
                        field_36: <UNKNOWN>
                        field_52: v9
                        field_56: v8
                        field_64: <UNKNOWN>
                    };
                }
            }
            if a4 {
                v3 = uu_runcon::os_str_to_c_string(a4, a5);
                if v3.field_0 != 17 {
                    return struct72 {
                        field_0: v4
                        field_4: v5
                        field_8: *((&v3 as &char + 8) as &i128)
                        field_24: *((&v3 as &char + 24) as &i128)
                        field_40: *((&v1 as &char + 40) as &i128)
                        field_56: *((&v1 as &char + 56) as &i128)
                    };
                }
                v2 = selinux::OpaqueSecurityContext::set_role(&v0, v6);
                if let Some(_) = v2 {
                    return struct80 {
                        field_0: v4
                        field_4: <UNKNOWN>
                        field_20: <UNKNOWN>
                        field_36: <UNKNOWN>
                        field_52: v9
                        field_56: v8
                        field_64: <UNKNOWN>
                    };
                }
            }
            if a6 {
                v3 = uu_runcon::os_str_to_c_string(a6, a7);
                if v3.field_0 != 17 {
                    return struct72 {
                        field_0: v4
                        field_4: v5
                        field_8: *((&v3 as &char + 8) as &i128)
                        field_24: *((&v3 as &char + 24) as &i128)
                        field_40: *((&v1 as &char + 40) as &i128)
                        field_56: *((&v1 as &char + 56) as &i128)
                    };
                }
                v2 = selinux::OpaqueSecurityContext::set_type(&v0, v6);
                if let Some(_) = v2 {
                    return struct80 {
                        field_0: v4
                        field_4: <UNKNOWN>
                        field_20: <UNKNOWN>
                        field_36: <UNKNOWN>
                        field_52: v9
                        field_56: v8
                        field_64: <UNKNOWN>
                    };
                }
            }
            if !a8 {
                return struct16 {
                    field_0: 17
                    padding_4: <UNKNOWN>
                    field_8: v0
                };
            }
            v3 = uu_runcon::os_str_to_c_string(a8, a9);
            if v3.field_0 != 17 {
                return struct72 {
                    field_0: v4
                    field_4: v5
                    field_8: *((&v3 as &char + 8) as &i128)
                    field_24: *((&v3 as &char + 24) as &i128)
                    field_40: *((&v1 as &char + 40) as &i128)
                    field_56: *((&v1 as &char + 56) as &i128)
                };
            }
            v2 = selinux::OpaqueSecurityContext::set_range(&v0, v6);
            match v2 {
                Some(_) => {
                    return struct80 {
                        field_0: v4
                        field_4: <UNKNOWN>
                        field_20: <UNKNOWN>
                        field_36: <UNKNOWN>
                        field_52: v9
                        field_56: v8
                        field_64: <UNKNOWN>
                    };
                },
                None => {
                    return struct16 {
                        field_0: 17
                        padding_4: <UNKNOWN>
                        field_8: v0
                    };
                },
            }
        },
    }
}
