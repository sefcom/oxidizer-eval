long long uu_test::parser::Symbol::new(unsigned long long a0[5], unsigned long long a1[3])
{
    unsigned long long v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long v5;  // rax
    unsigned long v6;  // r14
    unsigned long v7;  // r12
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbp
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax

    v5 = a1[0];
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
    {
        a0[0] = 6;
        return -(v5);
    }
    v6 = a1[1];
    v7 = a1[2];
    v8 = core::str::converts::from_utf8(&v1, v6, v7);
    if ((v1 & 1))
    {
        a0[1] = v5;
        a0[2] = v6;
        a0[3] = v7;
        a0[0] = 3;
        return v8;
    }
    v9 = *((long long *)&v3);
    v0 = v2;
    if ((char)v2.equal(v9, "(!-a-o===!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 1))
    {
        a0[0] = 0;
        return (unsigned long long)core::ptr::drop_in_place<std::ffi::os_str::OsString>(v5, v6);
    }
    else if ((char)v0.equal(v9, "!-a-o===!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 1))
    {
        a0[0] = 1;
        return (unsigned long long)core::ptr::drop_in_place<std::ffi::os_str::OsString>(v5, v6);
    }
    else
    {
        v11 = v0.equal(v9, "-a-o===!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
        if ((char)v11)
        {
            a0[1] = v5;
            a0[2] = v6;
            a0[3] = v7;
            a0[0] = 2;
            return v11;
        }
        v11 = v0.equal(v9, "-o===!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
        if ((char)v11)
        {
            a0[1] = v5;
            a0[2] = v6;
            a0[3] = v7;
            a0[0] = 2;
            return v11;
        }
        v12 = v0.equal(v9, "===!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 1);
        if (!(char)v12)
        {
            v12 = v0.equal(v9, "==!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
            if (!(char)v12)
            {
                v12 = v0.equal(v9, "!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                if (!(char)v12)
                {
                    v12 = v0.equal(v9, "<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 1);
                    if (!(char)v12)
                    {
                        v12 = v0.equal(v9, ">-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 1);
                        if (!(char)v12)
                        {
                            v12 = v0.equal(v9, "-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 3);
                            if (!(char)v12)
                            {
                                v12 = v0.equal(v9, "-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 3);
                                if (!(char)v12)
                                {
                                    v12 = v0.equal(v9, "-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 3);
                                    if (!(char)v12)
                                    {
                                        v12 = v0.equal(v9, "-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 3);
                                        if (!(char)v12)
                                        {
                                            v12 = v0.equal(v9, "-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 3);
                                            if (!(char)v12)
                                            {
                                                v12 = v0.equal(v9, "-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 3);
                                                if (!(char)v12)
                                                {
                                                    v12 = v0.equal(v9, "-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 3);
                                                    if (!(char)v12)
                                                    {
                                                        v12 = v0.equal(v9, "-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 3);
                                                        if (!(char)v12)
                                                        {
                                                            v12 = v0.equal(v9, "-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 3);
                                                            if (!(char)v12)
                                                            {
                                                                v8 = v0.equal(v9, "-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                if (!(char)v8)
                                                                {
                                                                    v8 = v0.equal(v9, "-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                    if (!(char)v8)
                                                                    {
                                                                        v8 = v0.equal(v9, "-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                        if (!(char)v8)
                                                                        {
                                                                            v8 = v0.equal(v9, "-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                            if (!(char)v8)
                                                                            {
                                                                                v8 = v0.equal(v9, "-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                if (!(char)v8)
                                                                                {
                                                                                    v8 = v0.equal(v9, "-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                    if (!(char)v8)
                                                                                    {
                                                                                        v8 = v0.equal(v9, "-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                        if (!(char)v8)
                                                                                        {
                                                                                            v8 = v0.equal(v9, "-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                            if (!(char)v8)
                                                                                            {
                                                                                                v8 = v0.equal(v9, "-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                if (!(char)v8)
                                                                                                {
                                                                                                    v8 = v0.equal(v9, "-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                    if (!(char)v8)
                                                                                                    {
                                                                                                        v8 = v0.equal(v9, "-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                        if (!(char)v8)
                                                                                                        {
                                                                                                            v8 = v0.equal(v9, "-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                            if (!(char)v8)
                                                                                                            {
                                                                                                                v8 = v0.equal(v9, "-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                                if (!(char)v8)
                                                                                                                {
                                                                                                                    v8 = v0.equal(v9, "-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                                    if (!(char)v8)
                                                                                                                    {
                                                                                                                        v8 = v0.equal(v9, "-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                                        if (!(char)v8)
                                                                                                                        {
                                                                                                                            v8 = v0.equal(v9, "-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                                            if (!(char)v8)
                                                                                                                            {
                                                                                                                                v8 = v0.equal(v9, "-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                                                if (!(char)v8)
                                                                                                                                {
                                                                                                                                    v8 = v0.equal(v9, "-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                                                    if (!(char)v8)
                                                                                                                                    {
                                                                                                                                        v8 = v0.equal(v9, "-t-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                                                        if (!(char)v8)
                                                                                                                                        {
                                                                                                                                            v8 = v0.equal(v9, "-u-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                                                            if (!(char)v8)
                                                                                                                                            {
                                                                                                                                                v8 = v0.equal(v9, "-w-xsrc/uu/test/src/parser.rs", 2);
                                                                                                                                                if (!(char)v8)
                                                                                                                                                {
                                                                                                                                                    v8 = v0.equal(v9, "-xsrc/uu/test/src/parser.rs", 2);
                                                                                                                                                    if (!(char)v8)
                                                                                                                                                    {
                                                                                                                                                        a0[1] = v5;
                                                                                                                                                        a0[2] = v6;
                                                                                                                                                        a0[3] = v7;
                                                                                                                                                        a0[0] = 3;
                                                                                                                                                        return v8;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                        a0[1] = 1;
                                                                        a0[2] = v5;
                                                                        a0[3] = v6;
                                                                        a0[4] = v7;
                                                                        a0[0] = 5;
                                                                        return v8;
                                                                    }
                                                                }
                                                                a0[1] = 0;
                                                                a0[2] = v5;
                                                                a0[3] = v6;
                                                                a0[4] = v7;
                                                                a0[0] = 5;
                                                                return v8;
                                                            }
                                                        }
                                                    }
                                                    a0[1] = 2;
                                                    a0[2] = v5;
                                                    a0[3] = v6;
                                                    a0[4] = v7;
                                                    a0[0] = 4;
                                                    return v12;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            a0[1] = 1;
                            a0[2] = v5;
                            a0[3] = v6;
                            a0[4] = v7;
                            a0[0] = 4;
                            return v12;
                        }
                    }
                }
            }
        }
        a0[1] = 0;
        a0[2] = v5;
        a0[3] = v6;
        a0[4] = v7;
        a0[0] = 4;
        return v12;
    }
}
