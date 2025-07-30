undefined4 *
_ZN7flealib13fileencrypter13FileEncrypter3new17h1bba59f4d3416534E(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long local_48 [7];
  
  puVar1 = *(undefined4 **)(param_2 + 8);
  local_48[0] = *(long *)(param_2 + 0x10);
  if (local_48[0] == 0x20) {
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    uVar7 = puVar1[5];
    uVar8 = puVar1[6];
    uVar9 = puVar1[7];
    param_1[4] = puVar1[4];
    param_1[5] = uVar7;
    param_1[6] = uVar8;
    param_1[7] = uVar9;
    *param_1 = uVar3;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(param_2);
    return param_1;
  }
  local_48[1] = 0;
                    /* try { // try from 0048a5b9 to 0048a5d6 has its CatchHandler @ 0048a5d9 */
  (*(code *)PTR__ZN4core9panicking13assert_failed17h7c645b2ace17315cE_00826f08)
            (0,local_48," ",local_48 + 1,&PTR_s__root__cargo_registry_src_index__00809d40);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}