undefined8 *
_ZN7uu_tail6follow5files12FileHandling4from17h5724fde3926cc316E(undefined8 *param_1,long param_2)

{
  undefined uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auStack_38 [24];
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  _ZN3std6thread5local17LocalKey_LT_T_GT_8try_with17h177d26873406b9a9E
            (auStack_38,_ZN4core3ops8function6FnOnce9call_once17h2aa5214872dea2faE);
  auVar3 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hd618facf830007c4E(auStack_38);
  _ZN9hashbrown3map24HashMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17h6cfb6f035fd322ccE
            (param_1 + 3,uVar2,auVar3._0_8_,auVar3._8_8_);
  uVar1 = *(undefined *)(param_2 + 0x4a);
  *param_1 = 0x8000000000000000;
  *(undefined *)(param_1 + 9) = uVar1;
  *(undefined *)((long)param_1 + 0x49) = 0;
  return param_1;
}