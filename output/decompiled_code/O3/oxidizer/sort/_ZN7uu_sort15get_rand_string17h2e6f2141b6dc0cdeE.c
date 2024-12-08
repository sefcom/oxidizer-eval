fn uu_sort::get_rand_string(a0: u32) -> u64 {
    let v0: u64;  // [sp-0x10]

    v0 = rand::rngs::thread::thread_rng();
    rand::rng::Rng::sample(a0, &v0);
    return a0;
}
