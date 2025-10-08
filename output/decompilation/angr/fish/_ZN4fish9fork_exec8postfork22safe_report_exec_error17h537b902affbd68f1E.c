long long fish::fork_exec::postfork::safe_report_exec_error(unsigned int a0, char *a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long long a5, unsigned long a6)
{
    unsigned long long v0;  // [bp-0x178]
    unsigned long long v1;  // [bp-0x170]
    int v2;  // [bp-0x168], Other Possible Types: char
    unsigned long long v3;  // [bp-0x160]
    uint128_t v4;  // [bp-0x158]
    uint128_t v5;  // [bp-0x148]
    int v6;  // [bp-0x138]
    char v7;  // [bp-0x130]
    uint128_t v8;  // [bp-0x128]
    uint128_t v9;  // [bp-0x118]
    uint128_t v10;  // [bp-0x108]
    uint128_t v11;  // [bp-0xf8]
    uint128_t v12;  // [bp-0xb8]
    uint128_t v13;  // [bp-0xa8]
    uint128_t v14;  // [bp-0x98]
    uint128_t v15;  // [bp-0x88]
    uint128_t v16;  // [bp-0x78]
    uint128_t v17;  // [bp-0x68]
    uint128_t v18;  // [bp-0x58]
    uint128_t v19;  // [bp-0x48]
    char *v20;  // rax
    char *v21;  // r12
    unsigned int v22;  // eax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned int v25;  // ebp
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long v32;  // rdi
    unsigned long long v33;  // rax
    unsigned int v34;  // ebp
    unsigned long long v35;  // rsi
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    unsigned int v42;  // ebx
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rax
    unsigned int v46;  // ebp
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rax
    char v49;  // al
    unsigned long long v50;  // rax
    unsigned int v51;  // ebx
    unsigned long long v52;  // rsi
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rax
    unsigned long long v55;  // rax
    unsigned long long v56;  // rax
    unsigned long long v57;  // r13
    unsigned long long v58;  // rbp
    unsigned long long v59;  // rbp
    unsigned long long v60;  // rax
    unsigned long long v61;  // r12
    unsigned long long v62;  // rax
    unsigned int v63;  // r15d
    unsigned long long v64;  // rsi
    unsigned long long v65;  // rdx
    unsigned long long v66;  // rax
    unsigned long v67;  // rdi
    unsigned long long v68;  // rax
    unsigned int v69;  // r15d
    unsigned long long v70;  // rax

    switch (a0)
    {
    case 1:
        v56 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v56)
            return v56;
        v34 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, a1, a2);
        v35 = "': No permission. Either suid/sgid is forbidden or you lack capabilities.', unknown error number ', which is not an executable command.':  The file uses Windows line endings (\\r\\n). Run dos2unix or similar to fix it.#!/#!src/fork_exec/spawn.rssrc/fs.rs";
        v36 = 73;
        break;
    case 2: case 13:
        v19 = 0;
        v18 = 0;
        v17 = 0;
        v16 = 0;
        v15 = 0;
        v14 = 0;
        v13 = 0;
        v12 = 0;
        v20 = fish::fork_exec::postfork::get_interpreter(a1, &v12, 10436188);
        if (v20)
        {
            v21 = v20;
            v22 = open(v20, 0, a2);
            if (v22 == -1)
                return fish::fork_exec::postfork::safe_report_exec_error::err_or_no_exec_handling(v21, v29, a1, a2);
            fish::wutil::fstat(&v2, v22);
            if (*((int *)&v2) == 2)
            {
                v1 = v3;
                core::ptr::drop_in_place<std::io::error::Error>(&v1);
            }
            else
            {
                v23 = access(v21, 1);
                if (!(unsigned int)v23)
                {
                    if (((short)*((int *)&v7) & 0xf000) == 0x4000)
                    {
                        v24 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
                        if (!(char)v24)
                            return v24;
                        v25 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
                        fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "execselffg.1smirdclkkfndkEXTsbim", 4);
                        fish::fork_exec::flog_safe::flog_impl_async_safe(v25, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
                        fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
                        fish::fork_exec::flog_safe::flog_impl_async_safe(v25, a1, a2);
                        fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "': The file specified the interpreter '', which is a directory.': The file exists and is executable. Check the interpreter or linker?': The file could not be accessed.': The file does not exist or could not be executed.Out of memory': File is currently ope", 39);
                        fish::fork_exec::flog_safe::flog_impl_async_safe(v25, v21, v29);
                        v28 = 24;
                        v27 = "', which is a directory.': The file exists and is executable. Check the interpreter or linker?': The file could not be accessed.': The file does not exist or could not be executed.Out of memory': File is currently open for writing.': Too many layers of sym";
                        fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "', which is a directory.': The file exists and is executable. Check the interpreter or linker?': The file could not be accessed.': The file does not exist or could not be executed.Out of memory': File is currently open for writing.': Too many layers of sym", 24);
                        return fish::fork_exec::flog_safe::flog_impl_async_safe(v32, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
                    }
                    else
                    {
                        return v23;
                    }
                }
            }
            return fish::fork_exec::postfork::safe_report_exec_error::err_or_no_exec_handling(v21, v29, a1, a2);
        }
        else if (access(a1, 1))
        {
            v30 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
            if (a0 == 2)
            {
                if ((char)v30)
                {
                    v25 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "execselffg.1smirdclkkfndkEXTsbim", 4);
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v25, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v25, a1, a2);
                    v28 = 52;
                    v27 = "': The file does not exist or could not be executed.Out of memory': File is currently open for writing.': Too many layers of symbolic links. Maybe a loop?': Unsupported format.': File is a directory.': A path component is not a directory.': Too many open f";
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "': The file does not exist or could not be executed.Out of memory': File is currently open for writing.': Too many layers of symbolic links. Maybe a loop?': Unsupported format.': File is a directory.': A path component is not a directory.': Too many open f", 52);
                    return fish::fork_exec::flog_safe::flog_impl_async_safe(v32, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
                }
                return v30;
            }
            else
            {
                if ((char)v30)
                {
                    v25 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "execselffg.1smirdclkkfndkEXTsbim", 4);
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v25, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v25, a1, a2);
                    v28 = 34;
                    v27 = "': The file could not be accessed.': The file does not exist or could not be executed.Out of memory': File is currently open for writing.': Too many layers of symbolic links. Maybe a loop?': Unsupported format.': File is a directory.': A path component is ";
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "': The file could not be accessed.': The file does not exist or could not be executed.Out of memory': File is currently open for writing.': Too many layers of symbolic links. Maybe a loop?': Unsupported format.': File is a directory.': A path component is ", 34);
                    return fish::fork_exec::flog_safe::flog_impl_async_safe(v32, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
                }
                return v30;
            }
        }
        else
        {
            v31 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
            if (!(char)v31)
                return v31;
            v25 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "execselffg.1smirdclkkfndkEXTsbim", 4);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v25, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v25, a1, a2);
            v28 = 70;
            v27 = "': The file exists and is executable. Check the interpreter or linker?': The file could not be accessed.': The file does not exist or could not be executed.Out of memory': File is currently open for writing.': Too many layers of symbolic links. Maybe a loo";
            fish::fork_exec::flog_safe::flog_impl_async_safe(v25, "': The file exists and is executable. Check the interpreter or linker?': The file could not be accessed.': The file does not exist or could not be executed.Out of memory': File is currently open for writing.': Too many layers of symbolic links. Maybe a loo", 70);
            return fish::fork_exec::flog_safe::flog_impl_async_safe(v32, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
        }
    case 7:
        v57 = a5.fold(a6 * 16 + a5);
        v58 = a3.fold(a4 * 16 + a3);
        v59 = v58 + v57;
        if ((char)__CFADD__(v58, v57))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d8c40); /* do not return */
        v60 = sysconf(0);
        if (v60 > 0)
        {
            v61 = v60;
            v0 = v57;
            v62 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
            if (v59 < v61)
            {
                if (!(v62 & 255))
                    goto LABEL_13b24a8;
                v63 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, "execselffg.1smirdclkkfndkEXTsbim", 4);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, a1, a2);
                v64 = "': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables take up over half the limit. Try erasing or unexporting variables.Failed to execute process: '' the file could not be run by th";
                v65 = 73;
                goto LABEL_13b248c;
            }
            else if ((char)v62)
            {
                v63 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, "execselffg.1smirdclkkfndkEXTsbim", 4);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, a1, a2);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, "': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables take up over half the limit", 63);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, v59);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, ") exceeds the OS limit of Hint: Your exported variables take up over half the limit. Try erasing or unexporting variables.Failed to execute process: '' the file could not be run by the operating system.Maybe the interpreter directive (#! line) is broken?fi", 26);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, v61);
                v64 = "...";
                v65 = 1;
