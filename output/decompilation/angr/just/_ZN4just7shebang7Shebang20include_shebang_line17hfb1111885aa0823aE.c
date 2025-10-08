long long just::shebang::Shebang::include_shebang_line(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax

    v0 = v2;
    v3 = a0.interpreter_filename(a1);
    if (!(char)v3.equal(v4, "cmdcmd.exepowershellpowershell.exesrc/executor.rsassert( + if  {  } else {  }/  / ", 3))
    {
        v5 = v3.equal(v4, "cmd.exepowershellpowershell.exesrc/executor.rsassert( + if  {  } else {  }/  / ", 7);
        return v5 & 0xffffffffffffff00 | (char)v5 ^ 1;
    }
    return 0;
}
