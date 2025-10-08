undefined _ZN6uu_env13string_parser12StringParser22skip_until_char_or_end17hf050962e819e98deE
                    (long param_1,undefined8 param_2)

{
  undefined uVar1;
  ulong uVar2;
  undefined extraout_DL;
  long lVar3;
  char cVar4;
  undefined **ppuVar5;
  undefined auVar6 [16];
  undefined local_1d;
  undefined4 local_1c;
  long local_18;
  long local_10;
  
  local_1c = (undefined4)param_2;
  uVar2 = (*(code *)
            PTR__ZN6uu_env14native_int_str27get_single_native_int_value17h3916294b36a5dcb6E_002192c8
          )(&local_1c);
  cVar4 = (char)param_2;
  if ((uVar2 & 1) != 0) {
    local_18 = *(long *)(param_1 + 0x10);
    local_10 = *(long *)(param_1 + 0x18) + local_18;
    local_1d = extraout_DL;
    auVar6 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h63e9c5b79db2e425E
                       (&local_18,&local_1d);
    if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      lVar3 = *(long *)(param_1 + 8);
    }
    else {
      lVar3 = auVar6._8_8_ + *(long *)(param_1 + 0x20);
    }
    uVar1 = (*(code *)
              PTR__ZN6uu_env13string_parser12StringParser11set_pointer17h0708f02e2329cb25E_00219358)
                      (param_1,lVar3);
    return uVar1;
  }
  ppuVar5 = &PTR_DAT_00210708;
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_002194b0)();
  return cVar4 == *(char *)ppuVar5;
}