LABEL_13b248c:
                fish::fork_exec::flog_safe::flog_impl_async_safe(v63, v64, v65);
                v62 = fish::fork_exec::flog_safe::flog_impl_async_safe(v63, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
            }
LABEL_13b24a8:
            if (v0 < v61 >> 1)
                return v62;
            v66 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
            if (!(char)v66)
                return v66;
            v42 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v42, "execselffg.1smirdclkkfndkEXTsbim", 4);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v42, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
            v43 = "Hint: Your exported variables take up over half the limit. Try erasing or unexporting variables.Failed to execute process: '' the file could not be run by the operating system.Maybe the interpreter directive (#! line) is broken?fish scripts require an inte";
            v44 = 96;
            fish::fork_exec::flog_safe::flog_impl_async_safe(v42, "Hint: Your exported variables take up over half the limit. Try erasing or unexporting variables.Failed to execute process: '' the file could not be run by the operating system.Maybe the interpreter directive (#! line) is broken?fish scripts require an inte", 96);
            v67 = v42;
            return fish::fork_exec::flog_safe::flog_impl_async_safe(v42, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
        }
        else
        {
            v68 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
            if (!(char)v68)
                return v68;
            v69 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v69, "execselffg.1smirdclkkfndkEXTsbim", 4);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v69, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v69, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v69, a1, a2);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v69, "': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables take up over half the limit", 63);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v69, v59);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v69, ") exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables take up over half the limit. Try erasing or unexporting variables.Failed to execute proces", 37);
            v67 = v69;
            return fish::fork_exec::flog_safe::flog_impl_async_safe(v69, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
        }
    case 8:
        if ((char)core::sync::atomic::atomic_load(&g_15a94d0, 0))
        {
            v46 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v46, "execselffg.1smirdclkkfndkEXTsbim", 4);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v46, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v46, "Failed to execute process: '' the file could not be run by the operating system.Maybe the interpreter directive (#! line) is broken?fish scripts require an interpreter directive (must start with '#!/path/to/fish').': The file specified the interpreter '', ", 28);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v46, a1, a2);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v46, "' the file could not be run by the operating system.Maybe the interpreter directive (#! line) is broken?fish scripts require an interpreter directive (must start with '#!/path/to/fish').': The file specified the interpreter '', which is a directory.': The ", 52);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v46, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
        }
        v11 = 0;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        *((uint128_t *)&v6) = 0;
        v5 = 0;
        v4 = 0;
        *((uint128_t *)&v2) = 0;
        v48 = fish::fork_exec::postfork::get_interpreter(a1, &(char)v2, v47);
        if (v48)
            return v48;
        v49 = core::slice::<impl [T]>::ends_with(a1, a2 - 1, ".fish/", 5);
        v50 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (v49)
        {
            if ((char)v50)
            {
                v51 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v51, "execselffg.1smirdclkkfndkEXTsbim", 4);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v51, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
                v52 = "fish scripts require an interpreter directive (must start with '#!/path/to/fish').': The file specified the interpreter '', which is a directory.': The file exists and is executable. Check the interpreter or linker?': The file could not be accessed.': The ";
                v53 = 82;
            }
            else
            {
                return v50;
            }
        }
        else
        {
            if ((char)v50)
            {
                v51 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v51, "execselffg.1smirdclkkfndkEXTsbim", 4);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v51, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
                v52 = "Maybe the interpreter directive (#! line) is broken?fish scripts require an interpreter directive (must start with '#!/path/to/fish').': The file specified the interpreter '', which is a directory.': The file exists and is executable. Check the interpreter";
                v53 = 52;
            }
            else
            {
                return v50;
            }
        }
        fish::fork_exec::flog_safe::flog_impl_async_safe(v51, v52, v53);
        v32 = v51;
        return fish::fork_exec::flog_safe::flog_impl_async_safe(v51, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
    case 12:
        v41 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v41)
            return v41;
        v42 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v42, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v42, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        v44 = 13;
        v43 = "Out of memory': File is currently open for writing.': Too many layers of symbolic links. Maybe a loop?': Unsupported format.': File is a directory.': A path component is not a directory.': Too many open files in this process.': Too many open files on the s";
        fish::fork_exec::flog_safe::flog_impl_async_safe(v42, "Out of memory': File is currently open for writing.': Too many layers of symbolic links. Maybe a loop?': Unsupported format.': File is a directory.': A path component is not a directory.': Too many open files in this process.': Too many open files on the s", 13);
        v67 = v42;
        return fish::fork_exec::flog_safe::flog_impl_async_safe(v42, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
    case 20:
        v45 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v45)
            return v45;
        v34 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, a1, a2);
        v35 = "': A path component is not a directory.': Too many open files in this process.': Too many open files on the system.': Name is too long.': No permission. Either suid/sgid is forbidden or you lack capabilities.', unknown error number ', which is not an execu";
