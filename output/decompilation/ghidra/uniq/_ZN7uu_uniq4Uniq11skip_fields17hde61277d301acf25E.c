void _ZN7uu_uniq4Uniq11skip_fields17hde61277d301acf25E
               (undefined8 *param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  char cVar1;
  ulong uVar2;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  if (param_2 == 0) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4b4c1285fbc3f360E
              (param_1,param_4,param_5);
    return;
  }
  local_70 = param_5 + param_4;
  local_78 = param_4;
  if (param_3 != 0) {
    uVar2 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                      (0);
    cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3all17ha47f57631c24eb87E
                      (&local_78);
    if (cVar1 != '\0') {
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
      return;
    }
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hf69df60c24087007E
              (&local_48,&local_78,0);
    local_58 = local_38;
    local_68 = local_48;
    uStack_64 = uStack_44;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    if (local_38 == 0) {
LAB_001bcdf0:
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
      goto LAB_001bce07;
    }
    local_78 = CONCAT44(uStack_3c,uStack_40);
    local_70 = local_38 + local_78;
    if (uVar2 < param_3) {
      do {
        local_68 = local_48;
        uStack_64 = uStack_44;
        uStack_60 = uStack_40;
        uStack_5c = uStack_3c;
        local_58 = local_38;
        uVar2 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                          (uVar2);
        cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3all17ha47f57631c24eb87E
                          (&local_78);
        if (cVar1 != '\0') goto LAB_001bcdf0;
                    /* try { // try from 001bcd97 to 001bcda3 has its CatchHandler @ 001bce43 */
        _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hf69df60c24087007E
                  (&local_48,&local_78,0);
                    /* try { // try from 001bcda4 to 001bcdab has its CatchHandler @ 001bce2a */
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0ecdab8b58963e2cE(&local_68);
        local_58 = local_38;
        local_68 = local_48;
        uStack_64 = uStack_44;
        uStack_60 = uStack_40;
        uStack_5c = uStack_3c;
        if (local_38 == 0) goto LAB_001bcdf0;
        local_78 = CONCAT44(uStack_3c,uStack_40);
        local_70 = local_38 + local_78;
      } while (uVar2 < param_3);
    }
  }
                    /* try { // try from 001bcddb to 001bcde8 has its CatchHandler @ 001bce20 */
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hd1aa47cd5a9c156dE
            (param_1,local_78,local_70);
  if (param_3 == 0) {
    return;
  }
LAB_001bce07:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0ecdab8b58963e2cE(&local_68);
  return;
}