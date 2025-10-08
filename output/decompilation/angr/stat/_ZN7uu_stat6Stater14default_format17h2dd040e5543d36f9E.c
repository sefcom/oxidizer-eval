long long uu_stat::Stater::default_format(unsigned long long a0, unsigned int a1, char a2, char a3)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long v2;  // [bp-0x30]
    unsigned long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v6;  // [bp-0x10]
    unsigned long long v7;  // [bp-0x8]
    unsigned long v9;  // rcx
    unsigned long v10;  // rdx

    if (a1)
    {
        if (a2)
            return a0.to_vec("%n %i %l %t %s %S %b %f %a %c %d\n  File: \"%n\"\n    ID: %-8i Namelen: %-7l Type: %T\nBlock size: %-10s Fundamental block size: %S\nBlocks: Total: %-10b Free: %-10f Available: %a\nInodes: Total: %-10c Free: %d\n%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\nDevi", 33);
        return a0.to_vec("  File: \"%n\"\n    ID: %-8i Namelen: %-7l Type: %T\nBlock size: %-10s Fundamental block size: %S\nBlocks: Total: %-10b Free: %-10f Available: %a\nInodes: Total: %-10c Free: %d\n%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\nDevice: %Dh/%dd\tInode: %-10i  Links: ", 171);
    }
    else
    {
        if (a2)
            return a0.to_vec("%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\nDevice: %Dh/%dd\tInode: %-10i  Links: %h\nDevice: %Dh/%dd\tInode: %-10i  Links: %-5h Device type: %t,%T\n  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\nAccess: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g", 48);
        v9 = (a3 ? 61 : 40);
        v10 = (a3 ? "Device: %Dh/%dd\tInode: %-10i  Links: %-5h Device type: %t,%T\n  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\nAccess: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\nAccess: %x\nModify: %y\nChange: %z\n Birth: %w\n(uutils coreutils) 0.0.30Display file " : "Device: %Dh/%dd\tInode: %-10i  Links: %h\nDevice: %Dh/%dd\tInode: %-10i  Links: %-5h Device type: %t,%T\n  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\nAccess: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\nAccess: %x\nModify: %y\nChange: %z\n Birth: %");
        v0 = "  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\nAccess: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\nAccess: %x\nModify: %y\nChange: %z\n Birth: %w\n(uutils coreutils) 0.0.30Display file or file system status.{} [OPTION]... FILE...follow linksdispl";
        v1 = 57;
        *((int *)&v2) = (a3 ? "Device: %Dh/%dd\tInode: %-10i  Links: %-5h Device type: %t,%T\n  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\nAccess: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\nAccess: %x\nModify: %y\nChange: %z\n Birth: %w\n(uutils coreutils) 0.0.30Display file " : "Device: %Dh/%dd\tInode: %-10i  Links: %h\nDevice: %Dh/%dd\tInode: %-10i  Links: %-5h Device type: %t,%T\n  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\nAccess: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\nAccess: %x\nModify: %y\nChange: %z\n Birth: %");
        *((int *)&v3) = (a3 ? 61 : 40);
        v4 = "Access: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\nAccess: %x\nModify: %y\nChange: %z\n Birth: %w\n(uutils coreutils) 0.0.30Display file or file system status.{} [OPTION]... FILE...follow linksdisplay file system status instead of file statusprint the inf";
        v5 = 56;
        v6 = "Access: %x\nModify: %y\nChange: %z\n Birth: %w\n(uutils coreutils) 0.0.30Display file or file system status.{} [OPTION]... FILE...follow linksdisplay file system status instead of file statusprint the information in terse formuse the specified FORMAT instead o";
        v7 = 44;
        return alloc::str::join_generic_copy(a0, &v0);
    }
}
