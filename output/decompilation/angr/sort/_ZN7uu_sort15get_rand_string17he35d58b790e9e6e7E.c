long long uu_sort::get_rand_string::he35d58b790e9e6e7(unsigned long long a0)
{
    unsigned long v0;  // [sp-0x10], Other Possible Types: unsigned long long

    v0 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
    rand::rng::Rng::sample::h9a4d1690a9be04b9(a0, &v0);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::hb7599d4f5721d48e();
    return a0;
}
