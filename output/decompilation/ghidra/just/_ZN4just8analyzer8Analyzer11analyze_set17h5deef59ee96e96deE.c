void _ZN4just8analyzer8Analyzer11analyze_set17h5deef59ee96e96deE
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 local_88;
  undefined local_80 [16];
  undefined8 local_70;
  
  auVar2 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_4 + 0x50);
  lVar1 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17hcd3ea63b15358f58E
                    (param_2,param_3,auVar2._0_8_,auVar2._8_8_);
  if (lVar1 == 0) {
    *(undefined *)(param_1 + 0x48) = 0x25;
  }
  else {
    local_80 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(lVar1 + 0x50)
    ;
    local_70 = *(undefined8 *)(lVar1 + 0x80);
    local_88 = 0x800000000000001d;
    _ZN4just5token5Token5error17h986494da066a4455E(param_1,param_4 + 0x50,&local_88);
  }
  return;
}