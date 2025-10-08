void _ZN2rg14files_parallel17h3684f7287384284eE(undefined *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined local_33a;
  undefined local_339;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long local_228;
  long local_220;
  undefined8 local_218 [3];
  undefined local_200;
  long local_150 [14];
  undefined local_e0 [192];
  
  local_339 = *(undefined *)(param_2 + 0x168);
  local_328 = param_2;
  _ZN2rg5flags6hiargs6HiArgs20path_printer_builder17h89f24a04c32e915aE(&local_308);
                    /* try { // try from 0035ba0d to 0035ba36 has its CatchHandler @ 0035bc94 */
  _ZN2rg5flags6hiargs6HiArgs6stdout17h4f38f4c31b97dea6E(&local_228,param_2);
  _ZN12grep_printer4path18PathPrinterBuilder5build17he67013d7ee9839abE
            (local_e0,&local_308,&local_228);
                    /* try { // try from 0035ba37 to 0035ba4f has its CatchHandler @ 0035bc82 */
  _ZN4core3ptr59drop_in_place_LT_grep_printer__path__PathPrinterBuilder_GT_17h1ff9a380ad59c6f7E
            (&local_308);
  local_33a = 0;
  _ZN3std4sync4mpmc7channel17h2b71f353b763d9a3E(&local_308);
  local_338 = (undefined4)local_308;
  uStack_334 = local_308._4_4_;
  uStack_330 = (undefined4)uStack_300;
  uStack_32c = uStack_300._4_4_;
  local_248 = (undefined4)local_2f8;
  uStack_244 = local_2f8._4_4_;
  uStack_240 = (undefined4)uStack_2f0;
  uStack_23c = uStack_2f0._4_4_;
  (*(code *)PTR_memcpy_00526658)(&local_308,local_e0,0xc0);
  local_218[0] = 0x8000000000000000;
  local_228 = 0;
  local_200 = 0;
                    /* try { // try from 0035baa8 to 0035bad1 has its CatchHandler @ 0035bca3 */
  _ZN3std6thread7Builder15spawn_unchecked17hb6bf3905158c1bc1E(local_150,&local_228,&local_308);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17he09aaada8765e00bE(&local_320,local_150);
                    /* try { // try from 0035bad5 to 0035bae1 has its CatchHandler @ 0035bc6e */
  _ZN2rg5flags6hiargs6HiArgs12walk_builder17h93d7dc6144a9675fE(&local_308,param_2);
  if (local_308 == (undefined *)0x2) {
    *(undefined **)(param_1 + 8) = uStack_300;
    *param_1 = 1;
                    /* try { // try from 0035baf9 to 0035bb02 has its CatchHandler @ 0035bca3 */
    _ZN4core3ptr112drop_in_place_LT_std__thread__JoinHandle_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT__GT_17hd818caf9cbfdf193E
              (&local_320);
    _ZN4core3ptr74drop_in_place_LT_std__sync__mpsc__Sender_LT_rg__haystack__Haystack_GT__GT_17h9a3ab15574c99b0aE
              (&local_338);
  }
  else {
    (*(code *)PTR_memcpy_00526658)(local_218,&local_2f8,200);
    local_228 = (long)local_308;
    local_220 = (long)uStack_300;
                    /* try { // try from 0035bb3a to 0035bb89 has its CatchHandler @ 0035bc59 */
    (*(code *)PTR__ZN6ignore4walk11WalkBuilder14build_parallel17h8650197b25876e16E_005272d0)
              (local_150,&local_228);
    local_308 = &local_339;
    uStack_300 = &local_33a;
    local_2f8 = &local_338;
    uStack_2f0 = &local_328;
    _ZN6ignore4walk12WalkParallel3run17he7776bff972269b8E(local_150,&local_308);
                    /* try { // try from 0035bb8a to 0035bbac has its CatchHandler @ 0035bc6e */
    _ZN4core3ptr46drop_in_place_LT_ignore__walk__WalkBuilder_GT_17h38295eb0d419261cE(&local_228);
    local_308 = (undefined *)CONCAT44(uStack_334,local_338);
    uStack_300 = (undefined *)CONCAT44(uStack_32c,uStack_330);
    _ZN4core3ptr74drop_in_place_LT_std__sync__mpsc__Sender_LT_rg__haystack__Haystack_GT__GT_17h9a3ab15574c99b0aE
              (&local_308);
    local_2f8 = (undefined4 *)local_310;
    local_308 = (undefined *)CONCAT44(uStack_31c,local_320);
    _ZN3std6thread18JoinInner_LT_T_GT_4join17h744b44382a866568E(&local_228,&local_308);
    lVar1 = local_220;
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h487008bcb0c7d249E(local_228,local_220);
    local_150[0] = lVar1;
    if (lVar1 == 0) {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                (local_150);
    }
    else {
      local_308 = (undefined *)lVar1;
      cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar1);
      if (cVar2 != '\v') {
        uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h93265d5384100ee9E
                          (lVar1);
        *(undefined8 *)(param_1 + 8) = uVar3;
        *param_1 = 1;
        return;
      }
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17haa31b1f83e302f9eE(&local_308);
    }
    cVar2 = _ZN4core4sync6atomic11atomic_load17h529993013ff7d57cE(&local_33a,4);
    param_1[1] = cVar2 != '\0';
    *param_1 = 0;
  }
  return;
}