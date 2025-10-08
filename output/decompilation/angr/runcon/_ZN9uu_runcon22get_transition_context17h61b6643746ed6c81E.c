long long uu_runcon::get_transition_context(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xf0], Other Possible Types: unsigned int
    unsigned short v1;  // [bp-0xec]
    char v2;  // [bp-0xea]
    char v3;  // [sp-0xe8]
    char v4;  // [bp-0xe0]
    char v5;  // [bp-0xdc]
    char v6;  // [bp-0xda]
    char v7;  // [bp-0xd8]
    char v8;  // [bp-0xd0]
    char v9;  // [bp-0xcc]
    char v10;  // [bp-0xca]
    char v11;  // [bp-0xc8]
    char v12;  // [bp-0xc0]
    unsigned short v13;  // [bp-0xba]
    char v14;  // [bp-0xb8]
    char v15;  // [bp-0xa8]
    int v16;  // [bp-0x98], Other Possible Types: char
    int v17;  // [bp-0x88], Other Possible Types: char
    unsigned int v18;  // [bp-0x78]
    char v19;  // [bp-0x68]
    char v20;  // [bp-0x58]
    int v21;  // [bp-0x48]
    int v22;  // [bp-0x38]
    unsigned int v23;  // [bp-0x28]
    int v25;  // xmm0
    int v26;  // xmm0
    int v27;  // xmm1
    unsigned int v28;  // ecx
    int v29;  // xmm0
    int v30;  // xmm1
    int v31;  // xmm0
    int v32;  // xmm1

    v0.from_name("processgetfileconGetting security contextSetting security context userSetting security context roleSetting security context typeSetting security context rangesrc/uu/runcon/src/runcon.rs", 7);
    if (v0 != 10)
    {
        *((unsigned short *)&a0[54]) = v13;
        v31 = *((int128_t *)&v2);
        v32 = *((int128_t *)&v6);
        *((int128_t *)&a0[38]) = *((int128_t *)&v10);
        a0[22] = v32;
        a0[6] = v31;
        *((unsigned int *)a0) = v0;
        *((unsigned short *)&a0[4]) = v1;
        *((char **)&a0[56]) = "Getting process security classComputing result of process transitionprocessgetfileconGetting security contextSetting security context userSetting security context roleSetting security context typeSetting security context rangesrc/uu/runcon/src/runcon.rs";
        *((unsigned long long *)&a0[64]) = 30;
        return "Getting process security classComputing result of process transitionprocessgetfileconGetting security contextSetting security context userSetting security context roleSetting security context typeSetting security context rangesrc/uu/runcon/src/runcon.rs";
    }
    v0.of_path(a1, a2);
    if (v0 != 10)
    {
        *((long long *)&a0[48]) = *((long long *)&v12);
        v29 = *((int128_t *)&v0);
        v30 = *((int128_t *)&v4);
        *((int128_t *)&a0[32]) = *((int128_t *)&v8);
        a0[16] = v30;
        *(a0) = v29;
        *((char **)&a0[56]) = "Getting security context of command fileGetting process security classComputing result of process transitionprocessgetfileconGetting security contextSetting security context userSetting security context roleSetting security context typeSetting security con";
        *((unsigned long long *)&a0[64]) = 40;
        return "Getting security context of command fileGetting process security classComputing result of process transitionprocessgetfileconGetting security contextSetting security context userSetting security context roleSetting security context typeSetting security con";
    }
    else if (*((int *)&v3) == 2)
    {
        return a0.from_io1("getfileconGetting security contextSetting security context userSetting security context roleSetting security context typeSetting security context rangesrc/uu/runcon/src/runcon.rs", 10, a1, a2, 261993005058);
    }
    else
    {
        memcpy(&v15, &v7, 16);
        memcpy(&v14, &v3, 16);
        v0.current(0);
        if (v0 == 10)
        {
            memcpy(&v19, &v3, 16);
            memcpy(&v20, &v7, 16);
            v0.of_labeling_decision(&v19, &v14, v1, 1, 0);
            if (v0 == 10)
            {
                v25 = *((int128_t *)&v3);
                *((int128_t *)&a0[24]) = *((int128_t *)&v7);
                a0[8] = v25;
                *((unsigned int *)a0) = 17;
            }
            else
            {
                *((long long *)&a0[48]) = *((long long *)&v12);
                v26 = *((int128_t *)&v0);
                v27 = *((int128_t *)&v4);
                *((int128_t *)&a0[32]) = *((int128_t *)&v8);
                a0[16] = v27;
                *(a0) = v26;
                *((char **)&a0[56]) = "Computing result of process transitionprocessgetfileconGetting security contextSetting security context userSetting security context roleSetting security context typeSetting security context rangesrc/uu/runcon/src/runcon.rs";
                *((unsigned long long *)&a0[64]) = 38;
            }
            core::ptr::drop_in_place<selinux::SecurityContext>(&v19);
        }
        else
        {
            v18 = *((int *)&v9);
            memcpy(&v17, &v5, 16);
            memcpy(&v16, &v1, 16);
            *((int128_t *)&a0[40]) = *((int128_t *)&v11);
            v21 = v16;
            v22 = v17;
            v28 = v18;
            v23 = v18;
            *((unsigned int *)&a0[36]) = v18;
            a0[20] = v17;
            a0[4] = v16;
            *((unsigned int *)a0) = v0;
            *((char **)&a0[56]) = "Getting security context of the current processCreating new contextSetting new security contextChecking security contextGetting security context of command fileGetting process security classComputing result of process transitionprocessgetfileconGetting sec";
            *((unsigned long long *)&a0[64]) = 47;
        }
        return (unsigned long long)core::ptr::drop_in_place<selinux::SecurityContext>(&v14);
    }
}
