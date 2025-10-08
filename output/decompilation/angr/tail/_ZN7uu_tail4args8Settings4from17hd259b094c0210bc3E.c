long long uu_tail::args::Settings::from(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x1cc]
    char v1;  // [bp-0x1cb]
    char v2;  // [bp-0x1ca]
    char v3;  // [bp-0x1c9]
    char v4;  // [bp-0x1c8], Other Possible Types: unsigned long long
    int v5;  // [bp-0x1c8]
    int v6;  // [bp-0x1c0], Other Possible Types: unsigned long long
    char *v7;  // [sp-0x1b8], Other Possible Types: unsigned long long
    char v8;  // [bp-0x1b0], Other Possible Types: unsigned int, unsigned long long
    void* v9;  // [bp-0x1a8]
    int v10;  // [bp-0x1a0]
    char v11;  // [bp-0x190]
    char v12;  // [bp-0x188]
    int v13;  // [bp-0x178], Other Possible Types: void*
    unsigned long v14;  // [sp-0x170]
    unsigned long v15;  // [sp-0x168]
    char v16;  // [sp-0x160]
    unsigned int v17;  // [bp-0x154]
    unsigned long long v18;  // [bp-0x148]
    unsigned long long v19;  // [bp-0x140]
    unsigned long long v20;  // [bp-0x138]
    int v21;  // [bp-0x130]
    int v22;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x118]
    unsigned int v24;  // [sp-0x110]
    unsigned long long v25;  // [bp-0x108]
    unsigned int v26;  // [bp-0x108]
    unsigned int v27;  // [bp-0x104]
    char v28;  // [bp-0x100]
    char v29;  // [bp-0xff]
    char v30;  // [bp-0xfe]
    char v31;  // [bp-0xfd]
    char v32;  // [bp-0xfc]
    char v33;  // [bp-0xf9]
    char *v34;  // [sp-0xf8]
    unsigned long long v35;  // [sp-0xf0]
    char *v36;  // [bp-0xe8]
    unsigned long long v37;  // [bp-0xe0]
    unsigned long long v38[3];  // [bp-0xd8]
    char v39;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0xc8]
    char v41;  // [bp-0xc0]
    int v42;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v43;  // [bp-0xa8]
    int v44;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v45;  // [bp-0x90]
    int v46;  // [bp-0x88], Other Possible Types: char
    unsigned long long v47;  // [bp-0x78]
    char v48;  // [bp-0x70]
    char v50;  // r13b
    unsigned long long v51[3];  // rax
    char v52;  // al
    char v53;  // al
    unsigned long v54;  // rdx
    unsigned long long v55;  // rdx
    unsigned long v56;  // rdx
    char v59;  // al
    char v60;  // al
    unsigned long long v61[3];  // rax
    unsigned long long v62;  // rax
    unsigned long long v63[3];  // rax
    unsigned long long v64;  // rax
    unsigned long long v66[3];  // rax
    unsigned long v67;  // r12
    unsigned long v68;  // r15
    unsigned long long v69;  // rax
    unsigned long long v70;  // rax
    char v71;  // al
    int v72;  // xmm0
    int v73;  // xmm1
    int v74;  // xmm2

    v50 = a1.get_flag("Fretryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID ", 1);
    if (!v50)
        a1.get_flag("retryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID i", 5);
    v2 = 1;
    v4.try_get_one(a1, "followuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is use", 6);
    v51 = "followuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is use".unwrap(6, &v4);
    if (v51)
    {
        if (v50)
        {
            v52 = a1.index_of("Fretryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID ", 1);
            v53 = a1.index_of("followuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is use", 6);
            if ((v52 & 1))
            {
                v55 = v54 & 0xffffffffffffff00 | 1;
                if (!(v53 & v54 <= v54))
                    goto LABEL_49f13c;
            }
        }
        if ((char)v51[1].equal(v51[2], "name", 4))
            goto LABEL_49f13a;
        v55 = 0;
    }
    else
    {
        v55 = v56 & 0xffffffffffffff00 | 2;
        if (v50)
        {
LABEL_49f13a:
            v55 = v55 & 0xffffffffffffff00 | 1;
        }
    }
