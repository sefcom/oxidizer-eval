undefined8 * __rustcall
uu_sort::tmp_dir::TmpDirWrapper::new(undefined8 *param_1,undefined8 *param_2)

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
                    /* try { // try from 002430fd to 00243101 has its CatchHandler @ 00243139 */
  uVar4 = _<alloc::sync::Arc<T>as_core::default::Default>::default();
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