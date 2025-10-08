long long uu_sort::make_sort_mode_arg(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x7b0]
    char v1;  // [bp-0x530]
    char v2;  // [bp-0x2b0]

    v2.new(a1, a2);
    v1.short(&v2, a3);
    v2.long(&v1, a1, a2);
    v1.help(&v2, a4, a5);
    v0.action(&v1, 2);
    if (!(char)"general-numeric-sorthuman-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHA".equal(20, a1, a2))
    {
        memcpy(&v2, &v0, 640);
        v1.conflicts_with(&v2, "general-numeric-sorthuman-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHA", 20);
        memcpy(&v0, &v1, 640);
    }
    if (!(char)"human-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.".equal(18, a1, a2))
    {
        memcpy(&v2, &v0, 640);
        v1.conflicts_with(&v2, "human-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.", 18);
        memcpy(&v0, &v1, 640);
    }
    if (!(char)"month-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\n".equal(10, a1, a2))
    {
        memcpy(&v2, &v0, 640);
        v1.conflicts_with(&v2, "month-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\n", 10);
        memcpy(&v0, &v1, 640);
    }
    if (!(char)"numeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by ".equal(12, a1, a2))
    {
        memcpy(&v2, &v0, 640);
        v1.conflicts_with(&v2, "numeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by ", 12);
        memcpy(&v0, &v1, 640);
    }
    if (!(char)"version-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are ".equal(12, a1, a2))
    {
        memcpy(&v2, &v0, 640);
        v1.conflicts_with(&v2, "version-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are ", 12);
        memcpy(&v0, &v1, 640);
    }
    if (!(char)"random-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are separated by".equal(11, a1, a2))
    {
        memcpy(&v2, &v0, 640);
        v1.conflicts_with(&v2, "random-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are separated by", 11);
        memcpy(&v0, &v1, 640);
    }
    return memcpy(a0, &v0, 640);
}
