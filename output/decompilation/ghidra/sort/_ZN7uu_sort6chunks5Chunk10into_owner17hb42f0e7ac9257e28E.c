void _ZN7uu_sort6chunks5Chunk10into_owner17hb42f0e7ac9257e28E
               (undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  _ZN4core3ptr51drop_in_place_LT_uu_sort__chunks__ChunkContents_GT_17hac7bebb9584b9cb8E(param_2 + 6)
  ;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  __rust_dealloc(param_2,0x78,8);
  return;
}