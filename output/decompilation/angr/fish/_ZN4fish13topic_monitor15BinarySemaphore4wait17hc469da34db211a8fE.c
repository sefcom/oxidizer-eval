long long fish::topic_monitor::BinarySemaphore::wait(struct_0 *a0)
{
    char v0;  // [bp-0x29]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    char v3;  // [bp-0x20]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    if ((a0->field_0 & 1))
    {
        do
        {
            while (true)
            {
                v0 = 0;
                v5 = nix::unistd::read(&v1, &a0->padding_1[3], &v0);
                if (v1 != 1)
                {
                    if (*((long long *)&v3) == 1)
                        return v5;
                }
                else
                {
                    if (v2 != 4)
                        break;
                }
            }
        } while (v2 == 11);
        a0.die("readend\nfull", 4); /* do not return */
    }
    else
    {
        while (true)
        {
            v6 = sem_wait(a0->field_8);
            if ((unsigned int)v6 >= 0)
            {
                return v6;
            }
            else if ((int)nix::errno::<impl nix::errno::consts::Errno>::last() != 4)
            {
                a0.die("sem_waitfeaturesDebug onVisa tidKomenda\ni", 8); /* do not return */
            }
        }
    }
}
