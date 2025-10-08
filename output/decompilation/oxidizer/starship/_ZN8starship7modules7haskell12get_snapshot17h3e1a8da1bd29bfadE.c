fn starship::modules::haskell::get_snapshot(a0: i64, a1: void*) -> int {
    let v0: Option<struct72>;  // [bp-0x90]
    let v1: struct20;  // [bp-0x88]
    let v2: u64;  // [bp-0x80]
    let v3: u128;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: struct72;  // [bp-0x68]
    let v6: Option<struct24>;  // [bp-0x58]
    let v7: struct24;  // [bp-0x58]
    let v8: Result<struct48, struct32>;  // [bp-0x58]
    let v9: i64;  // [bp-0x50]
    let v10: struct20;  // [bp-0x28]
    let v13: core::option::Option<u8>;  // rdx
    let v14: struct32;  // rax
    let v15: u32;  // rdx
    let v16: struct24;  // rax
    let v17: Result<(), Error>;  // rdx

    if !starship::modules::haskell::is_stack_project(a1) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v6 = starship::context::Context::read_file_from_pwd(a1, "stack.yaml");
    if let Some(_) = v6 {
        v13 = *((&v6 as &char + 16) as &i64);
        v5 = *((&v6 as &char + 16) as &i64);
        v3 = v6 as i128 as u128;
        v8 = yaml_rust2::yaml::YamlLoader::load_from_str(v4, v13);
        if let Ok(_) = v8 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v10 = *((&v8 as &char + 16) as &i128);
        if v9 != 0x8000000000000000 {
            v1 = v10;
            v0 = v9;
            if !v2 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v14 = <yaml_rust2::yaml::Yaml as core::ops::index::Index<&str>>::index(v1.field_0, "resolver");
            v16 = core::option::Option<T>::filter(core::option::Option<T>::or_else((*(v14 as &i8) == 2 ? *((v14 + 16) as &i64) : 0), *((v14 + 24) as &i64), v1.field_0, v2), v15);
            v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec((v16 ? v16 : &g_540368), v17);
            return struct24 {
                field_0: v7.field_0
                field_16: v7.field_16
            };
        }
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
