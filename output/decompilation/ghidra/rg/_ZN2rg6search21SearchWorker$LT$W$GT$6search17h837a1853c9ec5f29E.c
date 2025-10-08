void _ZN2rg6search21SearchWorker_LT_W_GT_6search17h837a1853c9ec5f29E
               (undefined8 param_1,long param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined extraout_DL;
  undefined8 uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined auVar8 [16];
  undefined local_c2;
  undefined local_c1;
  undefined8 local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined local_60 [16];
  undefined8 *local_50;
  undefined *local_48;
  undefined *local_40;
  code *local_38;
  
  local_c0 = param_1;
  bVar1 = _ZN2rg8haystack8Haystack11is_explicit17h64cc0399f7646269E(param_3);
  uVar6 = *(undefined *)(param_2 + 0x278 + (ulong)bVar1 * 2);
  uVar7 = *(undefined *)(param_2 + 0x279 + (ulong)bVar1 * 2);
  local_c2 = uVar6;
  local_c1 = uVar7;
  auVar8 = _ZN2rg8haystack8Haystack4path17hcb9efbeaa40de5dfE(param_3);
  uVar5 = auVar8._8_8_;
  uVar3 = auVar8._0_8_;
  uVar4 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
  if (4 < uVar4) {
    local_50 = (undefined8 *)local_60;
    local_48 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00526dd0
    ;
    local_40 = &local_c2;
    local_38 = 
    _ZN77__LT_grep_searcher__searcher__BinaryDetection_u20_as_u20_core__fmt__Debug_GT_3fmt17h3a76aecfa4983e9fE
    ;
    local_b8 = &DAT_004eb898;
    local_b0 = 2;
    local_98 = 0;
    local_a8 = &local_50;
    local_a0 = 2;
    local_60 = auVar8;
    local_68 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                         (&PTR_s_crates_core_search_rs_004eb8b8);
    local_88 = "rg::searchpreprocessor command could not start: \'preprocessor command failed: \'";
    local_80 = 10;
    local_78 = "rg::searchpreprocessor command could not start: \'preprocessor command failed: \'";
    local_70 = 10;
    _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_b8,5,&local_88);
    uVar6 = local_c2;
    uVar7 = local_c1;
  }
  (*(code *)
    PTR__ZN13grep_searcher8searcher8Searcher20set_binary_detection17hd7f4fb50cb7815e8E_00527278)
            (param_2,uVar6,uVar7);
  if (*param_3 == 0) {
    local_88 = (char *)(*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00527280)();
    local_b8 = (undefined *)
               (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_00527288)(&local_88);
    local_b0 = CONCAT71(local_b0._1_7_,extraout_DL) & 0xffffffffffffff01;
                    /* try { // try from 00357217 to 00357232 has its CatchHandler @ 003572aa */
    _ZN2rg6search13search_reader17h7f5dbec13f44e948E
              (local_c0,param_2 + 0x2c0,param_2,param_2 + 0x108,uVar3,uVar5,&local_b8);
    _ZN4core3ptr116drop_in_place_LT_std__sync__mpmc__zero__Channel_LT_rg__haystack__Haystack_GT___recv___u7b__u7b_closure_u7d__u7d__GT_17h85409010ad860f66E
              (local_b8,local_b0 & 0xffffffff);
  }
  else {
    cVar2 = _ZN2rg6search21SearchWorker_LT_W_GT_17should_preprocess17hf284b37ad5562aa3E
                      (param_2,uVar3,uVar5);
    if (cVar2 == '\0') {
      if (*(char *)(param_2 + 0x27c) != '\0') {
        cVar2 = _ZN7globset7GlobSet8is_match17he75c47efc4dacc15E(param_2 + 0x280,uVar3,uVar5);
        if (cVar2 != '\0') {
          _ZN2rg6search21SearchWorker_LT_W_GT_17search_decompress17hb296485a18d4d8f8E
                    (local_c0,param_2,uVar3,uVar5);
          return;
        }
      }
      _ZN2rg6search11search_path17hcddb9f8857d0e766E
                (local_c0,param_2 + 0x2c0,param_2,param_2 + 0x108,uVar3,uVar5);
    }
    else {
      _ZN2rg6search21SearchWorker_LT_W_GT_19search_preprocessor17h295b0344cca9801bE
                (local_c0,param_2,uVar3,uVar5);
    }
  }
  return;
}