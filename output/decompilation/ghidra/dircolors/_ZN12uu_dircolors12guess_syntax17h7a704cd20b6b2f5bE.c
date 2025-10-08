ulong _ZN12uu_dircolors12guess_syntax17h7a704cd20b6b2f5bE(void)

{
  char cVar1;
  long lVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  undefined auVar4 [16];
  byte local_30 [16];
  undefined8 local_20;
  long local_18;
  
  _ZN3std3env3var17h75e6160dc4112e51E(local_30);
  uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),3);
  if (((local_30[0] & 1) != 0) || (local_18 == 0)) goto LAB_00167f96;
                    /* try { // try from 00167f49 to 00167f4e has its CatchHandler @ 00167faa */
  auVar4 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_001fe050)(local_20);
  lVar2 = auVar4._0_8_;
  if (lVar2 == 0) {
LAB_00167f94:
    uVar3 = 0;
  }
  else {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfc62722f7a17ae0aE
                      (lVar2,auVar4._8_8_,&DAT_0011c0a1,3);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfc62722f7a17ae0aE
                        (lVar2,auVar4._8_8_,&DAT_0011a460,4);
      if (cVar1 == '\0') goto LAB_00167f94;
    }
    uVar3 = CONCAT71(auVar4._1_7_,1);
  }
LAB_00167f96:
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h43618cece7496e48E
            (local_30);
  return uVar3 & 0xffffffff;
}