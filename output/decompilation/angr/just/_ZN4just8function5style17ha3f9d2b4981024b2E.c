long long just::function::style(void* *a0, struct_1 **a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long
    unsigned int v1;  // [sp-0x6f]
    unsigned int v2;  // [bp-0x6c], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x68], Other Possible Types: unsigned long long
    char v4;  // [bp-0x64]
    char *v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    void* v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    char *v10;  // [bp-0x30]
    unsigned long long v11;  // [bp-0x28]
    unsigned int v13;  // eax
    unsigned long long v14;  // rax

    v8 = a2;
    v9 = a3;
    if ((char)a2.equal(a3, "commandRun an arbitrary command with the working directory, `.env`, overrides, and exports setCOMPLETIONScompletionsPrint shell completion script for <SHELL>Print justfileEdit justfile with editor given by $VISUAL or $EDITOR, falling back to `vim`Evaluate ", 7))
    {
        v13 = *(a1)->field_0->field_180;
        v0 = 1;
        v1 = 0;
        v2 = 0;
        v3 = v13;
    }
    else
    {
        if ((char)a2.equal(a3, "error: Justfile contains no recipes.Justfile contains no default recipe.Justfile contains no choosable recipes.Could not find source file for import.Failed to get homedirFormatted justfile differs from original.Dotenv file not foundFound multiple source files for module ``:  but takes  but takes at least  but takes at most Assert failed: Backtick failed for an unknown reasonBacktick failed with exit code Backtick was terminated by signal Backtick succeeded but `just` was interrupted by signal Backtick could not be run because just could not find the shell:\nBacktick could not be run because just could not run the shell:\nBacktick could not be run because of an IO error while launching the shell:\nBacktick succeeded but stdout was not utf8: Chooser `` invocation failed: Failed to read output from chooser `` failed: Failed to write to chooser `` in `` is circular` failed on line ` failed with exit code Failed to invoke  failed: Cygpath failed with exit code  while translating recipe `` shebang interpreter pathCygp", 5))
        {
            v0 = 1;
            v14 = 0x100000000;
        }
        else if ((char)a2.equal(a3, "warningCould not extract parent from `invalid semver requirement: invalid semver version: /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/lazy_lock.rs", 7))
        {
            v0 = 1;
            v14 = 0x300000000;
        }
        else
        {
            v10 = &v8;
            v11 = <&T as core::fmt::Display>::fmt;
            v0 = &g_8300b8;
            v3 = 2;
            v7 = 0;
            v5 = &v10;
            v6 = 1;
            a0 + 1.map_or_else(0, a2, &(char)v0);
            *(a0) = 1;
            return a0;
        }
        v2 = v14;
        v1 = 0;
    }
    v4 = 10;
    a0 + 1.spec_to_string(&v0);
    *(a0) = 0;
    return a0;
}
