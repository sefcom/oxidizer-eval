void _ZN6uu_env13string_parser12StringParser22skip_until_char_or_end17h68bc5015a87f77faE
               (long param_1,undefined4 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined extraout_DL;
  long lVar3;
  undefined auVar4 [16];
  undefined local_1d;
  undefined4 local_1c;
  long local_18;
  long local_10;
  
  local_1c = param_2;
  uVar2 = _ZN6uu_env14native_int_str27get_single_native_int_value17h9b0956bba8ba8cc0E(&local_1c);
  if ((uVar2 & 1) != 0) {
    local_18 = *(long *)(param_1 + 0x10);
    local_10 = *(long *)(param_1 + 0x18) + local_18;
    local_1d = extraout_DL;
    auVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h31ecdbb883917c1bE
                       (&local_18,&local_1d);
    if (auVar4._0_8_ == 1) {
      lVar3 = auVar4._8_8_ + *(long *)(param_1 + 0x20);
    }
    else {
      lVar3 = *(long *)(param_1 + 8);
    }
    _ZN6uu_env13string_parser12StringParser11set_pointer17h1907de3fd6e11167E(param_1,lVar3);
    return;
  }
  _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
            (&PTR_s_src_uu_env_src_string_parser_rs_00248ed8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}