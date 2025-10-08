long long uu_chcon::change_file_context(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x1b8]
    char v1;  // [bp-0x1b0], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0x1b0]
    char v3;  // [bp-0x1ac], Other Possible Types: unsigned int
    unsigned long long v4;  // [bp-0x1a8]
    char v5;  // [bp-0x1a8]
    int v6;  // [bp-0x1a0], Other Possible Types: unsigned int
    unsigned long long v8;  // [bp-0x198]
    char v9;  // [bp-0x190], Other Possible Types: unsigned int
    unsigned int v10;  // [bp-0x18c]
    unsigned long long v11;  // [bp-0x188]
    char v12;  // [bp-0x180], Other Possible Types: unsigned int
    unsigned long long v14;  // [bp-0x178]
    unsigned long long v15;  // [bp-0x170]
    unsigned long long v16;  // [bp-0x168]
    int v17;  // [bp-0x168]
    unsigned long v18;  // [bp-0x160]
    int v19;  // [bp-0x158], Other Possible Types: unsigned long long
    int v20;  // [bp-0x158]
    unsigned short v21;  // [bp-0x150]
    int v22;  // [bp-0x148], Other Possible Types: char
    unsigned long long v23;  // [bp-0x138]
    int v24;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x118]
    unsigned int v26;  // [bp-0x10c]
    int v27;  // [bp-0x108]
    unsigned long long v28;  // [bp-0x100]
    unsigned long long v29;  // [bp-0xf8]
    int v30;  // [bp-0xe8]
    int v31;  // [bp-0xe4]
    char v32;  // [bp-0xdc]
    int v33;  // [bp-0xd8]
    unsigned long long v34;  // [bp-0xd4]
    char v35;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0xb8]
    int v38;  // [bp-0xb0], Other Possible Types: char
    unsigned long long v39;  // [bp-0x78]
    unsigned long long v40;  // [bp-0x70]
    char v41;  // [bp-0x68]
    char v42;  // [bp-0x60]
    unsigned long long v44;  // rbp
    unsigned long v45;  // rax
    int v46;  // xmm0
    int v47;  // xmm0
    int v48;  // xmm1
    int v49;  // xmm2
    int v50;  // xmm3
    int v51;  // xmm0
    int v52;  // xmm0
    int v53;  // xmm1
    int v54;  // xmm2
    unsigned long long v55;  // rax
    unsigned long long v56;  // xmm0lq
    unsigned long long v57;  // rdx
    unsigned long long v58;  // r8
    unsigned long long v59;  // xmm0lq
    int v60;  // xmm2
    int v61;  // xmm3
    unsigned long long v62;  // rbp
    unsigned int v63;  // eax
    int v64;  // xmm2
    int v65;  // xmm3
    int v66;  // xmm2
    int v67;  // xmm3
    int v68;  // xmm2
    int v69;  // xmm3
    int v70;  // xmm0
    int v71;  // xmm1
    int v72;  // xmm1
    int v73;  // xmm2
    unsigned long long v74;  // rbp
    unsigned long v75;  // r12
    int v76;  // xmm0
    int v77;  // xmm1
    int v78;  // xmm0
    int v79;  // xmm1
    int v80;  // xmm2
    int v81;  // xmm0
    int v82;  // xmm1
    int v83;  // xmm0
    int v84;  // xmm1
    unsigned int v85;  // [bp-0x19c]
    unsigned int v86;  // [bp-0x17c]

    v44 = a1->field_18;
    if (0x8000000000000000 + v44 - 1 <= 1)
    {
        v1.to_c_string(a2);
        v45 = v1;
        if ((unsigned int)v45 != 18)
        {
            v49 = *((int128_t *)&v9);
            v50 = *((int128_t *)&v12);
            memcpy(&v32, &(char)v6, 16);
            *((int128_t *)&v30) = *((int128_t *)&v3);
            *((unsigned long long *)&a0[64]) = v15;
            a0[48] = v50;
            a0[32] = v49;
            *((int128_t *)&a0[16]) = *((int128_t *)&v32);
            *((int128_t *)&a0[4]) = (int128_t)v30;
            *((unsigned int *)a0) = v45;
            return v45;
        }
        v34 = v8;
        v46 = *((int128_t *)&v5);
        v31 = v46;
        v24 = v46;
        v25 = v34;
        if ((int)v24 == 2)
        {
            core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<core::ffi::c_str::CStr>>>(&v24);
            return a0.from_io1("Setting security contextCreating security contextCString::new()/std::fs::symlink_metadata: warning: It is dangerous to operate recursively on '/'. Use -- to override this failsafe.\nIt is dangerous to operate recursively on  (same as '/'). Use --Circular di", 24, a3, a4);
        }
        v29 = v34;
        *((int128_t *)&v27) = (int128_t)v31;
        v19 = v28;
        v16 = 1;
        v18 = v29 - 1;
        v21 = 0;
        v1.set_for_path(v28, a3, a4, a1->field_7a);
        if (v1 == 10)
        {
            *((unsigned int *)a0) = 18;
        }
        else
        {
            *((long long *)&a0[48]) = *((long long *)&v12);
            v47 = *((int128_t *)&v1);
            v48 = (int128_t)v6;
            *((int128_t *)&a0[32]) = *((int128_t *)&v9);
            a0[16] = v48;
            *(a0) = v47;
            *((char **)&a0[56]) = "Setting security contextCreating security contextCString::new()/std::fs::symlink_metadata: warning: It is dangerous to operate recursively on '/'. Use -- to override this failsafe.\nIt is dangerous to operate recursively on  (same as '/'). Use --Circular di";
            *((unsigned long long *)&a0[64]) = 24;
        }
        core::ptr::drop_in_place<selinux::SecurityContext>(&v16);
        return (unsigned long long)core::ptr::drop_in_place<alloc::borrow::Cow<core::ffi::c_str::CStr>>(&(char)v27);
    }
    else
    {
        v26 = a1->field_7a;
        (char)v2.of_path(a3, a4, a1->field_7a);
        if (v2 != 10)
        {
            *((long long *)&a0[48]) = *((long long *)&v12);
            v83 = *((int128_t *)&v2);
            v84 = (int128_t)v6;
            *((int128_t *)&a0[32]) = *((int128_t *)&v9);
            a0[16] = v84;
            *(a0) = v83;
            *((char **)&a0[56]) = "Getting security contextApplying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/std::fs::symlink_metadata: warning: It is dangerous to operate recursively on '/'. Use -";
            *((unsigned long long *)&a0[64]) = 24;
            return "Getting security contextApplying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/std::fs::symlink_metadata: warning: It is dangerous to operate recursively on '/'. Use -";
        }
        else if (*((int *)&v5) == 2)
        {
            return a0.from_io1("Applying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/std::fs::symlink_metadata: warning: It is dangerous to operate recursively on '/'. Use -- to override this fails", 51, a3, a4);
        }
        else
        {
            v51 = *((int128_t *)&v5);
            *((int128_t *)&v33) = *((int128_t *)&v8);
            v30 = v51;
            (char)v16.to_c_string(&(char)v30);
            if ((int)v16 != 10)
            {
                *((unsigned long long *)&a0[48]) = v23;
                v81 = (int128_t)v17;
                v82 = (int128_t)v20;
                a0[32] = v22;
                a0[16] = v82;
                *(a0) = v81;
                *((char **)&a0[56]) = "Getting security contextApplying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/std::fs::symlink_metadata: warning: It is dangerous to operate recursively on '/'. Use -";
                *((unsigned long long *)&a0[64]) = 24;
            }
            else if ((int)v18 == 2)
            {
                (char)v2.from_io1("Applying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/std::fs::symlink_metadata: warning: It is dangerous to operate recursively on '/'. Use -- to override this fails", 51, a3, a4);
                *((unsigned long long *)&a0[64]) = v15;
                v52 = *((int128_t *)&v2);
                v53 = *((int128_t *)&(&v5)[8]);
                v54 = *((int128_t *)&v9);
                *((int128_t *)&a0[48]) = *((int128_t *)&v12);
                a0[32] = v54;
                a0[16] = v53;
                *(a0) = v52;
            }
            else
            {
                v29 = *((long long *)&v21);
                *((int128_t *)&v27) = *((int128_t *)&v18);
                v39 = v28;
                v40 = v29;
                v41.from_c_str(v28);
                if (*((int *)&v41) == 10)
                {
                    v55 = *((long long *)&v42);
LABEL_4651c0:
                    v24 = v55;
                    if (v44 != 0x8000000000000000)
                    {
                        uu_chcon::os_str_to_c_string(&v35, a1->field_20, a1->field_28);
                        if (*((int *)&v35) == 18)
                        {
                            v57 = v36;
                            v58 = *((long long *)&v38);
                            goto LABEL_46528d;
                        }
                        uu_chcon::change_file_context::{{closure}}(&(char)v2, a3, a4, &v35);
                        v59 = *((long long *)&v2);
                        v57 = v4;
                        v58 = *((long long *)&v6);
                        v60 = *((int128_t *)&v11);
                        v61 = *((int128_t *)&v14);
                        *((int128_t *)&v17) = *((int128_t *)&v8);
                        v20 = v60;
                        v22 = v61;
                        if (v2 != 18)
                            goto LABEL_4655b5;
LABEL_46528d:
                        v0 = v57;
                        v62 = v58;
                        (char)v2.set_user(&v24, v57);
                        v63 = v2;
                        if (v2 == 10)
                            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v0, v62);
                    }
                    if (a1->field_30 != 0x8000000000000000)
                    {
                        uu_chcon::os_str_to_c_string(&v35, a1->field_38, a1->field_40);
                        if ((int)v35 == 18)
                        {
                            v57 = v36;
                            v58 = (long long)v38;
                            goto LABEL_465353;
                        }
                        uu_chcon::change_file_context::{{closure}}(&(char)v2, a3, a4, &v35);
                        v59 = *((long long *)&v2);
                        v57 = v4;
                        v58 = *((long long *)&v6);
                        v64 = *((int128_t *)&v11);
                        v65 = *((int128_t *)&v14);
                        *((int128_t *)&v17) = *((int128_t *)&v8);
                        v20 = v64;
                        v22 = v65;
                        if (v2 != 18)
                            goto LABEL_4655b5;
LABEL_465353:
                        v0 = v57;
                        v62 = v58;
                        (char)v2.set_role(&v24, v57);
                        v63 = v2;
                        if (v2 == 10)
                            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v0, v62);
                    }
                    if (a1->field_48 != 0x8000000000000000)
                    {
                        uu_chcon::os_str_to_c_string(&v35, a1->field_50, a1->field_58);
                        if ((int)v35 == 18)
                        {
                            v57 = v36;
                            v58 = (long long)v38;
                            goto LABEL_465419;
                        }
                        uu_chcon::change_file_context::{{closure}}(&(char)v2, a3, a4, &v35);
                        v59 = *((long long *)&v2);
                        v57 = v4;
                        v58 = *((long long *)&v6);
                        v66 = *((int128_t *)&v11);
                        v67 = *((int128_t *)&v14);
                        *((int128_t *)&v17) = *((int128_t *)&v8);
                        v20 = v66;
                        v22 = v67;
                        if (v2 != 18)
                            goto LABEL_4655b5;
LABEL_465419:
                        v0 = v57;
                        v62 = v58;
                        (char)v2.set_type(&v24, v57);
                        v63 = v2;
                        if (v2 == 10)
                        {
                            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v0, v62);
                            goto LABEL_46544f;
                        }
                    }
                    else
                    {
LABEL_46544f:
                        if (a1->field_60 == 0x8000000000000000)
                        {
LABEL_465511:
                            (char)v2.to_c_string(&v24);
                            if (v2 == 10)
                            {
                                v74 = *((long long *)&v6);
                                v75 = v74 - 1;
                                if ((char)v39.equal(v40 - 1, v4, v75))
                                {
                                    *((unsigned int *)a0) = 18;
                                }
                                else
                                {
                                    v19 = v4;
                                    v16 = 1;
                                    v18 = v75;
                                    v21 = 0;
                                    (char)v2.set_for_path(v4, a3, a4, v26);
                                    if (v2 == 10)
                                    {
                                        *((unsigned int *)a0) = 18;
                                    }
                                    else
                                    {
                                        *((long long *)&a0[48]) = *((long long *)&v12);
                                        v76 = *((int128_t *)&v2);
                                        v77 = *((int128_t *)&v6);
                                        *((int128_t *)&a0[32]) = *((int128_t *)&v9);
                                        a0[16] = v77;
                                        *(a0) = v76;
                                        *((char **)&a0[56]) = "Setting security contextCreating security contextCString::new()/std::fs::symlink_metadata: warning: It is dangerous to operate recursively on '/'. Use -- to override this failsafe.\nIt is dangerous to operate recursively on  (same as '/'). Use --Circular di";
                                        *((unsigned long long *)&a0[64]) = 24;
                                    }
                                    core::ptr::drop_in_place<selinux::SecurityContext>(&v16);
                                }
                                core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v4, v74);
                                core::ptr::drop_in_place<selinux::OpaqueSecurityContext>(&v24);
                                goto LABEL_465621;
                            }
                            else
                            {
                                v78 = *((int128_t *)&v4);
                                *((int128_t *)&a0[24]) = *((int128_t *)&v8);
                                *((int128_t *)&a0[40]) = *((int128_t *)&v11);
                                *((unsigned int *)a0) = v2;
                                *((unsigned int *)&a0[4]) = v3;
                                a0[8] = v78;
                                *((char **)&a0[56]) = "Getting security contextApplying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/std::fs::symlink_metadata: warning: It is dangerous to operate recursively on '/'. Use -";
                                *((unsigned long long *)&a0[64]) = 24;
                                goto LABEL_465614;
                            }
                        }
                        uu_chcon::os_str_to_c_string(&v35, a1->field_68, a1->field_70);
                        if ((int)v35 == 18)
                        {
                            v57 = v36;
                            v58 = (long long)v38;
                            goto LABEL_4654df;
                        }
                        uu_chcon::change_file_context::{{closure}}(&(char)v2, a3, a4, &v35);
                        v59 = *((long long *)&v2);
                        v57 = v4;
                        v58 = *((long long *)&v6);
                        v68 = *((int128_t *)&v11);
                        v69 = *((int128_t *)&v14);
                        *((int128_t *)&v17) = *((int128_t *)&v8);
                        v20 = v68;
                        v22 = v69;
                        if (v2 == 18)
                        {
LABEL_4654df:
                            v0 = v57;
                            v62 = v58;
                            (char)v2.set_range(&v24, v57);
                            v63 = v2;
                            if (v2 == 10)
                            {
                                core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v0, v62);
                                goto LABEL_465511;
                            }
                            *((unsigned int *)&a0[52]) = v86;
                            v70 = *((int128_t *)&v3);
                            v71 = *((int128_t *)&v85);
                            *((int128_t *)&a0[36]) = *((int128_t *)&v10);
                            a0[20] = v71;
                            a0[4] = v70;
                            *((unsigned int *)a0) = v63;
                            *((char **)&a0[56]) = "Setting security context userSetting security contextCreating security contextCString::new()/std::fs::symlink_metadata: warning: It is dangerous to operate recursively on '/'. Use -- to override this failsafe.\nIt is dangerous to operate recursively on  (sa";
                            *((unsigned long long *)&a0[64]) = 29;
                            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v0, v62);
                            goto LABEL_465614;
                        }
                        else
                        {
LABEL_4655b5:
                            v72 = (int128_t)v17;
                            v73 = (int128_t)v20;
                            a0[56] = v22;
                            a0[40] = v73;
                            a0[24] = v72;
                            *((unsigned long long *)a0) = v59;
                            *((unsigned long long *)&a0[8]) = v57;
                            *((unsigned long long *)&a0[16]) = v58;
LABEL_465614:
                            core::ptr::drop_in_place<selinux::OpaqueSecurityContext>(&v24);
                        }
                    }
                }
                else
                {
                    uu_chcon::change_file_context::{{closure}}(&(char)v2, a3, a4, &v41);
                    v56 = *((long long *)&v2);
                    v55 = v4;
                    memcpy(&(char)v16, &v5, 16);
                    *((int128_t *)&v19) = *((int128_t *)&v9);
                    memcpy(&v22, &v12, 16);
                    v23 = v15;
                    if (v2 == 18)
                        goto LABEL_4651c0;
                    *((unsigned long long *)&a0[64]) = v23;
                    v79 = (int128_t)v17;
                    v80 = (int128_t)v19;
                    a0[48] = v22;
                    a0[32] = v80;
                    a0[16] = v79;
                    *((unsigned long long *)a0) = v56;
                    *((unsigned long long *)&a0[8]) = v4;
                }
LABEL_465621:
                core::ptr::drop_in_place<alloc::borrow::Cow<core::ffi::c_str::CStr>>(&(char)v27);
            }
            return (unsigned long long)core::ptr::drop_in_place<selinux::SecurityContext>(&(char)v30);
        }
    }
}
