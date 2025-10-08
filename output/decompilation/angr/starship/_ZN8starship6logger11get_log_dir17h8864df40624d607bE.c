long long starship::logger::get_log_dir(struct_0 *a0)
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned long long
    char v1;  // [bp-0x18]

    std::env::var_os(&v0, "STARSHIP_CACHE.cacheUnable to create log dir : !\n", 14);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        starship::logger::get_log_dir::{{closure}}(a0);
    }
    else
    {
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        a0->field_0 = v0;
    }
    return a0;
}
