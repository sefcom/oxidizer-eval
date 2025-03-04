undefined  [16]
_ZN8uu_shred11BytesWriter14bytes_for_pass17h0df75ebf5bedda4aE(char *param_1,long param_2)

{
  undefined auVar1 [16];
  
  if (*param_1 == '\0') {
    auVar1 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17h459bcf1159c78004E
                       (param_2,param_1 + 0x150);
    _ZN4rand3rng3Rng4fill17hd8f979ebf6c2571aE(param_1 + 0x10,auVar1._0_8_);
  }
  else {
    auVar1 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hac13306e42eb63ddE
                       (*(long *)(param_1 + 0x10008),*(long *)(param_1 + 0x10008) + param_2,
                        param_1 + 1);
    *(ulong *)(param_1 + 0x10008) = (ulong)(param_2 + *(long *)(param_1 + 0x10008)) % 3;
  }
  return auVar1;
}