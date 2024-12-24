long long uu_sort::get_rand_string::h2e6f2141b6dc0cde(unsigned long long a0)
{
    unsigned long v0;  // [sp-0x10], Other Possible Types: unsigned long long

    v0 = rand::rngs::thread::thread_rng::h2343e3718037645d();
    rand::rng::Rng::sample::h2d89e61f4d2e08f8(a0, &v0);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h688f823af9c1043d(&v0);
    return a0;
}