LABEL_49f13c:
    v17 = v55;
    v59 = a1.get_flag("use-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful on", 11);
    v4.from(a1);
    if (v4 == 5)
    {
        *((unsigned long long *)&a0[8]) = v6;
        *((unsigned long long *)&a0[16]) = v7;
        *((unsigned long long *)a0) = 5;
        return a0;
    }
    v0 = v59;
    v1 = a1.get_flag("verbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when fol", 7);
    v60 = a1.get_flag("-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n", 19);
    v4.default();
    v32 = v17;
    v18 = v4;
    v19 = v6;
    v20 = v7;
    v25 = *((long long *)&v12);
    v28 = 1;
    v24 = *((int *)&v11);
    v29 = v0;
    v30 = v1;
    v31 = v60;
    *((int128_t *)&v21) = *((int128_t *)&v8);
    v22 = v10;
    v4.try_get_one(a1, "sleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not su", 14);
    v61 = "sleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not su".unwrap(14, &v4);
    if (v61)
    {
        v38[0] = v61;
        uucore::features::parser::parse_time::from_str(&v39, v61[1], v61[2], 0);
        if (!((char)(((0 ^ v39) & (0 ^ -(v39))) >> 63)))
        {
            v62 = uu_tail::args::Settings::from::{{closure}}(&v38, &v39);
            *((unsigned long long *)&a0[8]) = v62;
            *((unsigned long long **)&a0[16]) = &g_573010;
            *((unsigned long long *)a0) = 5;
            core::ptr::drop_in_place<uu_tail::args::Settings>(&v18);
            return a0;
        }
        v23 = v40;
        v24 = *((int *)&v41);
    }
    v4.try_get_one(a1, "max-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on thi", 19);
    v63 = "max-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on thi".unwrap(19, &v4);
    if (v63)
    {
        v64 = core::num::<impl u32>::from_ascii_radix(v63[1], v63[2]);
        if (((char)v64 & 1))
        {
            v13 = 0;
            v14 = v63[1];
            v15 = v63[2];
            v16 = 1;
            v34 = &v13;
            v35 = <os_display::Quoted as core::fmt::Display>::fmt;
            *((unsigned long long **)&v5) = &g_572fb0;
            v6 = 1;
            v9 = 0;
            v7 = &v34;
            v8 = 1;
            v42.map_or_else(&(unsigned long long)v5);
            v8 = 1;
            v5 = v42;
            v7 = v43;
            *((double *)&a0[8]) = (unsigned long long)v5.new();
            *((unsigned long long **)&a0[16]) = &g_573010;
            *((unsigned long long *)a0) = 5;
            core::ptr::drop_in_place<uu_tail::args::Settings>(&v18);
            return a0;
        }
        v26 = v64 >> 32;
    }
    v4.try_get_one(a1, "pidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing ", 3);
    v66 = "pidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing ".unwrap(3, &v4);
    if (v66)
    {
        v67 = v66[1];
        v68 = v66[2];
        v69 = core::num::<impl i32>::from_ascii_radix(v67, v68);
        if (((char)v69 & 1))
        {
            v3 = v69 >> 8;
            v13 = 0;
            v14 = v67;
            v15 = v68;
            v16 = 1;
            v34 = &v13;
            v35 = <os_display::Quoted as core::fmt::Display>::fmt;
            v36 = &v3;
            v37 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
            *((unsigned long long **)&v5) = &g_572fd0;
            v6 = 2;
            v9 = 0;
            v7 = &v34;
            v8 = 2;
            v46.map_or_else(&(unsigned long long)v5);
            v8 = 1;
            v5 = v46;
            v7 = v47;
            v70 = (unsigned long long)v5.new();
        }
        else if (v69 >= 0)
        {
            v27 = v69 >> 32;
            goto LABEL_49f552;
        }
        else
        {
            v13 = 0;
            v14 = v67;
            v15 = v68;
            v16 = 1;
            v34 = &v13;
            v35 = <os_display::Quoted as core::fmt::Display>::fmt;
            *((unsigned long long **)&v5) = &g_572fc0;
            v6 = 1;
            v9 = 0;
            v7 = &v34;
            v8 = 1;
            v44.map_or_else(&(unsigned long long)v5);
            v8 = 1;
            v5 = v44;
            v7 = v45;
            v70 = (unsigned long long)v5.new();
        }
        *((unsigned long long *)&a0[8]) = v70;
        *((unsigned long long **)&a0[16]) = &g_572f18;
        *((unsigned long long *)a0) = 5;
        core::ptr::drop_in_place<uu_tail::args::Settings>(&v18);
        return a0;
    }
    else
    {
LABEL_49f552:
        v4.try_get_many(a1);
        v48.unwrap(&v4);
        if (*((long long *)&v48))
        {
            v4.collect(&v48);
            *((int128_t *)&v13) = *((int128_t *)&v6);
            if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
                goto LABEL_49f5a5;
            *((int128_t *)&v6) = (int128_t)v13;
        }
        else
        {
LABEL_49f5a5:
            uu_tail::args::Settings::from::{{closure}}(&v4);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(&(char)v21);
        v22 = v7;
        memcpy(&(char)v21, &v4, 16);
        if ((char)a1.get_flag("verbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when fol", 7) || v22 >= 2)
            v71 = (char)a1.get_flag("quietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: '", 5) ^ 1;
        v30 = v71;
        v72 = *((int128_t *)&v18);
        v73 = *((int128_t *)&v20);
        v74 = (int128_t)(&v21)[8];
        *((int128_t *)&a0[48]) = *((int128_t *)&v23);
        a0[32] = v74;
        a0[16] = v73;
        *(a0) = v72;
        *((unsigned long long *)&a0[64]) = v25;
        *((short *)&a0[72]) = *((short *)&v28);
        *((char *)&a0[74]) = v30;
        *((int *)&a0[75]) = *((int *)&v31);
        *((char *)&a0[79]) = v33;
        return a0;
    }
}
