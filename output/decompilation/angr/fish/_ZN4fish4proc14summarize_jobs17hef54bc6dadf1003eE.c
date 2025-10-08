char fish::proc::summarize_jobs(unsigned int a0, struct_0 **a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v5;  // rbp
    struct_0 **v6;  // rax
    unsigned long long v7[7];  // r14
    unsigned long v8;  // r13
    unsigned long v9;  // rbp
    unsigned long long v10;  // r14
    unsigned long long v11;  // r14
    unsigned long v12;  // r14

    if (!a2)
        return a2;
    v5 = &a1[a2];
    v6 = a1 + 1;
    do
    {
        v7 = *(a1);
        a1 = v6;
        v8 = &v7[2];
        if ((char)v8.is_stopped())
        {
            fish::proc::summary_command(&v0, v8, NULL);
            fish::proc::call_job_summary(a0, v1, v2);
        }
        else
        {
            if (v7[6])
            {
                v9 = v7[5];
                v10 = v7[6] * 224;
                do
                {
                    v11 = v10;
                    if ((char)fish::proc::proc_wants_summary(v8, v9))
                    {
                        fish::proc::summary_command(&v0, v8, v9);
                        fish::proc::call_job_summary(a0, v1, v2);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                    }
                    v9 += 224;
                    v12 = v11 - 224;
                    v10 = v12;
                } while (v11 != 224);
            }
            v5 = v3;
            if (!(char)fish::proc::job_wants_summary(v8))
                continue;
            fish::proc::summary_command(&v0, v8, NULL);
            fish::proc::call_job_summary(a0, v1, v2);
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        v6 = &a1[a1 != v5];
    } while (a1 != v5);
    return a2;
}
