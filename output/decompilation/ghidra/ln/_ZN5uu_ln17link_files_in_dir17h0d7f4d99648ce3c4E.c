undefined8
_ZN5uu_ln17link_files_in_dir17h0d7f4d99648ce3c4E
          (long param_1,long param_2,code *param_3,undefined8 **param_4,long param_5)

{
  char cVar1;
  code *pcVar2;
  undefined8 **ppuVar3;
  code *pcVar4;
  undefined8 **ppuVar5;
  char cVar6;
  char cVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined local_f8 [16];
  undefined8 **local_e8;
  code *local_e0;
  uint local_cc;
  undefined local_c8 [16];
  undefined8 *local_b8;
  code *pcStack_b0;
  undefined *local_a8;
  code *local_a0;
  undefined local_98 [8];
  undefined *local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_80 = param_5;
  cVar6 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(param_3,param_4);
  if (cVar6 == '\0') {
    _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
              (&local_128,param_3,param_4);
    uStack_110 = 0x8000000000000000;
    uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf17afba5cd7396c5E(&local_128);
    return uVar11;
  }
  _ZN3std6thread5local17LocalKey_LT_T_GT_8try_with17h0d9f788c4dae22c7E(&local_128);
  auVar12 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h5a01a070efd742e5E(&local_128);
  _ZN9hashbrown3map24HashMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17h75cd1283ff7601d9E
            (&local_128,param_2,auVar12._0_8_,auVar12._8_8_);
  local_48 = (undefined4)local_108;
  uStack_44 = local_108._4_4_;
  uStack_40 = uStack_100;
  uStack_3c = uStack_fc;
  local_58 = (undefined4)local_118;
  uStack_54 = local_118._4_4_;
  uStack_50 = (undefined4)uStack_110;
  uStack_4c = uStack_110._4_4_;
  local_68 = (undefined4)local_128;
  uStack_64 = local_128._4_4_;
  uStack_60 = (undefined4)uStack_120;
  uStack_5c = uStack_120._4_4_;
  local_70 = param_1 + param_2 * 0x18;
  local_78 = param_1;
  lVar8 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hca227a6f7df71fd4E
                    (&local_78);
  if (lVar8 != 0) {
    cVar6 = *(char *)(local_80 + 0x34);
    cVar1 = *(char *)(local_80 + 0x36);
    local_cc = (uint)CONCAT71((int7)((ulong)lVar8 >> 8),1);
    do {
      if (cVar1 == '\x02' && cVar6 != '\0') {
                    /* try { // try from 001b9b7c to 001b9bae has its CatchHandler @ 001ba288 */
        cVar7 = _ZN3std4path4Path10is_symlink17h6ab8b58756c51c6bE(param_3,param_4);
        if (cVar7 == '\0') goto LAB_001b9e10;
        cVar7 = _ZN3std4path4Path7is_file17h82f08f46fb8d8099E(param_3,param_4);
        if (cVar7 != '\0') {
          puVar9 = (undefined *)_ZN3std2fs11remove_file17h49bdff741c081dc5E(param_3,param_4);
          if (puVar9 != (undefined *)0x0) {
            local_c8._0_8_ = puVar9;
                    /* try { // try from 001b9bbd to 001b9cb2 has its CatchHandler @ 001ba253 */
            local_f8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_b8 = (undefined8 *)local_f8;
            pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1743bab71917fc0bE;
            local_128 = (undefined **)&DAT_0022cf68;
            uStack_120 = (code *)0x2;
            local_108 = 0;
            local_118 = &local_b8;
            uStack_110 = 1;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_128);
            local_f8._0_8_ = &DAT_00000001;
            local_e0 = (code *)CONCAT71(local_e0._1_7_,1);
            local_b8 = (undefined8 *)local_f8;
            pcStack_b0 = 
            _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
            local_a8 = local_c8;
            local_a0 = 
            _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E
            ;
            local_128 = &PTR_s_Could_not_update_0022cf88;
            uStack_120 = (code *)0x3;
            local_108 = 0;
            local_118 = &local_b8;
            uStack_110 = 2;
            local_f8._8_8_ = param_3;
            local_e8 = param_4;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_128);
                    /* try { // try from 001b9cb8 to 001b9cdb has its CatchHandler @ 001ba288 */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h106838a02a13d9fdE
                      (local_c8._0_8_);
          }
        }
        cVar7 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(param_3,param_4);
        if (cVar7 != '\0') {
          puVar9 = (undefined *)_ZN3std2fs10remove_dir17h9bddb08efc8342d5E(param_3,param_4);
          if (puVar9 != (undefined *)0x0) {
            local_c8._0_8_ = puVar9;
                    /* try { // try from 001b9cea to 001b9ddf has its CatchHandler @ 001ba244 */
            local_f8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_b8 = (undefined8 *)local_f8;
            pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1743bab71917fc0bE;
            local_128 = (undefined **)&DAT_0022cf68;
            uStack_120 = (code *)0x2;
            local_108 = 0;
            local_118 = &local_b8;
            uStack_110 = 1;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_128);
            local_f8._0_8_ = &DAT_00000001;
            local_e0 = (code *)CONCAT71(local_e0._1_7_,1);
            local_b8 = (undefined8 *)local_f8;
            pcStack_b0 = 
            _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
            local_a8 = local_c8;
            local_a0 = 
            _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E
            ;
            local_128 = &PTR_s_Could_not_update_0022cf88;
            uStack_120 = (code *)0x3;
            local_108 = 0;
            local_118 = &local_b8;
            uStack_110 = 2;
            local_f8._8_8_ = param_3;
            local_e8 = param_4;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_128);
                    /* try { // try from 001b9de5 to 001b9f6e has its CatchHandler @ 001ba288 */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h106838a02a13d9fdE
                      (local_c8._0_8_);
          }
        }
        _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
                  (local_98,param_3,param_4);
