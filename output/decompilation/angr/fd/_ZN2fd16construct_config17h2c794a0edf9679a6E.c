long long fd::construct_config(struct_0 *a0, void* a1, unsigned long long a2, unsigned long a3)
{
    char v0;  // [bp-0x37b]
    char v1;  // [bp-0x37b]
    char v2;  // [bp-0x37a]
    char v3;  // [bp-0x379]
    char v4;  // [bp-0x378]
    char v5;  // [bp-0x377]
    char v6;  // [bp-0x376]
    char v7;  // [bp-0x375]
    char v8;  // [bp-0x374]
    char v9;  // [bp-0x373]
    char v10;  // [bp-0x372]
    char v11;  // [bp-0x371]
    unsigned long long v12;  // [bp-0x370]
    unsigned int v13;  // [bp-0x364]
    void* v14;  // [bp-0x360]
    unsigned long long v15;  // [bp-0x358]
    unsigned long long v16;  // [bp-0x350]
    void* v17;  // [bp-0x348], Other Possible Types: unsigned long
    unsigned int v18;  // [bp-0x340]
    unsigned int v19;  // [bp-0x33c]
    unsigned int v20;  // [bp-0x338]
    unsigned int v21;  // [bp-0x334]
    unsigned int v22;  // [bp-0x330]
    unsigned int v23;  // [bp-0x32c]
    int v24;  // [bp-0x328], Other Possible Types: unsigned long long
    int v25;  // [bp-0x320]
    unsigned long v26;  // [bp-0x318]
    int v27;  // [bp-0x310], Other Possible Types: char
    char v28;  // [bp-0x300]
    unsigned int v29;  // [bp-0x2f6]
    unsigned short v30;  // [bp-0x2f2]
    unsigned long v31;  // [bp-0x2f0]
    void* v32;  // [bp-0x2e8]
    unsigned long v33;  // [bp-0x2e0]
    unsigned long long v34;  // [bp-0x2d8]
    unsigned long v35;  // [bp-0x2d0]
    unsigned long long v36;  // [bp-0x2c8]
    unsigned long long v37;  // [bp-0x2c0]
    unsigned long long v38;  // [bp-0x2b8]
    unsigned long long v39;  // [bp-0x2b0]
    unsigned long v40;  // [bp-0x2a8]
    unsigned long long v41;  // [bp-0x2a0]
    unsigned long long v42;  // [bp-0x298]
    int v43;  // [bp-0x290]
    unsigned long long v44;  // [bp-0x288]
    void* v45;  // [bp-0x280]
    unsigned int v46;  // [bp-0x278]
    unsigned long v47;  // [bp-0x274]
    unsigned int v48;  // [bp-0x26c]
    unsigned long long v49;  // [bp-0x268]
    unsigned long long v50;  // [bp-0x260]
    unsigned long long v51;  // [bp-0x258]
    unsigned long long v52;  // [bp-0x250]
    unsigned long long v53;  // [bp-0x248]
    int v54;  // [bp-0x248]
    unsigned long long v55;  // [bp-0x240]
    unsigned long v56;  // [bp-0x238]
    unsigned long long v57;  // [bp-0x1a8]
    int v58;  // [bp-0x1a8]
    int v59;  // [bp-0x198], Other Possible Types: char
    unsigned int v60;  // [bp-0x188]
    int v61;  // [bp-0x178], Other Possible Types: unsigned long long
    int v62;  // [bp-0x177]
    unsigned long long v63;  // [bp-0x170]
    unsigned long long v64;  // [bp-0x168]
    char v65;  // [bp-0x160]
    unsigned long long v66;  // [bp-0x150]
    unsigned int v67;  // [bp-0xd0]
    unsigned long long v68;  // [bp-0xd0]
    unsigned int v70;  // r14d
    unsigned int v71;  // r14d
    void* v73;  // r12
    unsigned int v74;  // eax
    unsigned int v75;  // eax
    unsigned int v76;  // ecx
    void* v77;  // r13, Other Possible Types: unsigned long
    char v78;  // al
    unsigned long long v79;  // r12
    char v80;  // cl
    char v81;  // al
    unsigned int v82;  // esi
    unsigned int v83;  // edi
    unsigned long long v84;  // rcx
    unsigned long long v85;  // rax
    unsigned long long v86;  // rax
    unsigned long long v87;  // rcx
    unsigned long long v90;  // r14
    unsigned long long v91;  // rax
    unsigned long long v92;  // rdx
    unsigned long long v93;  // rsi
    void* v94;  // rax
    unsigned long long v95;  // rax
    int v96;  // xmm0
    unsigned long v97;  // rdx

    if ((char)a1[487])
    {
        v70 = 0;
    }
    else
    {
        v70 = v71 & 0xffffff00 | 1;
        if (!(char)a1[486])
        {
            v53 = a2;
            v55 = a2 + a3 * 24;
            v70 = v53.any();
        }
    }
    v56 = (long long)a1[424];
    *((int128_t *)&v54) = (int128_t)a1[408];
    *((unsigned long long *)&a1[408]) = 0x8000000000000000;
    v27.or_else(&(unsigned long long)v54);
    if (!((char)(((0 ^ *((long long *)&v27)) & (0 ^ -(*((long long *)&v27)))) >> 63)))
    {
        (unsigned long long)v54.clone(&v27);
        *((int128_t *)&v61) = *((int128_t *)&v55);
        if (v53 == 0x8000000000000000)
            goto LABEL_5facf3;
        *((int128_t *)&v25) = (int128_t)v61;
        v24 = v53;
    }
    else
    {
LABEL_5facf3:
        v67 = 0;
        (unsigned long long)v54.to_vec(::0x5ccc90::core::char::methods::encode_utf8_raw(47, &v67), a2);
        v26 = v56;
        *((int128_t *)&v24) = (int128_t)v54;
    }
    v73 = (long long)a1[88];
    v12 = (long long)a1[96];
    v77 = (long long)a1[104];
    *((unsigned long long *)&a1[88]) = 0;
    *((unsigned long long *)&a1[96]) = 8;
    *((unsigned long long *)&a1[104]) = 0;
    fd::extract_time_constraints(&(unsigned long long)v54, a1);
    v16 = v53;
    if (v53 == 0x8000000000000000)
    {
        a0->field_8 = v55;
        a0->field_0 = 2;
        goto LABEL_5faf97;
    }
    v15 = v55;
    v40 = v56;
    if ((int)a1[432] == 3)
    {
        v60 = 3;
    }
    else
    {
        v46 = (int)a1[432];
        v47 = (long long)a1[436];
        v48 = (int)a1[444];
        (char)v60.filter_ignore(&v46, v56, v55);
    }
    v14 = v73;
    std::io::stdio::stdout();
    v4 = std::sys::io::is_terminal::isatty::is_terminal();
    v74 = (char)a1[501];
    if (!v74)
    {
        std::env::var_os(&(unsigned long long)v54, &g_474078, 8);
        if (v53 != 0x8000000000000000)
        {
            v17 = v77;
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v53, v55);
            v77 = v17;
            if (!v56)
                goto LABEL_5fae90;
        }
        else
        {
LABEL_5fae90:
            if (v4)
                goto LABEL_5fae97;
        }
    }
    else if (v74 == 1)
    {
LABEL_5fae97:
        (unsigned long long)v54.from_env();
        if (v53 == 0x8000000000000000)
            (char)v61.from_string("\now=0:or=0;38;5;16;48;5;203:no=0:ex=1;38;5;203:cd=0;38;5;203;48;5;236:mi=0;38;5;16;48;5;203:*~=0;38;5;243:st=0:pi=0;38;5;16;48;5;81:fi=0:di=0;38;5;81:so=0;38;5;16;48;5;203:bd=0;38;5;81;48;5;236:tw=0:ln=0;38;5;203:*.m=0;38;5;48:*.o=0;38;5;243:*.z=4;38;5;203:*.a=1;38;5;203:*.r=0;38;5;48:*.c=0;38;5;48:*.d=0;38;5;48:*.t=0;38;5;48:*.h=0;38;5;48:*.p=0;38;5;48:*.cc=0;38;5;48:*.ll=0;38;5;48:*.jl=0;38;5;48:*css=0;38;5;48:*.md=0;38;5;185:*.gz=4;38;5;203:*.nb=0;38;5;48:*.mn=0;38;5;48:*.go=0;38;5;48:*.xz=4;38;5;203:*.so=1;38;5;203:*.rb=0;38;5;48:*.pm=0;38;5;48:*.bc=0;38;5;243:*.py=0;38;5;48:*.as=0;38;5;48:*.pl=0;38;5;48:*.rs=0;38;5;48:*.sh=0;38;5;48:*.7z=4;38;5;203:*.ps=0;38;5;186:*.cs=0;38;5;48:*.el=0;38;5;48:*.rm=0;38;5;208:*.hs=0;38;5;48:*.td=0;38;5;48:*.ui=0;38;5;149:*.ex=0;38;5;48:*.js=0;38;5;48:*.cp=0;38;5;48:*.cr=0;38;5;48:*.la=0;38;5;243:*.kt=0;38;5;48:*.ml=0;38;5;48:*.vb=0;38;5;48:*.gv=0;38;5;48:*.lo=0;38;5;243:*.hi=0;38;5;243:*.ts=0;38;5;48:*.ko=1;38;5;203:*.hh=0;38;5;48:*.pp=0;38;5;48:*.di=0;38;5;48:*.bz=4;38;", 5775);
        else
            ::libc.so.0::memcpy(&(char)v61, &(unsigned long long)v54, 160);
        v78 = 1;
        v75 = (unsigned int)::libc.so.0::memcpy(&v68, &(char)v61, 160) & 0xffffff00 | 1;
        v76 = (char)a1[502];
        if (v76 == 2)
            goto LABEL_5faf36;
LABEL_5faee1:
        v13 = v76;
        if (v76 != 1)
        {
            v13 = v75;
            goto LABEL_5faf3e;
        }
    }
    v68 = 0x8000000000000000;
    v75 = 0;
    v76 = (char)a1[502];
    if (v76 != 2)
        goto LABEL_5faee1;
