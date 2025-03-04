undefined8
_ZN5uu_rm10remove_dir17h7d132cab7d9f675cE(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined local_98 [16];
  undefined8 uStack_88;
  undefined local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 **ppuStack_68;
  code *local_60;
  undefined8 local_58;
  char local_50;
  undefined8 *local_48;
  code *local_40;
  undefined8 local_38;
  char local_30;
  
  cVar1 = _ZN5uu_rm10prompt_dir17h3ebab050e61d8097E(param_1,param_2,*(undefined *)(param_3 + 6));
  if (cVar1 == '\0') {
    return 0;
  }
  _ZN3std2fs8read_dir17h67bbb91b5f22fd39E(&local_58,param_1,param_2);
  uStack_88 = param_2;
  if (local_50 == '\x02') {
                    /* try { // try from 001b7de8 to 001b7ea3 has its CatchHandler @ 001b8383 */
    local_98 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
    local_c8 = (undefined **)&DAT_00227970;
    local_c0 = 2;
    local_a8 = 0;
    local_b0 = 1;
    local_b8 = &local_78;
    local_78 = (undefined8 *)local_98;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
    local_98._0_8_ = 1;
    local_80 = 1;
    local_70 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_c8 = &PTR_DAT_00227aa8;
    local_c0 = 2;
    local_a8 = 0;
    local_b0 = 1;
    local_b8 = &local_78;
    local_98._8_8_ = param_1;
    local_78 = (undefined8 *)local_98;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
    if (local_50 != '\x02') {
      _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h5145ffa430dccd8eE(&local_58);
      return 1;
    }
  }
  else {
    local_38 = local_58;
    local_30 = local_50;
    if (*(char *)(param_3 + 4) == '\0' && *(char *)(param_3 + 3) == '\0') {
                    /* try { // try from 001b7ee2 to 001b809a has its CatchHandler @ 001b836a */
      local_98 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
      local_c8 = (undefined **)&DAT_00227970;
      local_c0 = 2;
      local_a8 = 0;
      local_b0 = 1;
      local_b8 = &local_78;
      local_78 = (undefined8 *)local_98;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
      local_98._0_8_ = 1;
      local_80 = 1;
      local_70 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_c8 = &PTR_DAT_00227a50;
      local_c0 = 2;
      local_a8 = 0;
      local_b0 = 1;
      local_b8 = &local_78;
      local_98._8_8_ = param_1;
      local_78 = (undefined8 *)local_98;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
    }
    else {
      _ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h153c1e0177592fe2E
                (&local_c8,&local_38);
      if (local_c8 == (undefined **)0x0) {
        _ZN4core3ptr118drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_std__fs__DirEntry_C_std__io__error__Error_GT__GT__GT_17hef23df45bf09fd2eE
                  (&local_c8);
        puVar2 = (undefined8 *)_ZN3std2fs10remove_dir17h3ace2cb00c00de8eE(param_1,param_2);
        if (puVar2 == (undefined8 *)0x0) {
          if (*(char *)(param_3 + 5) != '\0') {
                    /* try { // try from 001b8188 to 001b8197 has its CatchHandler @ 001b836a */
            _ZN5uu_rm9normalize17hc5c72b2dd9f7b482E(&local_78,param_1,param_2);
            local_98._0_8_ = 1;
            local_80 = 1;
            local_48 = (undefined8 *)local_98;
            local_40 = 
            _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
            local_c8 = &PTR_DAT_00227a88;
            local_c0 = 2;
            local_a8 = 0;
            local_b8 = &local_48;
            local_b0 = 1;
                    /* try { // try from 001b81ff to 001b8207 has its CatchHandler @ 001b8349 */
            _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_c8);
                    /* try { // try from 001b8208 to 001b8211 has its CatchHandler @ 001b836a */
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7c5c2bfda3b8aa48E(&local_78);
          }
                    /* try { // try from 001b8212 to 001b821e has its CatchHandler @ 001b8383 */
          _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h5145ffa430dccd8eE(&local_38);
          if (local_50 != '\x02') {
            return 0;
          }
          _ZN4core3ptr89drop_in_place_LT_core__result__Result_LT_std__fs__ReadDir_C_std__io__error__Error_GT__GT_17hfd9476c8e1bbd8ebE
                    (&local_58);
          return 0;
        }
        local_48 = puVar2;
        cVar1 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(puVar2);
        if (cVar1 == '\x01') {
                    /* try { // try from 001b80bc to 001b8177 has its CatchHandler @ 001b8358 */
          local_98 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
          local_c8 = (undefined **)&DAT_00227970;
          local_c0 = 2;
          local_a8 = 0;
          local_b0 = 1;
          local_b8 = &local_78;
          local_78 = (undefined8 *)local_98;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
          local_98._0_8_ = 1;
          local_80 = 1;
          local_70 = 
          _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
          local_c8 = &PTR_DAT_002279b0;
          local_c0 = 2;
          local_a8 = 0;
          local_b0 = 1;
          local_b8 = &local_78;
          local_98._8_8_ = param_1;
          local_78 = (undefined8 *)local_98;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
        }
        else {
                    /* try { // try from 001b8237 to 001b830b has its CatchHandler @ 001b8358 */
          local_98 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
          local_c8 = (undefined **)&DAT_00227970;
          local_c0 = 2;
          local_a8 = 0;
          local_b0 = 1;
          local_b8 = &local_78;
          local_78 = (undefined8 *)local_98;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
          local_98._0_8_ = 1;
          local_80 = 1;
          local_70 = 
          _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
          ppuStack_68 = &local_48;
          local_60 = 
          _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
          local_c8 = &PTR_DAT_002279d0;
          local_c0 = 3;
          local_a8 = 0;
          local_b0 = 2;
          local_b8 = &local_78;
          local_98._8_8_ = param_1;
          local_78 = (undefined8 *)local_98;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
        }
                    /* try { // try from 001b830c to 001b8318 has its CatchHandler @ 001b836a */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h333f14ee3ed91a78E(&local_48);
      }
      else {
        _ZN4core3ptr118drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_std__fs__DirEntry_C_std__io__error__Error_GT__GT__GT_17hef23df45bf09fd2eE
                  (&local_c8);
        local_98 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
        local_c8 = (undefined **)&DAT_00227970;
        local_c0 = 2;
        local_a8 = 0;
        local_b0 = 1;
        local_b8 = &local_78;
        local_78 = (undefined8 *)local_98;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
        local_98._0_8_ = 1;
        local_80 = 1;
        local_70 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_c8 = &PTR_DAT_00227aa8;
        local_c0 = 2;
        local_a8 = 0;
        local_b0 = 1;
        local_b8 = &local_78;
        local_98._8_8_ = param_1;
        local_78 = (undefined8 *)local_98;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
      }
    }
                    /* try { // try from 001b8319 to 001b8325 has its CatchHandler @ 001b8383 */
    _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h5145ffa430dccd8eE(&local_38);
    if (local_50 != '\x02') {
      return 1;
    }
  }
  _ZN4core3ptr89drop_in_place_LT_core__result__Result_LT_std__fs__ReadDir_C_std__io__error__Error_GT__GT_17hfd9476c8e1bbd8ebE
            (&local_58);
  return 1;
}