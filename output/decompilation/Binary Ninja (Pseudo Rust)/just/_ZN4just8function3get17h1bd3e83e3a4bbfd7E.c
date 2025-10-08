
  fn just::function::get::h1bd3e83e3a4bbfd7(arg1: i64, arg2: u64) -> i64

{
    let mut rax: i64;
    let mut rdx_1: u64;
    rax =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38(
        "_dirunixbodyHashj", 4, arg1, arg2);
    let mut var_60: ();
    let mut var_80: i64;
    let mut var_70: *mut i64;
    let mut rax_1: *mut c_void;
    
    if rax == 0
    {
        let mut rax_2: i64;
        rax_2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38("_dir_native_directory_nativeabso…", 0xb, arg1, arg2);
        
        if rax_2 != 0
        {
            var_80 = rax_2;
            let var_78_2: u64 = rdx_1;
            var_70 = &var_80;
            let var_68_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            rax_1 = &data_82fd40;
            goto 'label_6687eb;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_60, arg1, arg2);
    }
    else
    {
        var_80 = rax;
        let var_78_1: u64 = rdx_1;
        var_70 = &var_80;
        let var_68_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        rax_1 = &data_82fd20;
        'label_6687eb:
        let mut var_48: *mut c_void = rax_1;
        let var_40_1: i64 = 2;
        let var_28_1: i64 = 0;
        let var_38_1: *mut *mut i64 = &var_70;
        let var_30_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_60, 0, rdx_1, &var_48);
    }
    let mut result: i64 = 1;
    let var_58: i64;
    let var_50: u64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "absolute_pathappendblake3blake3_…", 0xd) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "appendblake3blake3_filecache_dir…", 6) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "archread'::']", 4) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "blake3blake3_filecache_directory…", 6) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                    "blake3_filecache_directorycanoni…", 0xb) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "cache_directorycanonicalizecapit…", 0xf) == 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "canonicalizecapitalizecleanconfi…", 0xc) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(
                            var_58, var_50, "capitalizecleanconfig_local_dire…", 0xa) == 0
                        {
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "chooseSelect one or more recipes…", 6) == 0
                            {
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "cleanconfig_local_directorydata_…", 5) == 0
                                {
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "config_directorysource_directory", 0x10)
                                        == 0
                                    {
                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "config_local_directorydata_direc…", 
                                            0x16) == 0
                                        {
                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "data_directorydata_local_directo…", 
                                                0xe) == 0
                                            {
                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                    "data_local_directorydatetime_utc…", 0x14) == 0
                                                {
                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "datetimewarning", 8) == 0
                                                        && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                        "datetime_utcencode_uri_component…", 0xc) == 0
                                                        && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                        "encode_uri_componentenvenv_varen…", 0x14) == 0
                                                    {
                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                            "envenv_varenv_var_or_defaultexec…", 3) == 0
                                                        {
                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                "env_varenv_var_or_defaultexecuta…", 7)
                                                                == 0
                                                            {
                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                    "env_var_or_defaultexecutable_dir…", 
                                                                    0x12) == 0
                                                                {
                                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                        "error: Justfile contains no reci…", 5)
                                                                        == 0
                                                                    {
                                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                            "executable_directoryextensionfil…", 
                                                                            0x14) == 0
                                                                        {
                                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                "extensionfile_namefile_stemhome_…", 9)
                                                                                == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                "file_namefile_stemhome_directory…", 9)
                                                                                == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                "file_stemhome_directoryinvocatio…", 9)
                                                                                == 0
                                                                            {
                                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                    "home_directoryinvocation_directo…", 
                                                                                    0xe) == 0
                                                                                {
                                                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                        "invocation_directoryinvocation_d…", 
                                                                                        0x14) == 0
                                                                                    {
                                                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                            "invocation_directory_nativeis_de…", 
                                                                                            0x1b) == 0
                                                                                        {
                                                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                "is_dependencyjust_executablejust…", 
                                                                                                0xd) == 0
                                                                                            {
                                                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                    "joinuuid'\''left\(buenum|", 4) == 0
                                                                                                {
                                                                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                        "just_executablejustfile_director…", 
                                                                                                        0xf) == 0
                                                                                                    {
                                                                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                            "just_pidnamepathstride: xidstart…", 8)
                                                                                                            == 0
                                                                                                        {
                                                                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                "justfileBG_BLACKBG_WHITEImplicit…", 8)
                                                                                                                == 0
                                                                                                            {
                                                                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                    "justfile_directorykebabcaselower…", 
                                                                                                                    0x12) == 0
                                                                                                                {
                                                                                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                        "kebabcaselowercamelcaselowercase…", 9)
                                                                                                                        == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                        "lowercamelcaselowercasemodule_fi…", 
                                                                                                                        0xe) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                        "lowercasemodule_fileosos_familyp…", 9)
                                                                                                                        == 0
                                                                                                                    {
                                                                                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                            "module_directoryInterpolationEnd…", 
                                                                                                                            0x10) == 0
                                                                                                                        {
                                                                                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                "module_fileosos_familypath_exist…", 
                                                                                                                                0xb) == 0
                                                                                                                            {
                                                                                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "num_cpu", 8) == 0
                                                                                                                                {
                                                                                                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                        "osos_familypath_existsprependquo…", 2)
                                                                                                                                        == 0
                                                                                                                                    {
                                                                                                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                            "os_familypath_existsprependquote…", 9)
                                                                                                                                            == 0
                                                                                                                                        {
                                                                                                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, &data_4662e0, 0x10)
                                                                                                                                                == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                "path_existsprependquotereplacere…", 
                                                                                                                                                0xb) == 0
                                                                                                                                            {
                                                                                                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                    "prependquotereplacereplace_regex…", 7)
                                                                                                                                                    == 0
                                                                                                                                                {
                                                                                                                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                        "quotereplacereplace_regexrequire…", 5)
                                                                                                                                                        == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "read'::']", 4)
                                                                                                                                                        == 0
                                                                                                                                                    {
                                                                                                                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                            "replacereplace_regexrequiresemve…", 7)
                                                                                                                                                            == 0
                                                                                                                                                        {
                                                                                                                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                "replace_regexrequiresemver_match…", 
                                                                                                                                                                0xd) == 0
                                                                                                                                                            {
                                                                                                                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                    "requiresemver_matchessha256sha25…", 7)
                                                                                                                                                                    == 0
                                                                                                                                                                {
                                                                                                                                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                        "semver_matchessha256sha256_files…", 
                                                                                                                                                                        0xe) == 0
                                                                                                                                                                    {
                                                                                                                                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                            "sha256sha256_fileshoutykebabcase…", 6)
                                                                                                                                                                            == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                            "sha256_fileshoutykebabcaseshouty…", 
                                                                                                                                                                            0xb) == 0
                                                                                                                                                                        {
                                                                                                                                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                "shellInvoke <SHELL> to run recip…", 5)
                                                                                                                                                                                == 0
                                                                                                                                                                            {
                                                                                                                                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                    "shoutykebabcaseshoutysnakecasesn…", 
                                                                                                                                                                                    0xf) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                    "shoutysnakecasesnakecasesource_f…", 
                                                                                                                                                                                    0xf) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                    "snakecasesource_filestyletitleca…", 9)
                                                                                                                                                                                    == 0
                                                                                                                                                                                {
                                                                                                                                                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "source_directory", 
                                                                                                                                                                                        0x10) == 0
                                                                                                                                                                                    {
                                                                                                                                                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                            "source_filestyletitlecasetrim_en…", 
                                                                                                                                                                                            0xb) == 0
                                                                                                                                                                                        {
                                                                                                                                                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                "styletitlecasetrim_end_matchtrim…", 5)
                                                                                                                                                                                                == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                "titlecasetrim_end_matchtrim_star…", 9)
                                                                                                                                                                                                == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, "trimf", 4)
                                                                                                                                                                                                == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                "trim_endseparateS", 8) == 0
                                                                                                                                                                                            {
                                                                                                                                                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                    "trim_end_matchtrim_starttrim_sta…", 
                                                                                                                                                                                                    0xe) == 0
                                                                                                                                                                                                {
                                                                                                                                                                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                        "trim_end_matchescpu.cfs_quota_us…", 
                                                                                                                                                                                                        0x10) == 0
                                                                                                                                                                                                    {
                                                                                                                                                                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                            "trim_starttrim_start_matchesuppe…", 
                                                                                                                                                                                                            0xa) == 0
                                                                                                                                                                                                        {
                                                                                                                                                                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                                "trim_start_matchgot codepoint U+…", 
                                                                                                                                                                                                                0x10) == 0
                                                                                                                                                                                                            {
                                                                                                                                                                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                                    "trim_start_matchesuppercamelcase…", 
                                                                                                                                                                                                                    0x12) == 0
                                                                                                                                                                                                                {
                                                                                                                                                                                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                                        "uppercamelcaseuppercasewhichwith…", 
                                                                                                                                                                                                                        0xe) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                                        "uppercasewhichwithout_extensionc…", 9)
                                                                                                                                                                                                                        == 0
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                                            "uuid'\''left\(buenum|", 4) == 0
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                                                "whichwithout_extensioncacheconfi…", 5)
                                                                                                                                                                                                                                == 0
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                result = 7;
                                                                                                                                                                                                                                
                                                                                                                                                                                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_58, var_50, 
                                                                                                                                                                                                                                    "without_extensioncacheconfigloca…", 
                                                                                                                                                                                                                                    0x11) != 0
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                    result = 1;
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                            result = 0;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                }
                                                                                                                                                                                                                else
                                                                                                                                                                                                                {
                                                                                                                                                                                                                    result = 4;
                                                                                                                                                                                                                }
                                                                                                                                                                                                            }
                                                                                                                                                                                                            else
                                                                                                                                                                                                            {
                                                                                                                                                                                                                result = 4;
                                                                                                                                                                                                            }
                                                                                                                                                                                                        }
                                                                                                                                                                                                    }
                                                                                                                                                                                                    else
                                                                                                                                                                                                    {
                                                                                                                                                                                                        result = 4;
                                                                                                                                                                                                    }
                                                                                                                                                                                                }
                                                                                                                                                                                                else
                                                                                                                                                                                                {
                                                                                                                                                                                                    result = 4;
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                        else
                                                                                                                                                                                        {
                                                                                                                                                                                            result = 0;
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                    else
                                                                                                                                                                                    {
                                                                                                                                                                                        result = 0;
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                            else
                                                                                                                                                                            {
                                                                                                                                                                                result = 3;
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                    else
                                                                                                                                                                    {
                                                                                                                                                                        result = 4;
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                            else
                                                                                                                                                            {
                                                                                                                                                                result = 6;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                        else
                                                                                                                                                        {
                                                                                                                                                            result = 6;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                                else
                                                                                                                                                {
                                                                                                                                                    result = 4;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                        else
                                                                                                                                        {
                                                                                                                                            result = 0;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                    else
                                                                                                                                    {
                                                                                                                                        result = 0;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                    result = 0;
                                                                                                                                }
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                                result = 0;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                            result = 0;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    result = 0;
                                                                                                                }
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                result = 0;
                                                                                                            }
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            result = 0;
                                                                                                        }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        result = 0;
                                                                                                    }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    result = 5;
                                                                                                }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                result = 0;
                                                                                            }
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            result = 0;
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        result = 0;
                                                                                    }
                                                                                }
                                                                                else
                                                                                {
                                                                                    result = 0;
                                                                                }
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            result = 0;
                                                                        }
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    result = 4;
                                                                }
                                                            }
                                                        }
                                                        else
                                                        {
                                                            result = 2;
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    result = 0;
                                                }
                                            }
                                            else
                                            {
                                                result = 0;
                                            }
                                        }
                                        else
                                        {
                                            result = 0;
                                        }
                                    }
                                    else
                                    {
                                        result = 0;
                                    }
                                }
                            }
                            else
                            {
                                result = 4;
                            }
                        }
                    }
                    else
                    {
                        result = 0;
                    }
                }
            }
            else
            {
                result = 0;
            }
        }
        else
        {
            result = 4;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_60);
    result
}
