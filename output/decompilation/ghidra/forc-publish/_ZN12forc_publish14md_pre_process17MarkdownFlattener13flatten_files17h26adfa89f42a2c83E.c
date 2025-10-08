void _ZN12forc_publish14md_pre_process17MarkdownFlattener13flatten_files17h26adfa89f42a2c83E
               (undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined local_f8 [8];
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined local_b0 [16];
  undefined8 local_a0;
  undefined local_98 [8];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_58 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17he15e8432aab59907E();
  local_78 = PTR_DAT_00f53140;
  uStack_70 = _UNK_00f53148;
  local_68 = _DAT_00f53150;
  uStack_64 = _UNK_00f53154;
  uStack_60 = _UNK_00f53158;
  uStack_5c = _UNK_00f5315c;
                    /* try { // try from 007641ed to 00764203 has its CatchHandler @ 0076442c */
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h92399a8041d2121dE_01049938)
            (&local_e0,"\\{\\{#include\\s+([^\\}]+)\\}\\}",0x1b);
  uStack_f0 = uStack_d0;
  uVar1 = uStack_f0;
  local_e8 = local_c8;
  uStack_f0._0_4_ = (undefined4)uStack_d0;
  uStack_f0._4_4_ = (undefined4)((ulong)uStack_d0 >> 0x20);
  uStack_f0 = uVar1;
  if (CONCAT44(uStack_dc,local_e0) == 0) {
    param_1[4] = local_c8;
    *(undefined4 *)(param_1 + 2) = uStack_d8;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_d4;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_f0;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_f0._4_4_;
    param_1[1] = 1;
    *param_1 = 0;
LAB_0076440d:
    _ZN4core3ptr107drop_in_place_LT_std__collections__hash__map__HashMap_LT_std__path__PathBuf_C_alloc__string__String_GT__GT_17h0633c498c6233597E
              (&local_78);
  }
  else {
    local_80 = local_c8;
    local_90 = uStack_d8;
    uStack_8c = uStack_d4;
    uStack_88 = (undefined4)uStack_f0;
    uStack_84 = uStack_f0._4_4_;
    local_b8 = param_2 + param_3 * 0x18;
    local_c0 = param_2;
    lVar2 = _ZN106__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h33f58c0ce1010ffeE
                      (&local_c0);
    if (lVar2 != 0) {
      do {
                    /* try { // try from 00764290 to 0076429a has its CatchHandler @ 00764467 */
        _ZN3std2fs14read_to_string17h6ed86aa426eff30cE(&local_e0,lVar2);
        local_a0 = uStack_d0;
                    /* try { // try from 007642cd to 007642e0 has its CatchHandler @ 00764458 */
        _ZN12forc_publish14md_pre_process17MarkdownFlattener15expand_includes17h83dead0047470900E
                  (&local_e0,CONCAT44(uStack_d4,uStack_d8),uStack_d0,*(undefined8 *)(lVar2 + 8),
                   *(undefined8 *)(lVar2 + 0x10),&local_78,local_98);
        uStack_f0 = uStack_d0;
        uVar1 = uStack_f0;
        local_e8 = local_c8;
        uStack_f0._0_4_ = (undefined4)uStack_d0;
        uStack_f0._4_4_ = (undefined4)((ulong)uStack_d0 >> 0x20);
        uStack_f0 = uVar1;
        if (CONCAT44(uStack_dc,local_e0) != 6) {
          param_1[4] = local_c8;
          *(undefined4 *)(param_1 + 2) = uStack_d8;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_d4;
          *(undefined4 *)(param_1 + 3) = (undefined4)uStack_f0;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_f0._4_4_;
          param_1[1] = CONCAT44(uStack_dc,local_e0);
          *param_1 = 0;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc89c62839702889E(local_b0);
                    /* try { // try from 00764403 to 0076440c has its CatchHandler @ 0076442c */
          _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17hf26d957e27fac499E
                    (local_98);
          goto LAB_0076440d;
        }
        local_38 = local_c8;
        local_48 = uStack_d8;
        uStack_44 = uStack_d4;
        uStack_40 = (undefined4)uStack_f0;
        uStack_3c = uStack_f0._4_4_;
                    /* try { // try from 00764324 to 0076432b has its CatchHandler @ 00764444 */
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf5c3ac682d18fe48E
                  (&local_e0,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
        local_e8 = uStack_d0;
        uStack_f0 = CONCAT44(uStack_d4,uStack_d8);
                    /* try { // try from 00764340 to 00764357 has its CatchHandler @ 00764456 */
        _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hfebdfcc7d1c6b61fE
                  (&local_e0,&local_78,local_f8,&local_48);
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h64a397d3b8b0d7e0E
                  (&local_e0);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc89c62839702889E(local_b0);
        lVar2 = _ZN106__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h33f58c0ce1010ffeE
                          (&local_c0);
      } while (lVar2 != 0);
    }
    *(undefined4 *)(param_1 + 4) = local_58._0_4_;
    *(undefined4 *)((long)param_1 + 0x24) = local_58._4_4_;
    *(undefined4 *)(param_1 + 5) = local_58._8_4_;
    *(undefined4 *)((long)param_1 + 0x2c) = local_58._12_4_;
    *(undefined4 *)(param_1 + 2) = local_68;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_64;
    *(undefined4 *)(param_1 + 3) = uStack_60;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_5c;
    *(undefined4 *)param_1 = (undefined4)local_78;
    *(undefined4 *)((long)param_1 + 4) = local_78._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_70._4_4_;
    _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17hf26d957e27fac499E(local_98);
  }
  return;
}