long long uu_basename::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x830]
    unsigned int v1;  // [bp-0x5b8]
    unsigned int v2;  // [bp-0x5b4]
    char v3;  // [bp-0x5b0]
    unsigned int v4;  // [bp-0x338]
    char v5;  // [bp-0x334]
    unsigned long long v6;  // [bp-0x2f4]
    unsigned int v7;  // [bp-0x2ec]
    char v8;  // [bp-0x2e8]
    unsigned long v9;  // [bp-0x2c]
    char v10;  // [bp-0x24]
    unsigned long long v13;  // rdx

    v3.new(uucore::util_name(), v13);
    v8.version(&v3);
    v3.about(&v8);
    uucore::format_usage(&v0, "{} [-z] NAME [SUFFIX]\n{} OPTION... NAME...support multiple arguments and treat each as a NAMESUFFIXremove a trailing SUFFIX; implies -aend each output line with NUL, not newlinesrc/uu/basename/src/basename.rs", 42);
    v8.override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | v9;
    v7 = *((int *)&v10);
    v8.new("multipleNO_COLOREL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRR", 8);
    v0.short(&v8, 97);
    v8.long(&v0, "multipleNO_COLOREL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRR", 8);
    v0.help(&v8, "support multiple arguments and treat each as a NAMESUFFIXremove a trailing SUFFIX; implies -aend each output line with NUL, not newlinesrc/uu/basename/src/basename.rs", 51);
    v8.action(&v0, 2);
    v0.overrides_with(&v8, "multipleNO_COLOREL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRR", 8);
    v8.arg(&v3, &v0);
    v3.new("name", 4);
    v0.action(&v3, 1);
    v3.value_hint(&v0);
    memcpy(&v0, &v3, 632);
    v1 = 516 | v4;
    v2 = *((int *)&v5);
    v3.arg(&v8, &v0);
    v8.new("suffix(uutils coreutils) 0.0.30{} [-z] NAME [SUFFIX]\n{} OPTION... NAME...support multiple arguments and treat each as a NAMESUFFIXremove a trailing SUFFIX; implies -aend each output line with NUL, not newlinesrc/uu/basename/src/basename.rs", 6);
    v0.short(&v8, 115);
    v8.long(&v0, "suffix(uutils coreutils) 0.0.30{} [-z] NAME [SUFFIX]\n{} OPTION... NAME...support multiple arguments and treat each as a NAMESUFFIXremove a trailing SUFFIX; implies -aend each output line with NUL, not newlinesrc/uu/basename/src/basename.rs", 6);
    v0.value_name(&v8);
    v8.help(&v0, "remove a trailing SUFFIX; implies -aend each output line with NUL, not newlinesrc/uu/basename/src/basename.rs", 36);
    v0.overrides_with(&v8, "suffix(uutils coreutils) 0.0.30{} [-z] NAME [SUFFIX]\n{} OPTION... NAME...support multiple arguments and treat each as a NAMESUFFIXremove a trailing SUFFIX; implies -aend each output line with NUL, not newlinesrc/uu/basename/src/basename.rs", 6);
    v8.arg(&v3, &v0);
    v3.new("zeroAnsi -- ", 4);
    v0.short(&v3, 122);
    v3.long(&v0, "zeroAnsi -- ", 4);
    v0.help(&v3, "end each output line with NUL, not newlinesrc/uu/basename/src/basename.rs", 42);
    v3.action(&v0, 2);
    v0.overrides_with(&v3, "zeroAnsi -- ", 4);
    a0.arg(&v8, &v0);
    return a0;
}
