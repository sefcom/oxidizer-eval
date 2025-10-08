fn starship::configs::starship_root::_::<impl serde_core::ser::Serialize for starship::configs::starship_root::StarshipRootConfig>::serialize(a0: u64, a1: i64, a2: u32) -> long long {
    let v0: struct16;  // [bp-0x40]
    let v1: struct24;  // [bp-0x40], Other Possible Types: u192
    let v2: struct8;  // [bp-0x40]
    let v3: struct24;  // [bp-0x40]
    let v4: struct24;  // [sp-0x40], Other Possible Types: u192
    let v5: i64;  // [bp-0x38]
    let v6: i8;  // [bp-0x30]
    let v8: struct20;  // rax
    let v9: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // rcx

    v0 = <serde::private::ser::FlatMapSerializer<M> as serde_core::ser::Serializer>::serialize_struct(a2);
    if v0.field_0 != 9223372036854775813 {
        v9 = *(&v6 as &i64);
        return struct24 {
            field_0: v0.field_0
            field_8: v5
            field_16: v9
        };
    }
    v4 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(v5, "$schema", a1);
    if v4.field_0 as i64 == 9223372036854775813 {
        v4 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(v5, "format", a1 + 24);
        if v4.field_0 as i64 == 9223372036854775813 {
            v4 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(v5, "right_format", a1 + 48);
            if v4.field_0 as i64 == 9223372036854775813 {
                v4 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(v5, "continuation_prompt", a1 + 72);
                if v4.field_0 as i64 == 9223372036854775813 {
                    v1 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(v5, "scan_timeout", a1 + 240);
                    if v1.field_0 as i64 != 9223372036854775813 {
                        return struct24 {
                            field_0: v3
                            field_8: *((&v1 as &char + 8) as &i128)
                        };
                    }
                    v1 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(v5, "command_timeout", a1 + 248);
                    if v1.field_0 as i64 == 9223372036854775813 {
                        v1 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(v5, "add_newline", a1 + 0x100);
                        if v1.field_0 as i64 == 9223372036854775813 {
                            v1 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(v5, "follow_symlinks", a1 + 257);
                            if v1.field_0 as i64 == 9223372036854775813 {
                                if *((a1 + 168) as &i64) == 0x8000000000000000 {
                                    v2 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::end();
                                } else {
                                    v1 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(v5, a1 + 168);
                                }
                                if v1.field_0 as i64 == 9223372036854775813 {
                                    v1 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(v5, a1 + 192);
                                    if v1.field_0 as i64 == 9223372036854775813 {
                                        v1 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(v5, a1 + 96);
                                        if v1.field_0 as i64 == 9223372036854775813 {
                                            return <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::end(a0);
                                        }
                                    }
                                }
                            }
                        }
                    }
                    return struct24 {
                        field_0: v3
                        field_8: *((&v1 as &char + 8) as &i128)
                    };
                }
            }
        }
    }
    v8 = *((&v4 as &char + 16) as &i64);
    return struct24 {
        field_0: v4 as i128
        field_16: v8
    };
}
