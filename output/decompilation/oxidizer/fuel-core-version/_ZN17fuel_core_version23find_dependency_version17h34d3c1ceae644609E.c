fn fuel_core_version::find_dependency_version(a1: &struct32) -> Option<struct24> {
    let a0: u64;  // rdi
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: i64;  // rax
    let v4: u32;  // ecx
    let v5: i64;  // rax

    v1 = toml::value::Value::get(a1, "workspace");
    if !v1 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v2 = toml::value::Value::get(v1, "dependencies");
    if !v2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v3 = toml::value::Value::get(v2, "fuel-core");
    if !v3 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    match (v4) {
        0 => {
            <alloc::string::String as core::clone::Clone>::clone(a0, v3 + 8);
            return;
        }
        6 => {
            v5 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*((v3 + 8) as &i64), *((v3 + 16) as &i64));
            if v5 && !*(v5 as &i8) {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, *((v5 + 16) as &i64), *((v5 + 24) as &i64));
                return;
            }
        }
        _ => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
}
