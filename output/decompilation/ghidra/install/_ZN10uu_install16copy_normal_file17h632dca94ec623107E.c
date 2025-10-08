undefined8
_ZN10uu_install16copy_normal_file17h632dca94ec623107E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  local_a8 = _ZN3std2fs4copy17hdf72ceb0cf08dc6aE();
  uVar1 = local_a8._8_8_;
  if ((local_a8 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h2f84af0ddcda00cdE
              (local_a8);
    uVar1 = 0;
  }
  else {
                    /* try { // try from 00168aa7 to 00168ab7 has its CatchHandler @ 00168b3a */
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38)
              (&local_98,param_1,param_2);
                    /* try { // try from 00168ab8 to 00168ac8 has its CatchHandler @ 00168b2b */
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38)
              (&local_80,param_3,param_4);
    local_48 = local_88;
    local_58 = local_98;
    uStack_50 = uStack_90;
    local_40 = local_80;
    uStack_3c = uStack_7c;
    uStack_38 = uStack_78;
    uStack_34 = uStack_74;
    local_30 = local_70;
    local_68 = 8;
    local_60 = uVar1;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_68);
  }
  return uVar1;
}