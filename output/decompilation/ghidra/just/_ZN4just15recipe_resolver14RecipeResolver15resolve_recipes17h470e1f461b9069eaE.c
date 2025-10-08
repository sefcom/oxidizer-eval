void _ZN4just15recipe_resolver14RecipeResolver15resolve_recipes17h470e1f461b9069eaE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 *local_430;
  undefined4 local_40c;
  undefined8 local_408 [3];
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  char local_3a8;
  undefined4 local_3a7;
  undefined3 uStack_3a3;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined local_308 [472];
  undefined local_130 [256];
  
  local_380 = 0;
  local_370 = 0;
  local_368 = *param_7;
  uStack_364 = param_7[1];
  uStack_360 = param_7[2];
  uStack_35c = param_7[3];
  local_358 = *(undefined8 *)(param_7 + 4);
  local_430 = param_1;
  local_40c = param_6;
  uVar2 = _uStack_3a3;
  local_3a0 = param_2;
  local_398 = param_3;
  local_390 = param_4;
  local_388 = param_5;
  while( true ) {
                    /* try { // try from 00386c90 to 00386c9f has its CatchHandler @ 00387247 */
    _uStack_3a3 = uVar2;
    uVar1 = local_3a0;
    uVar2 = _uStack_3a3;
    local_3a0 = uVar1;
    _ZN4just5table14Table_LT_V_GT_3pop17hec14cdf4ac70782bE(local_308,&local_368);
    uVar2 = _uStack_3a3;
    (*(code *)PTR_memcpy_00565e28)(local_130,local_308,0x100);
    _uStack_3a3 = uVar2;
    uVar2 = _uStack_3a3;
    local_448 = 0;
    uStack_440 = 8;
    local_438 = 0;
                    /* try { // try from 00386cd7 to 00386d09 has its CatchHandler @ 0038725f */
    _ZN4just15recipe_resolver14RecipeResolver14resolve_recipe17h2d75c63668874e04E
              (&local_3f0,&local_3a0,&local_448,local_130);
    _uStack_3a3 = uVar2;
    uVar2 = _uStack_3a3;
    if (local_3a8 != '%') break;
    local_408[0] = local_3f0;
    _ZN4core3ptr65drop_in_place_LT_alloc__sync__Arc_LT_just__recipe__Recipe_GT__GT_17h9bce064f28a479beE
              (local_408);
    _uStack_3a3 = uVar2;
    uVar2 = _uStack_3a3;
    _ZN4core3ptr141drop_in_place_LT_alloc__vec__Vec_LT_similar__algorithms__utils__UniqueItem_LT_similar__algorithms__utils__OffsetLookup_LT_u32_GT__GT__GT__GT_17h4d36ad61a40c2c34E
              (local_448,uStack_440);
    _uStack_3a3 = uVar2;
    uVar2 = _uStack_3a3;
  }
  *(undefined4 *)(local_430 + 7) = local_3b8;
  *(undefined4 *)((long)local_430 + 0x3c) = uStack_3b4;
  *(undefined4 *)(local_430 + 8) = uStack_3b0;
  *(undefined4 *)((long)local_430 + 0x44) = uStack_3ac;
  *(undefined4 *)(local_430 + 5) = local_3c8;
  *(undefined4 *)((long)local_430 + 0x2c) = uStack_3c4;
  *(undefined4 *)(local_430 + 6) = uStack_3c0;
  *(undefined4 *)((long)local_430 + 0x34) = uStack_3bc;
  *(undefined4 *)(local_430 + 3) = local_3d8;
  *(undefined4 *)((long)local_430 + 0x1c) = uStack_3d4;
  *(undefined4 *)(local_430 + 4) = uStack_3d0;
  *(undefined4 *)((long)local_430 + 0x24) = uStack_3cc;
  *(undefined4 *)(local_430 + 1) = local_3e8;
  *(undefined4 *)((long)local_430 + 0xc) = uStack_3e4;
  *(undefined4 *)(local_430 + 2) = uStack_3e0;
  *(undefined4 *)((long)local_430 + 0x14) = uStack_3dc;
  uStack_3a3 = (undefined3)uVar2;
  *(undefined4 *)((long)local_430 + 0x49) = local_3a7;
  *(uint *)((long)local_430 + 0x4c) = CONCAT31(uStack_3a3,local_3a7._3_1_);
  *local_430 = local_3f0;
  *(char *)(local_430 + 9) = local_3a8;
  _ZN4core3ptr141drop_in_place_LT_alloc__vec__Vec_LT_similar__algorithms__utils__UniqueItem_LT_similar__algorithms__utils__OffsetLookup_LT_u32_GT__GT__GT__GT_17h4d36ad61a40c2c34E
            (local_448,uStack_440);
  _ZN4core3ptr58drop_in_place_LT_just__recipe_resolver__RecipeResolver_GT_17h5bca05341d6b75f4E
            (&local_3a0);
  return;
}