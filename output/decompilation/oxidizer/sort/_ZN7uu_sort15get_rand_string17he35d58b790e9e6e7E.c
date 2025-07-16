fn uu_sort::get_rand_string() -> : struct16 {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x10]
    let v2: u64;  // rdi

    v0 = rand::rngs::thread::thread_rng();
    rand::rng::Rng::sample(v2, &v0);
    return;
}
