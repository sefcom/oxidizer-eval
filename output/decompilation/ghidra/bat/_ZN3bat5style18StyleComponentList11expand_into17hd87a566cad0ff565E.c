void _ZN3bat5style18StyleComponentList11expand_into17hd87a566cad0ff565E
               (long param_1,undefined8 param_2,undefined param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  
  puVar3 = PTR__ZN3bat5style14StyleComponent10components17h6c8afe9a5a433675E_008075d8;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10) * 2;
    lVar5 = 0;
    do {
      while( true ) {
        auVar6 = (*(code *)puVar3)(*(undefined *)(lVar1 + 1 + lVar5),param_3);
        lVar4 = auVar6._0_8_;
        if (*(byte *)(lVar1 + lVar5) < 2) break;
        _ZN9hashbrown3set24HashSet_LT_T_C_S_C_A_GT_6retain17h7bbc9710847830e6E(param_2,lVar4);
        lVar5 = lVar5 + 2;
        if (lVar2 == lVar5) {
          return;
        }
      }
      _ZN105__LT_hashbrown__set__HashSet_LT_T_C_S_C_A_GT__u20_as_u20_core__iter__traits__collect__Extend_LT_T_GT__GT_6extend17h03e28ec7a347abedE
                (param_2,lVar4,lVar4 + auVar6._8_8_);
      lVar5 = lVar5 + 2;
    } while (lVar2 != lVar5);
  }
  return;
}