char _ZN22linera_indexer_plugins10operations1_12__FieldIdent9from_name17h048bcf99d5f754dfE
               (long *param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  
  lVar1 = param_1[1];
  lVar4 = *param_1 + 0x10;
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h83dd70fd07828c4aE
                    (lVar4,lVar1,"operation",9);
  if (cVar2 == '\0') {
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h83dd70fd07828c4aE
                      (lVar4,lVar1,"operations",10);
    cVar2 = '\x01';
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h83dd70fd07828c4aE
                        (lVar4,lVar1,"count",5);
      cVar2 = '\x02';
      if (cVar3 == '\0') {
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h83dd70fd07828c4aE
                          (lVar4,lVar1,&DAT_0031bf9c,4);
        return '\x04' - cVar2;
      }
    }
  }
  else {
    cVar2 = '\0';
  }
  return cVar2;
}