LAB_001b9f70:
                    /* try { // try from 001b9f70 to 001ba09c has its CatchHandler @ 001ba276 */
        lVar10 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h0bc31a4b071d28eaE
                           (&local_68,local_98);
        if (lVar10 == 0) {
          auVar12 = _ZN5uu_ln4link17h8c92ebae2dccde8fE
                              (*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),local_90,
                               uStack_88,local_80);
          if (auVar12._0_8_ != 0) {
            local_c8 = auVar12;
                    /* try { // try from 001ba0b0 to 001ba168 has its CatchHandler @ 001ba262 */
            local_f8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_b8 = (undefined8 *)local_f8;
            pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1743bab71917fc0bE;
            local_128 = (undefined **)&DAT_0022cf68;
            uStack_120 = (code *)0x2;
            local_108 = 0;
            local_118 = &local_b8;
            uStack_110 = 1;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_128);
            local_f8._0_8_ = local_c8;
            local_f8._8_8_ =
                 _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h863403f9a165bd80E
            ;
            local_128 = (undefined **)&DAT_0022d008;
            uStack_120 = (code *)0x2;
            local_108 = 0;
            local_118 = (undefined8 **)local_f8;
            uStack_110 = 1;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_128);
                    /* try { // try from 001ba173 to 001ba1b5 has its CatchHandler @ 001ba276 */
            _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17hae31b381e209e077E
                      (local_c8._0_8_,local_c8._8_8_);
            goto LAB_001ba178;
          }
        }
        else {
          local_f8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_b8 = (undefined8 *)local_f8;
          pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1743bab71917fc0bE;
          local_128 = (undefined **)&DAT_0022cf68;
          uStack_120 = (code *)0x2;
          local_108 = 0;
          local_118 = &local_b8;
          uStack_110 = 1;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_128);
          local_c8._0_8_ = local_90;
          local_c8._8_8_ = uStack_88;
          local_b8 = *(undefined8 **)(lVar8 + 8);
          pcStack_b0 = *(code **)(lVar8 + 0x10);
          local_f8._0_8_ = local_c8;
          local_f8._8_8_ =
               _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E
          ;
          local_e8 = &local_b8;
          local_e0 = 
          _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E;
          local_128 = &PTR_s_will_not_overwrite_just_created___0022cfd8;
          uStack_120 = (code *)0x3;
          local_108 = 0;
          local_118 = (undefined8 **)local_f8;
          uStack_110 = 2;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_128);
LAB_001ba178:
          local_cc = 0;
        }
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hbf396db49ef6ba51E
                  (&local_128,local_98);
        local_e8 = local_118;
        local_f8._0_8_ = local_128;
        local_f8._8_8_ = uStack_120;
        _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hc95a599cc62b1fc4E
                  (&local_68,local_f8);
                    /* try { // try from 001ba1b6 to 001ba1c2 has its CatchHandler @ 001ba288 */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hff8990cc0a5456e3E(local_98);
      }
      else {
LAB_001b9e10:
        pcVar2 = *(code **)(lVar8 + 8);
        ppuVar3 = *(undefined8 ***)(lVar8 + 0x10);
        _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
                  (&local_128,pcVar2,ppuVar3);
        ppuVar5 = local_118;
        pcVar4 = uStack_120;
        if (local_128 == (undefined **)0x0) {
          auVar12 = _ZN3std4path4Path9file_name17h79ecbb7850a9c7f3E(uStack_120,local_118);
          if (auVar12._0_8_ == 0) {
            _ZN3std4path4Path4join17he50aec8d5a7ea1a7E(local_98,param_3,param_4,pcVar4,ppuVar5);
          }
          else {
            _ZN3std4path4Path4join17hbea12235afa21da2E
                      (local_98,param_3,param_4,auVar12._0_8_,auVar12._8_8_);
          }
          goto LAB_001b9f70;
        }
        local_f8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_b8 = (undefined8 *)local_f8;
        pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1743bab71917fc0bE;
        local_128 = (undefined **)&DAT_0022cf68;
        uStack_120 = (code *)0x2;
        local_108 = 0;
        local_118 = &local_b8;
        uStack_110 = 1;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_128);
        local_f8._0_8_ = &DAT_00000001;
        local_e0 = (code *)CONCAT71(local_e0._1_7_,1);
        local_b8 = (undefined8 *)local_f8;
        pcStack_b0 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_128 = &PTR_s_cannot_stat___No_such_file_or_di_0022cfb8;
        uStack_120 = (code *)0x2;
        local_108 = 0;
        local_118 = &local_b8;
        uStack_110 = 1;
        local_f8._8_8_ = pcVar2;
        local_e8 = ppuVar3;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_128);
        local_cc = 0;
      }
      lVar8 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hca227a6f7df71fd4E
                        (&local_78);
    } while (lVar8 != 0);
    if ((local_cc & 1) == 0) {
      uStack_110 = 0x8000000000000001;
                    /* try { // try from 001ba20f to 001ba218 has its CatchHandler @ 001ba242 */
      uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf17afba5cd7396c5E(&local_128);
      goto LAB_001ba220;
    }
  }
  uVar11 = 0;
LAB_001ba220:
  _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17h5977e179e61e5eb6E
            (&local_68);
  return uVar11;
}