void _ZN5uu_cp7copydir15path_has_prefix17h6e510270f6f80f62E
               (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined uVar3;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  _ZN6uucore8features2fs12canonicalize17h2a46952db6a00ca6E(&local_70,param_2,param_3,0,2);
  uVar2 = local_60;
  uVar1 = local_68;
  local_58 = local_70;
  local_50 = local_68;
  local_48 = local_60;
                    /* try { // try from 0019adda to 0019ae37 has its CatchHandler @ 0019ae56 */
  _ZN6uucore8features2fs12canonicalize17h2a46952db6a00ca6E(&local_70,param_4,param_5,0,2);
  if (local_70 == -0x8000000000000000) {
    *(undefined8 *)(param_1 + 8) = local_68;
    *param_1 = 1;
  }
  else {
    local_40 = local_70;
    local_38 = local_68;
    local_30 = local_60;
    uVar3 = _ZN3std4path4Path11starts_with17h99d1d97e0962843cE(uVar1,uVar2,&local_40);
    param_1[1] = uVar3;
    *param_1 = 0;
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_58);
  return;
}