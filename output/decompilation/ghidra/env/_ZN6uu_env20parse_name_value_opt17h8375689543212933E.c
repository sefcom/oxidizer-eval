void _ZN6uu_env20parse_name_value_opt17h8375689543212933E
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  local_a0 = 0x8000000000000000;
                    /* try { // try from 001cc1a5 to 001cc1bb has its CatchHandler @ 001cc24d */
  local_98 = param_3;
  local_90 = param_4;
  _ZN6uu_env14native_int_str9NativeStr10split_once17hcbed3488f59e21a4E
            (&local_88,&local_a0,&DAT_00117620);
  if (local_88 == -0x7fffffffffffffff) {
                    /* try { // try from 001cc1c6 to 001cc1d3 has its CatchHandler @ 001cc24b */
    lVar1 = _ZN6uu_env17parse_program_opt17h5dc288b3b7b61775E(param_2,param_3,param_4);
    if (lVar1 != 0) {
      param_1[1] = (long)&
                         PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h3b457176c01c1195E_00248840
      ;
      goto LAB_001cc22b;
    }
    *(undefined *)(param_1 + 1) = 1;
  }
  else {
    local_48 = local_78;
    local_58 = local_88;
    uStack_50 = uStack_80;
    local_40 = local_70;
    uStack_3c = uStack_6c;
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    local_30 = local_60;
                    /* try { // try from 001cc212 to 001cc21e has its CatchHandler @ 001cc249 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd0be2e25e316a3f1E(param_2 + 0x30,&local_58);
    *(undefined *)(param_1 + 1) = 0;
  }
  lVar1 = 0;
LAB_001cc22b:
  *param_1 = lVar1;
  _ZN4core3ptr54drop_in_place_LT_uu_env__native_int_str__NativeStr_GT_17hef710a318dedb98dE
            (&local_a0);
  return;
}