long long uu_split::platform::unix::paths_refer_to_same_file(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x150]
    char v1;  // [bp-0xb8]

    if ((char)a0.equal(a1, "-rlsrc/uu/split/src/strategy.rs", 1))
    {
        std::io::stdio::stdin();
        v0.from_file();
    }
    else
    {
        v0.from_path(a0, a1);
    }
    v1.from_path(a2, a3);
    return uucore::features::fs::infos_refer_to_same_file(&v0, &v1);
}
