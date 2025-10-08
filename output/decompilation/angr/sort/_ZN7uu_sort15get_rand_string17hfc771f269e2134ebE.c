long long uu_sort::get_rand_string(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x10]

    v0 = rand::rngs::thread::rng();
    a0.sample(&v0);
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v0);
    return a0;
}
