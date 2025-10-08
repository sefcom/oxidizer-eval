double fish::screen::Screen::save_status(long long a0)
{
    int v0;  // [bp-0x28], Other Possible Types: char
    char v1;  // [bp-0x18]

    fish::screen::mtime_stdout_stderr(&v0);
    a0[11] = *((int128_t *)&v1);
    *((void*)&a0[10]) = v0;
    return (unsigned long long)v0;
}
