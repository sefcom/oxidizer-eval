undefined  [16]
_ZN8uu_shred11BytesWriter14bytes_for_pass17hdca822ed44bdc744E(char *param_1,long param_2)

{
  undefined auVar1 [16];
  
  if (*param_1 == '\x01') {
    auVar1 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h4ec44b3a476f1d59E
                       (*(long *)(param_1 + 0x10008),*(long *)(param_1 + 0x10008) + param_2,
                        param_1 + 1,0x10002,&PTR_s_src_uu_shred_src_shred_rs_001f9f80);
    *(ulong *)(param_1 + 0x10008) = (ulong)(param_2 + *(long *)(param_1 + 0x10008)) % 3;
    return auVar1;
  }
  auVar1 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17h6793353ba917b638E
                     (param_2,param_1 + 0x150);
  _ZN74__LT_rand_core__block__BlockRng_LT_R_GT__u20_as_u20_rand_core__RngCore_GT_10fill_bytes17hba1a3c41a57cb272E
            (param_1 + 0x10,auVar1._0_8_);
  return auVar1;
}