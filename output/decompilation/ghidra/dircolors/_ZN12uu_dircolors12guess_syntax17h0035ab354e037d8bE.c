ulong _ZN12uu_dircolors12guess_syntax17h0035ab354e037d8bE(void)

{
  char cVar1;
  long lVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  undefined auVar4 [16];
  long local_30 [2];
  undefined8 local_20;
  long local_18;
  
  _ZN3std3env3var17hf348904178e4c0b9E(local_30,&DAT_001232b9,5);
  uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),3);
  if ((local_30[0] != 0) || (local_18 == 0)) goto LAB_001bba67;
                    /* try { // try from 001bba8a to 001bbacc has its CatchHandler @ 001bbad9 */
  auVar4 = _ZN3std4path4Path9file_name17h79ecbb7850a9c7f3E(local_20);
  lVar2 = auVar4._0_8_;
  if (lVar2 == 0) {
LAB_001bbad5:
    uVar3 = 0;
  }
  else {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4d9a6183eb8da898E
                      (lVar2,auVar4._8_8_,&DAT_001232be,3);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4d9a6183eb8da898E
                        (lVar2,auVar4._8_8_,&DAT_00116d78,4);
      if (cVar1 == '\0') goto LAB_001bbad5;
    }
    uVar3 = CONCAT71(auVar4._1_7_,1);
  }
LAB_001bba67:
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17hc131f7e15152f287E
            (local_30);
  return uVar3 & 0xffffffff;
}