LABEL_5faf36:
    v13 = 0;
LABEL_5faf3e:
    fd::extract_command(&(unsigned long long)v54, a1, v78);
    v79 = v53;
    if (v79 == 9223372036854775809)
    {
        a0->field_8 = v55;
        a0->field_0 = 2;
        v73 = v14;
        v68.drop_in_place<core::option::Option<lscolors::LsColors>>();
        goto LABEL_5faf88;
    }
    else
    {
        v23 = v70;
        *((int128_t *)&v43) = *((int128_t *)&v56);
        v2 = v79 != 0x8000000000000000;
        v80 = !(char)a1[505];
        v41 = v79;
        v22 = ((char)a1[480] ? 0 : v80);
        v42 = v55;
        v81 = (char)a1[481];
        if (v81)
            v82 = 0;
        v21 = v82;
        v83 = (!(v80 & (v81 ^ 1)) ? 0 : (char)a1[482] ^ 1);
        v20 = (!(v80 & (v81 ^ 1)) ? 0 : (char)a1[482] ^ 1);
        v19 = (!(v80 & (v81 ^ 1)) ? 0 : (char)a1[485] ^ 1);
        v84 = (long long)a1[32];
        v85 = (long long)a1[40];
        v86 = v85;
        v87 = v84;
        if (*((char *)a1))
        {
            v86 = (long long)a1[8];
            v87 = 1;
        }
        v90 = v86;
        v37 = v87;
        if ((char)a1[16])
        {
            v85 = (long long)a1[24];
            v84 = 1;
        }
        v38 = v84;
        v39 = v85;
        v0 = (char)a1[483];
        v6 = (char)a1[484];
        v5 = (char)a1[494];
        v10 = (char)a1[493];
        v9 = (char)a1[500];
        v8 = (char)a1[495];
        v11 = (char)a1[498];
        v7 = (char)a1[496];
        v36 = (long long)a1[472].threads();
        v35 = (long long)a1[448];
        v18 = (int)a1[456];
        ::libc.so.0::memcpy(&(unsigned long long)v54, &v68, 160);
        if ((long long)a1[232] == 0x8000000000000000)
        {
            v3 = 2;
            if ((long long)a1[0x100] == 0x8000000000000000)
                goto LABEL_5fb229;
LABEL_5fb14c:
            fd::construct_config::{{closure}}(&(char)v61, (long long)a1[264], (long long)a1[272]);
            v91 = (long long)v61;
            v92 = v64;
            v93 = *((long long *)&v65);
            if (v91)
                goto LABEL_5fb22b;
            v61 = v63;
            v63 = v92;
            v64 = v93;
            a0->field_8 = (char)v61.from();
            a0->field_0 = 2;
            v73 = v14;
            (unsigned long long)v54.drop_in_place<core::option::Option<lscolors::LsColors>>();
            core::ptr::drop_in_place<core::option::Option<fd::exec::CommandSet>>(&v41);
LABEL_5faf88:
            core::ptr::drop_in_place<alloc::vec::Vec<fd::filter::time::TimeFilter>>(v16, v15);
LABEL_5faf97:
            core::ptr::drop_in_place<alloc::vec::Vec<crossbeam_channel::flavors::array::Slot<fd::walk::Batch>>>(v73, v12);
            core::ptr::drop_in_place<alloc::string::String>(&v24);
            core::ptr::drop_in_place<regex::error::Error>(&v27);
        }
        else
        {
            fd::construct_config::{{closure}}(&(char)v61, (long long)a1[240], (long long)a1[248]);
            v3 = (char)v61;
            v31 = (long long)v62;
            if ((long long)a1[0x100] != 0x8000000000000000)
                goto LABEL_5fb14c;
LABEL_5fb229:
            v91 = 0;
LABEL_5fb22b:
            v49 = v91;
            v50 = v63;
            v51 = v92;
            v52 = v93;
            if ((long long)a1[328] == 0x8000000000000000)
            {
                v57 = 2;
                if (v79 != 0x8000000000000000)
                    goto LABEL_5fb2ac;
LABEL_5fb265:
                v94 = 0;
            }
            else
            {
                (char)v61.parse((long long)a1[336], (long long)a1[344]);
                memcpy(&v59, &v64, 16);
                memcpy(&v57, &v61, 16);
                if (v79 == 0x8000000000000000)
                    goto LABEL_5fb265;
LABEL_5fb2ac:
                v66 = v44;
                memcpy(&v65, &v42, 16);
                v61 = 1;
                v63 = 1;
                v64 = v79;
                v94 = (char)v61.new();
            }
            v32 = v94;
            v34 = v90;
            v17 = v77;
            v45 = v94;
            v33 = (long long)a1[464];
            (char)v61.collect((long long)a1[72], (long long)a1[72] + (long long)a1[80] * 24);
            *((long long *)((char *)&a0->field_68 + 8)) = (long long)a1[128];
            *((int128_t *)&(&a0->field_60)[1]) = (int128_t)a1[112];
            *((unsigned long long *)&a1[112]) = 0;
            *((unsigned long long *)&a1[120]) = 8;
            *((unsigned long long *)&a1[128]) = 0;
            a0->field_168 = *((int128_t *)&v60);
            v1 = (char)a1[499];
            *((void*)&a0->padding_c8[144]) = v27;
            *((long long *)&(&a0->padding_c8)[1]) = *((long long *)&v28);
            *((unsigned long *)&a0->field_b0) = v26;
            *((int128_t *)&a0->field_a8) = (int128_t)v24;
            v95 = a1.max_results();
            v2 = a1.strip_cwd_prefix((char)a1[495], v2);
            ::libc.so.0::memcpy((char *)&a0->field_b0 + 8, &(unsigned long long)v54, 160);
            v96 = *((int128_t *)&v49);
            *((int128_t *)&a0->field_198) = *((int128_t *)&v51);
            *((void*)((char *)&a0->field_180 + 8)) = v96;
            *((void*)&a0->field_30) = v58;
            *((void*)&a0->field_40) = v59;
            a0->field_60 = v64;
            a0->field_50 = (int128_t)v61;
            a0->field_0 = v37;
            a0->field_8 = v34;
            a0->field_10 = v38;
            a0->field_18 = v39;
            a0->field_20 = v95;
            a0->field_28 = v97;
            a0->field_78 = v14;
            a0->field_80 = v12;
            a0->field_88 = v17;
            a0->field_90 = v16;
            a0->field_98 = v15;
            a0->field_a0 = v40;
            a0->field_178 = v35;
            *((unsigned int *)&(&a0->field_178)[1]) = v18;
            *((unsigned long long *)&a0->field_180) = v36;
            (&a0->field_1a0)[1] = v32;
            *((unsigned long *)&a0->field_1a8) = v33;
            *((char *)&a0->field_1a8 + 8) = v23;
            *((char *)&a0->field_1a8 + 9) = v5;
            *((char *)&a0->field_1a8 + 10) = v22;
            *((char *)&a0->field_1a8 + 11) = v21;
            *((char *)&a0->field_1a8 + 12) = v6 ^ 1;
            *((char *)&a0->field_1a8 + 13) = v20;
            *((char *)&a0->field_1a8 + 14) = v0 ^ 1;
            *((char *)&a0->field_1a8 + 15) = v19;
            *((char *)&a0->field_1b8) = v10;
            *((char *)&a0->field_1b8 + 1) = v9;
            *((char *)&a0->field_1b8 + 2) = v8;
            *((char *)&a0->field_1b8 + 3) = v7;
            *((char *)&a0->field_1b8 + 4) = v11;
            *((char *)&a0->field_1b8 + 5) = v4;
            *((char *)&a0->field_1b8 + 6) = v1;
            *((char *)&a0->field_1b8 + 7) = v2;
            *((char *)&a0->field_1b8 + 8) = v13;
            *((char *)&a0->field_1b8 + 9) = v3;
            *((unsigned long *)((char *)&a0->field_1b8 + 10)) = v31;
            *((unsigned short *)((char *)&a0->field_1c8 + 6)) = v30;
            *((unsigned int *)((char *)&a0->field_1c8 + 2)) = v29;
        }
    }
    return core::ptr::drop_in_place<fd::cli::Opts>(a1);
}
