fn uu_sort::get_rand_string(a0: i64) -> u64 {
    let v0: u64;  // [bp-0x10]

    v0 = rand::rngs::thread::rng();
    rand::rng::Rng::sample(a0, &v0);
    return a0;
}
