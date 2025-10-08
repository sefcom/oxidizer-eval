fn starship::modules::os::get_version(a0: u64, a1: void*) -> long long {
    let v1: u64;  // rax

    v1 = core::option::Option<T>::filter(a1);
    if v1 {
        return <T as alloc::string::SpecToString>::spec_to_string(a0, v1);
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
