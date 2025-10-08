fn just::settings::_::<impl serde_core::ser::Serialize for just::settings::Settings>::serialize(a0: i64, a1: u64) -> long long {
    let v0: struct9;  // [bp-0x18], Other Possible Types: u64
    let v1: u8;  // [bp-0x10]
    let v3: u8;  // cl
    let v4: u64;  // rax
    let v5: u64;  // rax
    let v6: u64;  // rax
    let v7: struct24;  // rax
    let v8: struct32;  // rax
    let v9: struct81;  // rax
    let v10: struct72;  // rax
    let v11: struct16;  // rax
    let v12: struct18;  // rax
    let v13: struct72;  // rax
    let v14: struct56;  // rax
    let v15: struct24;  // rax
    let v16: struct24;  // rax
    let v17: u64;  // rax
    let v18: struct24;  // rax
    let v19: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // rax
    let v20: core::fmt::Arguments;  // rax
    let v21: core::fmt::rt::Argument;  // rax
    let v22: struct140;  // rax

    v0 = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(a1, 19);
    v3 = v1;
    if v1 == 3 {
        return v0.field_0;
    }
    v0 = v0.field_0;
    v4 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "allow_duplicate_recipes", *((a0 + 312) as &i32));
    if v4 {
        return v4;
    }
    v5 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "allow_duplicate_variables", *((a0 + 313) as &i8));
    if v5 {
        return v5;
    }
    v6 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "dotenv_filename", a0);
    if v6 {
        return v6;
    }
    v7 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "dotenv_load", *((a0 + 314) as &i8));
    if v7 {
        return v7;
    }
    v8 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "dotenv_override", *((a0 + 315) as &i8));
    if v8 {
        return v8;
    }
    v9 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "dotenv_path", a0 + 24);
    if v9 {
        return v9;
    }
    v10 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "dotenv_required", *((a0 + 316) as &i32));
    if v10 {
        return v10;
    }
    v11 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "export", *((a0 + 317) as &i8));
    if v11 {
        return v11;
    }
    v12 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "fallback", *((a0 + 318) as &i8));
    if v12 {
        return v12;
    }
    v13 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "ignore_comments", *((a0 + 319) as &i8));
    if v13 {
        return v13;
    }
    v14 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "no_exit_message", *((a0 + 320) as &i32));
    if v14 {
        return v14;
    }
    v15 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "positional_arguments", *((a0 + 321) as &i8));
    if v15 {
        return v15;
    }
    v16 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "quiet", *((a0 + 322) as &i8));
    if v16 {
        return v16;
    }
    v17 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "shell", a0 + 120);
    if v17 {
        return v17;
    }
    v18 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "tempdir", a0 + 192);
    if v18 {
        return v18;
    }
    v19 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "unstable", *((a0 + 323) as &i8));
    if v19 {
        return v19;
    }
    v20 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "windows_powershell", *((a0 + 324) as &i32));
    if v20 {
        return v20;
    }
    v21 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "windows_shell", a0 + 216);
    if v21 {
        return v21;
    }
    v22 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "working_directory", a0 + 288);
    if !v22 {
        return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(v0, *(&v0.field_8 as &i32));
    }
    return v22;
}
