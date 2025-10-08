char fish::highlight::highlight::has_cmdsub(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x28]
    char v1;  // [bp-0x20]

    v0 = 0;
    fish::parse_util::parse_util_locate_cmdsubst_range(&v1, a0, a1, &v0, 1, 0, 0);
    return 2 <= *((int *)&v1);
}
