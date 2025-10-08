long long uu_dd::stdout_canonicalized(struct_0 *a0)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    unsigned long long v1;  // [bp-0x28]
    int v2;  // [bp-0x20], Other Possible Types: char
    char v3;  // [bp-0x10]

    std::fs::canonicalize(&v0);
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
    {
        a0->field_10 = v1;
        *((void*)&a0->field_0) = v0;
        return v1;
    }
    v2.to_vec("/dev/stdout(uutils coreutils) 0.0.30Copy, and optionally convert, a file system resource{} [OPERAND]...\n{} OPTION### Operands\n\n- bs=BYTES : read and write up to BYTES bytes at a time (default: 512);\n   overwrites ibs and obs.\n- cbs=BYTES : the 'conversion ", 11);
    a0->field_10 = *((long long *)&v3);
    *((void*)&a0->field_0) = v2;
    return (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
}
