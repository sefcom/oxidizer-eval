undefined8
_ZN8uu_touch27is_first_filename_timestamp17h32f3ea922c596898E
          (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long *param_6,ulong param_7)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined uVar4;
  undefined8 uVar5;
  byte local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  
  if ((param_1 == 0 && param_4 == 0) && (1 < param_7 && param_2 == 0)) {
    _ZN3std3env3var17h044ec154f26c3ce2E(local_30);
    if (((local_30[0] & 1) == 0) &&
       (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h98d8c3acd16a8302E
                          (local_20,local_18,"199209",6), cVar3 != '\0')) {
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h75a6963eea5b2c85E
                (local_30);
      lVar1 = *(long *)(*param_6 + 8);
      lVar2 = *(long *)(*param_6 + 0x10);
      cVar3 = _ZN8uu_touch10all_digits17he6053340128e8f49E(lVar1,lVar2);
      if (cVar3 == '\0') {
        return 0;
      }
      if (lVar2 != 8) {
        if (lVar2 != 10) {
          return 0;
        }
        uVar4 = _ZN8uu_touch8get_year17h9b7752d6ea8c40bdE
                          (*(undefined *)(lVar1 + 8),*(undefined *)(lVar1 + 9));
        uVar5 = _ZN4core3ops5range11RangeBounds8contains17h38d3f4e4f9e54773E(uVar4);
        return uVar5;
      }
      return 1;
    }
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h75a6963eea5b2c85E
              (local_30);
  }
  return 0;
}