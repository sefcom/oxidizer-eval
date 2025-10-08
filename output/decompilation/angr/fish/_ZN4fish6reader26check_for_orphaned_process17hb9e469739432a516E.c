char fish::reader::check_for_orphaned_process(unsigned long a0, unsigned int a1)
{
    unsigned long v0;  // [bp-0x18]
    char v1;  // [bp-0x15]
    unsigned int v2;  // [bp-0x14]
    unsigned long v4;  // rax
    char v5;  // bpl
    char *v6;  // rax
    unsigned int v7;  // edx

    v0 = v4;
    if (((char)a0 & 63) || kill(a1, 0) >= 0)
    {
        if (!((char)a0 & 127))
            goto LABEL_1406b75;
LABEL_1406b5e:
    }
    else
    {
        v5 = 1;
        if ((int)errno::errno() != 3)
        {
            if (((char)a0 & 64))
                goto LABEL_1406b5e;
LABEL_1406b75:
            v6 = ctermid(NULL);
            if (!v6)
            {
                fish::wutil::perror("ctermidTTY protocols should not be active", 7);
                fish::common::exit_without_destructors(1); /* do not return */
            }
            v2 = open(v6, 0x800, v7);
            if (v2 < 0)
            {
                fish::wutil::perror("openoper", 4);
                fish::common::exit_without_destructors(1); /* do not return */
            }
            v1 = 0;
            if (read(v2, &v1, 1) < 0)
                v5 = (int)errno::errno() == 5;
            core::ptr::drop_in_place<fish::fds::AutoCloseFd>(&v2);
        }
    }
    return 4097 <= a0 | v5;
}
