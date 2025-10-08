long _ZN11uu_truncate28truncate_reference_file_only17h81d650944660fde8E
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined param_5)

{
  long lVar1;
  long lVar2;
  int local_d8 [2];
  undefined8 local_d0;
  undefined8 local_88;
  
  _ZN3std2fs8metadata17h460bc532d18d3302E(local_d8,param_1,param_2);
  if (local_d8[0] == 2) {
    lVar1 = _ZN11uu_truncate27truncate_reference_and_size28__u7b__u7b_closure_u7d__u7d_17h6c1eb193d24fc6abE
                      (param_1,param_2,local_d0);
  }
  else if (param_4 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    do {
      lVar2 = _ZN11uu_truncate13file_truncate17ha430ef778d6571e6E
                        (*(undefined8 *)(param_3 + 8 + lVar1),
                         *(undefined8 *)(param_3 + 0x10 + lVar1),param_5,local_88);
      if (lVar2 != 0) {
        return lVar2;
      }
      lVar1 = lVar1 + 0x18;
    } while (param_4 * 0x18 != lVar1);
    lVar1 = 0;
  }
  return lVar1;
}