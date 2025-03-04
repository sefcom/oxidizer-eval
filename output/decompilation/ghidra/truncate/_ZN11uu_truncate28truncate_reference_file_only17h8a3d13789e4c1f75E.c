long _ZN11uu_truncate28truncate_reference_file_only17h8a3d13789e4c1f75E
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined param_5)

{
  long lVar1;
  long local_d8;
  long local_d0;
  undefined8 local_88;
  
  _ZN3std2fs8metadata17h6368ec5e748c38e4E(&local_d8,param_1,param_2);
  if ((int)local_d8 == 2) {
    lVar1 = _ZN11uu_truncate28truncate_reference_file_only28__u7b__u7b_closure_u7d__u7d_17h71e741134f9f8f00E
                      (param_1,param_2,local_d0);
  }
  else {
    local_d0 = param_3 + param_4 * 0x18;
    local_d8 = param_3;
    do {
      lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0f1a2111712b44afE
                        (&local_d8);
      if (lVar1 == 0) {
        return 0;
      }
      lVar1 = _ZN11uu_truncate13file_truncate17h8689dfa8e5b80143E
                        (*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),param_5,local_88);
    } while (lVar1 == 0);
  }
  return lVar1;
}