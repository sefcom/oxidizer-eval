void _ZN2rg5files17head8fb4031fefc91E(undefined *param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined uVar6;
  undefined auVar7 [16];
  undefined local_439;
  long local_438;
  long local_430;
  int local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  long local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined local_398 [48];
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined local_2d0 [336];
  long local_180;
  undefined8 local_178;
  undefined local_170 [312];
  undefined *local_38;
  
  local_439 = *(undefined *)(param_2 + 0x168);
  _ZN2rg5flags6hiargs6HiArgs12walk_builder17h93d7dc6144a9675fE(&local_180);
  if (local_180 == 2) {
    *(undefined8 *)(param_1 + 8) = local_178;
    *param_1 = 1;
    return;
  }
  (*(code *)PTR_memcpy_00526658)(local_398,local_170,200);
  local_3a8 = local_180;
  uStack_3a0 = local_178;
                    /* try { // try from 0035b59d to 0035b5b2 has its CatchHandler @ 0035b954 */
  (*(code *)PTR__ZN6ignore4walk11WalkBuilder5build17he602309561c36e94E_005272b8)
            (local_2d0,&local_3a8);
  (*(code *)PTR_memcpy_00526658)(&local_180,local_2d0,0x148);
  local_38 = &local_439;
                    /* try { // try from 0035b5db to 0035b5e7 has its CatchHandler @ 0035b942 */
  _ZN4core3ptr46drop_in_place_LT_ignore__walk__WalkBuilder_GT_17h38295eb0d419261cE(&local_3a8);
  (*(code *)PTR_memcpy_00526658)(local_2d0,&local_180,0x150);
  auVar7 = _ZN2rg5flags6hiargs6HiArgs4sort17h98c61ac354693ef8E(param_2,local_2d0);
  local_438 = auVar7._8_8_;
  uVar3 = auVar7._0_8_;
                    /* try { // try from 0035b619 to 0035b628 has its CatchHandler @ 0035b93d */
  _ZN2rg5flags6hiargs6HiArgs20path_printer_builder17h89f24a04c32e915aE(&local_3a8,param_2);
                    /* try { // try from 0035b629 to 0035b64f has its CatchHandler @ 0035b96b */
  _ZN2rg5flags6hiargs6HiArgs6stdout17h4f38f4c31b97dea6E(&local_428,param_2);
  _ZN12grep_printer4path18PathPrinterBuilder5build17he67013d7ee9839abE
            (local_2d0,&local_3a8,&local_428);
                    /* try { // try from 0035b653 to 0035b65f has its CatchHandler @ 0035b966 */
  _ZN4core3ptr59drop_in_place_LT_grep_printer__path__PathPrinterBuilder_GT_17h1ff9a380ad59c6f7E
            (&local_3a8);
  pcVar1 = *(code **)(local_438 + 0x18);
  if ((*(byte *)(param_2 + 0x38b) & 1) == 0) {
                    /* try { // try from 0035b700 to 0035b709 has its CatchHandler @ 0035b93b */
    (*pcVar1)(&local_428,uVar3);
    if (local_428 == 3) goto LAB_0035b711;
    local_338 = local_3b8;
    local_348 = local_3c8;
    uStack_340 = uStack_3c0;
    local_358 = local_3d8;
    uStack_350 = uStack_3d0;
    local_368 = local_3e8;
    uStack_360 = uStack_3e0;
    local_3a8 = CONCAT44(uStack_424,local_428);
    uStack_3a0 = CONCAT44(uStack_41c,uStack_420);
                    /* try { // try from 0035b787 to 0035b7a3 has its CatchHandler @ 0035b939 */
    uVar4 = _ZN2rg8haystack8Haystack4path17hcb9efbeaa40de5dfE(&local_3a8);
    lVar5 = _ZN12grep_printer4path20PathPrinter_LT_W_GT_5write17ha37da784cca891cdE(local_2d0,uVar4);
    if (lVar5 != 0) {
LAB_0035b7b5:
      local_430 = lVar5;
      local_3b0 = lVar5;
      cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar5);
      if (cVar2 != '\v') {
                    /* try { // try from 0035b81c to 0035b823 has its CatchHandler @ 0035b931 */
        uVar4 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h93265d5384100ee9E
                          (lVar5);
        *(undefined8 *)(param_1 + 8) = uVar4;
        *param_1 = 1;
                    /* try { // try from 0035b82c to 0035b838 has its CatchHandler @ 0035b935 */
        _ZN4core3ptr43drop_in_place_LT_rg__haystack__Haystack_GT_17h5f0cb9c54e389b81E(&local_3a8);
                    /* try { // try from 0035b83b to 0035b847 has its CatchHandler @ 0035b966 */
        _ZN4core3ptr118drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT_17h7c09de5d3363bbc9E
                  (uVar3,local_438);
        goto LAB_0035b7fd;
      }
                    /* try { // try from 0035b7c9 to 0035b7d5 has its CatchHandler @ 0035b933 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17haa31b1f83e302f9eE(&local_3b0);
      goto LAB_0035b7d6;
    }
                    /* try { // try from 0035b84a to 0035b853 has its CatchHandler @ 0035b939 */
    local_430 = lVar5;
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
              (&local_430);
                    /* try { // try from 0035b854 to 0035b860 has its CatchHandler @ 0035b93b */
    _ZN4core3ptr43drop_in_place_LT_rg__haystack__Haystack_GT_17h5f0cb9c54e389b81E(&local_3a8);
                    /* try { // try from 0035b870 to 0035b877 has its CatchHandler @ 0035b97d */
    while ((*pcVar1)(&local_428,uVar3), local_428 != 3) {
      local_338 = local_3b8;
      local_348 = local_3c8;
      uStack_340 = uStack_3c0;
      local_358 = local_3d8;
      uStack_350 = uStack_3d0;
      local_368 = local_3e8;
      uStack_360 = uStack_3e0;
      local_3a8 = CONCAT44(uStack_424,local_428);
      uStack_3a0 = CONCAT44(uStack_41c,uStack_420);
                    /* try { // try from 0035b8f1 to 0035b923 has its CatchHandler @ 0035b982 */
      uVar4 = _ZN2rg8haystack8Haystack4path17hcb9efbeaa40de5dfE(&local_3a8);
      lVar5 = _ZN12grep_printer4path20PathPrinter_LT_W_GT_5write17ha37da784cca891cdE
                        (local_2d0,uVar4);
      if (lVar5 != 0) goto LAB_0035b7b5;
      local_430 = lVar5;
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                (&local_430);
                    /* try { // try from 0035b924 to 0035b92b has its CatchHandler @ 0035b97d */
      _ZN4core3ptr43drop_in_place_LT_rg__haystack__Haystack_GT_17h5f0cb9c54e389b81E(&local_3a8);
    }
LAB_0035b7e3:
    uVar6 = 1;
  }
  else {
                    /* try { // try from 0035b678 to 0035b681 has its CatchHandler @ 0035b937 */
    (*pcVar1)(&local_428,uVar3);
    if (local_428 != 3) {
      local_338 = local_3b8;
      local_348 = local_3c8;
      uStack_340 = uStack_3c0;
      local_358 = local_3d8;
      uStack_350 = uStack_3d0;
      local_368 = local_3e8;
      uStack_360 = uStack_3e0;
      local_3a8 = CONCAT44(uStack_424,local_428);
      uStack_3a0 = CONCAT44(uStack_41c,uStack_420);
LAB_0035b7d6:
                    /* try { // try from 0035b7d6 to 0035b7e2 has its CatchHandler @ 0035b935 */
      _ZN4core3ptr43drop_in_place_LT_rg__haystack__Haystack_GT_17h5f0cb9c54e389b81E(&local_3a8);
      goto LAB_0035b7e3;
    }
LAB_0035b711:
    uVar6 = 0;
  }
                    /* try { // try from 0035b7e8 to 0035b7f4 has its CatchHandler @ 0035b966 */
  _ZN4core3ptr118drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT_17h7c09de5d3363bbc9E
            (uVar3,local_438);
  param_1[1] = uVar6;
  *param_1 = 0;
LAB_0035b7fd:
  _ZN4core3ptr89drop_in_place_LT_grep_printer__path__PathPrinter_LT_grep_cli__wtr__StandardStream_GT__GT_17hf111f960c5523e39E
            (local_2d0);
  return;
}