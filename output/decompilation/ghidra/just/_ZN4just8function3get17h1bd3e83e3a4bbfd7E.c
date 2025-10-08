undefined  [16] _ZN4just8function3get17h1bd3e83e3a4bbfd7E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined auVar4 [16];
  undefined local_80 [16];
  undefined8 *local_70;
  code *local_68;
  undefined local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 **local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  auVar4 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_suffix_of17ha48df28aef4c1d38E
                     ("_dir",4,param_1,param_2);
  if (auVar4._0_8_ == 0) {
    auVar4 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_suffix_of17ha48df28aef4c1d38E
                       ("_dir_native_directory_native",0xb,param_1,param_2);
    if (auVar4._0_8_ == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (local_60,param_1,param_2);
      goto LAB_00368826;
    }
    local_48 = &DAT_0052fd40;
  }
  else {
    local_48 = &DAT_0052fd20;
  }
  local_70 = (undefined8 *)local_80;
  local_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
  local_40 = 2;
  local_28 = 0;
  local_38 = &local_70;
  local_30 = 1;
  local_80 = auVar4;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
            (local_60,0,auVar4._8_8_,&local_48);
LAB_00368826:
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                    (local_58,local_50,"absolute_path",0xd);
  uVar2 = 1;
  if (cVar1 == '\0') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                      (local_58,local_50,"append",6);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                        (local_58,local_50,"arch",4);
      if (cVar1 == '\0') {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                          (local_58,local_50,"blake3",6);
        if (cVar1 == '\0') {
          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                            (local_58,local_50,"blake3_file",0xb);
          if (cVar1 == '\0') {
            cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                              (local_58,local_50,"cache_directory",0xf);
            if (cVar1 == '\0') {
              cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                (local_58,local_50,"canonicalize",0xc);
              if (cVar1 == '\0') {
                cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                  (local_58,local_50,"capitalize",10);
                if (cVar1 == '\0') {
                  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                    (local_58,local_50,&DAT_0016f879,6);
                  if (cVar1 == '\0') {
                    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                      (local_58,local_50,"clean",5);
                    if (cVar1 == '\0') {
                      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                        (local_58,local_50,"config_directory",0x10);
                      if (cVar1 == '\0') {
                        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                          (local_58,local_50,"config_local_directory",0x16);
                        if (cVar1 == '\0') {
                          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                            (local_58,local_50,"data_directory",0xe);
                          if (cVar1 == '\0') {
                            cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                              (local_58,local_50,"data_local_directory",0x14);
                            if (cVar1 == '\0') {
                              cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                (local_58,local_50,&DAT_00169498,8);
                              if (cVar1 == '\0') {
                                cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                  (local_58,local_50,"datetime_utc",0xc);
                                if (cVar1 == '\0') {
                                  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                    (local_58,local_50,"encode_uri_component",0x14);
                                  if (cVar1 == '\0') {
                                    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                      (local_58,local_50,"env",3);
                                    if (cVar1 == '\0') {
                                      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                        (local_58,local_50,"env_var",7);
                                      if (cVar1 == '\0') {
                                        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                          (local_58,local_50,"env_var_or_default",
                                                           0x12);
                                        if (cVar1 == '\0') {
                                          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,
                                                                                                                          
                                                  "error: Justfile contains no recipes.Justfile contains no default recipe.Justfile contains no choosable recipes.Could not find source file for import.Failed to get homedirFormatted justfile differs from original.Dotenv file not found"
                                                  ,5);
                                          if (cVar1 == '\0') {
                                            cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,
                                                             "executable_directory",0x14);
                                            if (cVar1 == '\0') {
                                              cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"extension",9);
                                              if (cVar1 == '\0') {
                                                cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"file_name",9);
                                                if (cVar1 == '\0') {
                                                  cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"file_stem",9);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"home_directory",0xe)
                                                  ;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,
                                                             "invocation_directory",0x14);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,
                                                             "invocation_directory_native",0x1b);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"is_dependency",0xd);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"join",4);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"just_executable",0xf
                                                            );
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"just_pid",8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,&DAT_00169778,8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"justfile_directory",
                                                             0x12);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"kebabcase",9);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"lowercamelcase",0xe)
                                                  ;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"lowercase",9);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,&DAT_00165b90,0x10);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"module_file",0xb);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,&DAT_00169220,8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"os",2);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"os_family",9);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,&DAT_001662e0,0x10);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"path_exists",0xb);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"prepend",7);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"quote",5);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"read\'::\'",4);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"replace",7);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"replace_regex",0xd);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"require",7);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"semver_matches",0xe)
                                                  ;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"sha256",6);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"sha256_file",0xb);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,&DAT_0016f5c8,5);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"shoutykebabcase",0xf
                                                            );
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"shoutysnakecase",0xf
                                                            );
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"snakecase",9);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"source_directory",
                                                             0x10);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"source_file",0xb);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"style",5);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"titlecase",9);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"trimf",4);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"trim_endseparateS",8
                                                            );
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"trim_end_match",0xe)
                                                  ;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,&DAT_00165c50,0x10);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"trim_start",10);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,&DAT_00165dd0,0x10);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"trim_start_matches",
                                                             0x12);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"uppercamelcase",0xe)
                                                  ;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"uppercase",9);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"uuid",4);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"which",5);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = 
                                                  _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                                            (local_58,local_50,"without_extension",
                                                             0x11);
                                                  uVar2 = 7;
                                                  if (cVar1 != '\0') {
                                                    uVar2 = 1;
                                                  }
                                                  pcVar3 = 
                                                  _ZN4just8function17without_extension17hc62b4ce9a32431aeE
                                                  ;
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function5which17h7a28eeb0a1e86466E;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function4uuid17hacf585e91e8aa975E;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function9uppercase17h3389c55500b45a3fE;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function14uppercamelcase17h4842eeec2fee7713E
                                                  ;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function18trim_start_matches17h594ce871964ae0d7E
                                                  ;
                                                  uVar2 = 4;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function16trim_start_match17h93698abdc24bc85eE
                                                  ;
                                                  uVar2 = 4;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function10trim_start17hb81ea3a8d52d1fecE;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function16trim_end_matches17hed5e180b7ddf0fd8E
                                                  ;
                                                  uVar2 = 4;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function14trim_end_match17h841cf853a8305e54E
                                                  ;
                                                  uVar2 = 4;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function8trim_end17he55cf4b7b357b8beE;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function4trim17h6dcf68e57589ef5bE;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function9titlecase17h48d5bab2badd951fE;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function5style17ha3f9d2b4981024b2E;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function11source_file17h3bb3d3af5aa39058E
                                                  ;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function16source_directory17haf90e63e7d60eca6E
                                                  ;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function9snakecase17hb887ef8f6cfe6d09E;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function15shoutysnakecase17ha7fd3c0a33f35413E
                                                  ;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function15shoutykebabcase17h3b56767b2d4801bdE
                                                  ;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 3;
                                                    pcVar3 = 
                                                  _ZN4just8function5shell17hc60b66f5da4ab5d9E;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function11sha256_file17hb1a94a1611e16d13E
                                                  ;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function6sha25617h31ab0b00f8d0281fE;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 4;
                                                    pcVar3 = 
                                                  _ZN4just8function14semver_matches17hc829c6283672f96cE
                                                  ;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function7require17h73196fd372847d20E;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function13replace_regex17h8803b128ee7d8c67E
                                                  ;
                                                  uVar2 = 6;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function7replace17h12bf9e13916de293E;
                                                  uVar2 = 6;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function4read17h9f661d9ed59f040fE;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function5quote17h677664b4bc5d7346E;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 4;
                                                    pcVar3 = 
                                                  _ZN4just8function7prepend17ha9b5730df85e0431E;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function11path_exists17h36f930aac5fe45b9E
                                                  ;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function16parent_directory17he998b42e01b3bf07E
                                                  ;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function9os_family17hc2c84ad18afb71adE;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function2os17h4917a32a236fcf0aE;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function8num_cpus17h99429b75fcda06ddE;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function11module_file17hd15dea5ff665aa02E
                                                  ;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function16module_directory17h0cd8c27649f24539E
                                                  ;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function9lowercase17h44140e93d6eef86eE;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function14lowercamelcase17h74e9eb517fa117eeE
                                                  ;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function9kebabcase17hf6095ecb99eadee6E;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function18justfile_directory17ha9a6716f71b3c245E
                                                  ;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function8justfile17h93d9ea79c0ffb490E;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function8just_pid17h7a6413ce5eb56871E;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function15just_executable17he6c6ddd88a3826c1E
                                                  ;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 5;
                                                    pcVar3 = 
                                                  _ZN4just8function4join17hf514232141c1b996E;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function13is_dependency17hcee1ad53c9c5bb76E
                                                  ;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function27invocation_directory_native17h9d701e5d86df925dE
                                                  ;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function20invocation_directory17he7bab9ef2e836ae7E
                                                  ;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4core3ops8function6FnOnce9call_once17h42c0341e362429ffE
                                                  ;
                                                  uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    pcVar3 = 
                                                  _ZN4just8function9file_stem17h2f1cc1efb96b02efE;
                                                  }
                                                }
                                                else {
                                                  pcVar3 = 
                                                  _ZN4just8function9file_name17hb0daec7e9e60d5edE;
                                                }
                                              }
                                              else {
                                                pcVar3 = 
                                                _ZN4just8function9extension17h7e9cc5525640480eE;
                                              }
                                            }
                                            else {
                                              pcVar3 = 
                                              _ZN4core3ops8function6FnOnce9call_once17h89fd3d4d1d9f754aE
                                              ;
                                              uVar2 = 0;
                                            }
                                          }
                                          else {
                                            pcVar3 = _ZN4just8function5error17h7735a4d93666e554E;
                                          }
                                        }
                                        else {
                                          pcVar3 = 
                                          _ZN4just8function18env_var_or_default17hb666ce340b10189aE;
                                          uVar2 = 4;
                                        }
                                      }
                                      else {
                                        pcVar3 = _ZN4just8function7env_var17hbabeac8dce4c02efE;
                                      }
                                    }
                                    else {
                                      uVar2 = 2;
                                      pcVar3 = _ZN4just8function3env17hd72232ca44c3d4f4E;
                                    }
                                  }
                                  else {
                                    pcVar3 = 
                                    _ZN4just8function20encode_uri_component17ha50336ba2fb60b34E;
                                  }
                                }
                                else {
                                  pcVar3 = _ZN4just8function12datetime_utc17hb877af7cf1b921b6E;
                                }
                              }
                              else {
                                pcVar3 = _ZN4just8function8datetime17h5d794853d1bed789E;
                              }
                            }
                            else {
                              pcVar3 = _ZN4core3ops8function6FnOnce9call_once17h937311ef8203448fE;
                              uVar2 = 0;
                            }
                          }
                          else {
                            pcVar3 = _ZN4core3ops8function6FnOnce9call_once17h5480c65f9c1fdbedE;
                            uVar2 = 0;
                          }
                        }
                        else {
                          pcVar3 = _ZN4core3ops8function6FnOnce9call_once17h36351fc8d73d797eE;
                          uVar2 = 0;
                        }
                      }
                      else {
                        pcVar3 = _ZN4core3ops8function6FnOnce9call_once17hb52a4411aaa430a6E;
                        uVar2 = 0;
                      }
                    }
                    else {
                      pcVar3 = _ZN4just8function5clean17hd74752c044f61e65E;
                    }
                  }
                  else {
                    pcVar3 = _ZN4just8function6choose17h83d0447726863b50E;
                    uVar2 = 4;
                  }
                }
                else {
                  pcVar3 = _ZN4just8function10capitalize17h1d6e827cb41c3328E;
                }
              }
              else {
                pcVar3 = _ZN4just8function12canonicalize17hfe002d29e7de8b87E;
              }
            }
            else {
              pcVar3 = _ZN4core3ops8function6FnOnce9call_once17h6e040c4c4b2d9455E;
              uVar2 = 0;
            }
          }
          else {
            pcVar3 = _ZN4just8function11blake3_file17hf625b0285e7f8a1cE;
          }
        }
        else {
          pcVar3 = _ZN4just8function6blake317hc8e8efe80116daffE;
        }
      }
      else {
        pcVar3 = _ZN4just8function4arch17h806ca4bce73ce62eE;
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 4;
      pcVar3 = _ZN4just8function6append17hd0bba8c67edfdf58E;
    }
  }
  else {
    pcVar3 = _ZN4just8function13absolute_path17h744f9b4b771655aeE;
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(local_60);
  auVar4._8_8_ = pcVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}