LABEL_13b1de9:
        v36 = 39;
        break;
    case 21:
        v38 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v38)
            return v38;
        v34 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, a1, a2);
        v35 = "': File is a directory.': A path component is not a directory.': Too many open files in this process.': Too many open files on the system.': Name is too long.': No permission. Either suid/sgid is forbidden or you lack capabilities.', unknown error number '";
        v36 = 23;
        break;
    case 22:
        v40 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v40)
            return v40;
        v34 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, a1, a2);
        v35 = "': Unsupported format.': File is a directory.': A path component is not a directory.': Too many open files in this process.': Too many open files on the system.': Name is too long.': No permission. Either suid/sgid is forbidden or you lack capabilities.', ";
        v36 = 22;
        break;
    case 23:
        v33 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v33)
            return v33;
        v34 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, a1, a2);
        v35 = "': Too many open files on the system.': Name is too long.': No permission. Either suid/sgid is forbidden or you lack capabilities.', unknown error number ', which is not an executable command.':  The file uses Windows line endings (\\r\\n). Run dos2unix or s";
        v36 = 37;
        break;
    case 24:
        v39 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v39)
            return v39;
        v34 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, a1, a2);
        v35 = "': Too many open files in this process.': Too many open files on the system.': Name is too long.': No permission. Either suid/sgid is forbidden or you lack capabilities.', unknown error number ', which is not an executable command.':  The file uses Windows";
        goto LABEL_13b1de9;
    case 26:
        v55 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v55)
            return v55;
        v34 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, a1, a2);
        v35 = "': File is currently open for writing.': Too many layers of symbolic links. Maybe a loop?': Unsupported format.': File is a directory.': A path component is not a directory.': Too many open files in this process.': Too many open files on the system.': Name";
        v36 = 38;
        break;
    case 36:
        v54 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v54)
            return v54;
        v34 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, a1, a2);
        v35 = "': Name is too long.': No permission. Either suid/sgid is forbidden or you lack capabilities.', unknown error number ', which is not an executable command.':  The file uses Windows line endings (\\r\\n). Run dos2unix or similar to fix it.#!/#!src/fork_exec/spawn.rssrc/fs.rs";
        v36 = 20;
        break;
    case 40:
        v37 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v37)
            return v37;
        v34 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, a1, a2);
        v35 = "': Too many layers of symbolic links. Maybe a loop?': Unsupported format.': File is a directory.': A path component is not a directory.': Too many open files in this process.': Too many open files on the system.': Name is too long.': No permission. Either ";
        v36 = 51;
        break;
    default:
        v70 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v70)
            return v70;
        v34 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, a1, a2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "', unknown error number ', which is not an executable command.':  The file uses Windows line endings (\\r\\n). Run dos2unix or similar to fix it.#!/#!src/fork_exec/spawn.rssrc/fs.rs", 24);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v34, a0);
        v67 = v34;
        return fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
    }
    fish::fork_exec::flog_safe::flog_impl_async_safe(v34, v35, v36);
    v67 = v34;
    return fish::fork_exec::flog_safe::flog_impl_async_safe(v34, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
}
