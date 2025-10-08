void _ZN3bat5pager9get_pager17hd377d976785f18eeE
               (undefined8 *param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  byte local_a0 [16];
  char *local_90;
  undefined8 local_88;
  byte local_80 [16];
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  _ZN3std3env3var17h86a744ab3a10895aE(local_a0,&DAT_002a2c22,9);
                    /* try { // try from 0053d7ee to 0053d803 has its CatchHandler @ 0053d9ed */
  _ZN3std3env3var17h86a744ab3a10895aE(local_80,&DAT_002a2c2b,5);
  bVar2 = false;
  uVar5 = 0;
  if (param_2 == (char *)0x0) {
    if ((local_a0[0] & 1) == 0) {
      uVar5 = 1;
      param_3 = local_88;
      param_2 = local_90;
    }
    else {
      if ((local_80[0] & 1) == 0) {
        uVar5 = 2;
        bVar2 = true;
        param_3 = local_68;
        param_2 = local_70;
        goto LAB_0053d856;
      }
      uVar5 = 3;
      param_3 = 4;
      param_2 = "less";
    }
    bVar2 = false;
  }
LAB_0053d856:
                    /* try { // try from 0053d856 to 0053d869 has its CatchHandler @ 0053d9ce */
  (*(code *)PTR__ZN11shell_words5split17h6b79ba6635eb31dfE_00807760)(&local_60,param_2,param_3);
  lVar3 = local_50;
  local_c8 = local_50;
  local_d8 = local_60;
  uStack_d4 = uStack_5c;
  uStack_d0 = uStack_58;
  uStack_cc = uStack_54;
  if (local_50 == 0) {
    *param_1 = 0x8000000000000000;
  }
  else {
    lVar1 = CONCAT44(uStack_54,uStack_58);
                    /* try { // try from 0053d8bb to 0053d8bf has its CatchHandler @ 0053d9bf */
    bVar4 = _ZN3bat5pager9PagerKind8from_bin17h088ae57711f0ac1eE
                      (*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
    if (((bVar2) && (bVar4 < 4)) && (bVar4 != 1)) {
      local_b8 = 0;
      local_b0 = 8;
      local_a8 = 0;
                    /* try { // try from 0053d8ee to 0053d91b has its CatchHandler @ 0053d9b0 */
      _ZN3bat5pager5Pager3new17h0869a180ded80220E(&local_60,"less",4,8,0,1,2);
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h2f78fa9eb600a3a5E
                (&local_b8);
    }
    else {
                    /* try { // try from 0053d937 to 0053d94d has its CatchHandler @ 0053d9bf */
      _ZN3bat5pager5Pager3new17h0869a180ded80220E
                (&local_60,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),lVar1 + 0x18,
                 lVar3 + -1,bVar4,uVar5);
    }
    param_1[6] = local_30;
    param_1[4] = local_40;
    param_1[5] = uStack_38;
    param_1[2] = local_50;
    param_1[3] = uStack_48;
    *(undefined4 *)param_1 = local_60;
    *(undefined4 *)((long)param_1 + 4) = uStack_5c;
    *(undefined4 *)(param_1 + 1) = uStack_58;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_54;
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h2f78fa9eb600a3a5E
            (&local_d8);
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h1489211aaee639b9E
            (local_80);
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h1489211aaee639b9E
            (local_a0);
  return;
}