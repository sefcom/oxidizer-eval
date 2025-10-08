long long fish::topic_monitor::BinarySemaphore::post(struct_0 *a0)
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned int
    char v1;  // [bp-0x1c]
    unsigned long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdi
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    v3 = &a0->field_8;
    if (a0->field_0 == 1)
    {
        v4 = nix::unistd::write(&v0, v3);
        if (v0 != 1)
            return v4;
        while (true)
        {
            if (*((int *)&v1) != 4)
                v5.die("writegroupzZq", 5); /* do not return */
            v6 = nix::unistd::write(&v0, v3);
            if (!(v0 & 1))
                return v6;
        }
    }
    else
    {
        v7 = sem_post(*((long long *)v3));
        if ((unsigned int)v7 < 0)
            a0.die("sem_postEnablingvar_nameisatty.1key_nextProzess\nAdd feedPort SSH", 8); /* do not return */
        return v7;
    }
}
