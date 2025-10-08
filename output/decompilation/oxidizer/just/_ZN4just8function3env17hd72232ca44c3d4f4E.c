fn just::function::env(a0: u64, a1: &void*, a2: u64, a3: void*, a4: u32, a5: u64) -> long long {
    if a4 {
        just::function::env_var_or_default(a0, a1, a2, a3, a4, a5);
    } else {
        just::function::env_var(a0, a1, a2, a3);
    }
    return a0;
}
