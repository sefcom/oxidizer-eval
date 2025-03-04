undefined8 *
_ZN7uu_sort7tmp_dir13TmpDirWrapper3new17h82cb44d92092fe9eE(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined7 uStack_f;
  
  uVar1 = param_2[2];
  uVar2 = *param_2;
  uVar3 = param_2[1];
                    /* try { // try from 002486cd to 002486d1 has its CatchHandler @ 00248709 */
  uVar4 = _ZN68__LT_alloc__sync__Arc_LT_T_GT__u20_as_u20_core__default__Default_GT_7default17h86a82de66e4be7bbE
                    ();
  param_1[5] = CONCAT71(uStack_f,2);
  param_1[3] = local_20;
  param_1[4] = uStack_18;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  param_1[7] = 0;
  param_1[6] = uVar4;
  return param_1;
}