bool _ZN7uu_uniq29should_extract_obs_skip_chars17haefcf42314616054E
               (ulong param_1,long param_2,byte param_3,byte param_4)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  ulong extraout_RDX;
  undefined auVar4 [16];
  undefined auVar5 [12];
  ulong local_30;
  long local_28;
  
  local_30 = local_30 & 0xffffffff00000000;
  auVar4 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2b,&local_30);
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h164e9dfb27ee38d7E
                    (param_1,param_2,auVar4._0_8_,auVar4._8_8_);
  if ((cVar1 != '\0') &&
     (bVar2 = (*(code *)PTR__ZN6uucore4mods5posix13posix_version17hbd100c054fc97897E_001fc538)(),
     ((~bVar2 | param_3 | 0x30a29 < extraout_RDX | param_4) & 1) == 0)) {
    local_28 = param_2 + param_1;
    local_30 = param_1;
    lVar3 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_10advance_by17h79c51f2353e76d38E
                      (&local_30,1);
    if (lVar3 == 0) {
      auVar5 = _ZN4core3str11validations15next_code_point17h563de53b3cb3d652E(&local_30);
      if ((auVar5 & (undefined  [12])0x1) != (undefined  [12])0x0) {
        return auVar5._8_4_ - 0x30U < 10;
      }
    }
  }
  return false;
}