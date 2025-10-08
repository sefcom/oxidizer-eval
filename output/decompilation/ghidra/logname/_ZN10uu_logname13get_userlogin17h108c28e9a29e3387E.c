undefined8 * _ZN10uu_logname13get_userlogin17h108c28e9a29e3387E(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  lVar1 = (*(code *)PTR_getlogin_001dbb68)();
  if (lVar1 == 0) {
    *param_1 = 0x8000000000000000;
  }
  else {
    uVar2 = (*(code *)PTR_strlen_001dbb70)(lVar1);
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_001dbb78)
              (&local_40,lVar1,uVar2);
                    /* try { // try from 0014ebac to 0014ebb8 has its CatchHandler @ 0014ebf1 */
    _ZN77__LT_alloc__borrow__Cow_LT_str_GT__u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hf7c0e7c1e655e4a4E
              (&local_28,local_38,local_30);
    param_1[2] = local_18;
    *(undefined4 *)param_1 = local_28;
    *(undefined4 *)((long)param_1 + 4) = uStack_24;
    *(undefined4 *)(param_1 + 1) = uStack_20;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_1c;
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h67e132bcf0f8ee66E
              (local_40,local_38);
  }
  return param_1;
}