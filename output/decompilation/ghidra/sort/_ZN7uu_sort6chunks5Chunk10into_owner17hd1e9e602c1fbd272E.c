void _ZN7uu_sort6chunks5Chunk10into_owner17hd1e9e602c1fbd272E
               (undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  _ZN4core3ptr51drop_in_place_LT_uu_sort__chunks__ChunkContents_GT_17h5f07f7f536d540faE(param_2 + 6)
  ;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  (*(code *)PTR__RNvCsgYTF1aGAkck_7___rustc14___rust_dealloc_00296c78)(param_2,0x90,8);
  return;
}