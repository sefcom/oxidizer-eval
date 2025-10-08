fn starship::modules::kubernetes::get_current_kube_context_name(a0: u32) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u32;  // rdx
    let v5: u32;  // rsi

    v0 = v2;
    v3 = <serde_json::value::Value as starship::modules::kubernetes::DataValue>::get(a0, "current-context");
    if v3 {
        return core::option::Option<T>::filter(<serde_json::value::Value as starship::modules::kubernetes::DataValue>::as_str(v3), v4);
    }
    return core::option::Option<T>::filter(0, v5);
}
