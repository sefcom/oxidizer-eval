long long fish::fs::LockedFile::new(void* a0, unsigned int a1, unsigned long long a2, void* a3)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x34]
    unsigned long v3;  // rbp
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long v6;  // r14
    unsigned int v7;  // edx
    unsigned int *v8;  // rax
    unsigned long long v9;  // rbp
    unsigned int *v10;  // rax

    v3 = a1;
    v4 = fish::wutil::wdirname(a2, a3);
    if ((char)fish::path::path_remoteness(v4, v5) == 2)
    {
        *((long long *)&a0[8]) = 36.new("Directory considered remote. Locking is disabled on remote file systems.fsync should only ever return 0 or -1", 72);
        *((unsigned int *)a0) = 1;
        return a0;
    }
    v6 = (unsigned int)v5;
    if (((char)fish::fds::wopen_cloexec(v4, v5, 0, 0) & 1))
    {
        *((unsigned long long *)&a0[8]) = v6 * 0x100000000 | 2;
        *((unsigned int *)a0) = 1;
        return a0;
    }
    else if ((char)v3 == 2)
    {
        v7 = 0;
        if (flock(v6 & 4294967295, 1) == -1)
        {
            v8 = __errno_location();
            do
            {
                v0 = *(v8) * 0x100000000 | 2;
                if ((char)v0.kind() != 35)
                    goto LABEL_13b377e;
                core::ptr::drop_in_place<std::io::error::Error>(&v0);
            } while (flock(v6 & 4294967295, 1) == -1);
            v7 = 0;
            goto LABEL_13b374c;
        }
    }
    else
    {
        v1 = v3;
        if (flock(v6 & 4294967295, 2) == -1)
        {
            v10 = __errno_location();
            while (true)
            {
                v0 = *(v10) * 0x100000000 | 2;
                if ((char)v0.kind() != 35)
                    break;
                core::ptr::drop_in_place<std::io::error::Error>(&v0);
                if (flock(v6 & 4294967295, 2) != -1)
                    goto LABEL_13b373a;
            }
LABEL_13b377e:
            *((unsigned long long *)&a0[8]) = v9;
        }
        else
        {
LABEL_13b373a:
            v7 = (((char)v1 & 1) ? 64 : 1089);
LABEL_13b374c:
            if (!((char)fish::fds::wopen_cloexec(a2, a3, v7, 384) & 1))
            {
                *((unsigned int *)&a0[4]) = v5;
                *((unsigned int *)&a0[8]) = v6;
                *((unsigned int *)a0) = 0;
                return a0;
            }
            *((unsigned long long *)&a0[8]) = v5 * 0x100000000 | 2;
        }
        *((unsigned int *)a0) = 1;
        core::ptr::drop_in_place<std::fs::File>(v6);
        return a0;
    }
}
